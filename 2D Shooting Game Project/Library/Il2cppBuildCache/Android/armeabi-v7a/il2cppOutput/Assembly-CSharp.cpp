#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Spawn>
struct List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Spawn[]
struct SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ReadmeBE4/Section[]
struct SectionU5BU5D_t85D2074671702564CE6DF9526B771DD95F7ABFDC;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Background
struct Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// Explosion
struct Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED;
// Follwer
struct Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectManager
struct ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// ReadmeBE4
struct ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Spawn
struct Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ReadmeBE4/Section
struct Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001B5D4A36905876A6AF639AA14FBBF8D0E504D3;
IL2CPP_EXTERN_C String_t* _stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF;
IL2CPP_EXTERN_C String_t* _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral092974159CE1F1442B5DED8E26FAD27DDF888AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF11A2A8E3DBC184FC760A83E5E2D488C77EC92;
IL2CPP_EXTERN_C String_t* _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B;
IL2CPP_EXTERN_C String_t* _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE73EBF241BCF05C82947BE72DD3E8651E64FD4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20;
IL2CPP_EXTERN_C String_t* _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB8DD0ECB49DA2F2D46810675F2DF36193780CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717;
IL2CPP_EXTERN_C String_t* _stringLiteral9427668B541A15106A8604A8A4EBCD1CA6BF6EB8;
IL2CPP_EXTERN_C String_t* _stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
IL2CPP_EXTERN_C String_t* _stringLiteralB1366EE23FBE4F843BC8DC2687F3C4D42AD0FA1C;
IL2CPP_EXTERN_C String_t* _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118;
IL2CPP_EXTERN_C String_t* _stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532;
IL2CPP_EXTERN_C String_t* _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE9F23FB71FBF0F774FAB5F494181BDA97B4EA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F;
IL2CPP_EXTERN_C String_t* _stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C62DEEBAA20FFDBEBCFD99B4676A183D807CE4;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
IL2CPP_EXTERN_C String_t* _stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F6919BE52FA55770B5C7A34C9F71F8BB114A1EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB50280CD112F29B6C914B99BEF4828E13CFB4173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m877167BB69E95B9E7E0D0A68D03EF53C9C52A89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF0E2E94DF2A481AD11B159826B191240B4DF0DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Spawn>
struct List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E, ____items_1)); }
	inline SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* get__items_1() const { return ____items_1; }
	inline SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E_StaticFields, ____emptyArray_5)); }
	inline SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpawnU5BU5D_tD92EBB877281891A3A05788B1C0113AB67EB9B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____array_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__array_0() const { return ____array_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Spawn
struct Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2  : public RuntimeObject
{
public:
	// System.Single Spawn::_delay
	float ____delay_0;
	// System.String Spawn::_type
	String_t* ____type_1;
	// System.Int32 Spawn::_point
	int32_t ____point_2;

public:
	inline static int32_t get_offset_of__delay_0() { return static_cast<int32_t>(offsetof(Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2, ____delay_0)); }
	inline float get__delay_0() const { return ____delay_0; }
	inline float* get_address_of__delay_0() { return &____delay_0; }
	inline void set__delay_0(float value)
	{
		____delay_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_1), (void*)value);
	}

	inline static int32_t get_offset_of__point_2() { return static_cast<int32_t>(offsetof(Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2, ____point_2)); }
	inline int32_t get__point_2() const { return ____point_2; }
	inline int32_t* get_address_of__point_2() { return &____point_2; }
	inline void set__point_2(int32_t value)
	{
		____point_2 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ReadmeBE4/Section
struct Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D  : public RuntimeObject
{
public:
	// System.String ReadmeBE4/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE4/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE4/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE4/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// Explosion/Type
struct Type_t2F31DCA92940719396A965D91A7193578FD9B8DE 
{
public:
	// System.Int32 Explosion/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t2F31DCA92940719396A965D91A7193578FD9B8DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ObjectManager/Type
struct Type_t45870F8FAAFDAFFC1F09D865AF8220479512D966 
{
public:
	// System.Int32 ObjectManager/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t45870F8FAAFDAFFC1F09D865AF8220479512D966, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ReadmeBE4
struct ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D ReadmeBE4::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String ReadmeBE4::title
	String_t* ___title_5;
	// ReadmeBE4/Section[] ReadmeBE4::sections
	SectionU5BU5D_t85D2074671702564CE6DF9526B771DD95F7ABFDC* ___sections_6;
	// System.Boolean ReadmeBE4::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931, ___sections_6)); }
	inline SectionU5BU5D_t85D2074671702564CE6DF9526B771DD95F7ABFDC* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t85D2074671702564CE6DF9526B771DD95F7ABFDC** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t85D2074671702564CE6DF9526B771DD95F7ABFDC* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Background
struct Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Background::_speed
	float ____speed_4;
	// System.Int32 Background::_startIndex
	int32_t ____startIndex_5;
	// System.Int32 Background::_endIndex
	int32_t ____endIndex_6;
	// UnityEngine.Transform[] Background::_sprites
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____sprites_7;
	// System.Single Background::_viewHeight
	float ____viewHeight_8;

public:
	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}

	inline static int32_t get_offset_of__startIndex_5() { return static_cast<int32_t>(offsetof(Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3, ____startIndex_5)); }
	inline int32_t get__startIndex_5() const { return ____startIndex_5; }
	inline int32_t* get_address_of__startIndex_5() { return &____startIndex_5; }
	inline void set__startIndex_5(int32_t value)
	{
		____startIndex_5 = value;
	}

	inline static int32_t get_offset_of__endIndex_6() { return static_cast<int32_t>(offsetof(Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3, ____endIndex_6)); }
	inline int32_t get__endIndex_6() const { return ____endIndex_6; }
	inline int32_t* get_address_of__endIndex_6() { return &____endIndex_6; }
	inline void set__endIndex_6(int32_t value)
	{
		____endIndex_6 = value;
	}

	inline static int32_t get_offset_of__sprites_7() { return static_cast<int32_t>(offsetof(Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3, ____sprites_7)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__sprites_7() const { return ____sprites_7; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__sprites_7() { return &____sprites_7; }
	inline void set__sprites_7(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____sprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sprites_7), (void*)value);
	}

	inline static int32_t get_offset_of__viewHeight_8() { return static_cast<int32_t>(offsetof(Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3, ____viewHeight_8)); }
	inline float get__viewHeight_8() const { return ____viewHeight_8; }
	inline float* get_address_of__viewHeight_8() { return &____viewHeight_8; }
	inline void set__viewHeight_8(float value)
	{
		____viewHeight_8 = value;
	}
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Bullet::_damage
	int32_t ____damage_4;
	// System.Boolean Bullet::isRotate
	bool ___isRotate_5;

public:
	inline static int32_t get_offset_of__damage_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ____damage_4)); }
	inline int32_t get__damage_4() const { return ____damage_4; }
	inline int32_t* get_address_of__damage_4() { return &____damage_4; }
	inline void set__damage_4(int32_t value)
	{
		____damage_4 = value;
	}

	inline static int32_t get_offset_of_isRotate_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___isRotate_5)); }
	inline bool get_isRotate_5() const { return ___isRotate_5; }
	inline bool* get_address_of_isRotate_5() { return &___isRotate_5; }
	inline void set_isRotate_5(bool value)
	{
		___isRotate_5 = value;
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Enemy::_enemyName
	String_t* ____enemyName_4;
	// System.Int32 Enemy::_enemyScore
	int32_t ____enemyScore_5;
	// System.Single Enemy::_moveSpeed
	float ____moveSpeed_6;
	// System.Int32 Enemy::_health
	int32_t ____health_7;
	// System.Int32 Enemy::_maxHealth
	int32_t ____maxHealth_8;
	// UnityEngine.Sprite[] Enemy::_sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ____sprites_9;
	// System.Single Enemy::_curShotDelay
	float ____curShotDelay_10;
	// System.Single Enemy::_maxShotDelay
	float ____maxShotDelay_11;
	// UnityEngine.GameObject Enemy::_bulletObjA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletObjA_12;
	// UnityEngine.GameObject Enemy::_bulletObjB
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletObjB_13;
	// UnityEngine.GameObject Enemy::_itemCoin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemCoin_14;
	// UnityEngine.GameObject Enemy::_itemPower
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemPower_15;
	// UnityEngine.GameObject Enemy::_itemBoom
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemBoom_16;
	// UnityEngine.GameObject Enemy::_player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____player_17;
	// ObjectManager Enemy::_objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ____objectManager_18;
	// GameManager Enemy::_gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ____gameManager_19;
	// UnityEngine.SpriteRenderer Enemy::_spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ____spriteRenderer_20;
	// UnityEngine.Animator Enemy::_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____anim_21;
	// System.Int32 Enemy::patternIndex
	int32_t ___patternIndex_22;
	// System.Int32 Enemy::curPatternCount
	int32_t ___curPatternCount_23;
	// System.Int32[] Enemy::maxPatternCount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___maxPatternCount_24;

public:
	inline static int32_t get_offset_of__enemyName_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____enemyName_4)); }
	inline String_t* get__enemyName_4() const { return ____enemyName_4; }
	inline String_t** get_address_of__enemyName_4() { return &____enemyName_4; }
	inline void set__enemyName_4(String_t* value)
	{
		____enemyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__enemyScore_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____enemyScore_5)); }
	inline int32_t get__enemyScore_5() const { return ____enemyScore_5; }
	inline int32_t* get_address_of__enemyScore_5() { return &____enemyScore_5; }
	inline void set__enemyScore_5(int32_t value)
	{
		____enemyScore_5 = value;
	}

	inline static int32_t get_offset_of__moveSpeed_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____moveSpeed_6)); }
	inline float get__moveSpeed_6() const { return ____moveSpeed_6; }
	inline float* get_address_of__moveSpeed_6() { return &____moveSpeed_6; }
	inline void set__moveSpeed_6(float value)
	{
		____moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of__health_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____health_7)); }
	inline int32_t get__health_7() const { return ____health_7; }
	inline int32_t* get_address_of__health_7() { return &____health_7; }
	inline void set__health_7(int32_t value)
	{
		____health_7 = value;
	}

	inline static int32_t get_offset_of__maxHealth_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____maxHealth_8)); }
	inline int32_t get__maxHealth_8() const { return ____maxHealth_8; }
	inline int32_t* get_address_of__maxHealth_8() { return &____maxHealth_8; }
	inline void set__maxHealth_8(int32_t value)
	{
		____maxHealth_8 = value;
	}

	inline static int32_t get_offset_of__sprites_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____sprites_9)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get__sprites_9() const { return ____sprites_9; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of__sprites_9() { return &____sprites_9; }
	inline void set__sprites_9(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		____sprites_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sprites_9), (void*)value);
	}

	inline static int32_t get_offset_of__curShotDelay_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____curShotDelay_10)); }
	inline float get__curShotDelay_10() const { return ____curShotDelay_10; }
	inline float* get_address_of__curShotDelay_10() { return &____curShotDelay_10; }
	inline void set__curShotDelay_10(float value)
	{
		____curShotDelay_10 = value;
	}

	inline static int32_t get_offset_of__maxShotDelay_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____maxShotDelay_11)); }
	inline float get__maxShotDelay_11() const { return ____maxShotDelay_11; }
	inline float* get_address_of__maxShotDelay_11() { return &____maxShotDelay_11; }
	inline void set__maxShotDelay_11(float value)
	{
		____maxShotDelay_11 = value;
	}

	inline static int32_t get_offset_of__bulletObjA_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____bulletObjA_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletObjA_12() const { return ____bulletObjA_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletObjA_12() { return &____bulletObjA_12; }
	inline void set__bulletObjA_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletObjA_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletObjA_12), (void*)value);
	}

	inline static int32_t get_offset_of__bulletObjB_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____bulletObjB_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletObjB_13() const { return ____bulletObjB_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletObjB_13() { return &____bulletObjB_13; }
	inline void set__bulletObjB_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletObjB_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletObjB_13), (void*)value);
	}

	inline static int32_t get_offset_of__itemCoin_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____itemCoin_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemCoin_14() const { return ____itemCoin_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemCoin_14() { return &____itemCoin_14; }
	inline void set__itemCoin_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemCoin_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemCoin_14), (void*)value);
	}

	inline static int32_t get_offset_of__itemPower_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____itemPower_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemPower_15() const { return ____itemPower_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemPower_15() { return &____itemPower_15; }
	inline void set__itemPower_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemPower_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemPower_15), (void*)value);
	}

	inline static int32_t get_offset_of__itemBoom_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____itemBoom_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemBoom_16() const { return ____itemBoom_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemBoom_16() { return &____itemBoom_16; }
	inline void set__itemBoom_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemBoom_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemBoom_16), (void*)value);
	}

	inline static int32_t get_offset_of__player_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____player_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__player_17() const { return ____player_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__player_17() { return &____player_17; }
	inline void set__player_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____player_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_17), (void*)value);
	}

	inline static int32_t get_offset_of__objectManager_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____objectManager_18)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get__objectManager_18() const { return ____objectManager_18; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of__objectManager_18() { return &____objectManager_18; }
	inline void set__objectManager_18(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		____objectManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectManager_18), (void*)value);
	}

	inline static int32_t get_offset_of__gameManager_19() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____gameManager_19)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get__gameManager_19() const { return ____gameManager_19; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of__gameManager_19() { return &____gameManager_19; }
	inline void set__gameManager_19(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		____gameManager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameManager_19), (void*)value);
	}

	inline static int32_t get_offset_of__spriteRenderer_20() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____spriteRenderer_20)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get__spriteRenderer_20() const { return ____spriteRenderer_20; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of__spriteRenderer_20() { return &____spriteRenderer_20; }
	inline void set__spriteRenderer_20(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		____spriteRenderer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spriteRenderer_20), (void*)value);
	}

	inline static int32_t get_offset_of__anim_21() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____anim_21)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__anim_21() const { return ____anim_21; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__anim_21() { return &____anim_21; }
	inline void set__anim_21(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____anim_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anim_21), (void*)value);
	}

	inline static int32_t get_offset_of_patternIndex_22() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___patternIndex_22)); }
	inline int32_t get_patternIndex_22() const { return ___patternIndex_22; }
	inline int32_t* get_address_of_patternIndex_22() { return &___patternIndex_22; }
	inline void set_patternIndex_22(int32_t value)
	{
		___patternIndex_22 = value;
	}

	inline static int32_t get_offset_of_curPatternCount_23() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___curPatternCount_23)); }
	inline int32_t get_curPatternCount_23() const { return ___curPatternCount_23; }
	inline int32_t* get_address_of_curPatternCount_23() { return &___curPatternCount_23; }
	inline void set_curPatternCount_23(int32_t value)
	{
		___curPatternCount_23 = value;
	}

	inline static int32_t get_offset_of_maxPatternCount_24() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxPatternCount_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_maxPatternCount_24() const { return ___maxPatternCount_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_maxPatternCount_24() { return &___maxPatternCount_24; }
	inline void set_maxPatternCount_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___maxPatternCount_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxPatternCount_24), (void*)value);
	}
};


// Explosion
struct Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Explosion::_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____anim_4;

public:
	inline static int32_t get_offset_of__anim_4() { return static_cast<int32_t>(offsetof(Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED, ____anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__anim_4() const { return ____anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__anim_4() { return &____anim_4; }
	inline void set__anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anim_4), (void*)value);
	}
};


// Follwer
struct Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Follwer::_curShotDelay
	float ____curShotDelay_4;
	// System.Single Follwer::_maxShotDelay
	float ____maxShotDelay_5;
	// System.Single Follwer::_bulletSpeed
	float ____bulletSpeed_6;
	// ObjectManager Follwer::_objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ____objectManager_7;
	// UnityEngine.Vector3 Follwer::_followPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____followPos_8;
	// System.Int32 Follwer::_followDelay
	int32_t ____followDelay_9;
	// UnityEngine.Transform Follwer::_parent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____parent_10;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> Follwer::_parentPos
	Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * ____parentPos_11;

public:
	inline static int32_t get_offset_of__curShotDelay_4() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____curShotDelay_4)); }
	inline float get__curShotDelay_4() const { return ____curShotDelay_4; }
	inline float* get_address_of__curShotDelay_4() { return &____curShotDelay_4; }
	inline void set__curShotDelay_4(float value)
	{
		____curShotDelay_4 = value;
	}

	inline static int32_t get_offset_of__maxShotDelay_5() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____maxShotDelay_5)); }
	inline float get__maxShotDelay_5() const { return ____maxShotDelay_5; }
	inline float* get_address_of__maxShotDelay_5() { return &____maxShotDelay_5; }
	inline void set__maxShotDelay_5(float value)
	{
		____maxShotDelay_5 = value;
	}

	inline static int32_t get_offset_of__bulletSpeed_6() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____bulletSpeed_6)); }
	inline float get__bulletSpeed_6() const { return ____bulletSpeed_6; }
	inline float* get_address_of__bulletSpeed_6() { return &____bulletSpeed_6; }
	inline void set__bulletSpeed_6(float value)
	{
		____bulletSpeed_6 = value;
	}

	inline static int32_t get_offset_of__objectManager_7() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____objectManager_7)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get__objectManager_7() const { return ____objectManager_7; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of__objectManager_7() { return &____objectManager_7; }
	inline void set__objectManager_7(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		____objectManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectManager_7), (void*)value);
	}

	inline static int32_t get_offset_of__followPos_8() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____followPos_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__followPos_8() const { return ____followPos_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__followPos_8() { return &____followPos_8; }
	inline void set__followPos_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____followPos_8 = value;
	}

	inline static int32_t get_offset_of__followDelay_9() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____followDelay_9)); }
	inline int32_t get__followDelay_9() const { return ____followDelay_9; }
	inline int32_t* get_address_of__followDelay_9() { return &____followDelay_9; }
	inline void set__followDelay_9(int32_t value)
	{
		____followDelay_9 = value;
	}

	inline static int32_t get_offset_of__parent_10() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____parent_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__parent_10() const { return ____parent_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__parent_10() { return &____parent_10; }
	inline void set__parent_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_10), (void*)value);
	}

	inline static int32_t get_offset_of__parentPos_11() { return static_cast<int32_t>(offsetof(Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B, ____parentPos_11)); }
	inline Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * get__parentPos_11() const { return ____parentPos_11; }
	inline Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 ** get_address_of__parentPos_11() { return &____parentPos_11; }
	inline void set__parentPos_11(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * value)
	{
		____parentPos_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentPos_11), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameManager::_stage
	int32_t ____stage_4;
	// UnityEngine.Animator GameManager::_stageAnim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____stageAnim_5;
	// UnityEngine.Animator GameManager::_clearAnim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____clearAnim_6;
	// UnityEngine.Animator GameManager::_fadeAnim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____fadeAnim_7;
	// UnityEngine.Transform GameManager::_playerPos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____playerPos_8;
	// System.String[] GameManager::_enemyObjects
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____enemyObjects_9;
	// UnityEngine.Transform[] GameManager::_spawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____spawnPoints_10;
	// System.Single GameManager::_nextSpawnDelay
	float ____nextSpawnDelay_11;
	// System.Single GameManager::_curSpawnDelay
	float ____curSpawnDelay_12;
	// UnityEngine.GameObject GameManager::_player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____player_13;
	// UnityEngine.UI.Text GameManager::_scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____scoreText_14;
	// UnityEngine.UI.Image[] GameManager::_lifeImage
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____lifeImage_15;
	// UnityEngine.UI.Image[] GameManager::_boomImage
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____boomImage_16;
	// UnityEngine.GameObject GameManager::_gameOverSet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____gameOverSet_17;
	// ObjectManager GameManager::_objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ____objectManager_18;
	// System.Collections.Generic.List`1<Spawn> GameManager::_spawnList
	List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * ____spawnList_19;
	// System.Int32 GameManager::_spawnIndex
	int32_t ____spawnIndex_20;
	// System.Boolean GameManager::_isSpawnEnd
	bool ____isSpawnEnd_21;

