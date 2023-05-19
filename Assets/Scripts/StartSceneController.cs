using UnityEngine;
using UnityEngine.UI;

public class StartSceneController : MonoBehaviour
{
    public GameObject introPanel;
    public GameObject selectPanel;

    private void Start()
    {
        // StartBtn 버튼에 클릭 이벤트를 등록합니다.
        Button startButton = GameObject.Find("StartBtn").GetComponent<Button>();
        startButton.onClick.AddListener(OnStartButtonClick);

        if (selectPanel.activeSelf)
        {
            // WelshCorgiBtn 버튼을 클릭합니다.
            Button welshCorgiButton = selectPanel.transform.Find("WelshCorgiBtn").GetComponent<Button>();
            welshCorgiButton.onClick.Invoke();

            // WelshCorgiBtn의 색상을 선택된 상태로 변경합니다.
            welshCorgiButton.Select();

            // WelshCorgiBtn의 색상을 선택 색상으로 변경합니다.
            ColorBlock colors = welshCorgiButton.colors;
            colors.normalColor = colors.selectedColor;
            welshCorgiButton.colors = colors;
        }
    }

    private void OnStartButtonClick()
    {
        // IntroPanel을 비활성화합니다.
        introPanel.SetActive(false);

        // SelectPanel을 활성화합니다.
        selectPanel.SetActive(true);
    }
}
