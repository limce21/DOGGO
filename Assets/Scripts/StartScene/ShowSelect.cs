using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowSelect : MonoBehaviour
{
    public GameObject[] animalPrefabs;
    public GameObject animal;
    private GameObject selectImg; // selectImg를 가리키는 GameObject

    void Start()
    {
        animal = Instantiate(animalPrefabs[(int)DataManager.instance.currentAnimal]);
    }

    private void OnEnable()
    {
        if (selectImg != null)
        {
            // 기존에 생성된 selectImg가 있다면 삭제합니다.
            Destroy(selectImg);
        }

        // 현재 선택한 강아지 종류에 따라 selectImg를 생성합니다.
        switch (DataManager.instance.currentAnimal)
        {
            case Animals.Tiger:
                selectImg = Instantiate(animalPrefabs[(int)Animals.Tiger], new Vector3(0f, 0f, 0f), Quaternion.identity);
                break;
            case Animals.Cat:
                selectImg = Instantiate(animalPrefabs[(int)Animals.Cat], new Vector3(0f, 0f, 0f), Quaternion.identity);
                break;
            case Animals.Dog:
                selectImg = Instantiate(animalPrefabs[(int)Animals.Dog], new Vector3(0f, 0f, 0f), Quaternion.identity);
                break;
            default:
                break;
        }

        // selectImg의 부모를 현재 스크립트가 부착된 GameObject로 설정합니다.
        selectImg.transform.SetParent(transform, false);

        // selectImg의 위치를 (x: 0, y: 0)로 설정합니다.
        //selectImg.transform.position = new Vector3(0f, 0f, 0f);
    }
}