public:
	inline static int32_t get_offset_of__stage_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____stage_4)); }
	inline int32_t get__stage_4() const { return ____stage_4; }
	inline int32_t* get_address_of__stage_4() { return &____stage_4; }
	inline void set__stage_4(int32_t value)
	{
		____stage_4 = value;
	}

	inline static int32_t get_offset_of__stageAnim_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____stageAnim_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__stageAnim_5() const { return ____stageAnim_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__stageAnim_5() { return &____stageAnim_5; }
	inline void set__stageAnim_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____stageAnim_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stageAnim_5), (void*)value);
	}

	inline static int32_t get_offset_of__clearAnim_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____clearAnim_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__clearAnim_6() const { return ____clearAnim_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__clearAnim_6() { return &____clearAnim_6; }
	inline void set__clearAnim_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____clearAnim_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clearAnim_6), (void*)value);
	}

	inline static int32_t get_offset_of__fadeAnim_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____fadeAnim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__fadeAnim_7() const { return ____fadeAnim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__fadeAnim_7() { return &____fadeAnim_7; }
	inline void set__fadeAnim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____fadeAnim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fadeAnim_7), (void*)value);
	}

	inline static int32_t get_offset_of__playerPos_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____playerPos_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__playerPos_8() const { return ____playerPos_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__playerPos_8() { return &____playerPos_8; }
	inline void set__playerPos_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____playerPos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerPos_8), (void*)value);
	}

	inline static int32_t get_offset_of__enemyObjects_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____enemyObjects_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__enemyObjects_9() const { return ____enemyObjects_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__enemyObjects_9() { return &____enemyObjects_9; }
	inline void set__enemyObjects_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____enemyObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyObjects_9), (void*)value);
	}

	inline static int32_t get_offset_of__spawnPoints_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____spawnPoints_10)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__spawnPoints_10() const { return ____spawnPoints_10; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__spawnPoints_10() { return &____spawnPoints_10; }
	inline void set__spawnPoints_10(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____spawnPoints_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spawnPoints_10), (void*)value);
	}

	inline static int32_t get_offset_of__nextSpawnDelay_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____nextSpawnDelay_11)); }
	inline float get__nextSpawnDelay_11() const { return ____nextSpawnDelay_11; }
	inline float* get_address_of__nextSpawnDelay_11() { return &____nextSpawnDelay_11; }
	inline void set__nextSpawnDelay_11(float value)
	{
		____nextSpawnDelay_11 = value;
	}

	inline static int32_t get_offset_of__curSpawnDelay_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____curSpawnDelay_12)); }
	inline float get__curSpawnDelay_12() const { return ____curSpawnDelay_12; }
	inline float* get_address_of__curSpawnDelay_12() { return &____curSpawnDelay_12; }
	inline void set__curSpawnDelay_12(float value)
	{
		____curSpawnDelay_12 = value;
	}

	inline static int32_t get_offset_of__player_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____player_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__player_13() const { return ____player_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__player_13() { return &____player_13; }
	inline void set__player_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____player_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_13), (void*)value);
	}

	inline static int32_t get_offset_of__scoreText_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____scoreText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__scoreText_14() const { return ____scoreText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__scoreText_14() { return &____scoreText_14; }
	inline void set__scoreText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____scoreText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scoreText_14), (void*)value);
	}

	inline static int32_t get_offset_of__lifeImage_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____lifeImage_15)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__lifeImage_15() const { return ____lifeImage_15; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__lifeImage_15() { return &____lifeImage_15; }
	inline void set__lifeImage_15(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____lifeImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lifeImage_15), (void*)value);
	}

	inline static int32_t get_offset_of__boomImage_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____boomImage_16)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__boomImage_16() const { return ____boomImage_16; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__boomImage_16() { return &____boomImage_16; }
	inline void set__boomImage_16(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____boomImage_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boomImage_16), (void*)value);
	}

	inline static int32_t get_offset_of__gameOverSet_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____gameOverSet_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__gameOverSet_17() const { return ____gameOverSet_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__gameOverSet_17() { return &____gameOverSet_17; }
	inline void set__gameOverSet_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____gameOverSet_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameOverSet_17), (void*)value);
	}

	inline static int32_t get_offset_of__objectManager_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____objectManager_18)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get__objectManager_18() const { return ____objectManager_18; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of__objectManager_18() { return &____objectManager_18; }
	inline void set__objectManager_18(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		____objectManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectManager_18), (void*)value);
	}

	inline static int32_t get_offset_of__spawnList_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____spawnList_19)); }
	inline List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * get__spawnList_19() const { return ____spawnList_19; }
	inline List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E ** get_address_of__spawnList_19() { return &____spawnList_19; }
	inline void set__spawnList_19(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * value)
	{
		____spawnList_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spawnList_19), (void*)value);
	}

	inline static int32_t get_offset_of__spawnIndex_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____spawnIndex_20)); }
	inline int32_t get__spawnIndex_20() const { return ____spawnIndex_20; }
	inline int32_t* get_address_of__spawnIndex_20() { return &____spawnIndex_20; }
	inline void set__spawnIndex_20(int32_t value)
	{
		____spawnIndex_20 = value;
	}

	inline static int32_t get_offset_of__isSpawnEnd_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____isSpawnEnd_21)); }
	inline bool get__isSpawnEnd_21() const { return ____isSpawnEnd_21; }
	inline bool* get_address_of__isSpawnEnd_21() { return &____isSpawnEnd_21; }
	inline void set__isSpawnEnd_21(bool value)
	{
		____isSpawnEnd_21 = value;
	}
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Item::_type
	String_t* ____type_4;
	// UnityEngine.Rigidbody2D Item::rigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidbody_5;

public:
	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ____type_4)); }
	inline String_t* get__type_4() const { return ____type_4; }
	inline String_t** get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(String_t* value)
	{
		____type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_4), (void*)value);
	}

	inline static int32_t get_offset_of_rigidbody_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___rigidbody_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidbody_5() const { return ___rigidbody_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidbody_5() { return &___rigidbody_5; }
	inline void set_rigidbody_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_5), (void*)value);
	}
};


// ObjectManager
struct ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ObjectManager::_enemyBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____enemyBPrefab_4;
	// UnityEngine.GameObject ObjectManager::_enemyLPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____enemyLPrefab_5;
	// UnityEngine.GameObject ObjectManager::_enemyMPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____enemyMPrefab_6;
	// UnityEngine.GameObject ObjectManager::_enemySPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____enemySPrefab_7;
	// UnityEngine.GameObject ObjectManager::_itemCoinPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemCoinPrefab_8;
	// UnityEngine.GameObject ObjectManager::_itemPowerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemPowerPrefab_9;
	// UnityEngine.GameObject ObjectManager::_itemBoomPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____itemBoomPrefab_10;
	// UnityEngine.GameObject ObjectManager::_bulletPlayerAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletPlayerAPrefab_11;
	// UnityEngine.GameObject ObjectManager::_bulletPlayerBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletPlayerBPrefab_12;
	// UnityEngine.GameObject ObjectManager::_bulletEnemyAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletEnemyAPrefab_13;
	// UnityEngine.GameObject ObjectManager::_bulletEnemyBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletEnemyBPrefab_14;
	// UnityEngine.GameObject ObjectManager::_bulletBossAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletBossAPrefab_15;
	// UnityEngine.GameObject ObjectManager::_bulletBossBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletBossBPrefab_16;
	// UnityEngine.GameObject ObjectManager::_bulletFollwerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletFollwerPrefab_17;
	// UnityEngine.GameObject ObjectManager::_explosionPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____explosionPrefab_18;
	// UnityEngine.GameObject[] ObjectManager::_enemyB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____enemyB_19;
	// UnityEngine.GameObject[] ObjectManager::_enemyL
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____enemyL_20;
	// UnityEngine.GameObject[] ObjectManager::_enemyM
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____enemyM_21;
	// UnityEngine.GameObject[] ObjectManager::_enemyS
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____enemyS_22;
	// UnityEngine.GameObject[] ObjectManager::_itemCoin
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____itemCoin_23;
	// UnityEngine.GameObject[] ObjectManager::_itemPower
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____itemPower_24;
	// UnityEngine.GameObject[] ObjectManager::_itemBoom
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____itemBoom_25;
	// UnityEngine.GameObject[] ObjectManager::_bulletPlayerA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletPlayerA_26;
	// UnityEngine.GameObject[] ObjectManager::_bulletPlayerB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletPlayerB_27;
	// UnityEngine.GameObject[] ObjectManager::_bulletEnemyA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletEnemyA_28;
	// UnityEngine.GameObject[] ObjectManager::_bulletEnemyB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletEnemyB_29;
	// UnityEngine.GameObject[] ObjectManager::_bulletBossA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletBossA_30;
	// UnityEngine.GameObject[] ObjectManager::_bulletBossB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletBossB_31;
	// UnityEngine.GameObject[] ObjectManager::_bulletFollwer
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____bulletFollwer_32;
	// UnityEngine.GameObject[] ObjectManager::_explosion
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____explosion_33;
	// UnityEngine.GameObject[] ObjectManager::_targetPool
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____targetPool_34;

