using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainSceneController : MonoBehaviour
{
    public Text nameText;
    public Animator prefabAnimator;
    public Button walkButton;
    public GameObject placeObject;
    public GameObject[] charPrefabs;


    void Start()
    {
        placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
        nameText.text = DataManager.instance.dogName;
        walkButton.onClick.AddListener(onWalkButtonClick);

    }

    private void onWalkButtonClick(){
        prefabAnimator.SetTrigger("Walk");
    }


    void Update()
    {
        
    } 
}
