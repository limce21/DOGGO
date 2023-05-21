using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowSelect : MonoBehaviour
{
    public GameObject[] dogPrefabs;
    public GameObject dog;

    void Start() 
    {
        dog = Instantiate(dogPrefabs[(int) DataManager.instance.currentDog]);
        dog.transform.position = transform.position;
    }
}
