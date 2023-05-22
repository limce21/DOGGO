using UnityEngine;
using UnityEngine.SceneManagement;
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
    public Button goNextSceneButton;
    public Button cancelButton;
    public Text dogName;

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

        // goNextSceneButton 버튼에 클릭 이벤트를 등록합니다.
        goNextSceneButton.onClick.AddListener(OnGoNextButtonClick);

        // cancelButton 버튼에 클릭 이벤트를 등록합니다.
        cancelButton.onClick.AddListener(OnCancelButtonClick);
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

    private void OnGoNextButtonClick()
    {
        DataManager.instance.dogName = dogName.text;

        // MainScene으로 전환합니다.
        SceneManager.LoadScene("MainScene");
    }

    private void OnCancelButtonClick()
    {
        DataManager.instance.currentDog = null;
        DataManager.instance.dogName = null;
        customPanel.SetActive(false);
        selectPanel.SetActive(true);
    }

    public void OnNextButtonClick(){
        DataManager.instance.selectedDogName = nameText.text;
        Debug.Log(nameText.text);
    }


    public Character currentCharacter;
}