public:
	inline static int32_t get_offset_of__enemyBPrefab_4() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyBPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__enemyBPrefab_4() const { return ____enemyBPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__enemyBPrefab_4() { return &____enemyBPrefab_4; }
	inline void set__enemyBPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____enemyBPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyBPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of__enemyLPrefab_5() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyLPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__enemyLPrefab_5() const { return ____enemyLPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__enemyLPrefab_5() { return &____enemyLPrefab_5; }
	inline void set__enemyLPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____enemyLPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyLPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of__enemyMPrefab_6() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyMPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__enemyMPrefab_6() const { return ____enemyMPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__enemyMPrefab_6() { return &____enemyMPrefab_6; }
	inline void set__enemyMPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____enemyMPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyMPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of__enemySPrefab_7() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemySPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__enemySPrefab_7() const { return ____enemySPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__enemySPrefab_7() { return &____enemySPrefab_7; }
	inline void set__enemySPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____enemySPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemySPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of__itemCoinPrefab_8() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemCoinPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemCoinPrefab_8() const { return ____itemCoinPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemCoinPrefab_8() { return &____itemCoinPrefab_8; }
	inline void set__itemCoinPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemCoinPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemCoinPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of__itemPowerPrefab_9() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemPowerPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemPowerPrefab_9() const { return ____itemPowerPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemPowerPrefab_9() { return &____itemPowerPrefab_9; }
	inline void set__itemPowerPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemPowerPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemPowerPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of__itemBoomPrefab_10() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemBoomPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__itemBoomPrefab_10() const { return ____itemBoomPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__itemBoomPrefab_10() { return &____itemBoomPrefab_10; }
	inline void set__itemBoomPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____itemBoomPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemBoomPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of__bulletPlayerAPrefab_11() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletPlayerAPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletPlayerAPrefab_11() const { return ____bulletPlayerAPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletPlayerAPrefab_11() { return &____bulletPlayerAPrefab_11; }
	inline void set__bulletPlayerAPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletPlayerAPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletPlayerAPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of__bulletPlayerBPrefab_12() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletPlayerBPrefab_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletPlayerBPrefab_12() const { return ____bulletPlayerBPrefab_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletPlayerBPrefab_12() { return &____bulletPlayerBPrefab_12; }
	inline void set__bulletPlayerBPrefab_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletPlayerBPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletPlayerBPrefab_12), (void*)value);
	}

	inline static int32_t get_offset_of__bulletEnemyAPrefab_13() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletEnemyAPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletEnemyAPrefab_13() const { return ____bulletEnemyAPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletEnemyAPrefab_13() { return &____bulletEnemyAPrefab_13; }
	inline void set__bulletEnemyAPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletEnemyAPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletEnemyAPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of__bulletEnemyBPrefab_14() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletEnemyBPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletEnemyBPrefab_14() const { return ____bulletEnemyBPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletEnemyBPrefab_14() { return &____bulletEnemyBPrefab_14; }
	inline void set__bulletEnemyBPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletEnemyBPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletEnemyBPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of__bulletBossAPrefab_15() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletBossAPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletBossAPrefab_15() const { return ____bulletBossAPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletBossAPrefab_15() { return &____bulletBossAPrefab_15; }
	inline void set__bulletBossAPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletBossAPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletBossAPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of__bulletBossBPrefab_16() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletBossBPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletBossBPrefab_16() const { return ____bulletBossBPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletBossBPrefab_16() { return &____bulletBossBPrefab_16; }
	inline void set__bulletBossBPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletBossBPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletBossBPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of__bulletFollwerPrefab_17() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletFollwerPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletFollwerPrefab_17() const { return ____bulletFollwerPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletFollwerPrefab_17() { return &____bulletFollwerPrefab_17; }
	inline void set__bulletFollwerPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletFollwerPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletFollwerPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of__explosionPrefab_18() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____explosionPrefab_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__explosionPrefab_18() const { return ____explosionPrefab_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__explosionPrefab_18() { return &____explosionPrefab_18; }
	inline void set__explosionPrefab_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____explosionPrefab_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____explosionPrefab_18), (void*)value);
	}

	inline static int32_t get_offset_of__enemyB_19() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyB_19)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__enemyB_19() const { return ____enemyB_19; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__enemyB_19() { return &____enemyB_19; }
	inline void set__enemyB_19(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____enemyB_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyB_19), (void*)value);
	}

	inline static int32_t get_offset_of__enemyL_20() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyL_20)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__enemyL_20() const { return ____enemyL_20; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__enemyL_20() { return &____enemyL_20; }
	inline void set__enemyL_20(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____enemyL_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyL_20), (void*)value);
	}

	inline static int32_t get_offset_of__enemyM_21() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyM_21)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__enemyM_21() const { return ____enemyM_21; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__enemyM_21() { return &____enemyM_21; }
	inline void set__enemyM_21(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____enemyM_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyM_21), (void*)value);
	}

	inline static int32_t get_offset_of__enemyS_22() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____enemyS_22)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__enemyS_22() const { return ____enemyS_22; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__enemyS_22() { return &____enemyS_22; }
	inline void set__enemyS_22(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____enemyS_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enemyS_22), (void*)value);
	}

	inline static int32_t get_offset_of__itemCoin_23() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemCoin_23)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__itemCoin_23() const { return ____itemCoin_23; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__itemCoin_23() { return &____itemCoin_23; }
	inline void set__itemCoin_23(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____itemCoin_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemCoin_23), (void*)value);
	}

	inline static int32_t get_offset_of__itemPower_24() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemPower_24)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__itemPower_24() const { return ____itemPower_24; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__itemPower_24() { return &____itemPower_24; }
	inline void set__itemPower_24(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____itemPower_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemPower_24), (void*)value);
	}

	inline static int32_t get_offset_of__itemBoom_25() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____itemBoom_25)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__itemBoom_25() const { return ____itemBoom_25; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__itemBoom_25() { return &____itemBoom_25; }
	inline void set__itemBoom_25(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____itemBoom_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____itemBoom_25), (void*)value);
	}

	inline static int32_t get_offset_of__bulletPlayerA_26() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletPlayerA_26)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletPlayerA_26() const { return ____bulletPlayerA_26; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletPlayerA_26() { return &____bulletPlayerA_26; }
	inline void set__bulletPlayerA_26(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletPlayerA_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletPlayerA_26), (void*)value);
	}

	inline static int32_t get_offset_of__bulletPlayerB_27() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletPlayerB_27)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletPlayerB_27() const { return ____bulletPlayerB_27; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletPlayerB_27() { return &____bulletPlayerB_27; }
	inline void set__bulletPlayerB_27(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletPlayerB_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletPlayerB_27), (void*)value);
	}

	inline static int32_t get_offset_of__bulletEnemyA_28() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletEnemyA_28)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletEnemyA_28() const { return ____bulletEnemyA_28; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletEnemyA_28() { return &____bulletEnemyA_28; }
	inline void set__bulletEnemyA_28(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletEnemyA_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletEnemyA_28), (void*)value);
	}

	inline static int32_t get_offset_of__bulletEnemyB_29() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletEnemyB_29)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletEnemyB_29() const { return ____bulletEnemyB_29; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletEnemyB_29() { return &____bulletEnemyB_29; }
	inline void set__bulletEnemyB_29(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletEnemyB_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletEnemyB_29), (void*)value);
	}

	inline static int32_t get_offset_of__bulletBossA_30() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletBossA_30)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletBossA_30() const { return ____bulletBossA_30; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletBossA_30() { return &____bulletBossA_30; }
	inline void set__bulletBossA_30(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletBossA_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletBossA_30), (void*)value);
	}

	inline static int32_t get_offset_of__bulletBossB_31() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletBossB_31)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletBossB_31() const { return ____bulletBossB_31; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletBossB_31() { return &____bulletBossB_31; }
	inline void set__bulletBossB_31(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletBossB_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletBossB_31), (void*)value);
	}

	inline static int32_t get_offset_of__bulletFollwer_32() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____bulletFollwer_32)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__bulletFollwer_32() const { return ____bulletFollwer_32; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__bulletFollwer_32() { return &____bulletFollwer_32; }
	inline void set__bulletFollwer_32(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____bulletFollwer_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletFollwer_32), (void*)value);
	}

	inline static int32_t get_offset_of__explosion_33() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____explosion_33)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__explosion_33() const { return ____explosion_33; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__explosion_33() { return &____explosion_33; }
	inline void set__explosion_33(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____explosion_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____explosion_33), (void*)value);
	}

	inline static int32_t get_offset_of__targetPool_34() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ____targetPool_34)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__targetPool_34() const { return ____targetPool_34; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__targetPool_34() { return &____targetPool_34; }
	inline void set__targetPool_34(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____targetPool_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetPool_34), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::_moveSpeed
	float ____moveSpeed_4;
	// System.Int32 Player::_life
	int32_t ____life_5;
	// System.Int32 Player::_score
	int32_t ____score_6;
	// System.Boolean Player::_isHit
	bool ____isHit_7;
	// System.Boolean Player::_isTouchTop
	bool ____isTouchTop_8;
	// System.Boolean Player::_isTouchBottom
	bool ____isTouchBottom_9;
	// System.Boolean Player::_isTouchLeft
	bool ____isTouchLeft_10;
	// System.Boolean Player::_isTouchRight
	bool ____isTouchRight_11;
	// System.Single Player::_bulletSpeed
	float ____bulletSpeed_12;
	// System.Int32 Player::_bulletPower
	int32_t ____bulletPower_13;
	// System.Int32 Player::_bulletMaxPower
	int32_t ____bulletMaxPower_14;
	// System.Single Player::_curShotDelay
	float ____curShotDelay_15;
	// System.Single Player::_maxShotDelay
	float ____maxShotDelay_16;
	// UnityEngine.GameObject Player::_bulletObjA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletObjA_17;
	// UnityEngine.GameObject Player::_bulletObjB
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bulletObjB_18;
	// System.Int32 Player::_boom
	int32_t ____boom_19;
	// System.Int32 Player::_maxBoom
	int32_t ____maxBoom_20;
	// System.Boolean Player::_isBoomTime
	bool ____isBoomTime_21;
	// UnityEngine.GameObject Player::_boomEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____boomEffect_22;
	// UnityEngine.GameObject[] Player::_followers
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____followers_23;
	// System.Boolean Player::_isRespawnTime
	bool ____isRespawnTime_24;
	// UnityEngine.SpriteRenderer Player::_sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ____sprite_25;
	// GameManager Player::_gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ____gameManager_26;
	// ObjectManager Player::_objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ____objectManager_27;
	// UnityEngine.Animator Player::_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____animator_28;
	// System.Boolean[] Player::_joyControl
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____joyControl_29;
	// System.Boolean Player::_isControl
	bool ____isControl_30;
	// System.Boolean Player::_isButtonA
	bool ____isButtonA_31;
	// System.Boolean Player::_isButtonB
	bool ____isButtonB_32;

public:
	inline static int32_t get_offset_of__moveSpeed_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____moveSpeed_4)); }
	inline float get__moveSpeed_4() const { return ____moveSpeed_4; }
	inline float* get_address_of__moveSpeed_4() { return &____moveSpeed_4; }
	inline void set__moveSpeed_4(float value)
	{
		____moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of__life_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____life_5)); }
	inline int32_t get__life_5() const { return ____life_5; }
	inline int32_t* get_address_of__life_5() { return &____life_5; }
	inline void set__life_5(int32_t value)
	{
		____life_5 = value;
	}

	inline static int32_t get_offset_of__score_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____score_6)); }
	inline int32_t get__score_6() const { return ____score_6; }
	inline int32_t* get_address_of__score_6() { return &____score_6; }
	inline void set__score_6(int32_t value)
	{
		____score_6 = value;
	}

	inline static int32_t get_offset_of__isHit_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isHit_7)); }
	inline bool get__isHit_7() const { return ____isHit_7; }
	inline bool* get_address_of__isHit_7() { return &____isHit_7; }
	inline void set__isHit_7(bool value)
	{
		____isHit_7 = value;
	}

	inline static int32_t get_offset_of__isTouchTop_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isTouchTop_8)); }
	inline bool get__isTouchTop_8() const { return ____isTouchTop_8; }
	inline bool* get_address_of__isTouchTop_8() { return &____isTouchTop_8; }
	inline void set__isTouchTop_8(bool value)
	{
		____isTouchTop_8 = value;
	}

	inline static int32_t get_offset_of__isTouchBottom_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isTouchBottom_9)); }
	inline bool get__isTouchBottom_9() const { return ____isTouchBottom_9; }
	inline bool* get_address_of__isTouchBottom_9() { return &____isTouchBottom_9; }
	inline void set__isTouchBottom_9(bool value)
	{
		____isTouchBottom_9 = value;
	}

	inline static int32_t get_offset_of__isTouchLeft_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isTouchLeft_10)); }
	inline bool get__isTouchLeft_10() const { return ____isTouchLeft_10; }
	inline bool* get_address_of__isTouchLeft_10() { return &____isTouchLeft_10; }
	inline void set__isTouchLeft_10(bool value)
	{
		____isTouchLeft_10 = value;
	}

	inline static int32_t get_offset_of__isTouchRight_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isTouchRight_11)); }
	inline bool get__isTouchRight_11() const { return ____isTouchRight_11; }
	inline bool* get_address_of__isTouchRight_11() { return &____isTouchRight_11; }
	inline void set__isTouchRight_11(bool value)
	{
		____isTouchRight_11 = value;
	}

	inline static int32_t get_offset_of__bulletSpeed_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____bulletSpeed_12)); }
	inline float get__bulletSpeed_12() const { return ____bulletSpeed_12; }
	inline float* get_address_of__bulletSpeed_12() { return &____bulletSpeed_12; }
	inline void set__bulletSpeed_12(float value)
	{
		____bulletSpeed_12 = value;
	}

	inline static int32_t get_offset_of__bulletPower_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____bulletPower_13)); }
	inline int32_t get__bulletPower_13() const { return ____bulletPower_13; }
	inline int32_t* get_address_of__bulletPower_13() { return &____bulletPower_13; }
	inline void set__bulletPower_13(int32_t value)
	{
		____bulletPower_13 = value;
	}

	inline static int32_t get_offset_of__bulletMaxPower_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____bulletMaxPower_14)); }
	inline int32_t get__bulletMaxPower_14() const { return ____bulletMaxPower_14; }
	inline int32_t* get_address_of__bulletMaxPower_14() { return &____bulletMaxPower_14; }
	inline void set__bulletMaxPower_14(int32_t value)
	{
		____bulletMaxPower_14 = value;
	}

	inline static int32_t get_offset_of__curShotDelay_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____curShotDelay_15)); }
	inline float get__curShotDelay_15() const { return ____curShotDelay_15; }
	inline float* get_address_of__curShotDelay_15() { return &____curShotDelay_15; }
	inline void set__curShotDelay_15(float value)
	{
		____curShotDelay_15 = value;
	}

	inline static int32_t get_offset_of__maxShotDelay_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____maxShotDelay_16)); }
	inline float get__maxShotDelay_16() const { return ____maxShotDelay_16; }
	inline float* get_address_of__maxShotDelay_16() { return &____maxShotDelay_16; }
	inline void set__maxShotDelay_16(float value)
	{
		____maxShotDelay_16 = value;
	}

	inline static int32_t get_offset_of__bulletObjA_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____bulletObjA_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletObjA_17() const { return ____bulletObjA_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletObjA_17() { return &____bulletObjA_17; }
	inline void set__bulletObjA_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletObjA_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletObjA_17), (void*)value);
	}

	inline static int32_t get_offset_of__bulletObjB_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____bulletObjB_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bulletObjB_18() const { return ____bulletObjB_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bulletObjB_18() { return &____bulletObjB_18; }
	inline void set__bulletObjB_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bulletObjB_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bulletObjB_18), (void*)value);
	}

	inline static int32_t get_offset_of__boom_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____boom_19)); }
	inline int32_t get__boom_19() const { return ____boom_19; }
	inline int32_t* get_address_of__boom_19() { return &____boom_19; }
	inline void set__boom_19(int32_t value)
	{
		____boom_19 = value;
	}

	inline static int32_t get_offset_of__maxBoom_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____maxBoom_20)); }
	inline int32_t get__maxBoom_20() const { return ____maxBoom_20; }
	inline int32_t* get_address_of__maxBoom_20() { return &____maxBoom_20; }
	inline void set__maxBoom_20(int32_t value)
	{
		____maxBoom_20 = value;
	}

	inline static int32_t get_offset_of__isBoomTime_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isBoomTime_21)); }
	inline bool get__isBoomTime_21() const { return ____isBoomTime_21; }
	inline bool* get_address_of__isBoomTime_21() { return &____isBoomTime_21; }
	inline void set__isBoomTime_21(bool value)
	{
		____isBoomTime_21 = value;
	}

	inline static int32_t get_offset_of__boomEffect_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____boomEffect_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__boomEffect_22() const { return ____boomEffect_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__boomEffect_22() { return &____boomEffect_22; }
	inline void set__boomEffect_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____boomEffect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boomEffect_22), (void*)value);
	}

	inline static int32_t get_offset_of__followers_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____followers_23)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__followers_23() const { return ____followers_23; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__followers_23() { return &____followers_23; }
	inline void set__followers_23(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____followers_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____followers_23), (void*)value);
	}

	inline static int32_t get_offset_of__isRespawnTime_24() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isRespawnTime_24)); }
	inline bool get__isRespawnTime_24() const { return ____isRespawnTime_24; }
	inline bool* get_address_of__isRespawnTime_24() { return &____isRespawnTime_24; }
	inline void set__isRespawnTime_24(bool value)
	{
		____isRespawnTime_24 = value;
	}

	inline static int32_t get_offset_of__sprite_25() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____sprite_25)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get__sprite_25() const { return ____sprite_25; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of__sprite_25() { return &____sprite_25; }
	inline void set__sprite_25(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		____sprite_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sprite_25), (void*)value);
	}

	inline static int32_t get_offset_of__gameManager_26() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____gameManager_26)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get__gameManager_26() const { return ____gameManager_26; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of__gameManager_26() { return &____gameManager_26; }
	inline void set__gameManager_26(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		____gameManager_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameManager_26), (void*)value);
	}

	inline static int32_t get_offset_of__objectManager_27() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____objectManager_27)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get__objectManager_27() const { return ____objectManager_27; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of__objectManager_27() { return &____objectManager_27; }
	inline void set__objectManager_27(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		____objectManager_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectManager_27), (void*)value);
	}

	inline static int32_t get_offset_of__animator_28() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____animator_28)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__animator_28() const { return ____animator_28; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__animator_28() { return &____animator_28; }
	inline void set__animator_28(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____animator_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animator_28), (void*)value);
	}

	inline static int32_t get_offset_of__joyControl_29() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____joyControl_29)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__joyControl_29() const { return ____joyControl_29; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__joyControl_29() { return &____joyControl_29; }
	inline void set__joyControl_29(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____joyControl_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____joyControl_29), (void*)value);
	}

	inline static int32_t get_offset_of__isControl_30() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isControl_30)); }
	inline bool get__isControl_30() const { return ____isControl_30; }
	inline bool* get_address_of__isControl_30() { return &____isControl_30; }
	inline void set__isControl_30(bool value)
	{
		____isControl_30 = value;
	}

	inline static int32_t get_offset_of__isButtonA_31() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isButtonA_31)); }
	inline bool get__isButtonA_31() const { return ____isButtonA_31; }
	inline bool* get_address_of__isButtonA_31() { return &____isButtonA_31; }
	inline void set__isButtonA_31(bool value)
	{
		____isButtonA_31 = value;
	}

	inline static int32_t get_offset_of__isButtonB_32() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isButtonB_32)); }
	inline bool get__isButtonB_32() const { return ____isButtonB_32; }
	inline bool* get_address_of__isButtonB_32() { return &____isButtonB_32; }
	inline void set__isButtonB_32(bool value)
	{
		____isButtonB_32 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void Background::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Move_mFBCCD90DE9F1339ED7EF314E5B945A30041609D1 (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method);
// System.Void Background::Scrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Scrolling_mF3D7602F33CF6E6FC170CF67DAE67DCEE652944E (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Enemy::FireFoward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireAround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectManager::MakeObject(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameManager::CallExplosion(UnityEngine.Vector3,Explosion/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallExplosion_m811633CBFAA55F8484BE7632DAA5A98684B57B4B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, int32_t ___type1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void ObjectManager::DeleteAllObj(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_DeleteAllObj_m403F24A2504D6ABE4965FEE05F12C37C3DFF195D (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameManager::StageEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageEnd_m06A3515BDA9C7F82B46BA7171DDD43C8816AD414 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Enemy::OnHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___damamge0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
inline void Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496 (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_gshared)(__this, method);
}
// System.Void Follwer::Watch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Watch_m98C9B295F47C5AB07BE37E5ACBB140F6E1F57A35 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method);
// System.Void Follwer::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Follow_m891A388D57B496E1FB86A0C361E7EDF6E5080743 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method);
// System.Void Follwer::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Fire_m1F2C3B08EA43ABC7CF755BA903026A4111EF6162 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method);
// System.Void Follwer::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Reload_mAD2E70C17282994A109CBACE36EBBD7C965C9AA1 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Contains(!0)
inline bool Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(!0)
inline void Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6 (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
inline int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Spawn>::.ctor()
inline void List_1__ctor_m877167BB69E95B9E7E0D0A68D03EF53C9C52A89F (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameManager::StageStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageStart_m39051F3EC247C6A5FDE96F362EE04C6F99BDD100 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GameManager::ReadSpawnFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReadSpawnFile_m51DCD3F1B7B0EC9560C44153DE012105C0D872C5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Spawn>::Clear()
inline void List_1_Clear_mB50280CD112F29B6C914B99BEF4828E13CFB4173 (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void Spawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn__ctor_m29DA62C57DCB06B5990FB843EE2F8533D4FCEC1F (Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Spawn>::Add(!0)
inline void List_1_Add_m5F6919BE52FA55770B5C7A34C9F71F8BB114A1EF (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * __this, Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *, Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Spawn>::get_Item(System.Int32)
inline Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_inline (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * (*) (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void GameManager::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Spawn>::get_Count()
inline int32_t List_1_get_Count_mF0E2E94DF2A481AD11B159826B191240B4DF0DF4_inline (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Explosion>()
inline Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Explosion::StartExplosion(Explosion/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_StartExplosion_m02946DCF2B5D841F6346225B4DAC878ECBC20005 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void ObjectManager::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void GameManager::UpdateBoomIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___boom0, const RuntimeMethod* method);
// System.Void Player::Unbeatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void GameManager::UpdateLifeIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___life0, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Item>()
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Player::AddFollwer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AddFollwer_mD0D2C3540F29F48157081546EF5A1BFFD51F49A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] ObjectManager::GetPool(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Background::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Awake_mBD352D2442E9AA015065EAA9B18FDDDD37942489 (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method)
{
	{
		// _viewHeight = Camera.main.orthographicSize * 2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		__this->set__viewHeight_8(((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))));
		// }
		return;
	}
}
// System.Void Background::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Update_mB8A15F1B61C25A44DA2539952B66C4CE2A560250 (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Background_Move_mFBCCD90DE9F1339ED7EF314E5B945A30041609D1(__this, /*hidden argument*/NULL);
		// Scrolling();
		Background_Scrolling_mF3D7602F33CF6E6FC170CF67DAE67DCEE652944E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Background::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Move_mFBCCD90DE9F1339ED7EF314E5B945A30041609D1 (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 curPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 nextPos = Vector3.down * _speed * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_3 = __this->get__speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// transform.position = curPos + nextPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Background::Scrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Scrolling_mF3D7602F33CF6E6FC170CF67DAE67DCEE652944E (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * G_B3_0 = NULL;
	Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * G_B4_1 = NULL;
	{
		// if (_sprites[_endIndex].position.y < _viewHeight * (-1))
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get__sprites_7();
		int32_t L_1 = __this->get__endIndex_6();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		float L_6 = __this->get__viewHeight_8();
		if ((!(((float)L_5) < ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(-1.0f)))))))
		{
			goto IL_00a9;
		}
	}
	{
		// Vector3 backSpritePos = _sprites[_startIndex].localPosition;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7 = __this->get__sprites_7();
		int32_t L_8 = __this->get__startIndex_5();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// Vector3 frontSpritePos = _sprites[_endIndex].localPosition;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = __this->get__sprites_7();
		int32_t L_13 = __this->get__endIndex_6();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_15, /*hidden argument*/NULL);
		// _sprites[_endIndex].transform.localPosition = backSpritePos + Vector3.up * _viewHeight;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_17 = __this->get__sprites_7();
		int32_t L_18 = __this->get__endIndex_6();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_24 = __this->get__viewHeight_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_21, L_26, /*hidden argument*/NULL);
		// int startIndexSave = _startIndex;
		int32_t L_27 = __this->get__startIndex_5();
		V_1 = L_27;
		// _startIndex = _endIndex;
		int32_t L_28 = __this->get__endIndex_6();
		__this->set__startIndex_5(L_28);
		// _endIndex = (startIndexSave - 1) == -1 ? _sprites.Length - 1 : (startIndexSave - 1);
		int32_t L_29 = V_1;
		G_B2_0 = __this;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1))) == ((int32_t)(-1))))
		{
			G_B3_0 = __this;
			goto IL_009a;
		}
	}
	{
		int32_t L_30 = V_1;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		G_B4_1 = G_B2_0;
		goto IL_00a4;
	}

