using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CallObject : MonoBehaviour
{
    public Button callButton;
    public GameObject placeObject;
    public float moveSpeed = 1f;

    private bool isObjectMoving = false;
    private Vector3 targetPosition;
    private float initialDistance;

    void Start()
    {
        callButton.onClick.AddListener(OnClick);
    }

    void Update()
    {
        if (isObjectMoving)
        {
            // 물체를 targetPosition으로 이동시킴
            placeObject.transform.position = Vector3.MoveTowards(placeObject.transform.position, targetPosition, moveSpeed * Time.deltaTime);

            // 물체가 targetPosition에 도달했을 때 동작 정지
            if (Vector3.Distance(placeObject.transform.position, targetPosition) < 0.01f)
            {
                isObjectMoving = false;
            }
        }
    }

    void OnClick()
    {
        // 물체를 현재 카메라 위치로 가져오기 위해 이동 시킬 목표 위치 설정
        targetPosition = Camera.main.transform.position;

        // 물체와 카메라 사이의 초기 거리 측정
        initialDistance = Vector3.Distance(targetPosition, placeObject.transform.position);

        // 물체 이동 시작
        isObjectMoving = true;
    }
}
