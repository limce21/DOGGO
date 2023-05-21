using UnityEngine;
using UnityEngine.UI;

public class DogButton : MonoBehaviour
{
    public string species; // 강아지 종류 정보
    public Text speciesText; // 종류를 표시할 텍스트 UI
    public Text inputNameText; // 입력된 이름을 표시할 텍스트 UI
    public RawImage selectImg; // 선택된 이미지를 표시할 RawImage 컴포넌트
    public Texture selectedTexture; // 선택된 상태의 텍스처 이미지

    public void OnButtonClick()
    {
        if (species == "husky")
        {
            speciesText.text = "허스키";
            inputNameText.text = "흰 바탕에 뚜렷한 무늬가 특징!\n추위에 강하고 힘이 세요.\n사람을 좋아하고 장난기가 많아요.";
        }
        else if (species == "welshcorg")
        {
            speciesText.text = "웰시코기";
            inputNameText.text = "짧은 다리에 뒤태는 치명적!\n활동적이고 적극적인 친구에요.\n스킨십을 좋아한답니다.";
        }
        else if (species == "retriever")
        {
            speciesText.text = "리트리버";
            inputNameText.text = "웃는 얼굴이 천사 같은 강아지!\n충성심이 강하고 지능이 높아요.\n주인과 교감을 잘한답니다.";
        }

        // 선택된 이미지 업데이트
        selectImg.texture = selectedTexture;
    }
}
