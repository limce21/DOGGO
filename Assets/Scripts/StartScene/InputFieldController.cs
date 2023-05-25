using UnityEngine;
using UnityEngine.UI;

public class InputFieldController : MonoBehaviour
{
    public InputField inputField; // 입력 필드(InputField)
    public Text nameText; // 이름을 표시할 텍스트(Text)

    private void Start()
    {
        // 입력 필드의 onValueChanged 이벤트에 함수를 등록합니다.
        inputField.onValueChanged.AddListener(OnInputFieldValueChanged);
    }

    private void OnInputFieldValueChanged(string value)
    {
        // 입력 필드의 값이 변경될 때마다 호출됩니다.
        // 변경된 값을 nameText에 표시합니다.
        nameText.text = value;
    }
}
