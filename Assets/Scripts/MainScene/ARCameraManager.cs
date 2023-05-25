using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARCameraManager))]
public class CameraAnimationController : MonoBehaviour
{
    public Animator animator;

    private ARCameraManager arCameraManager;
    private Vector3 previousPosition;

    void Start()
    {
        arCameraManager = GetComponent<ARCameraManager>();
        previousPosition = arCameraManager.transform.position;
    }

    void Update()
    {
        if (arCameraManager.TryGetIntrinsics(out var intrinsics))
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
    }
}
