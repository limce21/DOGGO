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
    public GameObject placeObject;
    public GameObject[] charPrefabs;

    void Start()
    {
        nameText.text = DataManager.instance.dogName;

        placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
        prefabAnimator = placeObject.GetComponent<Animator>();
        walkButton.onClick.AddListener(onWalkButtonClick);
        callButton.onClick.AddListener(onCallButtonClick);
        backButton.onClick.AddListener(onBackButtonClick);

        backButton.gameObject.SetActive(false); // backButton 비활성화
    }

    private void onWalkButtonClick()
    {
        prefabAnimator.SetBool("walk", true);
        walkButton.gameObject.SetActive(false); // walkButton 비활성화
        callButton.gameObject.SetActive(false); // callButton 비활성화
        backButton.gameObject.SetActive(true); // backButton 활성화
    }

    private void onCallButtonClick()
    {
        prefabAnimator.SetBool("spin", true);
        walkButton.gameObject.SetActive(false); // walkButton 비활성화
        callButton.gameObject.SetActive(false); // callButton 비활성화
        backButton.gameObject.SetActive(true); // backButton 활성화
    }

    private void onBackButtonClick()
    {
        prefabAnimator.SetBool("walk", false);
        prefabAnimator.SetBool("spin", false);
        walkButton.gameObject.SetActive(true); // walkButton 활성화
        callButton.gameObject.SetActive(true); // callButton 활성화
        backButton.gameObject.SetActive(false); // backButton 비활성화
    }

    void Update()
    {

    }
}