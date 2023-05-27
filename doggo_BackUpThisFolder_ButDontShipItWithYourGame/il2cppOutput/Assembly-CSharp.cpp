#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// ARPlaceOnPlane
struct ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// CallObject
struct CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraAnimationController
struct CameraAnimationController_t351A7B6ED7F8F13D2FAAC656F36B480C75D31BF8;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Demo
struct Demo_t604A0ABD5699528B48A75285A69A8B9377779903;
// DogButton
struct DogButton_t612E45E697AD468F47338A7F7CE7C9EA0B420F83;
// DogTouchManager
struct DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// InputFieldController
struct InputFieldController_tC6140B3CF511805A81B11B595397B1CF895078A9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// MainSceneController
struct MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShowSelect
struct ShowSelect_tF3681FB5CB10873F82A4EB76B9D06DCAA183B3DD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartSceneController
struct StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5CB630CC608C7DE21A072504FD14308670645A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18;
IL2CPP_EXTERN_C String_t* _stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91;
IL2CPP_EXTERN_C String_t* _stringLiteral1512ECF033194240C6A681157BD4140FFA519680;
IL2CPP_EXTERN_C String_t* _stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A;
IL2CPP_EXTERN_C String_t* _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C;
IL2CPP_EXTERN_C String_t* _stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8073A10838359E4524EAB0255062269BCE95B8;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD;
IL2CPP_EXTERN_C String_t* _stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B;
IL2CPP_EXTERN_C String_t* _stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C;
IL2CPP_EXTERN_C String_t* _stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04;
IL2CPP_EXTERN_C String_t* _stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63;
IL2CPP_EXTERN_C String_t* _stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8C279BC9A323EF781F598527B0B496C1D7E63C62;
IL2CPP_EXTERN_C String_t* _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855;
IL2CPP_EXTERN_C String_t* _stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3;
IL2CPP_EXTERN_C String_t* _stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0;
IL2CPP_EXTERN_C String_t* _stringLiteral999A99E841361F022F64587F6F9C6EC44F920855;
IL2CPP_EXTERN_C String_t* _stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41;
IL2CPP_EXTERN_C String_t* _stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74;
IL2CPP_EXTERN_C String_t* _stringLiteralA86536DCBCD4C8E3257D503B0FA8209F2EF5E2FC;
IL2CPP_EXTERN_C String_t* _stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528;
IL2CPP_EXTERN_C String_t* _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB2831B8D0A8D87C919F11241949821FA188FDE0C;
IL2CPP_EXTERN_C String_t* _stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0C13835790ABB90D871625A3FF9C13B21B0331;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894;
IL2CPP_EXTERN_C String_t* _stringLiteralC88402D069AA4897FD47A0CB7093362DBA99FE19;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60;
IL2CPP_EXTERN_C String_t* _stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E;
IL2CPP_EXTERN_C String_t* _stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F;
IL2CPP_EXTERN_C String_t* _stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5233ED37FEF2EDCC1C907ABC15D57647CCB357F;
IL2CPP_EXTERN_C String_t* _stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27;
IL2CPP_EXTERN_C String_t* _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* CallObject_OnClick_m9B5B44FF4A25C2BD6DDEC026F2B18A730F68543A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_mD0C05CBA43EFDC472C6C4BB588C366709A88B182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFieldController_OnInputFieldValueChanged_mC9884C9D2FC4154844C7DDCCFD69E76E9DCFC253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainSceneController_onBackButtonClick_m22C2805A8F28E6958A2E42B58BC526F0AD00C83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainSceneController_onCallButtonClick_m012ECE4AF171884C8934A554017CED2FFF62524E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainSceneController_onWalkButtonClick_m5F8E7DF3C3A9E2122A76390F39E3B3BE0EDBB2A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartSceneController_OnCancelButtonClick_m6441385A4CA66F1F0E626E47F23C7CD47516EFD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartSceneController_OnGoNextButtonClick_m9FF84063CD4898EC3A05DB59B133D9E2F4CFCB2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartSceneController_OnSelectButtonClick_mA078B2DA6E92745112306A76ED1C9C6D6B2BA9C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartSceneController_OnStartButtonClick_mE881B455FEE8DD126B322AD98CBFCC830534A382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct XRCameraIntrinsics_t9367485046DF7AF56DD5A690EA98D9D8A1F78A5B 
{
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution_2;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARPlaceOnPlane
struct ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARPlaceOnPlane::arRaycaster
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___arRaycaster_4;
	// UnityEngine.GameObject ARPlaceOnPlane::placeObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeObject_5;
	// UnityEngine.GameObject ARPlaceOnPlane::spawnObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnObject_6;
	// UnityEngine.GameObject[] ARPlaceOnPlane::charPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___charPrefabs_7;
};

// CallObject
struct CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button CallObject::callButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___callButton_4;
	// UnityEngine.GameObject CallObject::placeObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeObject_5;
	// System.Single CallObject::moveSpeed
	float ___moveSpeed_6;
	// System.Boolean CallObject::isObjectMoving
	bool ___isObjectMoving_7;
	// UnityEngine.Vector3 CallObject::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_8;
	// System.Single CallObject::initialDistance
	float ___initialDistance_9;
};

// CameraAnimationController
struct CameraAnimationController_t351A7B6ED7F8F13D2FAAC656F36B480C75D31BF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator CameraAnimationController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.XR.ARFoundation.ARCameraManager CameraAnimationController::arCameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___arCameraManager_5;
	// UnityEngine.Vector3 CameraAnimationController::previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPosition_6;
};

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Animals DataManager::currentAnimal
	int32_t ___currentAnimal_5;
	// System.String DataManager::dogName
	String_t* ___dogName_6;
};

