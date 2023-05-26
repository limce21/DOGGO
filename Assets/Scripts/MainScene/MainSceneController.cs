using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainSceneController : MonoBehaviour
{
    public Text nameText;


    void Start()
    {
        nameText.text = DataManager.instance.dogName;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