IL_009a:
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_31 = __this->get__sprites_7();
		NullCheck(L_31);
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)1));
		G_B4_1 = G_B3_0;
	}

IL_00a4:
	{
		NullCheck(G_B4_1);
		G_B4_1->set__endIndex_6(G_B4_0);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void Background::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background__ctor_mEC9A50E3A2C20E886BD7FA5D93F73FF0CC9E7B38 (Background_tC6D73F48DF827E02B31002F2B5732270A87FBED3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_mB82408CA535D8533168045E7C0321090448B596B (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// if (isRotate)
		bool L_0 = __this->get_isRotate_5();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// transform.Rotate(Vector3.forward * 10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter2D_m9D34F5DCB36704FBF573BD78A9181790DD6C3B86 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "BorderBullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set__spriteRenderer_20(L_0);
		// if (_enemyName == "B")
		String_t* L_1 = __this->get__enemyName_4();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// _anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__anim_21(L_3);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnEnable_mC3C18F9F17C547216EF7C2716B262497E5CB3ADB (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _health = _maxHealth;
		int32_t L_0 = __this->get__maxHealth_8();
		__this->set__health_7(L_0);
		// if (_enemyName == "B")
		String_t* L_1 = __this->get__enemyName_4();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Invoke("Stop", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717, (2.0f), /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Enemy::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Stop_m335DA34C8020A098F8EC5777A014160C05919944 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!gameObject.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Rigidbody2D rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		// rigidbody.velocity = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_2, L_3, /*hidden argument*/NULL);
		// Invoke("Think", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Think_mD4F5C77DABB792ED7E30E835782851422325C48D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B2_0 = NULL;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B3_1 = NULL;
	{
		// patternIndex = patternIndex == 3 ? 0 : patternIndex + 1;
		int32_t L_0 = __this->get_patternIndex_22();
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_patternIndex_22();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_patternIndex_22(G_B3_0);
		// curPatternCount = 0;
		__this->set_curPatternCount_23(0);
		// switch (patternIndex)
		int32_t L_2 = __this->get_patternIndex_22();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0054;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		// FireFoward();
		Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// FireShot();
		Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004d:
	{
		// FireArc();
		Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0054:
	{
		// FireAround();
		Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireFoward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_3 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_4 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_5 = NULL;
	{
		// if (_health <= 0) return;
		int32_t L_0 = __this->get__health_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (_health <= 0) return;
		return;
	}

IL_000a:
	{
		// GameObject bulletR = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get__objectManager_18();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_1, ((int32_t)11), /*hidden argument*/NULL);
		// GameObject bulletRR = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_3 = __this->get__objectManager_18();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_3, ((int32_t)11), /*hidden argument*/NULL);
		V_0 = L_4;
		// GameObject bulletL = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_5 = __this->get__objectManager_18();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_5, ((int32_t)11), /*hidden argument*/NULL);
		V_1 = L_6;
		// GameObject bulletLL = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_7 = __this->get__objectManager_18();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_7, ((int32_t)11), /*hidden argument*/NULL);
		V_2 = L_8;
		// bulletR.transform.position = transform.position + Vector3.right * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_2;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_15, /*hidden argument*/NULL);
		// bulletRR.transform.position = transform.position + Vector3.right * 0.45f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, (0.449999988f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_22, /*hidden argument*/NULL);
		// bulletL.transform.position = transform.position + Vector3.left * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_29, /*hidden argument*/NULL);
		// bulletLL.transform.position = transform.position + Vector3.left * 0.45f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, (0.449999988f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_36, /*hidden argument*/NULL);
		// Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();
		NullCheck(L_9);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_37;
		L_37 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_9, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigidRR = bulletRR.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_0;
		NullCheck(L_38);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39;
		L_39 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_38, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_3 = L_39;
		// Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		NullCheck(L_40);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41;
		L_41 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_40, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_4 = L_41;
		// Rigidbody2D rigidLL = bulletLL.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_2;
		NullCheck(L_42);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43;
		L_43 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_42, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_5 = L_43;
		// rigidR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_44, (8.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_37, L_45, 1, /*hidden argument*/NULL);
		// rigidRR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_47, (8.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_46, L_48, 1, /*hidden argument*/NULL);
		// rigidL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_49 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_50, (8.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_49, L_51, 1, /*hidden argument*/NULL);
		// rigidLL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_52 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		L_53 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		L_54 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_53, (8.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_52, L_54, 1, /*hidden argument*/NULL);
		// curPatternCount++;
		int32_t L_55 = __this->get_curPatternCount_23();
		__this->set_curPatternCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
		// if (curPatternCount < maxPatternCount[patternIndex])
		int32_t L_56 = __this->get_curPatternCount_23();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = __this->get_maxPatternCount_24();
		int32_t L_58 = __this->get_patternIndex_22();
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((((int32_t)L_56) >= ((int32_t)L_60)))
		{
			goto IL_0192;
		}
	}
	{
		// Invoke("FireFoward", 0.15f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B, (0.150000006f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0192:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_health <= 0) return;
		int32_t L_0 = __this->get__health_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (_health <= 0) return;
		return;
	}

IL_000a:
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_00a7;
	}

IL_0011:
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get__objectManager_18();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_1, ((int32_t)10), /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_6, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_3);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector2 dirVec = _player.transform.position - transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get__player_17();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// Vector2 ranVec = new Vector2(Random.Range(-0.5f, 0.5f), Random.Range(0f, 2f));
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.5f), (0.5f), /*hidden argument*/NULL);
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (2.0f), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_15, L_16, /*hidden argument*/NULL);
		// dirVec += ranVec;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// rigid.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_20, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_7, L_21, 1, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a7:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		// curPatternCount++;
		int32_t L_24 = __this->get_curPatternCount_23();
		__this->set_curPatternCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		// if (curPatternCount < maxPatternCount[patternIndex])
		int32_t L_25 = __this->get_curPatternCount_23();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = __this->get_maxPatternCount_24();
		int32_t L_27 = __this->get_patternIndex_22();
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_25) >= ((int32_t)L_29)))
		{
			goto IL_00e2;
		}
	}
	{
		// Invoke("FireShot", 0.7f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB, (0.699999988f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e2:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_health <= 0) return;
		int32_t L_0 = __this->get__health_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (_health <= 0) return;
		return;
	}

IL_000a:
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get__objectManager_18();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_1, ((int32_t)9), /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_6, /*hidden argument*/NULL);
		// bullet.transform.rotation = Quaternion.identity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_3;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_9, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_7);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector3 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 10 * curPatternCount / maxPatternCount[patternIndex]), -1);
		int32_t L_11 = __this->get_curPatternCount_23();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_maxPatternCount_24();
		int32_t L_13 = __this->get_patternIndex_22();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16;
		L_16 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(31.4159279f), (float)((float)((float)L_11))))/(float)((float)((float)L_15)))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), L_16, (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// rigid.AddForce(dirVec.normalized * 5, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, (5.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_10, L_21, 1, /*hidden argument*/NULL);
		// curPatternCount++;
		int32_t L_22 = __this->get_curPatternCount_23();
		__this->set_curPatternCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		// if (curPatternCount < maxPatternCount[patternIndex])
		int32_t L_23 = __this->get_curPatternCount_23();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_maxPatternCount_24();
		int32_t L_25 = __this->get_patternIndex_22();
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_23) >= ((int32_t)L_27)))
		{
			goto IL_00c3;
		}
	}
	{
		// Invoke("FireArc", 0.15f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B, (0.150000006f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c3:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireAround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B5_0 = 0;
	{
		// if (_health <= 0) return;
		int32_t L_0 = __this->get__health_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (_health <= 0) return;
		return;
	}

IL_000a:
	{
		// int roundNum = curPatternCount % 2 == 0 ? 50 : 40;
		int32_t L_1 = __this->get_curPatternCount_23();
		if (!((int32_t)((int32_t)L_1%(int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		G_B5_0 = ((int32_t)40);
		goto IL_001a;
	}

IL_0018:
	{
		G_B5_0 = ((int32_t)50);
	}

IL_001a:
	{
		V_0 = G_B5_0;
		// for(int i = 0; i < roundNum; i++)
		V_1 = 0;
		goto IL_00da;
	}

IL_0022:
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletBossB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_2 = __this->get__objectManager_18();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_2, ((int32_t)12), /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_7, /*hidden argument*/NULL);
		// bullet.transform.rotation = Quaternion.identity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_4;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_9, L_10, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_8;
		NullCheck(L_11);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12;
		L_12 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_11, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector2 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 2 * i / roundNum)
		//                             ,Mathf.Sin(Mathf.PI * 2 * i / roundNum));
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		float L_15;
		L_15 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_13))))/(float)((float)((float)L_14)))));
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		float L_18;
		L_18 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_16))))/(float)((float)((float)L_17)))));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_15, L_18, /*hidden argument*/NULL);
		// rigid.AddForce(dirVec.normalized * 2, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_19, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_12, L_20, 1, /*hidden argument*/NULL);
		// Vector3 rotVec = Vector3.forward * 360 * i / roundNum + Vector3.forward * 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (360.0f), /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, ((float)((float)L_23)), /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_24, ((float)((float)L_25)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, (90.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		// bullet.transform.Rotate(rotVec);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
		NullCheck(L_30);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_30, L_31, /*hidden argument*/NULL);
		// for(int i = 0; i < roundNum; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00da:
	{
		// for(int i = 0; i < roundNum; i++)
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0022;
		}
	}
	{
		// curPatternCount++;
		int32_t L_35 = __this->get_curPatternCount_23();
		__this->set_curPatternCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		// if (curPatternCount < maxPatternCount[patternIndex])
		int32_t L_36 = __this->get_curPatternCount_23();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_maxPatternCount_24();
		int32_t L_38 = __this->get_patternIndex_22();
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((((int32_t)L_36) >= ((int32_t)L_40)))
		{
			goto IL_0115;
		}
	}
	{
		// Invoke("FireAround", 0.7f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565, (0.699999988f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0115:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_enemyName == "B")
		String_t* L_0 = __this->get__enemyName_4();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// Fire();
		Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E(__this, /*hidden argument*/NULL);
		// Reload();
		Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (_curShotDelay < _maxShotDelay)
		float L_0 = __this->get__curShotDelay_10();
		float L_1 = __this->get__maxShotDelay_11();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (_enemyName == "S")
		String_t* L_2 = __this->get__enemyName_4();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008b;
		}
	}
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get__objectManager_18();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_4, ((int32_t)9), /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_6);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector3 dirVec = _player.transform.position - transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get__player_17();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// rigid.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, (3.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_10, L_19, 1, /*hidden argument*/NULL);
		// }
		goto IL_01bf;
	}

IL_008b:
	{
		// else if (_enemyName == "L")
		String_t* L_20 = __this->get__enemyName_4();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01bf;
		}
	}
	{
		// GameObject bulletL = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_22 = __this->get__objectManager_18();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_22, ((int32_t)10), /*hidden argument*/NULL);
		V_1 = L_23;
		// bulletL.transform.position = transform.position + Vector3.left * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_30, /*hidden argument*/NULL);
		// GameObject bulletR = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_31 = __this->get__objectManager_18();
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_31, ((int32_t)10), /*hidden argument*/NULL);
		// bulletR.transform.position = transform.position + Vector3.right * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_36, L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_34, L_39, /*hidden argument*/NULL);
		// Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		NullCheck(L_40);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41;
		L_41 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_40, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_2 = L_41;
		// Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();
		NullCheck(L_33);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_42;
		L_42 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_33, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector3 dirVecL = _player.transform.position - transform.position + Vector3.left * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get__player_17();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_49, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_48, L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		// Vector3 dirVecR = _player.transform.position - transform.position + Vector3.right * 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get__player_17();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_54, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_58, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_57, L_59, /*hidden argument*/NULL);
		V_4 = L_60;
		// rigidL.AddForce(dirVecL.normalized * 3, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_61 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_62, (3.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_61, L_64, 1, /*hidden argument*/NULL);
		// rigidR.AddForce(dirVecR.normalized * 3, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_65, (3.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_66, /*hidden argument*/NULL);
		NullCheck(L_42);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_42, L_67, 1, /*hidden argument*/NULL);
	}

IL_01bf:
	{
		// _curShotDelay = 0;
		__this->set__curShotDelay_10((0.0f));
		// }
		return;
	}
}
// System.Void Enemy::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// _curShotDelay += Time.deltaTime;
		float L_0 = __this->get__curShotDelay_10();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__curShotDelay_10(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void Enemy::OnHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___damamge0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092974159CE1F1442B5DED8E26FAD27DDF888AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C62DEEBAA20FFDBEBCFD99B4676A183D807CE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t G_B19_0 = 0;
	{
		// if (_health <= 0)
		int32_t L_0 = __this->get__health_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _health -= damamge;
		int32_t L_1 = __this->get__health_7();
		int32_t L_2 = ___damamge0;
		__this->set__health_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// if (_enemyName == "B")
		String_t* L_3 = __this->get__enemyName_4();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// _anim.SetTrigger("OnHit");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get__anim_21();
		NullCheck(L_5);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_5, _stringLiteral092974159CE1F1442B5DED8E26FAD27DDF888AFA, /*hidden argument*/NULL);
		// }
		goto IL_005f;
	}

IL_003c:
	{
		// _spriteRenderer.sprite = _sprites[1];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get__spriteRenderer_20();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_7 = __this->get__sprites_9();
		NullCheck(L_7);
		int32_t L_8 = 1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_9, /*hidden argument*/NULL);
		// Invoke("ReturnSprite", 0.1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD5C62DEEBAA20FFDBEBCFD99B4676A183D807CE4, (0.100000001f), /*hidden argument*/NULL);
	}

IL_005f:
	{
		// if (_health <= 0)
		int32_t L_10 = __this->get__health_7();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_01d1;
		}
	}
	{
		// Player playerLogic = _player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get__player_17();
		NullCheck(L_11);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_12;
		L_12 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_11, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		// playerLogic._score += _enemyScore;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__score_6();
		int32_t L_15 = __this->get__enemyScore_5();
		NullCheck(L_13);
		L_13->set__score_6(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
		// Explosion.Type type = Explosion.Type.Null;
		V_0 = 5;
		// switch (_enemyName)
		String_t* L_16 = __this->get__enemyName_4();
		V_2 = L_16;
		String_t* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00ce;
		}
	}
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00d2;
		}
	}
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00d8;
	}

IL_00ca:
	{
		// type = Explosion.Type.Small;
		V_0 = 1;
		// break;
		goto IL_00d8;
	}

IL_00ce:
	{
		// type = Explosion.Type.Midium;
		V_0 = 2;
		// break;
		goto IL_00d8;
	}

IL_00d2:
	{
		// type = Explosion.Type.Large;
		V_0 = 3;
		// break;
		goto IL_00d8;
	}

IL_00d6:
	{
		// type = Explosion.Type.Boss;
		V_0 = 4;
	}

IL_00d8:
	{
		// _gameManager.CallExplosion(transform.position, type);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_26 = __this->get__gameManager_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_26);
		GameManager_CallExplosion_m811633CBFAA55F8484BE7632DAA5A98684B57B4B(L_26, L_28, L_29, /*hidden argument*/NULL);
		// int ran = _enemyName == "B" ? 0 : Random.Range(0, 10);
		String_t* L_30 = __this->get__enemyName_4();
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)10), /*hidden argument*/NULL);
		G_B19_0 = L_32;
		goto IL_010c;
	}

IL_010b:
	{
		G_B19_0 = 0;
	}

IL_010c:
	{
		V_1 = G_B19_0;
		// if (ran < 5)
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)5)))
		{
			goto IL_0186;
		}
	}
	{
		// else if (ran < 8)
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) >= ((int32_t)8)))
		{
			goto IL_0138;
		}
	}
	{
		// GameObject itemCoin = _objectManager.MakeObject(ObjectManager.Type.ItemCoin);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_35 = __this->get__objectManager_18();
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_35, 4, /*hidden argument*/NULL);
		// itemCoin.transform.position = transform.position;
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_39, /*hidden argument*/NULL);
		// }
		goto IL_0186;
	}

IL_0138:
	{
		// else if (ran < 9)
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0160;
		}
	}
	{
		// GameObject itemPower = _objectManager.MakeObject(ObjectManager.Type.ItemPower);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_41 = __this->get__objectManager_18();
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_41, 5, /*hidden argument*/NULL);
		// itemPower.transform.position = transform.position;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_45, /*hidden argument*/NULL);
		// }
		goto IL_0186;
	}

IL_0160:
	{
		// else if (ran < 10)
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0186;
		}
	}
	{
		// GameObject itemBoom = _objectManager.MakeObject(ObjectManager.Type.ItemBoom);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_47 = __this->get__objectManager_18();
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_47, 6, /*hidden argument*/NULL);
		// itemBoom.transform.position = transform.position;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_51, /*hidden argument*/NULL);
	}

IL_0186:
	{
		// if (_enemyName == "B")
		String_t* L_52 = __this->get__enemyName_4();
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01b5;
		}
	}
	{
		// _objectManager.DeleteAllObj(ObjectManager.Type.EnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_54 = __this->get__objectManager_18();
		NullCheck(L_54);
		ObjectManager_DeleteAllObj_m403F24A2504D6ABE4965FEE05F12C37C3DFF195D(L_54, 3, /*hidden argument*/NULL);
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// _gameManager.StageEnd();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_55 = __this->get__gameManager_19();
		NullCheck(L_55);
		GameManager_StageEnd_m06A3515BDA9C7F82B46BA7171DDD43C8816AD414(L_55, /*hidden argument*/NULL);
	}

IL_01b5:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_56, (bool)0, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_57, L_58, /*hidden argument*/NULL);
	}