// Demo
struct Demo_t604A0ABD5699528B48A75285A69A8B9377779903  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Demo::animals
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___animals_4;
	// System.Int32 Demo::animalIndex
	int32_t ___animalIndex_5;
	// System.Collections.Generic.List`1<System.String> Demo::animationList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___animationList_6;
	// System.Collections.Generic.List`1<System.String> Demo::shapekeyList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___shapekeyList_7;
	// UnityEngine.Transform Demo::animal_parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___animal_parent_8;
	// UnityEngine.UI.Dropdown Demo::dropdownAnimal
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownAnimal_9;
	// UnityEngine.UI.Dropdown Demo::dropdownAnimation
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownAnimation_10;
	// UnityEngine.UI.Dropdown Demo::dropdownShapekey
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownShapekey_11;
};

// DogButton
struct DogButton_t612E45E697AD468F47338A7F7CE7C9EA0B420F83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DogButton::species
	String_t* ___species_4;
	// UnityEngine.UI.Text DogButton::speciesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___speciesText_5;
	// UnityEngine.UI.Text DogButton::inputNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputNameText_6;
	// UnityEngine.UI.RawImage DogButton::selectImg
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___selectImg_7;
	// UnityEngine.Texture DogButton::selectedTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___selectedTexture_8;
	// Animals DogButton::animal
	int32_t ___animal_9;
};

// DogTouchManager
struct DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DogTouchManager::heartPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___heartPrefab_4;
	// System.Single DogTouchManager::pettingDistanceThreshold
	float ___pettingDistanceThreshold_5;
	// UnityEngine.GameObject DogTouchManager::heartObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___heartObject_6;
	// System.Boolean DogTouchManager::isPetting
	bool ___isPetting_7;
};

// InputFieldController
struct InputFieldController_tC6140B3CF511805A81B11B595397B1CF895078A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField InputFieldController::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_4;
	// UnityEngine.UI.Text InputFieldController::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_5;
};

// MainSceneController
struct MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MainSceneController::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_4;
	// UnityEngine.Animator MainSceneController::prefabAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___prefabAnimator_5;
	// UnityEngine.UI.Button MainSceneController::walkButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___walkButton_6;
	// UnityEngine.UI.Button MainSceneController::callButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___callButton_7;
	// UnityEngine.UI.Button MainSceneController::backButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backButton_8;
	// UnityEngine.GameObject MainSceneController::placeObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeObject_9;
	// UnityEngine.GameObject[] MainSceneController::charPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___charPrefabs_10;
};

// ShowSelect
struct ShowSelect_tF3681FB5CB10873F82A4EB76B9D06DCAA183B3DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ShowSelect::animalPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___animalPrefabs_4;
	// UnityEngine.GameObject ShowSelect::animal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___animal_5;
	// UnityEngine.GameObject ShowSelect::selectImg
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectImg_6;
};

// StartSceneController
struct StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StartSceneController::introPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___introPanel_4;
	// UnityEngine.GameObject StartSceneController::selectPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectPanel_5;
	// UnityEngine.GameObject StartSceneController::customPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___customPanel_6;
	// UnityEngine.UI.Button StartSceneController::selectButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___selectButton_8;
	// UnityEngine.UI.Button StartSceneController::goNextSceneButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___goNextSceneButton_9;
	// UnityEngine.UI.Button StartSceneController::cancelButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___cancelButton_10;
	// UnityEngine.UI.Text StartSceneController::dogName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dogName_11;
	// Character StartSceneController::currentCharacter
	int32_t ___currentCharacter_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.UI.Dropdown/OptionData

// UnityEngine.UI.Dropdown/OptionData

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics

// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.InputField/OnChangeEvent

// UnityEngine.UI.InputField/OnChangeEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ARPlaceOnPlane

// ARPlaceOnPlane

// CallObject

// CallObject

// CameraAnimationController

// CameraAnimationController

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields
{
	// DataManager DataManager::instance
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* ___instance_4;
};

// DataManager

// Demo

// Demo

// DogButton

// DogButton

// DogTouchManager

// DogTouchManager

// InputFieldController

// InputFieldController

// MainSceneController

// MainSceneController

// ShowSelect

// ShowSelect

// StartSceneController
struct StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_StaticFields
{
	// StartSceneController StartSceneController::instance
	StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* ___instance_7;
};

// StartSceneController

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Demo::ChangeShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Demo::PrevAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::NextAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Demo::NextShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::PrevShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::NextAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::PrevAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Count()
inline int32_t List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Demo::ChangeAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARCameraManager>()
inline ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* Component_GetComponent_TisARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_mD0C05CBA43EFDC472C6C4BB588C366709A88B182 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryGetIntrinsics_m9D3306A91112F7E3C42A3D382290A6C94BADA8D3 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCameraIntrinsics_t9367485046DF7AF56DD5A690EA98D9D8A1F78A5B* ___0_cameraIntrinsics, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void ARPlaceOnPlane::UpdateCenterObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaceOnPlane_UpdateCenterObject_mAD736B290062F08C247EB8ED3E2712C3902ED20B (ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void DogTouchManager::CreateHeartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_CreateHeartObject_m0290BEF63E084B3267F8BAB4148B7695E5A5EE3B (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) ;
// System.Void DogTouchManager::DestroyHeartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_DestroyHeartObject_m0AD66C84D2A6FC0DD61A3935F17A1E6908A70789 (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Demo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_Start_m806465496F7D4ED43DF7DE4288205BE6FDC90803 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// animal_parent = GameObject.Find("Animals").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___animal_parent_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animal_parent_8), (void*)L_1);
		// Transform canvas = GameObject.Find("Canvas").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		V_0 = L_3;
		// dropdownAnimal = canvas.Find("Animal").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_6);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7;
		L_7 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_6, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownAnimal_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownAnimal_9), (void*)L_7);
		// dropdownAnimation = canvas.Find("Animation").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_10);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_11;
		L_11 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_10, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownAnimation_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownAnimation_10), (void*)L_11);
		// dropdownShapekey = canvas.Find("Shapekey").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_13, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_14);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_15;
		L_15 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_14, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownShapekey_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownShapekey_11), (void*)L_15);
		// int count = animal_parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___animal_parent_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_16, NULL);
		V_1 = L_17;
		// animals = new GameObject[count];
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___animals_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animals_4), (void*)L_19);
		// List<string> animalList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_20, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_20;
		// for(int i = 0; i< count; i++)
		V_3 = 0;
		goto IL_0100;
	}

