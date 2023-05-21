using UnityEngine;
using UnityEngine.UI;

public enum Character
{
    Husky, WelshCorgin, Retriever
}

public class StartSceneController : MonoBehaviour
{
    public GameObject introPanel;
    public GameObject selectPanel;
    public GameObject customPanel;
    public static StartSceneController instance;

    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != null) return;
        DontDestroyOnLoad(gameObject);
    }


    private void Start()
    {
        // StartBtn 버튼에 클릭 이벤트를 등록합니다.
        Button startButton = GameObject.Find("StartBtn").GetComponent<Button>();
        startButton.onClick.AddListener(OnStartButtonClick);
        Button selectButton = GameObject.Find("SelectBtn").GetComponent<Button>();
        selectButton.onClick.AddListener(OnSelectButtonClick);
    }

    private void OnStartButtonClick()
    {
        // IntroPanel을 비활성화합니다.
        introPanel.SetActive(false);

        // SelectPanel을 활성화합니다.
        selectPanel.SetActive(true);
    }
    private void OnSelectButtonClick()
    {
        // IntroPanel을 비활성화합니다.
        introPanel.SetActive(false);

        // SelectPanel을 활성화합니다.
        selectPanel.SetActive(true);
    }


    public Character currentCharacter;
}