IL_01d1:
	{
		// }
		return;
	}
}
// System.Void Enemy::ReturnSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ReturnSprite_mD052C751EE7F5B0F1B5977E9DD9EB989A8E3D719 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// _spriteRenderer.sprite = _sprites[0];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get__spriteRenderer_20();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get__sprites_9();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * V_0 = NULL;
	{
		// if (collision.gameObject.tag == "BorderBullet" && _enemyName != "B")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = __this->get__enemyName_4();
		bool L_5;
		L_5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_4, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// else if (collision.gameObject.tag == "PlayerBullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// Bullet bullet = collision.gameObject.GetComponent<Bullet>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_15;
		L_15 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_14, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		V_0 = L_15;
		// OnHit(bullet._damage);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get__damage_4();
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(__this, L_17, /*hidden argument*/NULL);
		// collision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = ___collision0;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Explosion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Awake_m3FE24B54470DF47B502AA7DB8B9B5826C6038218 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__anim_4(L_0);
		// }
		return;
	}
}
// System.Void Explosion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnEnable_mF211CDB6A1495F332FBE551AEFFB1D0B67B4C086 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("Disable", 2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Explosion::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Disable_m5D3F50A1C03EA62A0EE6ECD9C9B7B4FF7F0D2E57 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Explosion::StartExplosion(Explosion/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_StartExplosion_m02946DCF2B5D841F6346225B4DAC878ECBC20005 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anim.SetTrigger("OnExplosion");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get__anim_4();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF, /*hidden argument*/NULL);
		int32_t L_1 = ___type0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_002c:
	{
		// transform.localScale = Vector3.one * 0.7f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_2, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0047:
	{
		// transform.localScale = Vector3.one * 1f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0062:
	{
		// transform.localScale = Vector3.one * 2f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_10, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007d:
	{
		// transform.localScale = Vector3.one * 3f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_13, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0098:
	{
		// transform.localScale = Vector3.one * 1f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Explosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion__ctor_m1400515C43124E852380BB8283E15042AF0A5094 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Follwer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Awake_mDF58CE50650FE669724E4B592AEF026693DE7BB4 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _parentPos = new Queue<Vector3>();
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_0 = (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *)il2cpp_codegen_object_new(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496(L_0, /*hidden argument*/Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var);
		__this->set__parentPos_11(L_0);
		// }
		return;
	}
}
// System.Void Follwer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Update_mBC6469F75BB98176A58EB92A4DD4308CB1EE80C3 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	{
		// Watch();
		Follwer_Watch_m98C9B295F47C5AB07BE37E5ACBB140F6E1F57A35(__this, /*hidden argument*/NULL);
		// Follow();
		Follwer_Follow_m891A388D57B496E1FB86A0C361E7EDF6E5080743(__this, /*hidden argument*/NULL);
		// Fire();
		Follwer_Fire_m1F2C3B08EA43ABC7CF755BA903026A4111EF6162(__this, /*hidden argument*/NULL);
		// Reload();
		Follwer_Reload_mAD2E70C17282994A109CBACE36EBBD7C965C9AA1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Follwer::Watch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Watch_m98C9B295F47C5AB07BE37E5ACBB140F6E1F57A35 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_parentPos.Contains(_parent.position))
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_0 = __this->get__parentPos_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get__parent_10();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F(L_0, L_2, /*hidden argument*/Queue_1_Contains_mC516866369FEA4E70FA66124B86C42D2F3011A3F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// _parentPos.Enqueue(_parent.position);
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_4 = __this->get__parentPos_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get__parent_10();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6(L_4, L_6, /*hidden argument*/Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var);
	}

IL_002e:
	{
		// if (_parentPos.Count > _followDelay)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_7 = __this->get__parentPos_11();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_7, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		int32_t L_9 = __this->get__followDelay_9();
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		// _followPos = _parentPos.Dequeue();
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_10 = __this->get__parentPos_11();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD(L_10, /*hidden argument*/Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var);
		__this->set__followPos_8(L_11);
		// }else if(_parentPos.Count < _followDelay)
		return;
	}

IL_0053:
	{
		// }else if(_parentPos.Count < _followDelay)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_12 = __this->get__parentPos_11();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_12, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		int32_t L_14 = __this->get__followDelay_9();
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0077;
		}
	}
	{
		// _followPos = _parent.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get__parent_10();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		__this->set__followPos_8(L_16);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Follwer::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Follow_m891A388D57B496E1FB86A0C361E7EDF6E5080743 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	{
		// transform.position = _followPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get__followPos_8();
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Follwer::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Fire_m1F2C3B08EA43ABC7CF755BA903026A4111EF6162 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Input.GetButton("Fire1"))
		bool L_0;
		L_0 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (_curShotDelay < _maxShotDelay)
		float L_1 = __this->get__curShotDelay_4();
		float L_2 = __this->get__maxShotDelay_5();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletFollwer);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_3 = __this->get__objectManager_7();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_3, ((int32_t)13), /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_8, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_5);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9;
		L_9 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_5, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_11 = __this->get__bulletSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_9, L_12, 1, /*hidden argument*/NULL);
		// _curShotDelay = 0;
		__this->set__curShotDelay_4((0.0f));
		// }
		return;
	}
}
// System.Void Follwer::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer_Reload_mAD2E70C17282994A109CBACE36EBBD7C965C9AA1 (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	{
		// _curShotDelay += Time.deltaTime;
		float L_0 = __this->get__curShotDelay_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__curShotDelay_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void Follwer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follwer__ctor_mBEFB79F2267B03C50E2433B1DC4D5B924709BAAA (Follwer_tBB324CE7D760AB7DCFF38CCF8C909EABF58A150B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m877167BB69E95B9E7E0D0A68D03EF53C9C52A89F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spawnList = new List<Spawn>();
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_0 = (List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E *)il2cpp_codegen_object_new(List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E_il2cpp_TypeInfo_var);
		List_1__ctor_m877167BB69E95B9E7E0D0A68D03EF53C9C52A89F(L_0, /*hidden argument*/List_1__ctor_m877167BB69E95B9E7E0D0A68D03EF53C9C52A89F_RuntimeMethod_var);
		__this->set__spawnList_19(L_0);
		// StageStart();
		GameManager_StageStart_m39051F3EC247C6A5FDE96F362EE04C6F99BDD100(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StageStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageStart_m39051F3EC247C6A5FDE96F362EE04C6F99BDD100 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF11A2A8E3DBC184FC760A83E5E2D488C77EC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE73EBF241BCF05C82947BE72DD3E8651E64FD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB8DD0ECB49DA2F2D46810675F2DF36193780CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9427668B541A15106A8604A8A4EBCD1CA6BF6EB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _stageAnim.SetTrigger("OnTrigger");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get__stageAnim_5();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral9427668B541A15106A8604A8A4EBCD1CA6BF6EB8, /*hidden argument*/NULL);
		// _stageAnim.GetComponent<Text>().text = "STAGE" + _stage + "\nStart";
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get__stageAnim_5();
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t* L_3 = __this->get_address_of__stage_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7CB8DD0ECB49DA2F2D46810675F2DF36193780CE, L_4, _stringLiteral0FF11A2A8E3DBC184FC760A83E5E2D488C77EC92, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// _clearAnim.GetComponent<Text>().text = "STAGE" + _stage + "\nClear";
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get__clearAnim_6();
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_6, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t* L_8 = __this->get_address_of__stage_4();
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7CB8DD0ECB49DA2F2D46810675F2DF36193780CE, L_9, _stringLiteral2AE73EBF241BCF05C82947BE72DD3E8651E64FD4, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// ReadSpawnFile();
		GameManager_ReadSpawnFile_m51DCD3F1B7B0EC9560C44153DE012105C0D872C5(__this, /*hidden argument*/NULL);
		// _fadeAnim.SetTrigger("In");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get__fadeAnim_7();
		NullCheck(L_11);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_11, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StageEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageEnd_m06A3515BDA9C7F82B46BA7171DDD43C8816AD414 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9427668B541A15106A8604A8A4EBCD1CA6BF6EB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE9F23FB71FBF0F774FAB5F494181BDA97B4EA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _clearAnim.SetTrigger("OnTrigger");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get__clearAnim_6();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral9427668B541A15106A8604A8A4EBCD1CA6BF6EB8, /*hidden argument*/NULL);
		// _fadeAnim.SetTrigger("Out");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get__fadeAnim_7();
		NullCheck(L_1);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, /*hidden argument*/NULL);
		// _player.transform.position = _playerPos.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get__player_13();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get__playerPos_8();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// _stage++;
		int32_t L_7 = __this->get__stage_4();
		__this->set__stage_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// if (_stage > 3)
		int32_t L_8 = __this->get__stage_4();
		if ((((int32_t)L_8) <= ((int32_t)3)))
		{
			goto IL_0068;
		}
	}
	{
		// Invoke("GameOver", 7);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, (7.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0068:
	{
		// Invoke("StageStart", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCAE9F23FB71FBF0F774FAB5F494181BDA97B4EA0, (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ReadSpawnFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReadSpawnFile_m51DCD3F1B7B0EC9560C44153DE012105C0D872C5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F6919BE52FA55770B5C7A34C9F71F8BB114A1EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB50280CD112F29B6C914B99BEF4828E13CFB4173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532);
		s_Il2CppMethodInitialized = true;
	}
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * V_0 = NULL;
	String_t* V_1 = NULL;
	Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * V_2 = NULL;
	{
		// _spawnList.Clear();
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_0 = __this->get__spawnList_19();
		NullCheck(L_0);
		List_1_Clear_mB50280CD112F29B6C914B99BEF4828E13CFB4173(L_0, /*hidden argument*/List_1_Clear_mB50280CD112F29B6C914B99BEF4828E13CFB4173_RuntimeMethod_var);
		// _spawnIndex = 0;
		__this->set__spawnIndex_20(0);
		// _isSpawnEnd = false;
		__this->set__isSpawnEnd_21((bool)0);
		// TextAsset textFile = Resources.Load("Stage" + _stage) as TextAsset;
		int32_t* L_1 = __this->get_address_of__stage_4();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532, L_2, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_3, /*hidden argument*/NULL);
		// StringReader stringReader = new StringReader(textFile.text);
		NullCheck(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_4, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_4, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_6 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_00b6;
	}

IL_0045:
	{
		// string line = stringReader.ReadLine();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_7);
		V_1 = L_8;
		// if (line == null)
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		// Spawn spawnData = new Spawn();
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_10 = (Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 *)il2cpp_codegen_object_new(Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2_il2cpp_TypeInfo_var);
		Spawn__ctor_m29DA62C57DCB06B5990FB843EE2F8533D4FCEC1F(L_10, /*hidden argument*/NULL);
		V_2 = L_10;
		// spawnData._delay = float.Parse(line.Split(',')[0]);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_11 = V_2;
		String_t* L_12 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15;
		L_15 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = 0;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18;
		L_18 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_17, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set__delay_0(L_18);
		// spawnData._type = line.Split(',')[1];
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_19 = V_2;
		String_t* L_20 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23;
		L_23 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		L_19->set__type_1(L_25);
		// spawnData._point = int.Parse(line.Split(',')[2]);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_26 = V_2;
		String_t* L_27 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30;
		L_30 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_27, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33;
		L_33 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_32, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set__point_2(L_33);
		// _spawnList.Add(spawnData);
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_34 = __this->get__spawnList_19();
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_35 = V_2;
		NullCheck(L_34);
		List_1_Add_m5F6919BE52FA55770B5C7A34C9F71F8BB114A1EF(L_34, L_35, /*hidden argument*/List_1_Add_m5F6919BE52FA55770B5C7A34C9F71F8BB114A1EF_RuntimeMethod_var);
	}

IL_00b6:
	{
		// while (stringReader != null)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_36 = V_0;
		if (L_36)
		{
			goto IL_0045;
		}
	}

IL_00b9:
	{
		// stringReader.Close();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_37 = V_0;
		NullCheck(L_37);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_37);
		// _nextSpawnDelay = _spawnList[0]._delay;
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_38 = __this->get__spawnList_19();
		NullCheck(L_38);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_39;
		L_39 = List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_inline(L_38, 0, /*hidden argument*/List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		NullCheck(L_39);
		float L_40 = L_39->get__delay_0();
		__this->set__nextSpawnDelay_11(L_40);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0);
		s_Il2CppMethodInitialized = true;
	}
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_0 = NULL;
	{
		// _curSpawnDelay += Time.deltaTime;
		float L_0 = __this->get__curSpawnDelay_12();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__curSpawnDelay_12(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (_curSpawnDelay > _nextSpawnDelay && !_isSpawnEnd)
		float L_2 = __this->get__curSpawnDelay_12();
		float L_3 = __this->get__nextSpawnDelay_11();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		bool L_4 = __this->get__isSpawnEnd_21();
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		// SpawnEnemy();
		GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F(__this, /*hidden argument*/NULL);
		// _curSpawnDelay = 0;
		__this->set__curSpawnDelay_12((0.0f));
	}

IL_0039:
	{
		// Player playerLogic = _player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get__player_13();
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		V_0 = L_6;
		// _scoreText.text = string.Format("{0:n0}", playerLogic._score);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get__scoreText_14();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__score_6();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_12);
		// }
		return;
	}
}
// System.Void GameManager::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF0E2E94DF2A481AD11B159826B191240B4DF0DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_3 = NULL;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// ObjectManager.Type enemyType = 0;
		V_0 = 0;
		// switch (_spawnList[_spawnIndex]._type)
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_0 = __this->get__spawnList_19();
		int32_t L_1 = __this->get__spawnIndex_20();
		NullCheck(L_0);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_2;
		L_2 = List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = L_2->get__type_1();
		V_5 = L_3;
		String_t* L_4 = V_5;
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_5 = V_5;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_7 = V_5;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_9 = V_5;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_11 = V_5;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0066;
	}

IL_0058:
	{
		// enemyType = ObjectManager.Type.EnemyS;
		V_0 = 2;
		// break;
		goto IL_0066;
	}

IL_005c:
	{
		// enemyType = ObjectManager.Type.EnemyM;
		V_0 = 1;
		// break;
		goto IL_0066;
	}

IL_0060:
	{
		// enemyType = ObjectManager.Type.EnemyL;
		V_0 = 0;
		// break;
		goto IL_0066;
	}

IL_0064:
	{
		// enemyType = ObjectManager.Type.EnemyB;
		V_0 = 3;
	}

IL_0066:
	{
		// int enemyPoint = _spawnList[_spawnIndex]._point;
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_13 = __this->get__spawnList_19();
		int32_t L_14 = __this->get__spawnIndex_20();
		NullCheck(L_13);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_15;
		L_15 = List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16 = L_15->get__point_2();
		V_1 = L_16;
		// GameObject enemy = _objectManager.MakeObject(enemyType);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_17 = __this->get__objectManager_18();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// enemy.transform.position = _spawnPoints[enemyPoint].position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_2;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_22 = __this->get__spawnPoints_10();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_26, /*hidden argument*/NULL);
		// Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_2;
		NullCheck(L_27);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_3 = L_28;
		// Enemy enemyLogic = enemy.GetComponent<Enemy>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_2;
		NullCheck(L_29);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_30;
		L_30 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_29, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		V_4 = L_30;
		// enemyLogic._player = _player;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_31 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get__player_13();
		NullCheck(L_31);
		L_31->set__player_17(L_32);
		// enemyLogic._objectManager = _objectManager;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_33 = V_4;
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_34 = __this->get__objectManager_18();
		NullCheck(L_33);
		L_33->set__objectManager_18(L_34);
		// enemyLogic._gameManager = this;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_35 = V_4;
		NullCheck(L_35);
		L_35->set__gameManager_19(__this);
		// if (enemyPoint == 5 || enemyPoint == 6)   // Left Spawn
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)5)))
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)6))))
		{
			goto IL_010e;
		}
	}

IL_00db:
	{
		// rigid.velocity = new Vector2(enemyLogic._moveSpeed, -1);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_38 = V_3;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_39 = V_4;
		NullCheck(L_39);
		float L_40 = L_39->get__moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), L_40, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_38, L_41, /*hidden argument*/NULL);
		// enemy.transform.Rotate(Vector3.forward * 90);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_2;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_44, (90.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_43, L_45, /*hidden argument*/NULL);
		// }
		goto IL_016c;
	}

IL_010e:
	{
		// else if (enemyPoint == 7 || enemyPoint == 8)  // Right Spawn
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) == ((int32_t)7)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_47 = V_1;
		if ((!(((uint32_t)L_47) == ((uint32_t)8))))
		{
			goto IL_014f;
		}
	}

IL_0116:
	{
		// rigid.velocity = new Vector2(enemyLogic._moveSpeed * (-1), -1);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_48 = V_3;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_49 = V_4;
		NullCheck(L_49);
		float L_50 = L_49->get__moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), ((float)il2cpp_codegen_multiply((float)L_50, (float)(-1.0f))), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_48);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_48, L_51, /*hidden argument*/NULL);
		// enemy.transform.Rotate(Vector3.back * 90);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = V_2;
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_54, (90.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_53, L_55, /*hidden argument*/NULL);
		// }
		goto IL_016c;
	}

IL_014f:
	{
		// rigid.velocity = new Vector2(0, enemyLogic._moveSpeed * (-1));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_56 = V_3;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_57 = V_4;
		NullCheck(L_57);
		float L_58 = L_57->get__moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_59), (0.0f), ((float)il2cpp_codegen_multiply((float)L_58, (float)(-1.0f))), /*hidden argument*/NULL);
		NullCheck(L_56);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_56, L_59, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// _spawnIndex++;
		int32_t L_60 = __this->get__spawnIndex_20();
		__this->set__spawnIndex_20(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1)));
		// if (_spawnIndex == _spawnList.Count)
		int32_t L_61 = __this->get__spawnIndex_20();
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_62 = __this->get__spawnList_19();
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_mF0E2E94DF2A481AD11B159826B191240B4DF0DF4_inline(L_62, /*hidden argument*/List_1_get_Count_mF0E2E94DF2A481AD11B159826B191240B4DF0DF4_RuntimeMethod_var);
		if ((!(((uint32_t)L_61) == ((uint32_t)L_63))))
		{
			goto IL_0195;
		}
	}
	{
		// _isSpawnEnd = true;
		__this->set__isSpawnEnd_21((bool)1);
		// return;
		return;
	}