IL_00a7:
	{
		// animals[i] = animal_parent.GetChild(i).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___animals_4;
		int32_t L_22 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___animal_parent_8;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, L_24, NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_26);
		// string n = animal_parent.GetChild(i).name;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___animal_parent_8;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, L_28, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		V_4 = L_30;
		// animalList.Add(n);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = V_2;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_31, L_32, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if(i==0) animals[i].SetActive(true);
		int32_t L_33 = V_3;
		if (L_33)
		{
			goto IL_00ee;
		}
	}
	{
		// if(i==0) animals[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___animals_4;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		goto IL_00fc;
	}

IL_00ee:
	{
		// else animals[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___animals_4;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
	}

IL_00fc:
	{
		// for(int i = 0; i< count; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0100:
	{
		// for(int i = 0; i< count; i++)
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00a7;
		}
	}
	{
		// dropdownAnimal.AddOptions(animalList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_45 = __this->___dropdownAnimal_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_2;
		NullCheck(L_45);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_45, L_46, NULL);
		// dropdownAnimation.AddOptions(animationList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_47 = __this->___dropdownAnimation_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = __this->___animationList_6;
		NullCheck(L_47);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_47, L_48, NULL);
		// dropdownShapekey.AddOptions(shapekeyList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_49 = __this->___dropdownShapekey_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = __this->___shapekeyList_7;
		NullCheck(L_49);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_49, L_50, NULL);
		// dropdownShapekey.value = 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_51 = __this->___dropdownShapekey_11;
		NullCheck(L_51);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_51, 1, NULL);
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_Update_mA56BCC789ECB8EA60415DE2336840979C399D1EF (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown("up")) { PrevAnimal(); }
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(Input.GetKeyDown("up")) { PrevAnimal(); }
		Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819(__this, NULL);
		return;
	}

IL_0013:
	{
		// else if(Input.GetKeyDown("down")) { NextAnimal(); }
		bool L_1;
		L_1 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// else if(Input.GetKeyDown("down")) { NextAnimal(); }
		Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC(__this, NULL);
		return;
	}

IL_0026:
	{
		// else if(Input.GetKeyDown("right")
		//     && (Input.GetKey(KeyCode.LeftControl)
		//     || Input.GetKey(KeyCode.RightControl))) { NextShapekey(); }
		bool L_2;
		L_2 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}

IL_004a:
	{
		// || Input.GetKey(KeyCode.RightControl))) { NextShapekey(); }
		Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2(__this, NULL);
		return;
	}

IL_0051:
	{
		// else if(Input.GetKeyDown("left")
		//     && (Input.GetKey(KeyCode.LeftControl)
		//     || Input.GetKey(KeyCode.RightControl))) { PrevShapekey(); }
		bool L_5;
		L_5 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}

IL_0075:
	{
		// || Input.GetKey(KeyCode.RightControl))) { PrevShapekey(); }
		Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB(__this, NULL);
		return;
	}

IL_007c:
	{
		// else if(Input.GetKeyDown("right")) { NextAnimation(); }
		bool L_8;
		L_8 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		// else if(Input.GetKeyDown("right")) { NextAnimation(); }
		Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B(__this, NULL);
		return;
	}

IL_008f:
	{
		// else if(Input.GetKeyDown("left")) { PrevAnimation(); }
		bool L_9;
		L_9 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// else if(Input.GetKeyDown("left")) { PrevAnimation(); }
		Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39(__this, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Demo::NextAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimal.value >= dropdownAnimal.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimal_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimal_9;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimal.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimal_9;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimal.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimal();
		Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimal.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimal_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimal.value = dropdownAnimal.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownAnimal_9;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimal.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimal();
		Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	{
		// animals[animalIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		int32_t L_1 = __this->___animalIndex_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// animals[dropdownAnimal.value].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimal_9;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// animalIndex = dropdownAnimal.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___dropdownAnimal_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_9, NULL);
		__this->___animalIndex_5 = L_10;
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::NextAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimation.value >= dropdownAnimation.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimation_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimation_10;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimation.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimation_10;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimation.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimation.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimation_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimation.value = dropdownAnimation.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownAnimation_10;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimation.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Animator animator = animals[dropdownAnimal.value].GetComponent<Animator>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___dropdownAnimal_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_5;
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		// int index = dropdownAnimation.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_8 = __this->___dropdownAnimation_10;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_8, NULL);
		V_1 = L_9;
		// if(index == 15)
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0070;
		}
	}
	{
		// if(animator.HasState(0, Animator.StringToHash("Spin")))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = V_0;
		int32_t L_12;
		L_12 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F, NULL);
		NullCheck(L_11);
		bool L_13;
		L_13 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_11, 0, L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// animator.Play("Spin");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = V_0;
		NullCheck(L_14);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_14, _stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F, NULL);
		return;
	}

