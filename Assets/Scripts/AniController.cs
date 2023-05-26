using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AniController : MonoBehaviour
{
    public Animator anim;
    [SerializeField]
    private Button walkButton;
    [SerializeField]
    public Button spinButton;

    void Start()
    {
        anim = GetComponent<Animator>();
        walkButton.onClick.AddListener(OnWalkButtonClick);
        spinButton.onClick.AddListener(OnSpinButtonClick);
    }

    private void OnWalkButtonClick() {
        anim.SetTrigger("Walk");
    }

    private void OnSpinButtonClick() {
        anim.SetTrigger("Spin");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