IL_0195:
	{
		// _nextSpawnDelay = _spawnList[_spawnIndex]._delay;
		List_1_t92D32EB33B47454D2D5EC397862A8F9318FE303E * L_64 = __this->get__spawnList_19();
		int32_t L_65 = __this->get__spawnIndex_20();
		NullCheck(L_64);
		Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * L_66;
		L_66 = List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_m0847D5F1DE45D95B3DE78B156F5B45CC37E1539C_RuntimeMethod_var);
		NullCheck(L_66);
		float L_67 = L_66->get__delay_0();
		__this->set__nextSpawnDelay_11(L_67);
		// }
		return;
	}
}
// System.Void GameManager::UpdateLifeIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___life0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int idx = 0; idx < 3; idx++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// _lifeImage[idx].color = new Color(1, 1, 1, 0);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get__lifeImage_15();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for (int idx = 0; idx < 3; idx++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002e:
	{
		// for (int idx = 0; idx < 3; idx++)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int idx = 0; idx < life; idx++)
		V_1 = 0;
		goto IL_0060;
	}

IL_0036:
	{
		// _lifeImage[idx].color = new Color(1, 1, 1, 1);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get__lifeImage_15();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// for (int idx = 0; idx < life; idx++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		// for (int idx = 0; idx < life; idx++)
		int32_t L_13 = V_1;
		int32_t L_14 = ___life0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::UpdateBoomIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___boom0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int idx = 0; idx < 3; idx++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// _boomImage[idx].color = new Color(1, 1, 1, 0);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get__boomImage_16();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for (int idx = 0; idx < 3; idx++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002e:
	{
		// for (int idx = 0; idx < 3; idx++)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int idx = 0; idx < boom; idx++)
		V_1 = 0;
		goto IL_0060;
	}

IL_0036:
	{
		// _boomImage[idx].color = new Color(1, 1, 1, 1);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get__boomImage_16();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// for (int idx = 0; idx < boom; idx++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		// for (int idx = 0; idx < boom; idx++)
		int32_t L_13 = V_1;
		int32_t L_14 = ___boom0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("RespawnPlayerExe", 2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::RespawnPlayerExe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayerExe_m8D768BFE45964DCA1CF633FCB5DA28AE94F50E34 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player.transform.position = Vector3.down * 4f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__player_13();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (4.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_3, /*hidden argument*/NULL);
		// _player.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get__player_13();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// Player playerLogic = _player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get__player_13();
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		// playerLogic._isHit = false;
		NullCheck(L_6);
		L_6->set__isHit_7((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// _gameOverSet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__gameOverSet_17();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameRetry_mD9BE940A0CE4CA43BB84E5474025850C78289C11 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::CallExplosion(UnityEngine.Vector3,Explosion/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallExplosion_m811633CBFAA55F8484BE7632DAA5A98684B57B4B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * V_0 = NULL;
	{
		// GameObject explosion = _objectManager.MakeObject(ObjectManager.Type.Explosion);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_0 = __this->get__objectManager_18();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_0, ((int32_t)14), /*hidden argument*/NULL);
		// Explosion explosionLogic = explosion.GetComponent<Explosion>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		NullCheck(L_2);
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_3;
		L_3 = GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78(L_2, /*hidden argument*/GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var);
		V_0 = L_3;
		// explosion.transform.position = pos;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___pos0;
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_5, /*hidden argument*/NULL);
		// explosionLogic.StartExplosion(type);
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_6 = V_0;
		int32_t L_7 = ___type1;
		NullCheck(L_6);
		Explosion_StartExplosion_m02946DCF2B5D841F6346225B4DAC878ECBC20005(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Item::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Awake_m5A258A100673BF7CAF84642D8F8CD3711279AE6A (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigidbody_5(L_0);
		// }
		return;
	}
}
// System.Void Item::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnEnable_m76DD44C5E985797014F44B72923B59A8FC13D87F (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		// rigidbody.velocity = Vector2.down * 1.5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidbody_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, (1.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Awake_m209AD6EB6DFDDC0CD3596887FA613E5D2F5FB649 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _enemyB = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set__enemyB_19(L_0);
		// _enemyL = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set__enemyL_20(L_1);
		// _enemyM = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set__enemyM_21(L_2);
		// _enemyS = new GameObject[20];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->set__enemyS_22(L_3);
		// _itemCoin = new GameObject[20];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->set__itemCoin_23(L_4);
		// _itemPower = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set__itemPower_24(L_5);
		// _itemBoom = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set__itemBoom_25(L_6);
		// _bulletPlayerA = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletPlayerA_26(L_7);
		// _bulletPlayerB = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletPlayerB_27(L_8);
		// _bulletEnemyA = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletEnemyA_28(L_9);
		// _bulletEnemyB = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletEnemyB_29(L_10);
		// _bulletBossA = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletBossA_30(L_11);
		// _bulletBossB = new GameObject[300];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)300));
		__this->set__bulletBossB_31(L_12);
		// _bulletFollwer = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__bulletFollwer_32(L_13);
		// _explosion = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set__explosion_33(L_14);
		// Generate();
		ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectManager::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		// for (int i = 0; i < _enemyB.Length; i++)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// _enemyB[i] = Instantiate(_enemyBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get__enemyB_19();
		int32_t L_1 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get__enemyBPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3);
		// _enemyB[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get__enemyB_19();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _enemyB.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < _enemyB.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get__enemyB_19();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < _enemyL.Length; i++)
		V_1 = 0;
		goto IL_005d;
	}

IL_0038:
	{
		// _enemyL[i] = Instantiate(_enemyLPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get__enemyL_20();
		int32_t L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get__enemyLPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_14);
		// _enemyL[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get__enemyL_20();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _enemyL.Length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005d:
	{
		// for (int i = 0; i < _enemyL.Length; i++)
		int32_t L_20 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get__enemyL_20();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// for (int i = 0; i < _enemyM.Length; i++)
		V_2 = 0;
		goto IL_0091;
	}

IL_006c:
	{
		// _enemyM[i] = Instantiate(_enemyMPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get__enemyM_21();
		int32_t L_23 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get__enemyMPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_25);
		// _enemyM[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = __this->get__enemyM_21();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _enemyM.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0; i < _enemyM.Length; i++)
		int32_t L_31 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = __this->get__enemyM_21();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_006c;
		}
	}
	{
		// for (int i = 0; i < _enemyS.Length; i++)
		V_3 = 0;
		goto IL_00c5;
	}

IL_00a0:
	{
		// _enemyS[i] = Instantiate(_enemySPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = __this->get__enemyS_22();
		int32_t L_34 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get__enemySPrefab_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_35, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_36);
		// _enemyS[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_37 = __this->get__enemyS_22();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _enemyS.Length; i++)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00c5:
	{
		// for (int i = 0; i < _enemyS.Length; i++)
		int32_t L_42 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_43 = __this->get__enemyS_22();
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_00a0;
		}
	}
	{
		// for (int i = 0; i < _itemCoin.Length; i++)
		V_4 = 0;
		goto IL_00fe;
	}

IL_00d5:
	{
		// _itemCoin[i] = Instantiate(_itemCoinPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_44 = __this->get__itemCoin_23();
		int32_t L_45 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get__itemCoinPrefab_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_47);
		// _itemCoin[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_48 = __this->get__itemCoin_23();
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_51, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _itemCoin.Length; i++)
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00fe:
	{
		// for (int i = 0; i < _itemCoin.Length; i++)
		int32_t L_53 = V_4;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54 = __this->get__itemCoin_23();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00d5;
		}
	}
	{
		// for (int i = 0; i < _itemPower.Length; i++)
		V_5 = 0;
		goto IL_0138;
	}

IL_010f:
	{
		// _itemPower[i] = Instantiate(_itemPowerPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_55 = __this->get__itemPower_24();
		int32_t L_56 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get__itemPowerPrefab_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_57, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_58);
		// _itemPower[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = __this->get__itemPower_24();
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_62, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _itemPower.Length; i++)
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0138:
	{
		// for (int i = 0; i < _itemPower.Length; i++)
		int32_t L_64 = V_5;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_65 = __this->get__itemPower_24();
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))))
		{
			goto IL_010f;
		}
	}
	{
		// for (int i = 0; i < _itemBoom.Length; i++)
		V_6 = 0;
		goto IL_0172;
	}

IL_0149:
	{
		// _itemBoom[i] = Instantiate(_itemBoomPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_66 = __this->get__itemBoom_25();
		int32_t L_67 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get__itemBoomPrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_68, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_69);
		// _itemBoom[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_70 = __this->get__itemBoom_25();
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _itemBoom.Length; i++)
		int32_t L_74 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0172:
	{
		// for (int i = 0; i < _itemBoom.Length; i++)
		int32_t L_75 = V_6;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_76 = __this->get__itemBoom_25();
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_0149;
		}
	}
	{
		// for (int i = 0; i < _bulletPlayerA.Length; i++)
		V_7 = 0;
		goto IL_01ac;
	}

IL_0183:
	{
		// _bulletPlayerA[i] = Instantiate(_bulletPlayerAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_77 = __this->get__bulletPlayerA_26();
		int32_t L_78 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get__bulletPlayerAPrefab_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_79, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_80);
		// _bulletPlayerA[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_81 = __this->get__bulletPlayerA_26();
		int32_t L_82 = V_7;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_84, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletPlayerA.Length; i++)
		int32_t L_85 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01ac:
	{
		// for (int i = 0; i < _bulletPlayerA.Length; i++)
		int32_t L_86 = V_7;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = __this->get__bulletPlayerA_26();
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length))))))
		{
			goto IL_0183;
		}
	}
	{
		// for (int i = 0; i < _bulletPlayerB.Length; i++)
		V_8 = 0;
		goto IL_01e6;
	}

IL_01bd:
	{
		// _bulletPlayerB[i] = Instantiate(_bulletPlayerBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get__bulletPlayerB_27();
		int32_t L_89 = V_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get__bulletPlayerBPrefab_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_90, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_91);
		// _bulletPlayerB[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = __this->get__bulletPlayerB_27();
		int32_t L_93 = V_8;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_95, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletPlayerB.Length; i++)
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01e6:
	{
		// for (int i = 0; i < _bulletPlayerB.Length; i++)
		int32_t L_97 = V_8;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_98 = __this->get__bulletPlayerB_27();
		NullCheck(L_98);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length))))))
		{
			goto IL_01bd;
		}
	}
	{
		// for (int i = 0; i < _bulletEnemyA.Length; i++)
		V_9 = 0;
		goto IL_0220;
	}

IL_01f7:
	{
		// _bulletEnemyA[i] = Instantiate(_bulletEnemyAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_99 = __this->get__bulletEnemyA_28();
		int32_t L_100 = V_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = __this->get__bulletEnemyAPrefab_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_101, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_102);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_102);
		// _bulletEnemyA[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_103 = __this->get__bulletEnemyA_28();
		int32_t L_104 = V_9;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_106, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletEnemyA.Length; i++)
		int32_t L_107 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_0220:
	{
		// for (int i = 0; i < _bulletEnemyA.Length; i++)
		int32_t L_108 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_109 = __this->get__bulletEnemyA_28();
		NullCheck(L_109);
		if ((((int32_t)L_108) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))))
		{
			goto IL_01f7;
		}
	}
	{
		// for (int i = 0; i < _bulletEnemyB.Length; i++)
		V_10 = 0;
		goto IL_025a;
	}

IL_0231:
	{
		// _bulletEnemyB[i] = Instantiate(_bulletEnemyBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_110 = __this->get__bulletEnemyB_29();
		int32_t L_111 = V_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = __this->get__bulletEnemyBPrefab_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113;
		L_113 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_112, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_113);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_113);
		// _bulletEnemyB[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_114 = __this->get__bulletEnemyB_29();
		int32_t L_115 = V_10;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_117, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletEnemyB.Length; i++)
		int32_t L_118 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_025a:
	{
		// for (int i = 0; i < _bulletEnemyB.Length; i++)
		int32_t L_119 = V_10;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_120 = __this->get__bulletEnemyB_29();
		NullCheck(L_120);
		if ((((int32_t)L_119) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_120)->max_length))))))
		{
			goto IL_0231;
		}
	}
	{
		// for (int i = 0; i < _bulletBossA.Length; i++)
		V_11 = 0;
		goto IL_0294;
	}

IL_026b:
	{
		// _bulletBossA[i] = Instantiate(_bulletBossAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_121 = __this->get__bulletBossA_30();
		int32_t L_122 = V_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = __this->get__bulletBossAPrefab_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_124;
		L_124 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_123, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_124);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_124);
		// _bulletBossA[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_125 = __this->get__bulletBossA_30();
		int32_t L_126 = V_11;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_128, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletBossA.Length; i++)
		int32_t L_129 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
	}

IL_0294:
	{
		// for (int i = 0; i < _bulletBossA.Length; i++)
		int32_t L_130 = V_11;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_131 = __this->get__bulletBossA_30();
		NullCheck(L_131);
		if ((((int32_t)L_130) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length))))))
		{
			goto IL_026b;
		}
	}
	{
		// for (int i = 0; i < _bulletBossB.Length; i++)
		V_12 = 0;
		goto IL_02ce;
	}

IL_02a5:
	{
		// _bulletBossB[i] = Instantiate(_bulletBossBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_132 = __this->get__bulletBossB_31();
		int32_t L_133 = V_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_134 = __this->get__bulletBossBPrefab_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135;
		L_135 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_134, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_135);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(L_133), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_135);
		// _bulletBossB[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_136 = __this->get__bulletBossB_31();
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_139, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletBossB.Length; i++)
		int32_t L_140 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
	}

IL_02ce:
	{
		// for (int i = 0; i < _bulletBossB.Length; i++)
		int32_t L_141 = V_12;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_142 = __this->get__bulletBossB_31();
		NullCheck(L_142);
		if ((((int32_t)L_141) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))))))
		{
			goto IL_02a5;
		}
	}
	{
		// for (int i = 0; i < _bulletFollwer.Length; i++)
		V_13 = 0;
		goto IL_0308;
	}

IL_02df:
	{
		// _bulletFollwer[i] = Instantiate(_bulletFollwerPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_143 = __this->get__bulletFollwer_32();
		int32_t L_144 = V_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_145 = __this->get__bulletFollwerPrefab_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146;
		L_146 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_145, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, L_146);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_146);
		// _bulletFollwer[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_147 = __this->get__bulletFollwer_32();
		int32_t L_148 = V_13;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_150);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_150, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _bulletFollwer.Length; i++)
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_0308:
	{
		// for (int i = 0; i < _bulletFollwer.Length; i++)
		int32_t L_152 = V_13;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_153 = __this->get__bulletFollwer_32();
		NullCheck(L_153);
		if ((((int32_t)L_152) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_153)->max_length))))))
		{
			goto IL_02df;
		}
	}
	{
		// for (int i = 0; i < _explosion.Length; i++)
		V_14 = 0;
		goto IL_0342;
	}

IL_0319:
	{
		// _explosion[i] = Instantiate(_explosionPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_154 = __this->get__explosion_33();
		int32_t L_155 = V_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_156 = __this->get__explosionPrefab_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_157;
		L_157 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_156, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, L_157);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_157);
		// _explosion[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_158 = __this->get__explosion_33();
		int32_t L_159 = V_14;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_161, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < _explosion.Length; i++)
		int32_t L_162 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
	}

IL_0342:
	{
		// for (int i = 0; i < _explosion.Length; i++)
		int32_t L_163 = V_14;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_164 = __this->get__explosion_33();
		NullCheck(L_164);
		if ((((int32_t)L_163) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length))))))
		{
			goto IL_0319;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectManager::MakeObject(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_007a;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_008b;
			}
			case 5:
			{
				goto IL_009c;
			}
			case 6:
			{
				goto IL_00aa;
			}
			case 7:
			{
				goto IL_00b8;
			}
			case 8:
			{
				goto IL_00c6;
			}
			case 9:
			{
				goto IL_00d4;
			}
			case 10:
			{
				goto IL_00e2;
			}
			case 11:
			{
				goto IL_00f0;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_010c;
			}
			case 14:
			{
				goto IL_011a;
			}
		}
	}
	{
		goto IL_0126;
	}

IL_0047:
	{
		// _targetPool = _enemyB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get__enemyB_19();
		__this->set__targetPool_34(L_1);
		// break;
		goto IL_0126;
	}

IL_0058:
	{
		// _targetPool = _enemyL;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get__enemyL_20();
		__this->set__targetPool_34(L_2);
		// break;
		goto IL_0126;
	}

IL_0069:
	{
		// _targetPool = _enemyM;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get__enemyM_21();
		__this->set__targetPool_34(L_3);
		// break;
		goto IL_0126;
	}

IL_007a:
	{
		// _targetPool = _enemyS;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get__enemyS_22();
		__this->set__targetPool_34(L_4);
		// break;
		goto IL_0126;
	}

IL_008b:
	{
		// _targetPool = _itemCoin;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get__itemCoin_23();
		__this->set__targetPool_34(L_5);
		// break;
		goto IL_0126;
	}

IL_009c:
	{
		// _targetPool = _itemPower;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get__itemPower_24();
		__this->set__targetPool_34(L_6);
		// break;
		goto IL_0126;
	}

IL_00aa:
	{
		// _targetPool = _itemBoom;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get__itemBoom_25();
		__this->set__targetPool_34(L_7);
		// break;
		goto IL_0126;
	}

IL_00b8:
	{
		// _targetPool = _bulletPlayerA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get__bulletPlayerA_26();
		__this->set__targetPool_34(L_8);
		// break;
		goto IL_0126;
	}

IL_00c6:
	{
		// _targetPool = _bulletPlayerB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get__bulletPlayerB_27();
		__this->set__targetPool_34(L_9);
		// break;
		goto IL_0126;
	}

IL_00d4:
	{
		// _targetPool = _bulletEnemyA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get__bulletEnemyA_28();
		__this->set__targetPool_34(L_10);
		// break;
		goto IL_0126;
	}