IL_0051:
	{
		// else if(animator.HasState(0, Animator.StringToHash("Splash")))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = V_0;
		int32_t L_16;
		L_16 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
		NullCheck(L_15);
		bool L_17;
		L_17 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_15, 0, L_16, NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		// animator.Play("Splash");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = V_0;
		NullCheck(L_18);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_18, _stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
		return;
	}

IL_0070:
	{
		// animator.Play(dropdownAnimation.options[index].text);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = V_0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_20 = __this->___dropdownAnimation_10;
		NullCheck(L_20);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_21;
		L_21 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_20, NULL);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_23;
		L_23 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_21, L_22, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_23, NULL);
		NullCheck(L_19);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_19, L_24, NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Demo::NextShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownShapekey.value >= dropdownShapekey.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownShapekey_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownShapekey_11;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownShapekey.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownShapekey_11;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownShapekey.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownShapekey.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownShapekey_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownShapekey.value = dropdownShapekey.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownShapekey_11;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownShapekey.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	{
		// Animator animator = animals[dropdownAnimal.value].GetComponent<Animator>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___dropdownAnimal_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_5;
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// animator.Play(dropdownShapekey.options[dropdownShapekey.value].text);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = V_0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___dropdownShapekey_11;
		NullCheck(L_9);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_10;
		L_10 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_9, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_11 = __this->___dropdownShapekey_11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_11, NULL);
		NullCheck(L_10);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_13;
		L_13 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_10, L_12, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_13, NULL);
		NullCheck(L_8);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, L_14, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Demo::GoToWebsite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GoToWebsite_mB162C8246C32CB9E49F9162D0ED5E57CD08F6117 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, String_t* ___0_URL, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(URL);
		String_t* L_0 = ___0_URL;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo__ctor_mF8CB4DA056D99F53BB80CCCC92E971E42C7D1346 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1512ECF033194240C6A681157BD4140FFA519680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral999A99E841361F022F64587F6F9C6EC44F920855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12C13441E908B46D0E8552680587F5595D959F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> animationList = new List<string>
		//                                         {    "Attack",
		//                                             "Bounce",
		//                                             "Clicked",
		//                                             "Death",
		//                                             "Eat",
		//                                             "Fear",
		//                                             "Fly",
		//                                             "Hit",
		//                                             "Idle_A", "Idle_B", "Idle_C",
		//                                             "Jump",
		//                                             "Roll",
		//                                             "Run",
		//                                             "Sit",
		//                                             "Spin/Splash",
		//                                             "Swim",
		//                                             "Walk"
		//                                         };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteral999A99E841361F022F64587F6F9C6EC44F920855, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, _stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = L_14;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15;
		NullCheck(L_16);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, _stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, _stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___animationList_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationList_6), (void*)L_18);
		// private List<string> shapekeyList = new List<string>
		//                                         {    "Eyes_Annoyed",
		//                                             "Eyes_Blink",
		//                                             "Eyes_Cry",
		//                                             "Eyes_Dead",
		//                                             "Eyes_Excited",
		//                                             "Eyes_Happy",
		//                                             "Eyes_LookDown",
		//                                             "Eyes_LookIn",
		//                                             "Eyes_LookOut",
		//                                             "Eyes_LookUp",
		//                                             "Eyes_Rabid",
		//                                             "Eyes_Sad",
		//                                             "Eyes_Shrink",
		//                                             "Eyes_Sleep",
		//                                             "Eyes_Spin",
		//                                             "Eyes_Squint",
		//                                             "Eyes_Trauma",
		//                                             "Sweat_L",
		//                                             "Sweat_R",
		//                                             "Teardrop_L",
		//                                             "Teardrop_R"
		//                                         };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_19, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_20, _stringLiteral1512ECF033194240C6A681157BD4140FFA519680, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, _stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = L_21;
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, _stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = L_22;
		NullCheck(L_23);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_23, _stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = L_23;
		NullCheck(L_24);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_24, _stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, _stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = L_25;
		NullCheck(L_26);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, _stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = L_26;
		NullCheck(L_27);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_27, _stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = L_27;
		NullCheck(L_28);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_28, _stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = L_28;
		NullCheck(L_29);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_29, _stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = L_29;
		NullCheck(L_30);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_30, _stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = L_30;
		NullCheck(L_31);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_31, _stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = L_31;
		NullCheck(L_32);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_32, _stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = L_32;
		NullCheck(L_33);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_33, _stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = L_33;
		NullCheck(L_34);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_34, _stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = L_34;
		NullCheck(L_35);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_35, _stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = L_35;
		NullCheck(L_36);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_36, _stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = L_36;
		NullCheck(L_37);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_37, _stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = L_37;
		NullCheck(L_38);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_38, _stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = L_38;
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, _stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = L_39;
		NullCheck(L_40);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, _stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___shapekeyList_7 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shapekeyList_7), (void*)L_40);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DataManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Awake_mBED5EDC55313601164C69104F2D67B067AC6183E (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		goto IL_0023;
	}

