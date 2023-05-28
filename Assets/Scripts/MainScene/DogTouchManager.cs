using UnityEngine;

public class DogTouchManager : MonoBehaviour
{
    public GameObject heartPrefab; // 하트 프리팹
    public float pettingDistanceThreshold = 0.1f; // 쓰다듬기 거리 임계값

    private GameObject heartObject; // 생성된 하트 객체
    private bool isPetting; // 쓰다듬기 동작 여부

    private void Update()
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
                    if (hit.collider.gameObject == gameObject)
                    {
                        isPetting = true;
                        CreateHeartObject();
                    }
                }
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                isPetting = false;
                DestroyHeartObject();
            }
        }
    }

    private void CreateHeartObject()
    {
        if (heartObject == null)
        {
            heartObject = Instantiate(heartPrefab, transform.position, Quaternion.Euler(-90f, 0f, 0f));
        }
    }

    private void DestroyHeartObject()
    {
        if (heartObject != null)
        {
            Destroy(heartObject);
            heartObject = null;
        }
    }

    private void FixedUpdate()
    {
        if (isPetting)
        {
            Vector3 pettingPosition = transform.position + Vector3.up * 0.2f; // 쓰다듬기 위치

            if (heartObject != null)
            {
                heartObject.transform.position = Vector3.Lerp(heartObject.transform.position, pettingPosition, Time.fixedDeltaTime * 5f);
            }
        }
    }
}