IL_00e2:
	{
		// _targetPool = _bulletEnemyB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get__bulletEnemyB_29();
		__this->set__targetPool_34(L_11);
		// break;
		goto IL_0126;
	}

IL_00f0:
	{
		// _targetPool = _bulletBossA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get__bulletBossA_30();
		__this->set__targetPool_34(L_12);
		// break;
		goto IL_0126;
	}

IL_00fe:
	{
		// _targetPool = _bulletBossB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get__bulletBossB_31();
		__this->set__targetPool_34(L_13);
		// break;
		goto IL_0126;
	}

IL_010c:
	{
		// _targetPool = _bulletFollwer;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get__bulletFollwer_32();
		__this->set__targetPool_34(L_14);
		// break;
		goto IL_0126;
	}

IL_011a:
	{
		// _targetPool = _explosion;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get__explosion_33();
		__this->set__targetPool_34(L_15);
	}

IL_0126:
	{
		// for (int i = 0; i < _targetPool.Length; i++)
		V_0 = 0;
		goto IL_0154;
	}

IL_012a:
	{
		// if (!_targetPool[i].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = __this->get__targetPool_34();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0150;
		}
	}
	{
		// _targetPool[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get__targetPool_34();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// return _targetPool[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get__targetPool_34();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		return L_28;
	}

IL_0150:
	{
		// for (int i = 0; i < _targetPool.Length; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0154:
	{
		// for (int i = 0; i < _targetPool.Length; i++)
		int32_t L_30 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get__targetPool_34();
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_012a;
		}
	}
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// UnityEngine.GameObject[] ObjectManager::GetPool(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_007a;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_008b;
			}
			case 5:
			{
				goto IL_009c;
			}
			case 6:
			{
				goto IL_00aa;
			}
			case 7:
			{
				goto IL_00b8;
			}
			case 8:
			{
				goto IL_00c6;
			}
			case 9:
			{
				goto IL_00d4;
			}
			case 10:
			{
				goto IL_00e2;
			}
			case 11:
			{
				goto IL_00f0;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_010c;
			}
			case 14:
			{
				goto IL_011a;
			}
		}
	}
	{
		goto IL_0126;
	}

IL_0047:
	{
		// _targetPool = _enemyB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get__enemyB_19();
		__this->set__targetPool_34(L_1);
		// break;
		goto IL_0126;
	}

IL_0058:
	{
		// _targetPool = _enemyL;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get__enemyL_20();
		__this->set__targetPool_34(L_2);
		// break;
		goto IL_0126;
	}

IL_0069:
	{
		// _targetPool = _enemyM;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get__enemyM_21();
		__this->set__targetPool_34(L_3);
		// break;
		goto IL_0126;
	}

IL_007a:
	{
		// _targetPool = _enemyS;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get__enemyS_22();
		__this->set__targetPool_34(L_4);
		// break;
		goto IL_0126;
	}

IL_008b:
	{
		// _targetPool = _itemCoin;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get__itemCoin_23();
		__this->set__targetPool_34(L_5);
		// break;
		goto IL_0126;
	}

IL_009c:
	{
		// _targetPool = _itemPower;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get__itemPower_24();
		__this->set__targetPool_34(L_6);
		// break;
		goto IL_0126;
	}

IL_00aa:
	{
		// _targetPool = _itemBoom;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get__itemBoom_25();
		__this->set__targetPool_34(L_7);
		// break;
		goto IL_0126;
	}

IL_00b8:
	{
		// _targetPool = _bulletPlayerA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get__bulletPlayerA_26();
		__this->set__targetPool_34(L_8);
		// break;
		goto IL_0126;
	}

IL_00c6:
	{
		// _targetPool = _bulletPlayerB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get__bulletPlayerB_27();
		__this->set__targetPool_34(L_9);
		// break;
		goto IL_0126;
	}

IL_00d4:
	{
		// _targetPool = _bulletEnemyA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get__bulletEnemyA_28();
		__this->set__targetPool_34(L_10);
		// break;
		goto IL_0126;
	}

IL_00e2:
	{
		// _targetPool = _bulletEnemyB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get__bulletEnemyB_29();
		__this->set__targetPool_34(L_11);
		// break;
		goto IL_0126;
	}

IL_00f0:
	{
		// _targetPool = _bulletBossA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get__bulletBossA_30();
		__this->set__targetPool_34(L_12);
		// break;
		goto IL_0126;
	}

IL_00fe:
	{
		// _targetPool = _bulletBossB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get__bulletBossB_31();
		__this->set__targetPool_34(L_13);
		// break;
		goto IL_0126;
	}

IL_010c:
	{
		// _targetPool = _bulletFollwer;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get__bulletFollwer_32();
		__this->set__targetPool_34(L_14);
		// break;
		goto IL_0126;
	}

IL_011a:
	{
		// _targetPool = _explosion;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get__explosion_33();
		__this->set__targetPool_34(L_15);
	}

IL_0126:
	{
		// return _targetPool;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = __this->get__targetPool_34();
		return L_16;
	}
}
// System.Void ObjectManager::DeleteAllObj(ObjectManager/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_DeleteAllObj_m403F24A2504D6ABE4965FEE05F12C37C3DFF195D (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (type == Type.EnemyB)
		int32_t L_0 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_008b;
		}
	}
	{
		// for (int index = 0; index < _bulletBossA.Length; index++)
		V_0 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// _bulletBossA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get__bulletBossA_30();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// for (int index = 0; index < _bulletBossA.Length; index++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001d:
	{
		// for (int index = 0; index < _bulletBossA.Length; index++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get__bulletBossA_30();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// for (int index = 0; index < _bulletBossB.Length; index++)
		V_1 = 0;
		goto IL_003e;
	}

IL_002c:
	{
		// _bulletBossB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get__bulletBossB_31();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// for (int index = 0; index < _bulletBossB.Length; index++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003e:
	{
		// for (int index = 0; index < _bulletBossB.Length; index++)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get__bulletBossB_31();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// for (int index = 0; index < _bulletEnemyA.Length; index++)
		V_2 = 0;
		goto IL_005f;
	}

IL_004d:
	{
		// _bulletEnemyA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get__bulletEnemyA_28();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// for (int index = 0; index < _bulletEnemyA.Length; index++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005f:
	{
		// for (int index = 0; index < _bulletEnemyA.Length; index++)
		int32_t L_20 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get__bulletEnemyA_28();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_004d;
		}
	}
	{
		// for (int index = 0; index < _bulletEnemyB.Length; index++)
		V_3 = 0;
		goto IL_0080;
	}

IL_006e:
	{
		// _bulletEnemyB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get__bulletEnemyB_29();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)0, /*hidden argument*/NULL);
		// for (int index = 0; index < _bulletEnemyB.Length; index++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0080:
	{
		// for (int index = 0; index < _bulletEnemyB.Length; index++)
		int32_t L_27 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = __this->get__bulletEnemyB_29();
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_006e;
		}
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void ObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager__ctor_m716EB73D024DE113A9D4D206509F5983216041F8 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__animator_28(L_0);
		// _sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set__sprite_25(L_1);
		// _gameManager.UpdateBoomIcon(_boom);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get__gameManager_26();
		int32_t L_3 = __this->get__boom_19();
		NullCheck(L_2);
		GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnEnable_m7F11EF0AA6B08B6C205F1E33812E134357366D86 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Unbeatable();
		Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Unbeatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _isRespawnTime = !_isRespawnTime;
		bool L_0 = __this->get__isRespawnTime_24();
		__this->set__isRespawnTime_24((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (_isRespawnTime) // #. ���� Ÿ�� ����Ʈ(����)
		bool L_1 = __this->get__isRespawnTime_24();
		if (!L_1)
		{
			goto IL_008a;
		}
	}
	{
		// _sprite.color = new Color(1, 1, 1, 0.5f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get__sprite_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (1.0f), (1.0f), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_2);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_2, L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < _followers.Length; i++)
		V_0 = 0;
		goto IL_006e;
	}

IL_003f:
	{
		// _followers[i].GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.5f);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get__followers_23();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8;
		L_8 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_7, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_9), (1.0f), (1.0f), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_8);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_8, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < _followers.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_006e:
	{
		// for (int i = 0; i < _followers.Length; i++)
		int32_t L_11 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get__followers_23();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_003f;
		}
	}
	{
		// Invoke("Unbeatable", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// _sprite.color = new Color(1, 1, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = __this->get__sprite_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_14), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_13, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < _followers.Length; i++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_00b2:
	{
		// _followers[i].GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get__followers_23();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19;
		L_19 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_18, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_20), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_19, L_20, /*hidden argument*/NULL);
		// for (int i = 0; i < _followers.Length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < _followers.Length; i++)
		int32_t L_22 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = __this->get__followers_23();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_00b2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8(__this, /*hidden argument*/NULL);
		// Fire();
		Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790(__this, /*hidden argument*/NULL);
		// Boom();
		Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8(__this, /*hidden argument*/NULL);
		// Reload();
		Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::JoyPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_JoyPanel_mEF36257D3349F3F04CF86685FE328A7DBB19D67C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 9; i++)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// _joyControl[i] = i == type;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = __this->get__joyControl_29();
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___type0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0));
		// for (int i = 0; i < 9; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0014:
	{
		// for (int i = 0; i < 9; i++)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Player::JoyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_JoyDown_m1CC1B19026F487D52B265737E68A56149D5865D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isControl = true;
		__this->set__isControl_30((bool)1);
		// }
		return;
	}
}
// System.Void Player::JoyUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_JoyUp_m75F24A5D525B4A2BB99B4C7D6582F8C080CD7A78 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isControl = false;
		__this->set__isControl_30((bool)0);
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float h = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float v = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (_joyControl[0]) { h = -1; v = 1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = __this->get__joyControl_29();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if (_joyControl[0]) { h = -1; v = 1; }
		V_0 = (-1.0f);
		// if (_joyControl[0]) { h = -1; v = 1; }
		V_1 = (1.0f);
	}

IL_002c:
	{
		// if (_joyControl[1]) { h = 0; v = 1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_5 = __this->get__joyControl_29();
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (uint8_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// if (_joyControl[1]) { h = 0; v = 1; }
		V_0 = (0.0f);
		// if (_joyControl[1]) { h = 0; v = 1; }
		V_1 = (1.0f);
	}

IL_0042:
	{
		// if (_joyControl[2]) { h = 1; v = 1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = __this->get__joyControl_29();
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// if (_joyControl[2]) { h = 1; v = 1; }
		V_0 = (1.0f);
		// if (_joyControl[2]) { h = 1; v = 1; }
		V_1 = (1.0f);
	}

IL_0058:
	{
		// if (_joyControl[3]) { h = -1; v = 0; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_11 = __this->get__joyControl_29();
		NullCheck(L_11);
		int32_t L_12 = 3;
		uint8_t L_13 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		// if (_joyControl[3]) { h = -1; v = 0; }
		V_0 = (-1.0f);
		// if (_joyControl[3]) { h = -1; v = 0; }
		V_1 = (0.0f);
	}

IL_006e:
	{
		// if (_joyControl[4]) { h = 0; v = 0; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_14 = __this->get__joyControl_29();
		NullCheck(L_14);
		int32_t L_15 = 4;
		uint8_t L_16 = (uint8_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		// if (_joyControl[4]) { h = 0; v = 0; }
		V_0 = (0.0f);
		// if (_joyControl[4]) { h = 0; v = 0; }
		V_1 = (0.0f);
	}

IL_0084:
	{
		// if (_joyControl[5]) { h = 1; v = 0; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = __this->get__joyControl_29();
		NullCheck(L_17);
		int32_t L_18 = 5;
		uint8_t L_19 = (uint8_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		// if (_joyControl[5]) { h = 1; v = 0; }
		V_0 = (1.0f);
		// if (_joyControl[5]) { h = 1; v = 0; }
		V_1 = (0.0f);
	}

IL_009a:
	{
		// if (_joyControl[6]) { h = -1; v = -1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_20 = __this->get__joyControl_29();
		NullCheck(L_20);
		int32_t L_21 = 6;
		uint8_t L_22 = (uint8_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		// if (_joyControl[6]) { h = -1; v = -1; }
		V_0 = (-1.0f);
		// if (_joyControl[6]) { h = -1; v = -1; }
		V_1 = (-1.0f);
	}

IL_00b0:
	{
		// if (_joyControl[7]) { h = 0; v = -1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_23 = __this->get__joyControl_29();
		NullCheck(L_23);
		int32_t L_24 = 7;
		uint8_t L_25 = (uint8_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		// if (_joyControl[7]) { h = 0; v = -1; }
		V_0 = (0.0f);
		// if (_joyControl[7]) { h = 0; v = -1; }
		V_1 = (-1.0f);
	}

IL_00c6:
	{
		// if (_joyControl[8]) { h = 1; v = -1; }
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_26 = __this->get__joyControl_29();
		NullCheck(L_26);
		int32_t L_27 = 8;
		uint8_t L_28 = (uint8_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (!L_28)
		{
			goto IL_00dc;
		}
	}
	{
		// if (_joyControl[8]) { h = 1; v = -1; }
		V_0 = (1.0f);
		// if (_joyControl[8]) { h = 1; v = -1; }
		V_1 = (-1.0f);
	}

IL_00dc:
	{
		// if ((_isTouchRight && h == 1) || (_isTouchLeft && h == -1) || !_isControl)
		bool L_29 = __this->get__isTouchRight_11();
		if (!L_29)
		{
			goto IL_00ec;
		}
	}
	{
		float L_30 = V_0;
		if ((((float)L_30) == ((float)(1.0f))))
		{
			goto IL_0104;
		}
	}

IL_00ec:
	{
		bool L_31 = __this->get__isTouchLeft_10();
		if (!L_31)
		{
			goto IL_00fc;
		}
	}
	{
		float L_32 = V_0;
		if ((((float)L_32) == ((float)(-1.0f))))
		{
			goto IL_0104;
		}
	}

IL_00fc:
	{
		bool L_33 = __this->get__isControl_30();
		if (L_33)
		{
			goto IL_010a;
		}
	}

IL_0104:
	{
		// h = 0;
		V_0 = (0.0f);
	}

IL_010a:
	{
		// if ((_isTouchTop && v == 1) || (_isTouchBottom && v == -1) || !_isControl)
		bool L_34 = __this->get__isTouchTop_8();
		if (!L_34)
		{
			goto IL_011a;
		}
	}
	{
		float L_35 = V_1;
		if ((((float)L_35) == ((float)(1.0f))))
		{
			goto IL_0132;
		}
	}

IL_011a:
	{
		bool L_36 = __this->get__isTouchBottom_9();
		if (!L_36)
		{
			goto IL_012a;
		}
	}
	{
		float L_37 = V_1;
		if ((((float)L_37) == ((float)(-1.0f))))
		{
			goto IL_0132;
		}
	}

IL_012a:
	{
		bool L_38 = __this->get__isControl_30();
		if (L_38)
		{
			goto IL_0138;
		}
	}

IL_0132:
	{
		// v = 0;
		V_1 = (0.0f);
	}

IL_0138:
	{
		// Vector3 curPos = transform.position;        // ������ġ
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		// Vector3 nextPos = new Vector3(h, v, 0) * _moveSpeed * Time.deltaTime;
		float L_41 = V_0;
		float L_42 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), L_41, L_42, (0.0f), /*hidden argument*/NULL);
		float L_44 = __this->get__moveSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		float L_46;
		L_46 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		// transform.position = curPos + nextPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_48, L_51, /*hidden argument*/NULL);
		// if (Input.GetButtonDown("Horizontal") || Input.GetButtonUp("Horizontal"))
		bool L_52;
		L_52 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0190;
		}
	}
	{
		bool L_53;
		L_53 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01a2;
		}
	}

IL_0190:
	{
		// _animator.SetInteger("Input", (int)h);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_54 = __this->get__animator_28();
		float L_55 = V_0;
		NullCheck(L_54);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_54, _stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432, il2cpp_codegen_cast_double_to_int<int32_t>(L_55), /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Player::ButtonAUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonAUp_m78D4100BDF54BD6C2E77C910AE4B45B3C7F7A28C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isButtonA = false;
		__this->set__isButtonA_31((bool)0);
		// }
		return;
	}
}
// System.Void Player::ButtonADown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonADown_m22DAC410DAC2308F167DFDE47F979238B11809D4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isButtonA = true;
		__this->set__isButtonA_31((bool)1);
		// }
		return;
	}
}
// System.Void Player::ButtonBUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonBUp_m8125F07E107D059F525DA9B77129E27838273A96 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isButtonB = false;
		__this->set__isButtonB_32((bool)0);
		// }
		return;
	}
}
// System.Void Player::ButtonBDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonBDown_mABBE886C2DCB46CAE1AD368BCA12AD868B9108D5 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _isButtonB = true;
		__this->set__isButtonB_32((bool)1);
		// }
		return;
	}
}
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_4 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_5 = NULL;
	int32_t V_6 = 0;
	{
		// if (!_isButtonA)
		bool L_0 = __this->get__isButtonA_31();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_curShotDelay < _maxShotDelay)
		float L_1 = __this->get__curShotDelay_15();
		float L_2 = __this->get__maxShotDelay_16();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// switch (_bulletPower)
		int32_t L_3 = __this->get__bulletPower_13();
		V_6 = L_3;
		int32_t L_4 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_0133;
			}
			case 3:
			{
				goto IL_0133;
			}
			case 4:
			{
				goto IL_0133;
			}
			case 5:
			{
				goto IL_0133;
			}
		}
	}
	{
		goto IL_021e;
	}

IL_0046:
	{
		// GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_5 = __this->get__objectManager_27();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_5, 7, /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_10, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_7);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11;
		L_11 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_13 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_11, L_14, 1, /*hidden argument*/NULL);
		// break;
		goto IL_021e;
	}