IL_0015:
	{
		// else if (instance != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_2 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// }
		return;
	}
}
// System.Void DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_mD735B7F80F3DE13E2BB45118CDA7FA619330DCDA (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraAnimationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnimationController_Start_m61372B2720558CD954A3D2F32EB29A95FE99227F (CameraAnimationController_t351A7B6ED7F8F13D2FAAC656F36B480C75D31BF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_mD0C05CBA43EFDC472C6C4BB588C366709A88B182_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arCameraManager = GetComponent<ARCameraManager>();
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0;
		L_0 = Component_GetComponent_TisARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_mD0C05CBA43EFDC472C6C4BB588C366709A88B182(__this, Component_GetComponent_TisARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_mD0C05CBA43EFDC472C6C4BB588C366709A88B182_RuntimeMethod_var);
		__this->___arCameraManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCameraManager_5), (void*)L_0);
		// previousPosition = arCameraManager.transform.position;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = __this->___arCameraManager_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___previousPosition_6 = L_3;
		// }
		return;
	}
}
// System.Void CameraAnimationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnimationController_Update_m8989D38CAD2509C0D04F378FF578B599E801DC67 (CameraAnimationController_t351A7B6ED7F8F13D2FAAC656F36B480C75D31BF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraIntrinsics_t9367485046DF7AF56DD5A690EA98D9D8A1F78A5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (arCameraManager.TryGetIntrinsics(out var intrinsics))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___arCameraManager_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARCameraManager_TryGetIntrinsics_m9D3306A91112F7E3C42A3D382290A6C94BADA8D3(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// Vector3 currentPosition = arCameraManager.transform.position;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_2 = __this->___arCameraManager_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		// float cameraSpeed = (currentPosition - previousPosition).magnitude / Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___previousPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_3 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		// previousPosition = currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		__this->___previousPosition_6 = L_10;
		// float animationSpeed = cameraSpeed * 0.1f; // ????? ??? ??? ?? ??? ????? ??
		V_2 = ((float)il2cpp_codegen_multiply(((float)(L_8/L_9)), (0.100000001f)));
		// animator.SetFloat("Speed", animationSpeed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_4;
		float L_12 = V_2;
		NullCheck(L_11);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_11, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_12, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void CameraAnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnimationController__ctor_m6128CD85FF2B70AEB58B6E5716592D9F2E2406A6 (CameraAnimationController_t351A7B6ED7F8F13D2FAAC656F36B480C75D31BF8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARPlaceOnPlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaceOnPlane_Start_m68D835FECF8E1937516AB2D763DAFAE87B4D4636 (ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___charPrefabs_7;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___currentAnimal_5;
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___placeObject_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placeObject_5), (void*)L_5);
		// }
		return;
	}
}
// System.Void ARPlaceOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaceOnPlane_Update_m98EEC6139A712056FA635AB7156E2FAC4B68459C (ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B* __this, const RuntimeMethod* method) 
{
	{
		// UpdateCenterObject(); // ? ????? UpdateCenterObject ??? ????.
		ARPlaceOnPlane_UpdateCenterObject_mAD736B290062F08C247EB8ED3E2712C3902ED20B(__this, NULL);
		// }
		return;
	}
}
// System.Void ARPlaceOnPlane::UpdateCenterObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaceOnPlane_UpdateCenterObject_mAD736B290062F08C247EB8ED3E2712C3902ED20B (ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f)); // ??? ???? ????? ???? ??
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_1, NULL);
		V_0 = L_2;
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// arRaycaster.Raycast(screenCenter, hits, TrackableType.Planes); // Plane??? ??? Ray? ??? ? ???? ???. -> hits? Ray? ? ???? ????.
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___arRaycaster_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, ((int32_t)15), NULL);
		// if (hits.Count > 0) // ??? ??? ???
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_9, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// Pose placementPose = hits[0].pose; // ?? ?? ??? ? ??? placementPose?? ?? ????.
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_11 = V_1;
		NullCheck(L_11);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_12;
		L_12 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_11, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_4 = L_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_4), NULL);
		// placeObject.SetActive(true); // ? ??? ??? ?? ??? ????.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___placeObject_5;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// Vector3 position = placementPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		V_2 = L_16;
		// Quaternion rotation = placementPose.rotation * Quaternion.Euler(0f, 180f, 0f); // Z??? 180? ?????.
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_15.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_17, L_18, NULL);
		V_3 = L_19;
		// placeObject.transform.SetPositionAndRotation(position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___placeObject_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_3;
		NullCheck(L_21);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_21, L_22, L_23, NULL);
		return;
	}

