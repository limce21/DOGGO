using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public enum Dogs
{
    Husky, WelshCorgi, Retriever
}

public class DataManager : MonoBehaviour
{
    public static DataManager instance;
    public string selectedDogName;

    public Dogs? currentDog; // 현재 선택한 강아지 종류
    public string dogName;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else if (instance != null)
            return;

        DontDestroyOnLoad(gameObject);
    }
}