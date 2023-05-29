using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainSceneController : MonoBehaviour
{
    public Text nameText;
    public Animator prefabAnimator;
    public Button walkButton;
    public Button callButton;
    public Button backButton;

    public GameObject[] charPrefabs;
    public ARPlaceOnPlane arPlaceOnPlane; // ARPlaceOnPlane 스크립트 참조 변수
    public DogTouchManager dogTouchManager; // DogTouchManager 스크립트 참조 변수

    public GameObject placeObject;
    public bool isWalking = false;

    void Start()
    {
        nameText.text = DataManager.instance.dogName;
        arPlaceOnPlane = FindObjectOfType<ARPlaceOnPlane>(); // ARPlaceOnPlane 스크립트 찾기
        dogTouchManager = FindObjectOfType<DogTouchManager>();
        placeObject = arPlaceOnPlane.placeObject; // placeObject 할당
        walkButton.onClick.AddListener(onWalkButtonClick);
        callButton.onClick.AddListener(onCallButtonClick);
        backButton.onClick.AddListener(onBackButtonClick);

        backButton.gameObject.SetActive(false); // backButton 비활성화
    }

    private void onWalkButtonClick()
    {
        Animator spawnObjectAnimator = placeObject.GetComponent<Animator>();
        spawnObjectAnimator.SetBool("walk", true);
        walkButton.gameObject.SetActive(false); // walkButton 비활성화
        callButton.gameObject.SetActive(false); // callButton 비활성화
        backButton.gameObject.SetActive(true); // backButton 활성화
        placeObject.transform.rotation = Quaternion.Euler(0f, 0f, 0f); // 반대로 회전
        isWalking = true;
    }

    private void onBackButtonClick()
    {
        Animator spawnObjectAnimator = placeObject.GetComponent<Animator>();
        spawnObjectAnimator.SetBool("walk", false);
        walkButton.gameObject.SetActive(true); // walkButton 활성화
        callButton.gameObject.SetActive(true); // callButton 활성화
        backButton.gameObject.SetActive(false); // backButton 비활성화
        placeObject.transform.rotation = Quaternion.Euler(0f, 180f, 0f); // 초기 회전 상태로 돌아감
        isWalking = false;
        dogTouchManager.isCall = false;
    }


    private void onCallButtonClick()
    {
        walkButton.gameObject.SetActive(false); // walkButton 비활성화
        callButton.gameObject.SetActive(false); // callButton 비활성화
        backButton.gameObject.SetActive(true); // backButton 활성화
        dogTouchManager.isCall = true;
    }


    void Update()
    {
        if (!placeObject)
        {
            placeObject = arPlaceOnPlane.placeObject; // placeObject 할당
        }
        if (isWalking)
        {
            // 사용자 앞에 고정된 위치 계산
            Vector3 fixedPosition = Camera.main.transform.position + Camera.main.transform.forward * 1.5f;
            placeObject.transform.position = new Vector3(fixedPosition.x, placeObject.transform.position.y, fixedPosition.z);
        }
    }
}