IL_0093:
	{
		// placeObject.SetActive(false); // ??? ??? ???.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___placeObject_5;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARPlaceOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaceOnPlane__ctor_m11DF94E2890B8212B4063982017F3266FD361D7A (ARPlaceOnPlane_t3695B37375E8C5125BC61AB920B325B765B69B8B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CallObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallObject_Start_m69120D7A1F49EA7FA56311E6953207CDAA5AB993 (CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallObject_OnClick_m9B5B44FF4A25C2BD6DDEC026F2B18A730F68543A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callButton.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___callButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)CallObject_OnClick_m9B5B44FF4A25C2BD6DDEC026F2B18A730F68543A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CallObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallObject_Update_m76576FCC9682E96A70BE19C1DE3BE87225E1FF55 (CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A* __this, const RuntimeMethod* method) 
{
	{
		// if (isObjectMoving)
		bool L_0 = __this->___isObjectMoving_7;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// placeObject.transform.position = Vector3.MoveTowards(placeObject.transform.position, targetPosition, moveSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placeObject_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___placeObject_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___targetPosition_8;
		float L_7 = __this->___moveSpeed_6;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		// if (Vector3.Distance(placeObject.transform.position, targetPosition) < 0.01f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___placeObject_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___targetPosition_8;
		float L_14;
		L_14 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_13, NULL);
		if ((!(((float)L_14) < ((float)(0.00999999978f)))))
		{
			goto IL_0068;
		}
	}
	{
		// isObjectMoving = false;
		__this->___isObjectMoving_7 = (bool)0;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void CallObject::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallObject_OnClick_m9B5B44FF4A25C2BD6DDEC026F2B18A730F68543A (CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A* __this, const RuntimeMethod* method) 
{
	{
		// targetPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___targetPosition_8 = L_2;
		// initialDistance = Vector3.Distance(targetPosition, placeObject.transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___targetPosition_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___placeObject_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_6, NULL);
		__this->___initialDistance_9 = L_7;
		// isObjectMoving = true;
		__this->___isObjectMoving_7 = (bool)1;
		// }
		return;
	}
}
// System.Void CallObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallObject__ctor_m7C608D0100FDD5E93B092D4638006F670FFEA47F (CallObject_tCD1CBCB8FA7D8D161CCBB67AA66FA76EF01B363A* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 1f;
		__this->___moveSpeed_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DogTouchManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_Update_mCCD12F986337A074977D4B4F18D91F84DCC9545C (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0060;
		}
	}
	{
		// Vector3 touchPosition = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		V_1 = L_4;
		// Ray ray = Camera.main.ScreenPointToRay(touchPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		// if (hit.collider.gameObject == gameObject)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// isPetting = true;
		__this->___isPetting_7 = (bool)1;
		// CreateHeartObject();
		DogTouchManager_CreateHeartObject_m0290BEF63E084B3267F8BAB4148B7695E5A5EE3B(__this, NULL);
		return;
	}

IL_0060:
	{
		// else if (touch.phase == TouchPhase.Ended)
		int32_t L_13;
		L_13 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		// isPetting = false;
		__this->___isPetting_7 = (bool)0;
		// DestroyHeartObject();
		DogTouchManager_DestroyHeartObject_m0AD66C84D2A6FC0DD61A3935F17A1E6908A70789(__this, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void DogTouchManager::CreateHeartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_CreateHeartObject_m0290BEF63E084B3267F8BAB4148B7695E5A5EE3B (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (heartObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___heartObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// heartObject = Instantiate(heartPrefab, transform.position, Quaternion.Euler(-90f, 0f, 0f));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___heartPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-90.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___heartObject_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heartObject_6), (void*)L_6);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void DogTouchManager::DestroyHeartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_DestroyHeartObject_m0AD66C84D2A6FC0DD61A3935F17A1E6908A70789 (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (heartObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___heartObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Destroy(heartObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___heartObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// heartObject = null;
		__this->___heartObject_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heartObject_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void DogTouchManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager_FixedUpdate_mF3515024E9D6357863DA86E315FC2744C89014CD (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isPetting)
		bool L_0 = __this->___isPetting_7;
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		// Vector3 pettingPosition = transform.position + Vector3.up * 0.2f; // ???? ??
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.200000003f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// if (heartObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___heartObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		// heartObject.transform.position = Vector3.Lerp(heartObject.transform.position, pettingPosition, Time.fixedDeltaTime * 5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___heartObject_6;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___heartObject_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14;
		L_14 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, (5.0f))), NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_15, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void DogTouchManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogTouchManager__ctor_m40C3CE523D306E1B9F2C6B7129B292342D6AA360 (DogTouchManager_t708B60235D316054DF03A253A921CAE60755DA8E* __this, const RuntimeMethod* method) 
{
	{
		// public float pettingDistanceThreshold = 0.1f; // ???? ?? ???
		__this->___pettingDistanceThreshold_5 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainSceneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController_Start_m5F7913C55085D9922F88919FE35C98F476428E27 (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainSceneController_onBackButtonClick_m22C2805A8F28E6958A2E42B58BC526F0AD00C83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainSceneController_onCallButtonClick_m012ECE4AF171884C8934A554017CED2FFF62524E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainSceneController_onWalkButtonClick_m5F8E7DF3C3A9E2122A76390F39E3B3BE0EDBB2A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nameText.text = DataManager.instance.dogName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___nameText_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___dogName_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// placeObject = Instantiate(charPrefabs[(int)DataManager.instance.currentAnimal]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___charPrefabs_10;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_4 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		int32_t L_5 = L_4->___currentAnimal_5;
		NullCheck(L_3);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___placeObject_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placeObject_9), (void*)L_8);
		// prefabAnimator = placeObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___placeObject_9;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_9, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___prefabAnimator_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabAnimator_5), (void*)L_10);
		// walkButton.onClick.AddListener(onWalkButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___walkButton_6;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)MainSceneController_onWalkButtonClick_m5F8E7DF3C3A9E2122A76390F39E3B3BE0EDBB2A8_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_13, NULL);
		// callButton.onClick.AddListener(onCallButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___callButton_7;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_14, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)MainSceneController_onCallButtonClick_m012ECE4AF171884C8934A554017CED2FFF62524E_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_16, NULL);
		// backButton.onClick.AddListener(onBackButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___backButton_8;
		NullCheck(L_17);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_18;
		L_18 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)MainSceneController_onBackButtonClick_m22C2805A8F28E6958A2E42B58BC526F0AD00C83A_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_19, NULL);
		// backButton.gameObject.SetActive(false); // backButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___backButton_8;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainSceneController::onWalkButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController_onWalkButtonClick_m5F8E7DF3C3A9E2122A76390F39E3B3BE0EDBB2A8 (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabAnimator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___prefabAnimator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
		// walkButton.gameObject.SetActive(false); // walkButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___walkButton_6;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// callButton.gameObject.SetActive(false); // callButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___callButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// backButton.gameObject.SetActive(true); // backButton ???
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___backButton_8;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainSceneController::onCallButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController_onCallButtonClick_m012ECE4AF171884C8934A554017CED2FFF62524E (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5233ED37FEF2EDCC1C907ABC15D57647CCB357F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabAnimator.SetBool("spin", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___prefabAnimator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralF5233ED37FEF2EDCC1C907ABC15D57647CCB357F, (bool)1, NULL);
		// walkButton.gameObject.SetActive(false); // walkButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___walkButton_6;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// callButton.gameObject.SetActive(false); // callButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___callButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// backButton.gameObject.SetActive(true); // backButton ???
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___backButton_8;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainSceneController::onBackButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController_onBackButtonClick_m22C2805A8F28E6958A2E42B58BC526F0AD00C83A (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5233ED37FEF2EDCC1C907ABC15D57647CCB357F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabAnimator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___prefabAnimator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// prefabAnimator.SetBool("spin", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___prefabAnimator_5;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralF5233ED37FEF2EDCC1C907ABC15D57647CCB357F, (bool)0, NULL);
		// walkButton.gameObject.SetActive(true); // walkButton ???
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___walkButton_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// callButton.gameObject.SetActive(true); // callButton ???
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___callButton_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// backButton.gameObject.SetActive(false); // backButton ????
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___backButton_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainSceneController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController_Update_m259D268919BCDAA4854CB2AB0A37C3C7C0E712B8 (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainSceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneController__ctor_m02904664843EB3FD31629E811F56612572108BAE (MainSceneController_t830DABB25405605094E1A2518C41C031D04A3322* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DogButton::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogButton_OnButtonClick_m7A94D072C786D09A04E5A29A93FE48E6E216BECE (DogButton_t612E45E697AD468F47338A7F7CE7C9EA0B420F83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5CB630CC608C7DE21A072504FD14308670645A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8073A10838359E4524EAB0255062269BCE95B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C279BC9A323EF781F598527B0B496C1D7E63C62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2831B8D0A8D87C919F11241949821FA188FDE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0C13835790ABB90D871625A3FF9C13B21B0331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC88402D069AA4897FD47A0CB7093362DBA99FE19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (species == "tiger")
		String_t* L_0 = __this->___species_4;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralBA0C13835790ABB90D871625A3FF9C13B21B0331, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// speciesText.text = "???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___speciesText_5;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral1B8073A10838359E4524EAB0255062269BCE95B8);
		// inputNameText.text = "? ??? ??? ??? ??!\n??? ??? ?? ??.\n??? ???? ???? ???.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___inputNameText_6;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralC88402D069AA4897FD47A0CB7093362DBA99FE19);
		goto IL_009a;
	}

IL_0034:
	{
		// else if (species == "cat")
		String_t* L_4 = __this->___species_4;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		// speciesText.text = "???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___speciesText_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D);
		// inputNameText.text = "?? ??? ??? ???!\n????? ???? ????.\n???? ??????.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___inputNameText_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral8C279BC9A323EF781F598527B0B496C1D7E63C62);
		goto IL_009a;
	}

IL_0068:
	{
		// else if (species == "dog")
		String_t* L_8 = __this->___species_4;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C, NULL);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		// speciesText.text = "???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___speciesText_5;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralB2831B8D0A8D87C919F11241949821FA188FDE0C);
		// inputNameText.text = "?? ??? ?? ?? ???!\n???? ??? ??? ???.\n??? ??? ?????.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___inputNameText_6;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral0C5CB630CC608C7DE21A072504FD14308670645A);
	}

IL_009a:
	{
		// selectImg.texture = selectedTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_12 = __this->___selectImg_7;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = __this->___selectedTexture_8;
		NullCheck(L_12);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_12, L_13, NULL);
		// DataManager.instance.currentAnimal = animal;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_14 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_15 = __this->___animal_9;
		NullCheck(L_14);
		L_14->___currentAnimal_5 = L_15;
		// }
		return;
	}
}
// System.Void DogButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogButton__ctor_mCCDC5A2E70DE2EFA65BE5C0674D984949BFE14E0 (DogButton_t612E45E697AD468F47338A7F7CE7C9EA0B420F83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputFieldController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldController_Start_m11BA3BCA06F83786E0E6029F058E4EEAB75099D1 (InputFieldController_tC6140B3CF511805A81B11B595397B1CF895078A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFieldController_OnInputFieldValueChanged_mC9884C9D2FC4154844C7DDCCFD69E76E9DCFC253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputField.onValueChanged.AddListener(OnInputFieldValueChanged);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_4;
		NullCheck(L_0);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_1;
		L_1 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline(L_0, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_2 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_2, __this, (intptr_t)((void*)InputFieldController_OnInputFieldValueChanged_mC9884C9D2FC4154844C7DDCCFD69E76E9DCFC253_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_1, L_2, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InputFieldController::OnInputFieldValueChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldController_OnInputFieldValueChanged_mC9884C9D2FC4154844C7DDCCFD69E76E9DCFC253 (InputFieldController_tC6140B3CF511805A81B11B595397B1CF895078A9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// nameText.text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___nameText_5;
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void InputFieldController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldController__ctor_mF815531CF4D8D8AE462E4E1AA23766A3661794A4 (InputFieldController_tC6140B3CF511805A81B11B595397B1CF895078A9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShowSelect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelect_Start_m05B3D51BFA48D08840E3E35FA5222E8FF5AC3049 (ShowSelect_tF3681FB5CB10873F82A4EB76B9D06DCAA183B3DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animal = Instantiate(animalPrefabs[(int)DataManager.instance.currentAnimal]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animalPrefabs_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___currentAnimal_5;
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___animal_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animal_5), (void*)L_5);
		// }
		return;
	}
}
// System.Void ShowSelect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelect_OnEnable_m6902E855E20FBEA7ECA8DA1C1B2AB1E3358CEBF7 (ShowSelect_tF3681FB5CB10873F82A4EB76B9D06DCAA183B3DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (selectImg != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selectImg_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(selectImg);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selectImg_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// switch (DataManager.instance.currentAnimal)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		int32_t L_4 = L_3->___currentAnimal_5;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0097;
			}
		}
	}
	{
		goto IL_00c3;
	}

IL_003b:
	{
		// selectImg = Instantiate(animalPrefabs[(int)Animals.Tiger], new Vector3(0f, 0f, 0f), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___animalPrefabs_4;
		NullCheck(L_6);
		int32_t L_7 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___selectImg_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectImg_6), (void*)L_11);
		// break;
		goto IL_00c3;
	}

