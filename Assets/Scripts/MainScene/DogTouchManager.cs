using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogTouchManager : MonoBehaviour
{
    public GameObject heartPrefab;
    public float animationDuration = 1f;
    public float movementSpeed = 1f;
    public float movementRange = 0.1f;

    private Camera arCamera;

    void Start()
    {
        arCamera = Camera.main;
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = arCamera.ScreenPointToRay(touch.position);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    SpawnHeart(hit.point);
                }
            }
        }
    }

    void SpawnHeart(Vector3 position)
    {
        GameObject heart = Instantiate(heartPrefab, position, Quaternion.Euler(-90f, 0f, 0f));
        StartCoroutine(AnimateHeart(heart));
    }

    IEnumerator AnimateHeart(GameObject heart)
    {
        float elapsedTime = 0f;
        Vector3 initialPosition = heart.transform.position;

        while (elapsedTime < animationDuration)
        {
            float t = elapsedTime / animationDuration;

            // 애니메이션: 서서히 나타나기
            Color heartColor = heart.GetComponent<Renderer>().material.color;
            heartColor.a = Mathf.Lerp(0f, 1f, t);
            heart.GetComponent<Renderer>().material.color = heartColor;

            // 애니메이션: 좌우로 움직이기
            Vector3 newPosition = initialPosition + new Vector3(Mathf.Sin(t * movementSpeed) * movementRange, 0f, 0f);
            heart.transform.position = newPosition;

            // 애니메이션: 위로 상승하기
            heart.transform.Translate(Vector3.up * (movementSpeed * Time.deltaTime), Space.World);

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        Destroy(heart);
    }
}
