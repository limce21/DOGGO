using UnityEngine;
using System.Collections;

public class DogTouchManager : MonoBehaviour
{
    public GameObject heartPrefab; // 하트 프리팹
    public float pettingDistanceThreshold = 0.1f; // 쓰다듬기 거리 임계값
    public float heartDisplayDuration = 2f; // 하트 표시 시간
    public float heartFadeDuration = 1f; // 하트 희미해지는 시간
    public float heartRiseSpeed = 0.1f; // 하트 상승 속도
    public bool isCall = false;

    private GameObject heartObject; // 생성된 하트 객체
    private bool isPetting; // 쓰다듬기 동작 여부
    private float heartDisplayTimer; // 하트 표시 타이머

    private ARPlaceOnPlane arPlaceOnPlane; // ARPlaceOnPlane 스크립트 참조 변수

    private void Start()
    {
        arPlaceOnPlane = FindObjectOfType<ARPlaceOnPlane>(); // ARPlaceOnPlane 스크립트 찾기
    }

    private void Update()
    {
        if (isCall)
        {
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);

                if (touch.phase == TouchPhase.Began)
                {
                    Vector3 touchPosition = touch.position;
                    Ray ray = Camera.main.ScreenPointToRay(touchPosition);

                    RaycastHit hit;
                    if (Physics.Raycast(ray, out hit))
                    {
                        if (hit.collider.gameObject == arPlaceOnPlane.placeObject)
                        {
                            isPetting = true;
                            CreateHeartObject(hit.point + new Vector3(0f, 0.1f, 0f));
                            heartDisplayTimer = heartDisplayDuration;
                            Animator spawnObjectAnimator = arPlaceOnPlane.placeObject.GetComponent<Animator>();
                            spawnObjectAnimator.SetTrigger("spin");
                        }
                    }
                }
                else if (touch.phase == TouchPhase.Ended)
                {
                    isPetting = false;
                    DestroyHeartObjectDelayed(1f); // 1초 후에 하트를 삭제
                }
            }

            if (isPetting && heartDisplayTimer > 0)
            {
                heartDisplayTimer -= Time.deltaTime;

                if (heartDisplayTimer <= 0)
                {
                    isPetting = false;
                    DestroyHeartObjectDelayed(1f); // 1초 후에 하트를 삭제
                }
            }

            if (heartObject != null)
            {
                Vector3 heartPosition = heartObject.transform.position;
                heartPosition.y += heartRiseSpeed * Time.deltaTime;
                heartObject.transform.position = heartPosition;

                Color heartColor = heartObject.GetComponent<Renderer>().material.color;
                heartColor.a = 1f;
                heartObject.GetComponent<Renderer>().material.color = heartColor;
            }
        }
    }

    private void CreateHeartObject(Vector3 position)
    {
        if (heartObject == null)
        {
            heartObject = Instantiate(heartPrefab, position, Quaternion.Euler(-90f, 0f, 0f));
        }
    }

    private void DestroyHeartObjectDelayed(float delay)
    {
        if (heartObject != null)
        {
            StartCoroutine(DelayedDestroyHeartObject(delay));
        }
    }

    private IEnumerator DelayedDestroyHeartObject(float delay)
    {
        yield return new WaitForSeconds(delay);

        if (heartObject != null)
        {
            Destroy(heartObject);
            heartObject = null;
        }
    }
}
