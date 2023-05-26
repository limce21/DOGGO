using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARPlaceOnPlane : MonoBehaviour
{
    public ARRaycastManager arRaycaster;
    public GameObject placeObject;

    GameObject spawnObject;

    public GameObject[] charPrefabs;


    void Start()
    {
        placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
    }

    void Update()
    {
        //PlaceObjectByTouch();
        UpdateCenterObject(); // 매 프레임마다 UpdateCenterObject 함수를 실행한다.
    }

    private void UpdateCenterObject() // 평면을 인식해서 강아지 객체를 보여줌
    {
        Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f)); // 카메라 스크린의 중간지점을 받아오는 함수

        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        arRaycaster.Raycast(screenCenter, hits, TrackableType.Planes); // Plane이라는 객체에 Ray가 닿으면 그 결과값을 받겠다. -> hits에 Ray를 쏜 결과물이 반환된다.

        if (hits.Count > 0) // 부딪힌 객체가 있으면 
        {
            Pose placementPose = hits[0].pose; // 가장 먼저 부딪힌 그 위치를 placementPose라는 곳에 저장한다.
            placeObject.SetActive(true); // 안 보이던 강아지 객체를 눈에 보이게 바꿔준다.
            placeObject.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation); // 눈에 보이게 바꿔준 후 position과 rotation을 알맞게 위치시킨다. 
        }
        else // 만약에 부딪히는 평면이 없다면 -> 인식되는 부분이 없다면
        {
            placeObject.SetActive(false); // 강아지 객체가 보이지 않는다.
        }
    }
}
 