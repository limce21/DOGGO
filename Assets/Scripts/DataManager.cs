using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public enum Animals
{
    Tiger, Cat, Dog
}

public class DataManager : MonoBehaviour
{
    public static DataManager instance;

    public Animals currentAnimal; // 현재 선택한 동물 종류
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