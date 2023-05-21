using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class ShowSelect : MonoBehaviour
{
    public GameObject[] dogPrefabs;
    public GameObject dog;
    public GameObject selectImg; // selectImg를 가리키는 GameObject

    void Start()
    {
        dog = Instantiate(dogPrefabs[(int)DataManager.instance.currentDog]);
        dog.transform.position = transform.position;
    }

    private void OnEnable()
    {
        // 현재 선택한 강아지 종류에 따라 selectImg를 생성합니다.
        switch (DataManager.instance.currentDog)
        {
            case Dogs.Husky:
                selectImg = Instantiate(dogPrefabs[(int)Dogs.Husky], transform.position, Quaternion.identity);
                break;
            case Dogs.WelshCorgi:
                selectImg = Instantiate(dogPrefabs[(int)Dogs.WelshCorgi], transform.position, Quaternion.identity);
                break;
            case Dogs.Retriever:
                selectImg = Instantiate(dogPrefabs[(int)Dogs.Retriever], transform.position, Quaternion.identity);
                break;
            default:
                break;
        }

        // selectImg의 부모를 현재 스크립트가 부착된 GameObject로 설정합니다.
        selectImg.transform.SetParent(transform, false);

        // selectImg의 위치를 (x: 0, y: 275)로 설정합니다.
        selectImg.transform.position = new Vector3(265.5f, 472f+250f, 0f);
    }
}