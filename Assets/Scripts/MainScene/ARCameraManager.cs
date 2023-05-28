using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARCameraManager))]
public class CameraAnimationController : MonoBehaviour
{
    public Animator animator;
    public MainSceneController mainSceneController; // MainSceneController 스크립트 참조 변수

    private ARCameraManager arCameraManager;
    private Vector3 previousPosition;

    private bool isWalking; // MainSceneController의 isWalking 상태를 저장하는 변수

    void Start()
    {
        arCameraManager = GetComponent<ARCameraManager>();
        previousPosition = arCameraManager.transform.position;
        mainSceneController = FindObjectOfType<MainSceneController>(); // MainSceneController 스크립트 찾기
    }

    void Update()
    {
        isWalking = mainSceneController.isWalking; // MainSceneController의 isWalking 상태 가져오기

        if (isWalking && arCameraManager.TryGetIntrinsics(out var intrinsics))
        {
            // 카메라 이동 속도 계산
            Vector3 currentPosition = arCameraManager.transform.position;
            float cameraSpeed = (currentPosition - previousPosition).magnitude / Time.deltaTime;
            previousPosition = currentPosition;

            // 애니메이션 속도 조정
            float animationSpeed = cameraSpeed * 0.1f; // 애니메이션 속도를 카메라 이동 속도에 비례하도록 조정

            // 애니메이션 속도 파라미터 설정
            animator.SetFloat("Speed", animationSpeed);
        }
        else
        {
            // isWalking이 false거나 카메라 이동 속도를 가져오지 못한 경우 애니메이션 속도를 0으로 설정
            animator.SetFloat("Speed", 0f);
        }
    }
}
