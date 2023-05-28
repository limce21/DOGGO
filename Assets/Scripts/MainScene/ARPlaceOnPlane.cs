using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARPlaceOnPlane : MonoBehaviour
{
    public ARRaycastManager arRaycaster;
    public GameObject placeObject;
    public GameObject[] charPrefabs;

    void Start()
    {
        placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
    }

    void Update()
    {
        UpdateCenterObject();
    }

    private void UpdateCenterObject() // 평면을 인식해서 객체를 보여줌
    {
        Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f)); // 카메라 스크린의 중간지점을 받아오는 함수

        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        arRaycaster.Raycast(screenCenter, hits, TrackableType.Planes); // Plane이라는 객체에 Ray가 닿으면 그 결과값을 받겠다. -> hits에 Ray를 쏜 결과물이 반환된다.

        if (hits.Count > 0) // 부딪힌 객체가 있으면 
        {
            Pose placementPose = hits[0].pose; // 가장 먼저 부딪힌 그 위치를 placementPose라는 곳에 저장한다.
            placeObject.SetActive(true); // 안 보이던 객체를 눈에 보이게 바꿔준다.
            Vector3 position = placementPose.position;
            Quaternion rotation = placementPose.rotation * Quaternion.Euler(0f, 180f, 0f); // Y축으로 180도 회전시킨다.
            placeObject.transform.SetPositionAndRotation(position, rotation);
        }
        else // 만약에 부딪히는 평면이 없다면 -> 인식되는 부분이 없다면
        {
            if (placeObject.activeSelf) // placeObject가 활성화되어 있는 경우에만 위치를 고정한다.
            {
                placeObject.transform.SetPositionAndRotation(placeObject.transform.position, placeObject.transform.rotation);
            }
            else
            {
                placeObject.SetActive(false); // 객체가 보이지 않는다.
            }
        }
    }
}