IL_0069:
	{
		// selectImg = Instantiate(animalPrefabs[(int)Animals.Cat], new Vector3(0f, 0f, 0f), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___animalPrefabs_4;
		NullCheck(L_12);
		int32_t L_13 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___selectImg_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectImg_6), (void*)L_17);
		// break;
		goto IL_00c3;
	}

IL_0097:
	{
		// selectImg = Instantiate(animalPrefabs[(int)Animals.Dog], new Vector3(0f, 0f, 0f), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___animalPrefabs_4;
		NullCheck(L_18);
		int32_t L_19 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___selectImg_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectImg_6), (void*)L_23);
	}

IL_00c3:
	{
		// selectImg.transform.SetParent(transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___selectImg_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_25, L_26, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ShowSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelect__ctor_m47E84366C095DA75516283215C93ED55A40CB6F5 (ShowSelect_tF3681FB5CB10873F82A4EB76B9D06DCAA183B3DD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartSceneController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_Awake_m61C81245BFED93553537152B9031E4254535C829 (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) instance = this;
		StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* L_0 = ((StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_StaticFields*)il2cpp_codegen_static_fields_for(StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (instance == null) instance = this;
		((StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_StaticFields*)il2cpp_codegen_static_fields_for(StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_StaticFields*)il2cpp_codegen_static_fields_for(StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
		goto IL_0023;
	}

IL_0015:
	{
		// else if (instance != null) return;
		StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* L_2 = ((StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_StaticFields*)il2cpp_codegen_static_fields_for(StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// else if (instance != null) return;
		return;
	}

IL_0023:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_Start_m303E9EEE838DFFB94406E6FF3ED0B56E3528BA4A (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSceneController_OnCancelButtonClick_m6441385A4CA66F1F0E626E47F23C7CD47516EFD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSceneController_OnGoNextButtonClick_m9FF84063CD4898EC3A05DB59B133D9E2F4CFCB2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSceneController_OnSelectButtonClick_mA078B2DA6E92745112306A76ED1C9C6D6B2BA9C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSceneController_OnStartButtonClick_mE881B455FEE8DD126B322AD98CBFCC830534A382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86536DCBCD4C8E3257D503B0FA8209F2EF5E2FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button startButton = GameObject.Find("StartBtn").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralA86536DCBCD4C8E3257D503B0FA8209F2EF5E2FC, NULL);
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		// startButton.onClick.AddListener(OnStartButtonClick);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)StartSceneController_OnStartButtonClick_mE881B455FEE8DD126B322AD98CBFCC830534A382_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// selectButton.onClick.AddListener(OnSelectButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___selectButton_8;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)StartSceneController_OnSelectButtonClick_mA078B2DA6E92745112306A76ED1C9C6D6B2BA9C2_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// goNextSceneButton.onClick.AddListener(OnGoNextButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___goNextSceneButton_9;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)StartSceneController_OnGoNextButtonClick_m9FF84063CD4898EC3A05DB59B133D9E2F4CFCB2C_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// cancelButton.onClick.AddListener(OnCancelButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___cancelButton_10;
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)StartSceneController_OnCancelButtonClick_m6441385A4CA66F1F0E626E47F23C7CD47516EFD7_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::OnStartButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_OnStartButtonClick_mE881B455FEE8DD126B322AD98CBFCC830534A382 (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	{
		// introPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___introPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// selectPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::OnSelectButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_OnSelectButtonClick_mA078B2DA6E92745112306A76ED1C9C6D6B2BA9C2 (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	{
		// selectPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selectPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// customPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___customPanel_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::OnGoNextButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_OnGoNextButtonClick_m9FF84063CD4898EC3A05DB59B133D9E2F4CFCB2C (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.instance.dogName = dogName.text;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___dogName_11;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		NullCheck(L_0);
		L_0->___dogName_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___dogName_6), (void*)L_2);
		// SceneManager.LoadScene("MainScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::OnCancelButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController_OnCancelButtonClick_m6441385A4CA66F1F0E626E47F23C7CD47516EFD7 (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.instance.dogName = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		L_0->___dogName_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___dogName_6), (void*)(String_t*)NULL);
		// customPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___customPanel_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// selectPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selectPanel_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartSceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSceneController__ctor_m1E6CA3DD406385A8FFF08E43DB6649CEB79AAE44 (StartSceneController_tA754EC0CD08DB6977384ECDA917B8080EC44617D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) 
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public OnChangeEvent onValueChanged { get { return m_OnValueChanged; } set { SetPropertyUtility.SetClass(ref m_OnValueChanged, value); } }
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_0 = __this->___m_OnValueChanged_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
