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
    public Button selectButton;
    public Button nextSceneButton;
    public Text nameText; // 이름을 표시할 텍스트(Text)

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
        // selectButton 버튼에 클릭 이벤트를 등록합니다.
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
        // SelectPanel을 비활성화합니다.
        selectPanel.SetActive(false);

        // CustomPanel을 활성화합니다.
        customPanel.SetActive(true);
    }


    public void OnNextButtonClick(){
        DataManager.instance.selectedDogName = nameText.text;
        Debug.Log(nameText.text);
    }


    public Character currentCharacter;
}