IL_0088:
	{
		// GameObject doubleBulletL = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_15 = __this->get__objectManager_27();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_15, 7, /*hidden argument*/NULL);
		// doubleBulletL.transform.position = transform.position + Vector3.left * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_23, /*hidden argument*/NULL);
		// GameObject doubleBulletR = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_24 = __this->get__objectManager_27();
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_24, 7, /*hidden argument*/NULL);
		V_0 = L_25;
		// doubleBulletR.transform.position = transform.position + Vector3.right * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_0;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_31, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_32, /*hidden argument*/NULL);
		// Rigidbody2D doubleBulletRigidL = doubleBulletL.GetComponent<Rigidbody2D>();
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33;
		L_33 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D doubleBulletRigidR = doubleBulletR.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_0;
		NullCheck(L_34);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_35;
		L_35 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_34, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_1 = L_35;
		// doubleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_37 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_33);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_33, L_38, 1, /*hidden argument*/NULL);
		// doubleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_41 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_39, L_42, 1, /*hidden argument*/NULL);
		// break;
		goto IL_021e;
	}

IL_0133:
	{
		// GameObject TripleBulletL = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_43 = __this->get__objectManager_27();
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_43, 7, /*hidden argument*/NULL);
		// TripleBulletL.transform.position = transform.position + Vector3.left * 0.4f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = L_44;
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_49, (0.400000006f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_48, L_50, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_46, L_51, /*hidden argument*/NULL);
		// GameObject TripleBulletC = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_52 = __this->get__objectManager_27();
		NullCheck(L_52);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_52, 8, /*hidden argument*/NULL);
		V_2 = L_53;
		// TripleBulletC.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = V_2;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_55, L_57, /*hidden argument*/NULL);
		// GameObject TripleBulletR = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_58 = __this->get__objectManager_27();
		NullCheck(L_58);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = ObjectManager_MakeObject_mF1BB56278F85126D942061C57801F352C5B81D46(L_58, 7, /*hidden argument*/NULL);
		V_3 = L_59;
		// TripleBulletR.transform.position = transform.position + Vector3.right * 0.4f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = V_3;
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_64, (0.400000006f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_63, L_65, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_61, L_66, /*hidden argument*/NULL);
		// Rigidbody2D TripleBulletRigidL = TripleBulletL.GetComponent<Rigidbody2D>();
		NullCheck(L_45);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_67;
		L_67 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_45, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D TripleBulletRigidC = TripleBulletC.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = V_2;
		NullCheck(L_68);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_69;
		L_69 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_68, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_4 = L_69;
		// Rigidbody2D TripleBulletRigidR = TripleBulletR.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = V_3;
		NullCheck(L_70);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_71;
		L_71 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_70, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_5 = L_71;
		// TripleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_73 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_72, L_73, /*hidden argument*/NULL);
		NullCheck(L_67);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_67, L_74, 1, /*hidden argument*/NULL);
		// TripleBulletRigidC.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_75 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		L_76 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_77 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_78;
		L_78 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_76, L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_75, L_78, 1, /*hidden argument*/NULL);
		// TripleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_79 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80;
		L_80 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_81 = __this->get__bulletSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_82;
		L_82 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_80, L_81, /*hidden argument*/NULL);
		NullCheck(L_79);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_79, L_82, 1, /*hidden argument*/NULL);
	}

IL_021e:
	{
		// _curShotDelay = 0;
		__this->set__curShotDelay_15((0.0f));
		// }
		return;
	}
}
// System.Void Player::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1366EE23FBE4F843BC8DC2687F3C4D42AD0FA1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isButtonB)
		bool L_0 = __this->get__isButtonB_32();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_isBoomTime)
		bool L_1 = __this->get__isBoomTime_21();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// if (_boom == 0)
		int32_t L_2 = __this->get__boom_19();
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// _boomEffect.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get__boomEffect_22();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// _isBoomTime = true;
		__this->set__isBoomTime_21((bool)1);
		// _boom--;
		int32_t L_4 = __this->get__boom_19();
		__this->set__boom_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// _gameManager.UpdateBoomIcon(_boom);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get__gameManager_26();
		int32_t L_6 = __this->get__boom_19();
		NullCheck(L_5);
		GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E(L_5, L_6, /*hidden argument*/NULL);
		// Invoke("OffBoomEffect", 3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB1366EE23FBE4F843BC8DC2687F3C4D42AD0FA1C, (3.0f), /*hidden argument*/NULL);
		// Invoke("BoomDamage", 0.2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F, (0.200000003f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// _curShotDelay += Time.deltaTime;
		float L_0 = __this->get__curShotDelay_15();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__curShotDelay_15(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001B5D4A36905876A6AF639AA14FBBF8D0E504D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (collision.gameObject.tag == "Border")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// switch (collision.gameObject.name)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0247;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		return;
	}

IL_005e:
	{
		// _isTouchTop = true;
		__this->set__isTouchTop_8((bool)1);
		// break;
		return;
	}

IL_0066:
	{
		// _isTouchBottom = true;
		__this->set__isTouchBottom_9((bool)1);
		// break;
		return;
	}

IL_006e:
	{
		// _isTouchLeft = true;
		__this->set__isTouchLeft_10((bool)1);
		// break;
		return;
	}

IL_0076:
	{
		// _isTouchRight = true;
		__this->set__isTouchRight_11((bool)1);
		// break;
		return;
	}

IL_007e:
	{
		// else if (collision.gameObject.tag == "Enemy" ||
		//         collision.gameObject.tag == "EnemyBullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00af;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = ___collision0;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0151;
		}
	}

IL_00af:
	{
		// if (_isRespawnTime)
		bool L_24 = __this->get__isRespawnTime_24();
		if (!L_24)
		{
			goto IL_00b8;
		}
	}
	{
		// return;
		return;
	}

IL_00b8:
	{
		// if (_isHit)
		bool L_25 = __this->get__isHit_7();
		if (!L_25)
		{
			goto IL_00c1;
		}
	}
	{
		// return;
		return;
	}

IL_00c1:
	{
		// _isHit = true;
		__this->set__isHit_7((bool)1);
		// _life--;
		int32_t L_26 = __this->get__life_5();
		__this->set__life_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)));
		// _gameManager.UpdateLifeIcon(_life);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_27 = __this->get__gameManager_26();
		int32_t L_28 = __this->get__life_5();
		NullCheck(L_27);
		GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29(L_27, L_28, /*hidden argument*/NULL);
		// _gameManager.CallExplosion(transform.position, Explosion.Type.Player);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = __this->get__gameManager_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameManager_CallExplosion_m811633CBFAA55F8484BE7632DAA5A98684B57B4B(L_29, L_31, 0, /*hidden argument*/NULL);
		// if (_life == 0)
		int32_t L_32 = __this->get__life_5();
		if (L_32)
		{
			goto IL_0113;
		}
	}
	{
		// _gameManager.GameOver();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_33 = __this->get__gameManager_26();
		NullCheck(L_33);
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_33, /*hidden argument*/NULL);
		// }
		goto IL_011e;
	}

IL_0113:
	{
		// _gameManager.RespawnPlayer();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_34 = __this->get__gameManager_26();
		NullCheck(L_34);
		GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE(L_34, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)0, /*hidden argument*/NULL);
		// if (collision.gameObject.tag == "EnemyBullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_36 = ___collision0;
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_37, /*hidden argument*/NULL);
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0247;
		}
	}
	{
		// collision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_40 = ___collision0;
		NullCheck(L_40);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_41, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0151:
	{
		// else if (collision.gameObject.tag == "Item")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_42 = ___collision0;
		NullCheck(L_42);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_43, /*hidden argument*/NULL);
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0247;
		}
	}
	{
		// Item item = collision.gameObject.GetComponent<Item>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_46 = ___collision0;
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_48;
		L_48 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_47, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		// switch (item._type)
		NullCheck(L_48);
		String_t* L_49 = L_48->get__type_4();
		V_0 = L_49;
		String_t* L_50 = V_0;
		if (!L_50)
		{
			goto IL_023b;
		}
	}
	{
		String_t* L_51 = V_0;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_01ae;
		}
	}
	{
		String_t* L_53 = V_0;
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteral001B5D4A36905876A6AF639AA14FBBF8D0E504D3, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_01c2;
		}
	}
	{
		String_t* L_55 = V_0;
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_01fa;
		}
	}
	{
		goto IL_023b;
	}

IL_01ae:
	{
		// _score += 1000;
		int32_t L_57 = __this->get__score_6();
		__this->set__score_6(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)1000))));
		// break;
		goto IL_023b;
	}

IL_01c2:
	{
		// if (_bulletPower == _bulletMaxPower)
		int32_t L_58 = __this->get__bulletPower_13();
		int32_t L_59 = __this->get__bulletMaxPower_14();
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_01e4;
		}
	}
	{
		// _score += 500;
		int32_t L_60 = __this->get__score_6();
		__this->set__score_6(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)((int32_t)500))));
		// }
		goto IL_023b;
	}

IL_01e4:
	{
		// _bulletPower++;
		int32_t L_61 = __this->get__bulletPower_13();
		__this->set__bulletPower_13(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)));
		// AddFollwer();
		Player_AddFollwer_mD0D2C3540F29F48157081546EF5A1BFFD51F49A8(__this, /*hidden argument*/NULL);
		// break;
		goto IL_023b;
	}

IL_01fa:
	{
		// if (_boom == _maxBoom)
		int32_t L_62 = __this->get__boom_19();
		int32_t L_63 = __this->get__maxBoom_20();
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_021c;
		}
	}
	{
		// _score += 1000;
		int32_t L_64 = __this->get__score_6();
		__this->set__score_6(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)((int32_t)1000))));
		// }
		goto IL_023b;
	}

IL_021c:
	{
		// _boom++;
		int32_t L_65 = __this->get__boom_19();
		__this->set__boom_19(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)));
		// _gameManager.UpdateBoomIcon(_boom);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_66 = __this->get__gameManager_26();
		int32_t L_67 = __this->get__boom_19();
		NullCheck(L_66);
		GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E(L_66, L_67, /*hidden argument*/NULL);
	}

IL_023b:
	{
		// collision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_68 = ___collision0;
		NullCheck(L_68);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_69, (bool)0, /*hidden argument*/NULL);
	}

IL_0247:
	{
		// }
		return;
	}
}
// System.Void Player::AddFollwer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AddFollwer_mD0D2C3540F29F48157081546EF5A1BFFD51F49A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if (_bulletPower == 4)
		int32_t L_0 = __this->get__bulletPower_13();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0018;
		}
	}
	{
		// _followers[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get__followers_23();
		NullCheck(L_1);
		int32_t L_2 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// else if (_bulletPower == 5)
		int32_t L_4 = __this->get__bulletPower_13();
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_0030;
		}
	}
	{
		// _followers[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get__followers_23();
		NullCheck(L_5);
		int32_t L_6 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// else if (_bulletPower == 6)
		int32_t L_8 = __this->get__bulletPower_13();
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_0047;
		}
	}
	{
		// _followers[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get__followers_23();
		NullCheck(L_9);
		int32_t L_10 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Player::BoomDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_BoomDamage_m83C64CE9F2F9681140DF41BB08F502EDB241667E (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_2 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_3 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_4 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_5 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_6 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_7 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_8 = NULL;
	int32_t V_9 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_10 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_11 = NULL;
	{
		// GameObject[] enemiesB = _objectManager.GetPool(ObjectManager.Type.EnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_0 = __this->get__objectManager_27();
		NullCheck(L_0);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// GameObject[] enemiesL = _objectManager.GetPool(ObjectManager.Type.EnemyL);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_2 = __this->get__objectManager_27();
		NullCheck(L_2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3;
		L_3 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_2, 0, /*hidden argument*/NULL);
		V_1 = L_3;
		// GameObject[] enemiesM = _objectManager.GetPool(ObjectManager.Type.EnemyM);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get__objectManager_27();
		NullCheck(L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_4, 1, /*hidden argument*/NULL);
		V_2 = L_5;
		// GameObject[] enemiesS = _objectManager.GetPool(ObjectManager.Type.EnemyS);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_6 = __this->get__objectManager_27();
		NullCheck(L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7;
		L_7 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_6, 2, /*hidden argument*/NULL);
		V_3 = L_7;
		// var tempList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_8, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		// tempList.AddRange(enemiesB);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = L_8;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = V_0;
		NullCheck(L_9);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_9, (RuntimeObject*)(RuntimeObject*)L_10, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList.AddRange(enemiesL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = L_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = V_1;
		NullCheck(L_11);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_11, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList.AddRange(enemiesM);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = L_11;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_2;
		NullCheck(L_13);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_13, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList.AddRange(enemiesS);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = L_13;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = V_3;
		NullCheck(L_15);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_15, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// GameObject[] enemies = tempList.ToArray();
		NullCheck(L_15);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17;
		L_17 = List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F(L_15, /*hidden argument*/List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F_RuntimeMethod_var);
		// foreach (GameObject enemy in enemies)
		V_8 = L_17;
		V_9 = 0;
		goto IL_0084;
	}

IL_0061:
	{
		// foreach (GameObject enemy in enemies)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_10 = L_21;
		// if (enemy.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_10;
		NullCheck(L_22);
		bool L_23;
		L_23 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_007e;
		}
	}
	{
		// Enemy enemyLogic = enemy.GetComponent<Enemy>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_10;
		NullCheck(L_24);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_25;
		L_25 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_24, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(5);
		NullCheck(L_25);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_25, 5, /*hidden argument*/NULL);
	}

IL_007e:
	{
		int32_t L_26 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0084:
	{
		// foreach (GameObject enemy in enemies)
		int32_t L_27 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = V_8;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		// GameObject[] bulletsA = _objectManager.GetPool(ObjectManager.Type.BulletEnemyA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_29 = __this->get__objectManager_27();
		NullCheck(L_29);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30;
		L_30 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_29, ((int32_t)9), /*hidden argument*/NULL);
		V_4 = L_30;
		// GameObject[] bulletsB = _objectManager.GetPool(ObjectManager.Type.BulletEnemyB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_31 = __this->get__objectManager_27();
		NullCheck(L_31);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32;
		L_32 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_31, ((int32_t)10), /*hidden argument*/NULL);
		V_5 = L_32;
		// GameObject[] bulletsBossA = _objectManager.GetPool(ObjectManager.Type.BulletBossA);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_33 = __this->get__objectManager_27();
		NullCheck(L_33);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34;
		L_34 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_33, ((int32_t)11), /*hidden argument*/NULL);
		V_6 = L_34;
		// GameObject[] bulletsBossB = _objectManager.GetPool(ObjectManager.Type.BulletBossB);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_35 = __this->get__objectManager_27();
		NullCheck(L_35);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36;
		L_36 = ObjectManager_GetPool_mED84C7DF9EC11B9136A38DED0B118336980FD4AA(L_35, ((int32_t)12), /*hidden argument*/NULL);
		V_7 = L_36;
		// var tempList2 = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_37 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_37, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		// tempList2.AddRange(bulletsA);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = L_37;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_39 = V_4;
		NullCheck(L_38);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_38, (RuntimeObject*)(RuntimeObject*)L_39, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList2.AddRange(bulletsB);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_40 = L_38;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_41 = V_5;
		NullCheck(L_40);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_40, (RuntimeObject*)(RuntimeObject*)L_41, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList2.AddRange(bulletsBossA);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_42 = L_40;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_43 = V_6;
		NullCheck(L_42);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_42, (RuntimeObject*)(RuntimeObject*)L_43, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// tempList2.AddRange(bulletsBossB);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_44 = L_42;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_45 = V_7;
		NullCheck(L_44);
		List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_44, (RuntimeObject*)(RuntimeObject*)L_45, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		// GameObject[] bullets = tempList2.ToArray();
		NullCheck(L_44);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_46;
		L_46 = List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F(L_44, /*hidden argument*/List_1_ToArray_m3A7E83C4E885F8DF9164674E883558383CD2368F_RuntimeMethod_var);
		// foreach (GameObject bullet in bullets)
		V_8 = L_46;
		V_9 = 0;
		goto IL_0117;
	}

IL_00f9:
	{
		// foreach (GameObject bullet in bullets)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = V_8;
		int32_t L_48 = V_9;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_11 = L_50;
		// if (bullet.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = V_11;
		NullCheck(L_51);
		bool L_52;
		L_52 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0111;
		}
	}
	{
		// bullet.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = V_11;
		NullCheck(L_53);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_53, (bool)0, /*hidden argument*/NULL);
	}

IL_0111:
	{
		int32_t L_54 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0117:
	{
		// foreach (GameObject bullet in bullets)
		int32_t L_55 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = V_8;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))))
		{
			goto IL_00f9;
		}
	}
	{
		// Invoke("BoomDamage", 0.2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F, (0.200000003f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OffBoomEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OffBoomEffect_mA2A2DAD249EA83C2729F28B247F18B0B135C84CC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _boomEffect.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__boomEffect_22();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// _isBoomTime = false;
		__this->set__isBoomTime_21((bool)0);
		// CancelInvoke("BoomDamage");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteralCF94F3F5FD67B50E9C24763C0396FD0D1612DC6F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerExit2D_mE3486B60FB672B6B4D225FB4B2DF89898C72797D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (collision.gameObject.tag == "Border")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		// switch (collision.gameObject.name)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_005b:
	{
		// _isTouchTop = false;
		__this->set__isTouchTop_8((bool)0);
		// break;
		return;
	}

IL_0063:
	{
		// _isTouchBottom = false;
		__this->set__isTouchBottom_9((bool)0);
		// break;
		return;
	}

IL_006b:
	{
		// _isTouchLeft = false;
		__this->set__isTouchLeft_10((bool)0);
		// break;
		return;
	}

IL_0073:
	{
		// _isTouchRight = false;
		__this->set__isTouchRight_11((bool)0);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ReadmeBE4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE4__ctor_m4288748AC8497E6CA9879E613086A9D61E4FCC27 (ReadmeBE4_t9412EE6845D2532474207F93E2CA56639BCC7931 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Spawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn__ctor_m29DA62C57DCB06B5990FB843EE2F8533D4FCEC1F (Spawn_t6350A7809FB1CEED445D872EDC6BECECF01D75A2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void ReadmeBE4/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mA4A242847A99C13C0F6B02789A5DCFF9F9942BD2 (Section_t176F9666DF53FA9BD7F1CA01D4ED6E875107611D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
