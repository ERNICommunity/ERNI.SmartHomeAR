#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tBDC01CCDE4E1E57AA8E37C0378D0A638D439DD62;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tCDDDA610C55C5FF21BEB1203DBEA8052DAC61939;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tE4360FB4BDF1EDA2840E843735447930D9E471A3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t0C60573E7FE2C9829E493777A16058F8FBF9701C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tB514CB321DAD824986621DD76FBC390CA4927BDF;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t54423E8E84E9A367190608EE07EC6E1AD301D7C5;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t25FDA963CAE70C283A712716C069C4A2C933E69B;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tD5106F2D380FE67E7E4011180D68DA0F5DF2D48F;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_tF65B9FA01F7AE4B109FE1C44DB03E91D2DDDA345;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_tA315CE8BDABAD8038C851675F2E1066FDEB18FE2;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_tB2FDE8AA444A951B8B38970E90A8CEDBA92C53A9;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t7A2DD284F95754A82D7A56CB0EBF776EBAFF0255;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t3FC02687C2DAAF1D583C75DF4225D1BF3B8E4434;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t36A44E7CC3DCFAE1CE57B317B4A103D55F47ABC6;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4;
// Windows.Perception.People.HeadPose
struct HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8;

IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t0C60573E7FE2C9829E493777A16058F8FBF9701C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_tD927E54B02A7B4B74A98D9757000C83AC98FA3D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C05AAB7B530CCD6533ADF1EB5DF2EB71A089FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral389C31E60DD0E577273C009A47D71D79B84A138C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F;
IL2CPP_EXTERN_C String_t* _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral66E3998641BA92B9A789AE078DDAF008AE3C3881;
IL2CPP_EXTERN_C String_t* _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3;
IL2CPP_EXTERN_C String_t* _stringLiteral79522B49BD0D558EBDEA565DD9F3AC297668EBAB;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39;
IL2CPP_EXTERN_C String_t* _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFCD8A09FF0DFDCCBB845A6A8357BA36522BF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9849FBA41D7E35885EDE335C6B0E1B26C43A4CAF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77;
IL2CPP_EXTERN_C String_t* _stringLiteralC6009AD6297D694342B38B7BB7C2F5545C22E489;
IL2CPP_EXTERN_C String_t* _stringLiteralD282A4F94D38B8423798E0B911C67BBC72DF0C48;
IL2CPP_EXTERN_C String_t* _stringLiteralD7852FDD25BF42473FAC2A55D1781621F018CF34;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B;
IL2CPP_EXTERN_C String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
IL2CPP_EXTERN_C String_t* _stringLiteralE95349BE7E80138756C18FE6E39B29D379961B40;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA6ED3685B42E7D92F02FF423D2EB65288AA9D064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4A6288BC94428301737721764C5F9EB267DBACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings__ctor_m66D4BE06B082CDDC50E619F6FBC042ED12DA26AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings_get_IsOpaque_m9E6E0F3527B8F9DD027F6563C25C582C2A0E3CB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_CheckCapability_mBC278613639062EBE0B562493FA5C972899F16C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Enable_m20DF1BC6B4E56005452413BA4D6EC10D765218E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetControllerType_mA5D5EF15BC2555FD02EDC5A1E71EF116252E20CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_mA3184EBE11F4A3AEB2C23A53F919985C942B89FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Update_m2885CD4E1869B358E5CEB44C9B51E448773867B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager__ctor_m41B165579D89A2AD9F080D00919DB323F4BA70CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m12B849831048A5DCBB1828A534CD1C6BFB165B50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__cctor_m09F65FAD219E730081445E1150BC3ED72ABAF843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__ctor_mCC9F8AE7740F3F13BE559110DEF663C687BA3AA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4AMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m325B55832E606FBDF7018F18557FA8E8DD804320_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mD6000EF593CC481BACA0ACBF73BC3CBCAF4D967F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mD4958C2FA24CA679B9840DC083BD31F252906EDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__cctor_m02A1F1DDCC657B0507F355DC1CAF1663398B10CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__ctor_mFEC87B85A1930CEFCA468533FE67B10B1DC99172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKGGVHand__ctor_m89AEEE59D5E53AE639B640C4F3C9340A0A7A7A19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m9518794A89CDF41CA46B0FF02450DAFA9AD896FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m67EBDB9138F58BD0B17EBA28284E621337C9E520_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m05F5A1F05C071B024C9A052B6B40AFAD45CD1FB4_MetadataUsageId;
struct IHeadPose_tE23A11CB3F289E7DF9836C87627FAB67F8C8A29E;
struct IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E;
struct ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57;
struct ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245;

struct MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A;
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB386A5D2BE02D6BABD93720F6E9EC2D1A88FB917 
{
public:

public:
};


// System.Object

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m866011938D6AEF4F1F267AC53712EB4DB7C4090D(ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57* ___coordinateSystem0, IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E* ___timestamp1, ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245** comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct  XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD5106F2D380FE67E7E4011180D68DA0F5DF2D48F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF65B9FA01F7AE4B109FE1C44DB03E91D2DDDA345 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA315CE8BDABAD8038C851675F2E1066FDEB18FE2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___entries_1)); }
	inline EntryU5BU5D_tD5106F2D380FE67E7E4011180D68DA0F5DF2D48F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD5106F2D380FE67E7E4011180D68DA0F5DF2D48F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD5106F2D380FE67E7E4011180D68DA0F5DF2D48F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___keys_7)); }
	inline KeyCollection_tF65B9FA01F7AE4B109FE1C44DB03E91D2DDDA345 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF65B9FA01F7AE4B109FE1C44DB03E91D2DDDA345 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF65B9FA01F7AE4B109FE1C44DB03E91D2DDDA345 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ___values_8)); }
	inline ValueCollection_tA315CE8BDABAD8038C851675F2E1066FDEB18FE2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA315CE8BDABAD8038C851675F2E1066FDEB18FE2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA315CE8BDABAD8038C851675F2E1066FDEB18FE2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct  List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____items_1)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_tE30A32E48DD338A0C60E3AEA8F8DB43A6213DFC4  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE30A32E48DD338A0C60E3AEA8F8DB43A6213DFC4, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE30A32E48DD338A0C60E3AEA8F8DB43A6213DFC4, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct  BaseDataProvider_1_t7C37B2DFF53AB61FD385A7670F2584BACC12272A  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7C37B2DFF53AB61FD385A7670F2584BACC12272A, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7C37B2DFF53AB61FD385A7670F2584BACC12272A, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct  BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.Bone
struct  Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.Hand
struct  Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.InputDevice
struct  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct  InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct  InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct  InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct  InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct  InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct  InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct  InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Windows.Perception.People.HeadPose
struct  HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct  SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* get_____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810()
	{
		ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810>((&____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A  : public BaseDataProvider_1_tE30A32E48DD338A0C60E3AEA8F8DB43A6213DFC4
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t25D5B53A319350A38C47ADD8EDDAD248F9947437 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t25D5B53A319350A38C47ADD8EDDAD248F9947437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_t3F3C6929A715CE595F1379DCCEEA9C1B91C9BC79 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t3F3C6929A715CE595F1379DCCEEA9C1B91C9BC79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct  SupportedControllerType_t21149B2D44C024152E7A6C3B53317BAED05A20A0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_t21149B2D44C024152E7A6C3B53317BAED05A20A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_tAED2D2A6A5996BA66470048BD1E3F977517EC95D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_tAED2D2A6A5996BA66470048BD1E3F977517EC95D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct  SpatialAwarenessMeshDisplayOptions_t4A2A7364CFCD0BCDEB61E9275162CCF713B5FEB2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t4A2A7364CFCD0BCDEB61E9275162CCF713B5FEB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct  SpatialAwarenessMeshLevelOfDetail_t25110E0D329618FF02504EA559900FED45C7734D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t25110E0D329618FF02504EA559900FED45C7734D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tFD5B53FC090A64D5FC767B3D21152A4E02EEED42 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tFD5B53FC090A64D5FC767B3D21152A4E02EEED42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_tF7C8F14781F6956B6CA5C3EF3BBDD901EE184F2C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tF7C8F14781F6956B6CA5C3EF3BBDD901EE184F2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tE7ED1B123C90BB4C1B3FA2FE3FAB9CEE1CA048D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tE7ED1B123C90BB4C1B3FA2FE3FAB9CEE1CA048D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tD3ED068B44260B32491F1573A4414A876A30EC27 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tD3ED068B44260B32491F1573A4414A876A30EC27, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_t63904D1A17C5924E50BC674A4E1D45D72BF123E8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t63904D1A17C5924E50BC674A4E1D45D72BF123E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_tD927E54B02A7B4B74A98D9757000C83AC98FA3D0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tD927E54B02A7B4B74A98D9757000C83AC98FA3D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct  WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_1;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___spatialCoordinateSystem_2;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields, ___currentSpatialCoordinateSystemPtr_1)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_1() const { return ___currentSpatialCoordinateSystemPtr_1; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_1() { return &___currentSpatialCoordinateSystemPtr_1; }
	inline void set_currentSpatialCoordinateSystemPtr_1(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_1 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields, ___spatialCoordinateSystem_2)); }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * get_spatialCoordinateSystem_2() const { return ___spatialCoordinateSystem_2; }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 ** get_address_of_spatialCoordinateSystem_2() { return &___spatialCoordinateSystem_2; }
	inline void set_spatialCoordinateSystem_2(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * value)
	{
		___spatialCoordinateSystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_2), (void*)value);
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.CommonUsages
struct  CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.HandFinger
struct  HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct  InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct  SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct  ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::inputSource
	RuntimeObject* ___inputSource_0;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::handedness
	uint8_t ___handedness_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;

public:
	inline static int32_t get_offset_of_inputSource_0() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___inputSource_0)); }
	inline RuntimeObject* get_inputSource_0() const { return ___inputSource_0; }
	inline RuntimeObject** get_address_of_inputSource_0() { return &___inputSource_0; }
	inline void set_inputSource_0(RuntimeObject* value)
	{
		___inputSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___handedness_1)); }
	inline uint8_t get_handedness_1() const { return ___handedness_1; }
	inline uint8_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(uint8_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___unityJointPoses_4)); }
	inline Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___currentIndexPose_5)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}
};

struct ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandJointsPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateCurrentIndexPosePerfMarker_12;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709_StaticFields, ___UpdateHandJointsPerfMarker_11)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandJointsPerfMarker_11() const { return ___UpdateHandJointsPerfMarker_11; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandJointsPerfMarker_11() { return &___UpdateHandJointsPerfMarker_11; }
	inline void set_UpdateHandJointsPerfMarker_11(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandJointsPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709_StaticFields, ___UpdateCurrentIndexPosePerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateCurrentIndexPosePerfMarker_12() const { return ___UpdateCurrentIndexPosePerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateCurrentIndexPosePerfMarker_12() { return &___UpdateCurrentIndexPosePerfMarker_12; }
	inline void set_UpdateCurrentIndexPosePerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateCurrentIndexPosePerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65  : public BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager_PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547 * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65, ___activePointersToConfig_10)); }
	inline Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547 * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547 ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547 * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_10), (void*)value);
	}
};

struct BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RecyclePointersPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CreatePointerPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CleanActivePointersPerfMarker_13;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_StaticFields, ___RecyclePointersPerfMarker_11)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RecyclePointersPerfMarker_11() const { return ___RecyclePointersPerfMarker_11; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RecyclePointersPerfMarker_11() { return &___RecyclePointersPerfMarker_11; }
	inline void set_RecyclePointersPerfMarker_11(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RecyclePointersPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_StaticFields, ___CreatePointerPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CreatePointerPerfMarker_12() const { return ___CreatePointerPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CreatePointerPerfMarker_12() { return &___CreatePointerPerfMarker_12; }
	inline void set_CreatePointerPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CreatePointerPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_StaticFields, ___CleanActivePointersPerfMarker_13)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CleanActivePointersPerfMarker_13() const { return ___CleanActivePointersPerfMarker_13; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CleanActivePointersPerfMarker_13() { return &___CleanActivePointersPerfMarker_13; }
	inline void set_CleanActivePointersPerfMarker_13(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CleanActivePointersPerfMarker_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct  BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139  : public BaseDataProvider_1_t7C37B2DFF53AB61FD385A7670F2584BACC12272A
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_8;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_9;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CObserverRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObserverOriginU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObservationExtentsU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CSpatialAwarenessSystemU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_8() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CSourceIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_9() const { return ___U3CSourceIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_9() { return &___U3CSourceIdU3Ek__BackingField_9; }
	inline void set_U3CSourceIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CSourceNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_10() const { return ___U3CSourceNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_10() { return &___U3CSourceNameU3Ek__BackingField_10; }
	inline void set_U3CSourceNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CStartupBehaviorU3Ek__BackingField_11)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_11() const { return ___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_11() { return &___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_11(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CDefaultPhysicsLayerU3Ek__BackingField_12)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_12() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_12(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CIsRunningU3Ek__BackingField_13)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_13() const { return ___U3CIsRunningU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_13() { return &___U3CIsRunningU3Ek__BackingField_13; }
	inline void set_U3CIsRunningU3Ek__BackingField_13(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CIsStationaryObserverU3Ek__BackingField_14)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_14() const { return ___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return &___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_14(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CObserverRotationU3Ek__BackingField_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CObserverRotationU3Ek__BackingField_15() const { return ___U3CObserverRotationU3Ek__BackingField_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CObserverRotationU3Ek__BackingField_15() { return &___U3CObserverRotationU3Ek__BackingField_15; }
	inline void set_U3CObserverRotationU3Ek__BackingField_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CObserverRotationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CObserverOriginU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObserverOriginU3Ek__BackingField_16() const { return ___U3CObserverOriginU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObserverOriginU3Ek__BackingField_16() { return &___U3CObserverOriginU3Ek__BackingField_16; }
	inline void set_U3CObserverOriginU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObserverOriginU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CObserverVolumeTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_17() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return &___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CObservationExtentsU3Ek__BackingField_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObservationExtentsU3Ek__BackingField_18() const { return ___U3CObservationExtentsU3Ek__BackingField_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObservationExtentsU3Ek__BackingField_18() { return &___U3CObservationExtentsU3Ek__BackingField_18; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139, ___U3CUpdateIntervalU3Ek__BackingField_19)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_19() const { return ___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_19() { return &___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_19(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct  BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB  : public BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * ___reprojectionUpdater_9;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_9() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB, ___reprojectionUpdater_9)); }
	inline WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * get_reprojectionUpdater_9() const { return ___reprojectionUpdater_9; }
	inline WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 ** get_address_of_reprojectionUpdater_9() { return &___reprojectionUpdater_9; }
	inline void set_reprojectionUpdater_9(WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * value)
	{
		___reprojectionUpdater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_9), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_8;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_8() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_StaticFields, ___isTryGetViewConfigurationSupported_8)); }
	inline bool get_isTryGetViewConfigurationSupported_8() const { return ___isTryGetViewConfigurationSupported_8; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_8() { return &___isTryGetViewConfigurationSupported_8; }
	inline void set_isTryGetViewConfigurationSupported_8(bool value)
	{
		___isTryGetViewConfigurationSupported_8 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___inputAction_4)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662, ___poseData_17)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct  BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E  : public BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t54423E8E84E9A367190608EE07EC6E1AD301D7C5 * ___meshEventData_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___observedObjectParent_21;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_30;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_31;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_tB2FDE8AA444A951B8B38970E90A8CEDBA92C53A9 * ___meshes_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_34;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_35;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMaterial_36;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___visibleMaterial_37;

public:
	inline static int32_t get_offset_of_meshEventData_20() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___meshEventData_20)); }
	inline MixedRealitySpatialAwarenessEventData_1_t54423E8E84E9A367190608EE07EC6E1AD301D7C5 * get_meshEventData_20() const { return ___meshEventData_20; }
	inline MixedRealitySpatialAwarenessEventData_1_t54423E8E84E9A367190608EE07EC6E1AD301D7C5 ** get_address_of_meshEventData_20() { return &___meshEventData_20; }
	inline void set_meshEventData_20(MixedRealitySpatialAwarenessEventData_1_t54423E8E84E9A367190608EE07EC6E1AD301D7C5 * value)
	{
		___meshEventData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_20), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_21() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___observedObjectParent_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_observedObjectParent_21() const { return ___observedObjectParent_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_observedObjectParent_21() { return &___observedObjectParent_21; }
	inline void set_observedObjectParent_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___observedObjectParent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_21), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___displayOption_30)); }
	inline int32_t get_displayOption_30() const { return ___displayOption_30; }
	inline int32_t* get_address_of_displayOption_30() { return &___displayOption_30; }
	inline void set_displayOption_30(int32_t value)
	{
		___displayOption_30 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___levelOfDetail_31)); }
	inline int32_t get_levelOfDetail_31() const { return ___levelOfDetail_31; }
	inline int32_t* get_address_of_levelOfDetail_31() { return &___levelOfDetail_31; }
	inline void set_levelOfDetail_31(int32_t value)
	{
		___levelOfDetail_31 = value;
	}

	inline static int32_t get_offset_of_meshes_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___meshes_32)); }
	inline Dictionary_2_tB2FDE8AA444A951B8B38970E90A8CEDBA92C53A9 * get_meshes_32() const { return ___meshes_32; }
	inline Dictionary_2_tB2FDE8AA444A951B8B38970E90A8CEDBA92C53A9 ** get_address_of_meshes_32() { return &___meshes_32; }
	inline void set_meshes_32(Dictionary_2_tB2FDE8AA444A951B8B38970E90A8CEDBA92C53A9 * value)
	{
		___meshes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_32), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___meshPhysicsLayer_33)); }
	inline int32_t get_meshPhysicsLayer_33() const { return ___meshPhysicsLayer_33; }
	inline int32_t* get_address_of_meshPhysicsLayer_33() { return &___meshPhysicsLayer_33; }
	inline void set_meshPhysicsLayer_33(int32_t value)
	{
		___meshPhysicsLayer_33 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___U3CRecalculateNormalsU3Ek__BackingField_34)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_34() const { return ___U3CRecalculateNormalsU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_34() { return &___U3CRecalculateNormalsU3Ek__BackingField_34; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_34(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_35)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_35() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_35() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_35; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_35(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___occlusionMaterial_36)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMaterial_36() const { return ___occlusionMaterial_36; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMaterial_36() { return &___occlusionMaterial_36; }
	inline void set_occlusionMaterial_36(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_36), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E, ___visibleMaterial_37)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_visibleMaterial_37() const { return ___visibleMaterial_37; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_visibleMaterial_37() { return &___visibleMaterial_37; }
	inline void set_visibleMaterial_37(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___visibleMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_37), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshDisplayOptionPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedPhysicsLayerPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshAddedPerfMarker_24;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * ___OnMeshAdded_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshUpdatedPerfMarker_26;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * ___OnMeshUpdated_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshRemovedPerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * ___OnMeshRemoved_29;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshDisplayOptionPerfMarker_22() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedPhysicsLayerPerfMarker_23() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_23() { return &___ApplyUpdatedPhysicsLayerPerfMarker_23; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshAddedPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshAddedPerfMarker_24() const { return ___OnMeshAddedPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshAddedPerfMarker_24() { return &___OnMeshAddedPerfMarker_24; }
	inline void set_OnMeshAddedPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshAddedPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshAdded_25)); }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * get_OnMeshAdded_25() const { return ___OnMeshAdded_25; }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C ** get_address_of_OnMeshAdded_25() { return &___OnMeshAdded_25; }
	inline void set_OnMeshAdded_25(EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * value)
	{
		___OnMeshAdded_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshUpdatedPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshUpdatedPerfMarker_26() const { return ___OnMeshUpdatedPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshUpdatedPerfMarker_26() { return &___OnMeshUpdatedPerfMarker_26; }
	inline void set_OnMeshUpdatedPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshUpdatedPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshUpdated_27)); }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * get_OnMeshUpdated_27() const { return ___OnMeshUpdated_27; }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C ** get_address_of_OnMeshUpdated_27() { return &___OnMeshUpdated_27; }
	inline void set_OnMeshUpdated_27(EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * value)
	{
		___OnMeshUpdated_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshRemovedPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshRemovedPerfMarker_28() const { return ___OnMeshRemovedPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshRemovedPerfMarker_28() { return &___OnMeshRemovedPerfMarker_28; }
	inline void set_OnMeshRemovedPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshRemovedPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E_StaticFields, ___OnMeshRemoved_29)); }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * get_OnMeshRemoved_29() const { return ___OnMeshRemoved_29; }
	inline EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C ** get_address_of_OnMeshRemoved_29() { return &___OnMeshRemoved_29; }
	inline void set_OnMeshRemoved_29(EventFunction_1_t04A3962FD71FE2C8E3207708D8F0C4CB2329554C * value)
	{
		___OnMeshRemoved_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_29), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct  WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5  : public ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709
{
public:
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshObserver
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * ___handMeshObserver_13;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndices
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___handMeshTriangleIndices_14;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::vertexAndNormals
	HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* ___vertexAndNormals_15;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshVerticesUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshVerticesUnity_16;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshNormalsUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshNormalsUnity_17;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndicesUnity
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___handMeshTriangleIndicesUnity_18;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshUVsUnity
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___handMeshUVsUnity_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_20;

public:
	inline static int32_t get_offset_of_handMeshObserver_13() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshObserver_13)); }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * get_handMeshObserver_13() const { return ___handMeshObserver_13; }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 ** get_address_of_handMeshObserver_13() { return &___handMeshObserver_13; }
	inline void set_handMeshObserver_13(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * value)
	{
		___handMeshObserver_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_13), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_14() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshTriangleIndices_14)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_handMeshTriangleIndices_14() const { return ___handMeshTriangleIndices_14; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_handMeshTriangleIndices_14() { return &___handMeshTriangleIndices_14; }
	inline void set_handMeshTriangleIndices_14(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___handMeshTriangleIndices_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_14), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_15() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___vertexAndNormals_15)); }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* get_vertexAndNormals_15() const { return ___vertexAndNormals_15; }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4** get_address_of_vertexAndNormals_15() { return &___vertexAndNormals_15; }
	inline void set_vertexAndNormals_15(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* value)
	{
		___vertexAndNormals_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_15), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_16() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshVerticesUnity_16)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshVerticesUnity_16() const { return ___handMeshVerticesUnity_16; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshVerticesUnity_16() { return &___handMeshVerticesUnity_16; }
	inline void set_handMeshVerticesUnity_16(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshVerticesUnity_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_16), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_17() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshNormalsUnity_17)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshNormalsUnity_17() const { return ___handMeshNormalsUnity_17; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshNormalsUnity_17() { return &___handMeshNormalsUnity_17; }
	inline void set_handMeshNormalsUnity_17(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshNormalsUnity_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_17), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_18() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshTriangleIndicesUnity_18)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_handMeshTriangleIndicesUnity_18() const { return ___handMeshTriangleIndicesUnity_18; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_handMeshTriangleIndicesUnity_18() { return &___handMeshTriangleIndicesUnity_18; }
	inline void set_handMeshTriangleIndicesUnity_18(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___handMeshTriangleIndicesUnity_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_18), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_19() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___handMeshUVsUnity_19)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_handMeshUVsUnity_19() const { return ___handMeshUVsUnity_19; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_handMeshUVsUnity_19() { return &___handMeshUVsUnity_19; }
	inline void set_handMeshUVsUnity_19(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___handMeshUVsUnity_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_19), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_20() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5, ___hasRequestedHandMeshObserver_20)); }
	inline bool get_hasRequestedHandMeshObserver_20() const { return ___hasRequestedHandMeshObserver_20; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_20() { return &___hasRequestedHandMeshObserver_20; }
	inline void set_hasRequestedHandMeshObserver_20(bool value)
	{
		___hasRequestedHandMeshObserver_20 = value;
	}
};

struct WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandMeshPerfMarker_21;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_StaticFields, ___UpdateHandMeshPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandMeshPerfMarker_21() const { return ___UpdateHandMeshPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandMeshPerfMarker_21() { return &___UpdateHandMeshPerfMarker_21; }
	inline void set_UpdateHandMeshPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandMeshPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct  GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49  : public BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___CurrentControllerPose_14;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___LastControllerPose_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CurrentControllerPosition_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___CurrentControllerRotation_17;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49, ___CurrentControllerPose_14)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_CurrentControllerPose_14() const { return ___CurrentControllerPose_14; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_CurrentControllerPose_14() { return &___CurrentControllerPose_14; }
	inline void set_CurrentControllerPose_14(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___CurrentControllerPose_14 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49, ___LastControllerPose_15)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_LastControllerPose_15() const { return ___LastControllerPose_15; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_LastControllerPose_15() { return &___LastControllerPose_15; }
	inline void set_LastControllerPose_15(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___LastControllerPose_15 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49, ___CurrentControllerPosition_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CurrentControllerPosition_16() const { return ___CurrentControllerPosition_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CurrentControllerPosition_16() { return &___CurrentControllerPosition_16; }
	inline void set_CurrentControllerPosition_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CurrentControllerPosition_16 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49, ___CurrentControllerRotation_17)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_CurrentControllerRotation_17() const { return ___CurrentControllerRotation_17; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_CurrentControllerRotation_17() { return &___CurrentControllerRotation_17; }
	inline void set_CurrentControllerRotation_17(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___CurrentControllerRotation_17 = value;
	}
};

struct GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateSingleAxisDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_22;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields, ___UpdateControllerPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_18() const { return ___UpdateControllerPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_18() { return &___UpdateControllerPerfMarker_18; }
	inline void set_UpdateControllerPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields, ___UpdateButtonDataPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_19() const { return ___UpdateButtonDataPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_19() { return &___UpdateButtonDataPerfMarker_19; }
	inline void set_UpdateButtonDataPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields, ___UpdateSingleAxisDataPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateSingleAxisDataPerfMarker_20() const { return ___UpdateSingleAxisDataPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateSingleAxisDataPerfMarker_20() { return &___UpdateSingleAxisDataPerfMarker_20; }
	inline void set_UpdateSingleAxisDataPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateSingleAxisDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields, ___UpdateDualAxisDataPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_21() const { return ___UpdateDualAxisDataPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_21() { return &___UpdateDualAxisDataPerfMarker_21; }
	inline void set_UpdateDualAxisDataPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_StaticFields, ___UpdatePoseDataPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_22() const { return ___UpdatePoseDataPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_22() { return &___UpdatePoseDataPerfMarker_22; }
	inline void set_UpdatePoseDataPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct  XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B  : public BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___lastInputDevices_16;

public:
	inline static int32_t get_offset_of_inputDevices_15() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B, ___inputDevices_15)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevices_15() const { return ___inputDevices_15; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevices_15() { return &___inputDevices_15; }
	inline void set_inputDevices_15(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_15), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_16() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B, ___lastInputDevices_16)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_lastInputDevices_16() const { return ___lastInputDevices_16; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_lastInputDevices_16() { return &___lastInputDevices_16; }
	inline void set_lastInputDevices_16(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___lastInputDevices_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_16), (void*)value);
	}
};

struct XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t3FC02687C2DAAF1D583C75DF4225D1BF3B8E4434 * ___ActiveControllers_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetOrAddControllerPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveControllerPerfMarker_19;

public:
	inline static int32_t get_offset_of_ActiveControllers_14() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_StaticFields, ___ActiveControllers_14)); }
	inline Dictionary_2_t3FC02687C2DAAF1D583C75DF4225D1BF3B8E4434 * get_ActiveControllers_14() const { return ___ActiveControllers_14; }
	inline Dictionary_2_t3FC02687C2DAAF1D583C75DF4225D1BF3B8E4434 ** get_address_of_ActiveControllers_14() { return &___ActiveControllers_14; }
	inline void set_ActiveControllers_14(Dictionary_2_t3FC02687C2DAAF1D583C75DF4225D1BF3B8E4434 * value)
	{
		___ActiveControllers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_14), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_StaticFields, ___UpdatePerfMarker_17)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_17() const { return ___UpdatePerfMarker_17; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_17() { return &___UpdatePerfMarker_17; }
	inline void set_UpdatePerfMarker_17(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_StaticFields, ___GetOrAddControllerPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetOrAddControllerPerfMarker_18() const { return ___GetOrAddControllerPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetOrAddControllerPerfMarker_18() { return &___GetOrAddControllerPerfMarker_18; }
	inline void set_GetOrAddControllerPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetOrAddControllerPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_StaticFields, ___RemoveControllerPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveControllerPerfMarker_19() const { return ___RemoveControllerPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveControllerPerfMarker_19() { return &___RemoveControllerPerfMarker_19; }
	inline void set_RemoveControllerPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveControllerPerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct  WindowsMixedRealityCameraSettings_t25FDA963CAE70C283A712716C069C4A2C933E69B  : public BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct  XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct  GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8  : public BaseSpatialMeshObserver_tC0B955E0F375C086AD8BE609DDBBF811C362104E
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * ___meshWorkQueue_39;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos_40;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * ___outstandingMeshObject_41;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * ___spareMeshObject_42;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_43;

public:
	inline static int32_t get_offset_of_meshWorkQueue_39() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8, ___meshWorkQueue_39)); }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * get_meshWorkQueue_39() const { return ___meshWorkQueue_39; }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B ** get_address_of_meshWorkQueue_39() { return &___meshWorkQueue_39; }
	inline void set_meshWorkQueue_39(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * value)
	{
		___meshWorkQueue_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_40() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8, ___meshInfos_40)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_meshInfos_40() const { return ___meshInfos_40; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_meshInfos_40() { return &___meshInfos_40; }
	inline void set_meshInfos_40(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___meshInfos_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_40), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_41() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8, ___outstandingMeshObject_41)); }
	inline SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * get_outstandingMeshObject_41() const { return ___outstandingMeshObject_41; }
	inline SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 ** get_address_of_outstandingMeshObject_41() { return &___outstandingMeshObject_41; }
	inline void set_outstandingMeshObject_41(SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * value)
	{
		___outstandingMeshObject_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_41), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_42() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8, ___spareMeshObject_42)); }
	inline SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * get_spareMeshObject_42() const { return ___spareMeshObject_42; }
	inline SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 ** get_address_of_spareMeshObject_42() { return &___spareMeshObject_42; }
	inline void set_spareMeshObject_42(SpatialAwarenessMeshObject_t5BB3CB5C7336206CE6C158A513C5CC4396881A90 * value)
	{
		___spareMeshObject_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_42), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8, ___lastUpdated_43)); }
	inline float get_lastUpdated_43() const { return ___lastUpdated_43; }
	inline float* get_address_of_lastUpdated_43() { return &___lastUpdated_43; }
	inline void set_lastUpdated_43(float value)
	{
		___lastUpdated_43 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumePerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateObserverPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestMeshPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveMeshObjectPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ReclaimMeshObjectPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateMeshesPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MeshGenerationActionPerfMarker_53;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___UpdatePerfMarker_38)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_38() const { return ___UpdatePerfMarker_38; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_38() { return &___UpdatePerfMarker_38; }
	inline void set_UpdatePerfMarker_38(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___ResumePerfMarker_44)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumePerfMarker_44() const { return ___ResumePerfMarker_44; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumePerfMarker_44() { return &___ResumePerfMarker_44; }
	inline void set_ResumePerfMarker_44(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumePerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___SuspendPerfMarker_45)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendPerfMarker_45() const { return ___SuspendPerfMarker_45; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendPerfMarker_45() { return &___SuspendPerfMarker_45; }
	inline void set_SuspendPerfMarker_45(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___ClearObservationsPerfMarker_46)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_46() const { return ___ClearObservationsPerfMarker_46; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_46() { return &___ClearObservationsPerfMarker_46; }
	inline void set_ClearObservationsPerfMarker_46(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___UpdateObserverPerfMarker_47)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateObserverPerfMarker_47() const { return ___UpdateObserverPerfMarker_47; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateObserverPerfMarker_47() { return &___UpdateObserverPerfMarker_47; }
	inline void set_UpdateObserverPerfMarker_47(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateObserverPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___RequestMeshPerfMarker_48)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestMeshPerfMarker_48() const { return ___RequestMeshPerfMarker_48; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestMeshPerfMarker_48() { return &___RequestMeshPerfMarker_48; }
	inline void set_RequestMeshPerfMarker_48(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestMeshPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___RemoveMeshObjectPerfMarker_49)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveMeshObjectPerfMarker_49() const { return ___RemoveMeshObjectPerfMarker_49; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveMeshObjectPerfMarker_49() { return &___RemoveMeshObjectPerfMarker_49; }
	inline void set_RemoveMeshObjectPerfMarker_49(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveMeshObjectPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___ReclaimMeshObjectPerfMarker_50)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ReclaimMeshObjectPerfMarker_50() const { return ___ReclaimMeshObjectPerfMarker_50; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ReclaimMeshObjectPerfMarker_50() { return &___ReclaimMeshObjectPerfMarker_50; }
	inline void set_ReclaimMeshObjectPerfMarker_50(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ReclaimMeshObjectPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___ConfigureObserverVolumePerfMarker_51)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_51() const { return ___ConfigureObserverVolumePerfMarker_51; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_51() { return &___ConfigureObserverVolumePerfMarker_51; }
	inline void set_ConfigureObserverVolumePerfMarker_51(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___UpdateMeshesPerfMarker_52)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateMeshesPerfMarker_52() const { return ___UpdateMeshesPerfMarker_52; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateMeshesPerfMarker_52() { return &___UpdateMeshesPerfMarker_52; }
	inline void set_UpdateMeshesPerfMarker_52(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateMeshesPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_StaticFields, ___MeshGenerationActionPerfMarker_53)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MeshGenerationActionPerfMarker_53() const { return ___MeshGenerationActionPerfMarker_53; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MeshGenerationActionPerfMarker_53() { return &___MeshGenerationActionPerfMarker_53; }
	inline void set_MeshGenerationActionPerfMarker_53(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MeshGenerationActionPerfMarker_53 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct  BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469  : public GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct  WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1  : public XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_20;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_20() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1, ___mixedRealityGazeProviderHeadOverride_20)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_20() const { return ___mixedRealityGazeProviderHeadOverride_20; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_20() { return &___mixedRealityGazeProviderHeadOverride_20; }
	inline void set_mixedRealityGazeProviderHeadOverride_20(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct  WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D  : public GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8
{
public:

public:
};

struct WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_54;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_54() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_StaticFields, ___ConfigureObserverVolumePerfMarker_54)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_54() const { return ___ConfigureObserverVolumePerfMarker_54; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_54() { return &___ConfigureObserverVolumePerfMarker_54; }
	inline void set_ConfigureObserverVolumePerfMarker_54(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_54 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct  WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769  : public BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * ___unityJointPoses_23;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * ___handDefinition_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___fingerBones_26;

public:
	inline static int32_t get_offset_of_unityJointPoses_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769, ___unityJointPoses_23)); }
	inline Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * get_unityJointPoses_23() const { return ___unityJointPoses_23; }
	inline Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E ** get_address_of_unityJointPoses_23() { return &___unityJointPoses_23; }
	inline void set_unityJointPoses_23(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * value)
	{
		___unityJointPoses_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_23), (void*)value);
	}

	inline static int32_t get_offset_of_handDefinition_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769, ___handDefinition_24)); }
	inline WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * get_handDefinition_24() const { return ___handDefinition_24; }
	inline WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 ** get_address_of_handDefinition_24() { return &___handDefinition_24; }
	inline void set_handDefinition_24(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * value)
	{
		___handDefinition_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_24), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769, ___fingerBones_26)); }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * get_fingerBones_26() const { return ___fingerBones_26; }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A ** get_address_of_fingerBones_26() { return &___fingerBones_26; }
	inline void set_fingerBones_26(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * value)
	{
		___fingerBones_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_26), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* ___handFingers_25;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rightPalmOffset_27;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___leftPalmOffset_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandDataPerfMarker_30;

public:
	inline static int32_t get_offset_of_handFingers_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields, ___handFingers_25)); }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* get_handFingers_25() const { return ___handFingers_25; }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8** get_address_of_handFingers_25() { return &___handFingers_25; }
	inline void set_handFingers_25(HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* value)
	{
		___handFingers_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_25), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields, ___rightPalmOffset_27)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rightPalmOffset_27() const { return ___rightPalmOffset_27; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rightPalmOffset_27() { return &___rightPalmOffset_27; }
	inline void set_rightPalmOffset_27(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rightPalmOffset_27 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields, ___leftPalmOffset_28)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_leftPalmOffset_28() const { return ___leftPalmOffset_28; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_leftPalmOffset_28() { return &___leftPalmOffset_28; }
	inline void set_leftPalmOffset_28(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___leftPalmOffset_28 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields, ___UpdateControllerPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_29() const { return ___UpdateControllerPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_29() { return &___UpdateControllerPerfMarker_29; }
	inline void set_UpdateControllerPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields, ___UpdateHandDataPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandDataPerfMarker_30() const { return ___UpdateHandDataPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandDataPerfMarker_30() { return &___UpdateHandDataPerfMarker_30; }
	inline void set_UpdateHandDataPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandDataPerfMarker_30 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct  WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD  : public BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___U3CDefaultInteractionsU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD, ___U3CDefaultInteractionsU3Ek__BackingField_23)); }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* get_U3CDefaultInteractionsU3Ek__BackingField_23() const { return ___U3CDefaultInteractionsU3Ek__BackingField_23; }
	inline MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_23() { return &___U3CDefaultInteractionsU3Ek__BackingField_23; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_23(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct  WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56  : public BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8  : public RuntimeArray
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
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  m_Items[1];

public:
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		m_Items[index] = value;
	}
};


// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m7BEFB212EB3A81D2EA46B9A461E2B9A6A0F82B59_gshared_inline (BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B7454BF0358A9A8627569E4D89ECD727444E4C8_gshared (Dictionary_2_t7A2DD284F95754A82D7A56CB0EBF776EBAFF0255 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m94F84FFDE3FFB142E2A208A77DD39E568FBE2B8C_gshared (Dictionary_2_t7A2DD284F95754A82D7A56CB0EBF776EBAFF0255 * __this, int32_t ___key0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAFC4FC5410249DC6CD0C805290522AF937190D4C_gshared (Dictionary_2_t7A2DD284F95754A82D7A56CB0EBF776EBAFF0255 * __this, int32_t ___key0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m478EC664F1E211F9D54AEE8A628AFC6CAF8D4C68 (GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m48F305156CBEC96F0D781A06725A74C725DD956F (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m025414742264B6009136A172E304C8DCE03B98A3 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m0E40C74BB9D9138CE7A77FF310219FE0DA281330 (XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mBB7A951ECE5AD81AFA687801917E1854CACE4773 (BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0854582400CD09EEA0559531F8A5525A488D63B1 (XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m7BEFB212EB3A81D2EA46B9A461E2B9A6A0F82B59_gshared_inline)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * PerceptionTimestampHelper_FromHistoricalTargetTime_mA7E3DEC1BA06F1494D91EB5B34596E35B07577AE (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * SpatialPointerPose_TryGetAtTimestamp_mF345A3D760C001305464B4EBE89EA665ED238F5E (SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___coordinateSystem0, PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * SpatialPointerPose_get_Head_mDE61F0A26A1E29788E3FF811B1CA8187BA71EA37 (SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5 (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_mA17479E8D224D569841E3F4C5794DC54DD7D275E (XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_m7857B6764BDB2723EA6AB47F81BDAB3D42E4C3A0 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m5BD21B2460372B64B99F22D653F5ECAD201A1BBD (XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_m769C681477B1B8CAABB5FA74E44C72B97EA0D381 (XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173 (RuntimeObject * __this, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___flag0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_mC9A230CF6BD8F4340418EBE4A19C1BEC5AE34559 (XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m3F34BA114D37B00E45C3DA3F5A1356E61455C4AD (GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m874DB9DBDD4D601E913B7EAB7D09AED6ED11973E_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSDKSubsystemHelpers_get_MeshSubsystem_mA20937212A21516CDE250A8A5093E3AFB9C037B9 (const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m96C0DC4E89C159B478AB1B8E8846C1086DC69642_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m12E6F7B1C04E0DBA60D7A607DA94A2D40E964641_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m8E0DC9BB43A107E87B530C8A1F18B614CEAA6BE7_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mC4A6288BC94428301737721764C5F9EB267DBACB (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E *, const RuntimeMethod*))Dictionary_2__ctor_m5B7454BF0358A9A8627569E4D89ECD727444E4C8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E (BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__ctor_mD527BDD5C570C621E77652334803A4CB94847156 (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ArticulatedHandDefinition_get_DefaultInteractions_m68B97707E7A98D55281606DB3C0708D890CBB51B (ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA6ED3685B42E7D92F02FF423D2EB65288AA9D064 (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * __this, int32_t ___key0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E *, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m94F84FFDE3FFB142E2A208A77DD39E568FBE2B8C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m7F2C3E4190C54A12B172E9F4B0B3FDF4D80F84F7 (ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m463BE59B9AA4724234EE801DDA94DC1AADB007D2_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m2CEF1DB951F9334A63E304C68100DE5E96E676C9 (GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mD4958C2FA24CA679B9840DC083BD31F252906EDE (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* BaseController_get_Interactions_m84B57E09ED7A39F8FB0EBBFF1B5AF9F62966C439_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m9CDF459E05000A4F66546BF917DB36288CE08220_inline (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_m34C3E7F017B28222463245CCF72BF20CF11CE88B (ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 * __this, MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * ___interactionMapping0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___usage0, Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20 (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * __this, int32_t ___finger0, List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___bonesOut1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m38617E0601935C1CC1F569C10ABC8679C9DF1C3D (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, int32_t, const RuntimeMethod*))List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706 (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m5C8BAFA6828F095E1424BD4ACCB30852535F3A4D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_m25125C6D4AF826CF6F568344B87EA431D3013932 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m7D20A36F736F4D7B97ECA599BCD17DC8A97430F3 (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * __this, int32_t ___key0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E *, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 , const RuntimeMethod*))Dictionary_2_set_Item_mAFC4FC5410249DC6CD0C805290522AF937190D4C_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_m5743693C335DDE5904384EF96E31C001D036A177 (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m0DE3694541B659D1511AE99E331328EF9536F8C4_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mBC38C5ADAFE34FBB83899A1C6C72CA7CEB0EC7E0 (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m1C4072C3B24036B44C068BD46B5C993B3F90A905 (ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 * __this, Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19 (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E (BaseWindowsMixedRealityXRSDKSource_t42A8AEDC4189B9D1256464A72DDA8AEB60076469 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___sourceHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_3 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m478EC664F1E211F9D54AEE8A628AFC6CAF8D4C68(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_m66D4BE06B082CDDC50E619F6FBC042ED12DA26AD (WindowsMixedRealityCameraSettings_t25FDA963CAE70C283A712716C069C4A2C933E69B * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings__ctor_m66D4BE06B082CDDC50E619F6FBC042ED12DA26AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_m48F305156CBEC96F0D781A06725A74C725DD956F(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_m9E6E0F3527B8F9DD027F6563C25C582C2A0E3CB0 (WindowsMixedRealityCameraSettings_t25FDA963CAE70C283A712716C069C4A2C933E69B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings_get_IsOpaque_m9E6E0F3527B8F9DD027F6563C25C582C2A0E3CB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B2_0 = NULL;
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public override bool IsOpaque => XRSDKSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSDKSubsystemHelpers_get_DisplaySubsystem_m025414742264B6009136A172E304C8DCE03B98A3(/*hidden argument*/NULL);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0011:
	{
		return (bool)G_B3_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_m41B165579D89A2AD9F080D00919DB323F4BA70CD (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager__ctor_m41B165579D89A2AD9F080D00919DB323F4BA70CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IMixedRealityGazeProviderHeadOverride mixedRealityGazeProviderHeadOverride = null;
		__this->set_mixedRealityGazeProviderHeadOverride_20((RuntimeObject*)NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t58EE139DC1B0D6BBC77E6475CF21D76AFEEB506B_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_m0E40C74BB9D9138CE7A77FF310219FE0DA281330(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m20DF1BC6B4E56005452413BA4D6EC10D765218E2 (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Enable_m20DF1BC6B4E56005452413BA4D6EC10D765218E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B4_0 = NULL;
	WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * G_B5_1 = NULL;
	{
		// base.Enable();
		BaseService_Enable_mBB7A951ECE5AD81AFA687801917E1854CACE4773(__this, /*hidden argument*/NULL);
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 * L_2 = (XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0854582400CD09EEA0559531F8A5525A488D63B1(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A_inline(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_3 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_002f;
		}
	}
	{
		G_B5_0 = ((RuntimeObject*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0034;
	}

IL_002f:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
	}

IL_0034:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_mixedRealityGazeProviderHeadOverride_20(((RuntimeObject*)IsInst((RuntimeObject*)G_B5_0, IMixedRealityGazeProviderHeadOverride_t0C60573E7FE2C9829E493777A16058F8FBF9701C_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_m2885CD4E1869B358E5CEB44C9B51E448773867B7 (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Update_m2885CD4E1869B358E5CEB44C9B51E448773867B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * V_1 = NULL;
	bool V_2 = false;
	HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * V_3 = NULL;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_0 = __this->get_mixedRealityGazeProviderHeadOverride_20();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_20();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t0C60573E7FE2C9829E493777A16058F8FBF9701C_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_3 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4(/*hidden argument*/NULL);
		G_B4_0 = ((!(((RuntimeObject*)(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_5 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var);
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_6 = DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D(/*hidden argument*/NULL);
		PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * L_7 = PerceptionTimestampHelper_FromHistoricalTargetTime_mA7E3DEC1BA06F1494D91EB5B34596E35B07577AE(L_6, /*hidden argument*/NULL);
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_8 = SpatialPointerPose_TryGetAtTimestamp_mF345A3D760C001305464B4EBE89EA665ED238F5E(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (pointerPose != null)
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_9 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_11 = V_1;
		NullCheck(L_11);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_12 = SpatialPointerPose_get_Head_mDE61F0A26A1E29788E3FF811B1CA8187BA71EA37(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// if (head != null)
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_13 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_15 = __this->get_mixedRealityGazeProviderHeadOverride_20();
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_16 = V_3;
		NullCheck(L_16);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_17 = HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5(L_17, /*hidden argument*/NULL);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_19 = V_3;
		NullCheck(L_19);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_20 = HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5(L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_t0C60573E7FE2C9829E493777A16058F8FBF9701C_il2cpp_TypeInfo_var, L_15, L_18, L_21);
	}

IL_0079:
	{
	}

IL_007a:
	{
	}

IL_007b:
	{
		// base.Update();
		XRSDKDeviceManager_Update_mA17479E8D224D569841E3F4C5794DC54DD7D275E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_mBC278613639062EBE0B562493FA5C972899F16C2 (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_CheckCapability_mBC278613639062EBE0B562493FA5C972899F16C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B11_0 = 0;
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0 = WindowsApiChecker_IsMethodAvailable_m7857B6764BDB2723EA6AB47F81BDAB3D42E4C3A0(_stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D, _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3, _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// switch (capability)
		int32_t L_2 = ___capability0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) > ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003a;
	}

IL_0028:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_5 = SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4(1, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_006d;
	}

IL_0031:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_6 = SpatialInteractionManager_IsSourceKindSupported_mCCC933BD27FB38C9ABF81AA8EC0AF1AADA0402C4(3, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_006d;
	}

IL_003a:
	{
		goto IL_0069;
	}

IL_003d:
	{
		// if (XRSDKSubsystemHelpers.DisplaySubsystem != null && !XRSDKSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_7 = XRSDKSubsystemHelpers_get_DisplaySubsystem_m025414742264B6009136A172E304C8DCE03B98A3(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_8 = XRSDKSubsystemHelpers_get_DisplaySubsystem_m025414742264B6009136A172E304C8DCE03B98A3(/*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(L_8, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		V_3 = (bool)G_B11_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_11 = ___capability0;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		goto IL_006d;
	}

IL_0061:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_12 = ___capability0;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		goto IL_006d;
	}

IL_0069:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_mA5D5EF15BC2555FD02EDC5A1E71EF116252E20CF (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetControllerType_mA5D5EF15BC2555FD02EDC5A1E71EF116252E20CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0045;
	}

IL_001e:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_004f;
	}

IL_002b:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_004f;
	}

IL_0038:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_004f;
	}

IL_0045:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_10 = ___supportedControllerType0;
		Type_t * L_11 = XRSDKDeviceManager_GetControllerType_m5BD21B2460372B64B99F22D653F5ECAD201A1BBD(__this, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		Type_t * L_12 = V_1;
		return L_12;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_mAEA7ED0866EFA010C92D03149AF726D6F8054FE8 (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0026;
	}

IL_001e:
	{
		// return InputSourceType.Controller;
		V_1 = 2;
		goto IL_0030;
	}

IL_0022:
	{
		// return InputSourceType.Hand;
		V_1 = 1;
		goto IL_0030;
	}

IL_0026:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_4 = ___supportedControllerType0;
		int32_t L_5 = XRSDKDeviceManager_GetInputSourceType_m769C681477B1B8CAABB5FA74E44C72B97EA0D381(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_mA3184EBE11F4A3AEB2C23A53F919985C942B89FD (WindowsMixedRealityDeviceManager_t7EB44B47A5A206AB6E1B29F6D98D4FD02B7F0DB1 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetCurrentControllerType_mA3184EBE11F4A3AEB2C23A53F919985C942B89FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_1);
		uint32_t L_3 = ((uint32_t)8);
		RuntimeObject * L_4 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_3);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2);
		bool L_5 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_7 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_8);
		uint32_t L_10 = ((uint32_t)((int32_t)256));
		RuntimeObject * L_11 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_10);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_9);
		bool L_12 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_9, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_13 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_14);
		uint32_t L_16 = ((uint32_t)((int32_t)512));
		RuntimeObject * L_17 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_16);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_15);
		bool L_18 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_15, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_17, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_18));
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 1;
	}

IL_0058:
	{
		V_1 = (bool)G_B4_0;
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		// return SupportedControllerType.ArticulatedHand;
		V_2 = ((int32_t)1024);
		goto IL_009a;
	}

IL_0065:
	{
		// return SupportedControllerType.GGVHand;
		V_2 = ((int32_t)2048);
		goto IL_009a;
	}

IL_006e:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_20 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_21);
		uint32_t L_23 = ((uint32_t)((int32_t)64));
		RuntimeObject * L_24 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_23);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_22);
		bool L_25 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_22, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_0090;
		}
	}
	{
		// return SupportedControllerType.WindowsMixedReality;
		V_2 = ((int32_t)32);
		goto IL_009a;
	}

IL_0090:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_27 = ___inputDevice0;
		int32_t L_28 = XRSDKDeviceManager_GetCurrentControllerType_mC9A230CF6BD8F4340418EBE4A19C1BEC5AE34559(__this, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		int32_t L_29 = V_2;
		return L_29;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_mCC9F8AE7740F3F13BE559110DEF663C687BA3AA8 (WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__ctor_mCC9F8AE7740F3F13BE559110DEF663C687BA3AA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t93618F3968DAEDF76BFEFD2AE6862B897807BBF8_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_m3F34BA114D37B00E45C3DA3F5A1356E61455C4AD(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m12B849831048A5DCBB1828A534CD1C6BFB165B50 (WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m12B849831048A5DCBB1828A534CD1C6BFB165B50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// if (SpatialAwarenessSystem == null || XRSDKSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m874DB9DBDD4D601E913B7EAB7D09AED6ED11973E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSDKSubsystemHelpers_get_MeshSubsystem_mA20937212A21516CDE250A8A5093E3AFB9C037B9(/*hidden argument*/NULL);
		G_B3_0 = ((((RuntimeObject*)(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_007f;
	}

IL_001b:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3 = ((WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_54();
		V_2 = L_3;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_4 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_5 = BaseSpatialObserver_get_ObserverVolumeType_m96C0DC4E89C159B478AB1B8E8846C1086DC69642_inline(__this, /*hidden argument*/NULL);
			V_3 = L_5;
			int32_t L_6 = V_3;
			if ((((int32_t)L_6) == ((int32_t)1)))
			{
				goto IL_0037;
			}
		}

IL_0035:
		{
			goto IL_0050;
		}

IL_0037:
		{
			// XRSDKSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_t0C56AAB0867C88911677C5684E756D5F01A3A77C_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_7 = XRSDKSubsystemHelpers_get_MeshSubsystem_mA20937212A21516CDE250A8A5093E3AFB9C037B9(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = BaseSpatialObserver_get_ObserverOrigin_m12E6F7B1C04E0DBA60D7A607DA94A2D40E964641_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = BaseSpatialObserver_get_ObservationExtents_m8E0DC9BB43A107E87B530C8A1F18B614CEAA6BE7_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_7);
			XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA(L_7, L_8, L_9, /*hidden argument*/NULL);
			// break;
			goto IL_006d;
		}

IL_0050:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_10 = BaseSpatialObserver_get_ObserverVolumeType_m96C0DC4E89C159B478AB1B8E8846C1086DC69642_inline(__this, /*hidden argument*/NULL);
			int32_t L_11 = L_10;
			RuntimeObject * L_12 = Box(VolumeType_tD927E54B02A7B4B74A98D9757000C83AC98FA3D0_il2cpp_TypeInfo_var, &L_11);
			String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_13, /*hidden argument*/NULL);
			// break;
			goto IL_006d;
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_m09F65FAD219E730081445E1150BC3ED72ABAF843 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__cctor_m09F65FAD219E730081445E1150BC3ED72ABAF843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t778A4006D2B5CA8441BFCF5823211F5AA2740A7D_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_54(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_mFEC87B85A1930CEFCA468533FE67B10B1DC99172 (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__ctor_mFEC87B85A1930CEFCA468533FE67B10B1DC99172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * L_0 = (Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E *)il2cpp_codegen_object_new(Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4A6288BC94428301737721764C5F9EB267DBACB(L_0, /*hidden argument*/Dictionary_2__ctor_mC4A6288BC94428301737721764C5F9EB267DBACB_RuntimeMethod_var);
		__this->set_unityJointPoses_23(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_1 = (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *)il2cpp_codegen_object_new(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var);
		List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C(L_1, /*hidden argument*/List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var);
		__this->set_fingerBones_26(L_1);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_2 = ___trackingState0;
		uint8_t L_3 = ___controllerHandedness1;
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_5 = ___interactions3;
		BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// handDefinition = new WindowsMixedRealityArticulatedHandDefinition(inputSource, controllerHandedness);
		RuntimeObject* L_6 = ___inputSource2;
		uint8_t L_7 = ___controllerHandedness1;
		WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_8 = (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 *)il2cpp_codegen_object_new(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var);
		WindowsMixedRealityArticulatedHandDefinition__ctor_mD527BDD5C570C621E77652334803A4CB94847156(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_handDefinition_24(L_8);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* WindowsMixedRealityXRSDKArticulatedHand_get_DefaultInteractions_mCD607A3FB08C3873DF3FAE9AA125C1434361035A (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, const RuntimeMethod* method)
{
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B2_0 = NULL;
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B1_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* G_B3_0 = NULL;
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => handDefinition?.DefaultInteractions;
		WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_0 = __this->get_handDefinition_24();
		WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_2 = ArticulatedHandDefinition_get_DefaultInteractions_m68B97707E7A98D55281606DB3C0708D890CBB51B(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m325B55832E606FBDF7018F18557FA8E8DD804320 (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, int32_t ___joint0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m325B55832E606FBDF7018F18557FA8E8DD804320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * L_0 = __this->get_unityJointPoses_23();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_mA6ED3685B42E7D92F02FF423D2EB65288AA9D064(L_0, L_1, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_mA6ED3685B42E7D92F02FF423D2EB65288AA9D064_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_mB930C75244E95F91C6620A73CEDE280AF93DFB6A (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_0 = __this->get_handDefinition_24();
		NullCheck(L_0);
		bool L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m7F2C3E4190C54A12B172E9F4B0B3FDF4D80F84F7(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mD6000EF593CC481BACA0ACBF73BC3CBCAF4D967F (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mD6000EF593CC481BACA0ACBF73BC3CBCAF4D967F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B8_0 = NULL;
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B7_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B14_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0 = BaseController_get_Enabled_m463BE59B9AA4724234EE801DDA94DC1AADB007D2_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (!Enabled) { return; }
		goto IL_00b9;
	}

IL_0014:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_29();
		V_2 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m2CEF1DB951F9334A63E304C68100DE5E96E676C9(__this, L_4, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_5 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mD4958C2FA24CA679B9840DC083BD31F252906EDE(__this, L_5, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_3 = 0;
			goto IL_0070;
		}

IL_0037:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_6 = BaseController_get_Interactions_m84B57E09ED7A39F8FB0EBBFF1B5AF9F62966C439_inline(__this, /*hidden argument*/NULL);
			int32_t L_7 = V_3;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			NullCheck(L_9);
			int32_t L_10 = MixedRealityInteractionMapping_get_InputType_m9CDF459E05000A4F66546BF917DB36288CE08220_inline(L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			int32_t L_11 = V_4;
			if ((((int32_t)L_11) == ((int32_t)((int32_t)33))))
			{
				goto IL_004f;
			}
		}

IL_004d:
		{
			goto IL_006b;
		}

IL_004f:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_12 = __this->get_handDefinition_24();
			WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_13 = L_12;
			G_B7_0 = L_13;
			if (L_13)
			{
				G_B8_0 = L_13;
				goto IL_005b;
			}
		}

IL_0058:
		{
			goto IL_0069;
		}

IL_005b:
		{
			MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_14 = BaseController_get_Interactions_m84B57E09ED7A39F8FB0EBBFF1B5AF9F62966C439_inline(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_3;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(G_B8_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_m34C3E7F017B28222463245CCF72BF20CF11CE88B(G_B8_0, L_17, /*hidden argument*/NULL);
		}

IL_0069:
		{
			// break;
			goto IL_006b;
		}

IL_006b:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_18 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		}

IL_0070:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_19 = V_3;
			MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_20 = BaseController_get_Interactions_m84B57E09ED7A39F8FB0EBBFF1B5AF9F62966C439_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_21 = L_20;
			G_B12_0 = L_21;
			G_B12_1 = L_19;
			if (L_21)
			{
				G_B13_0 = L_21;
				G_B13_1 = L_19;
				goto IL_0087;
			}
		}

IL_007a:
		{
			il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_22 = V_7;
			G_B14_0 = L_22;
			G_B14_1 = G_B12_1;
			goto IL_008e;
		}

IL_0087:
		{
			NullCheck(G_B13_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_23;
			memset((&L_23), 0, sizeof(L_23));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_23), (((int32_t)((int32_t)(((RuntimeArray*)G_B13_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B14_0 = L_23;
			G_B14_1 = G_B13_1;
		}

IL_008e:
		{
			V_6 = G_B14_0;
			int32_t L_24 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_25 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			V_5 = (bool)((int32_t)((int32_t)((((int32_t)G_B14_1) < ((int32_t)L_24))? 1 : 0)&(int32_t)L_25));
			bool L_26 = V_5;
			if (L_26)
			{
				goto IL_0037;
			}
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB9, FINALLY_00aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(170)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mD4958C2FA24CA679B9840DC083BD31F252906EDE (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_mD4958C2FA24CA679B9840DC083BD31F252906EDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * G_B11_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * G_B10_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * G_B12_2 = NULL;
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B17_0 = NULL;
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * G_B16_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_30();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  L_2 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3 = InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_2, (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), /*hidden argument*/NULL);
			V_3 = L_3;
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0164;
			}
		}

IL_0025:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_5 = ((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->get_handFingers_25();
			V_4 = L_5;
			V_5 = 0;
			goto IL_0140;
		}

IL_0036:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_6 = V_4;
			int32_t L_7 = V_5;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_6 = L_9;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_10 = V_6;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_11 = __this->get_fingerBones_26();
			bool L_12 = Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20((Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), L_10, L_11, /*hidden argument*/NULL);
			V_7 = L_12;
			bool L_13 = V_7;
			if (!L_13)
			{
				goto IL_0139;
			}
		}

IL_0056:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_9 = 0;
			goto IL_00e1;
		}

IL_005f:
		{
			// TrackedHandJoint trackedHandJoint = ConvertToTrackedHandJoint(finger, i);
			int32_t L_14 = V_6;
			int32_t L_15 = V_9;
			int32_t L_16 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m38617E0601935C1CC1F569C10ABC8679C9DF1C3D(__this, L_14, L_15, /*hidden argument*/NULL);
			V_10 = L_16;
			// Bone bone = fingerBones[i];
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_17 = __this->get_fingerBones_26();
			int32_t L_18 = V_9;
			NullCheck(L_17);
			Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_19 = List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var);
			V_11 = L_19;
			// Vector3 position = Vector3.zero;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
			V_12 = L_20;
			// Quaternion rotation = Quaternion.identity;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			V_13 = L_21;
			// bool positionAvailable = bone.TryGetPosition(out position);
			bool L_22 = Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_11), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_12), /*hidden argument*/NULL);
			V_14 = L_22;
			// bool rotationAvailable = bone.TryGetRotation(out rotation);
			bool L_23 = Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_11), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_13), /*hidden argument*/NULL);
			V_15 = L_23;
			// if (positionAvailable || rotationAvailable)
			bool L_24 = V_14;
			bool L_25 = V_15;
			V_16 = (bool)((int32_t)((int32_t)L_24|(int32_t)L_25));
			bool L_26 = V_16;
			if (!L_26)
			{
				goto IL_00da;
			}
		}

IL_00aa:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = MixedRealityPlayspace_TransformPoint_m5C8BAFA6828F095E1424BD4ACCB30852535F3A4D(L_27, /*hidden argument*/NULL);
			V_12 = L_28;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = MixedRealityPlayspace_get_Rotation_m25125C6D4AF826CF6F568344B87EA431D3013932(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_29, L_30, /*hidden argument*/NULL);
			V_13 = L_31;
			// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
			Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * L_32 = __this->get_unityJointPoses_23();
			int32_t L_33 = V_10;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_12;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = V_13;
			MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  L_36;
			memset((&L_36), 0, sizeof(L_36));
			MixedRealityPose__ctor_m7D20A36F736F4D7B97ECA599BCD17DC8A97430F3((&L_36), L_34, L_35, /*hidden argument*/NULL);
			NullCheck(L_32);
			Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED(L_32, L_33, L_36, /*hidden argument*/Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED_RuntimeMethod_var);
		}

IL_00da:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_37 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		}

IL_00e1:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_38 = V_9;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_39 = __this->get_fingerBones_26();
			NullCheck(L_39);
			int32_t L_40 = List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline(L_39, /*hidden argument*/List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var);
			V_17 = (bool)((((int32_t)L_38) < ((int32_t)L_40))? 1 : 0);
			bool L_41 = V_17;
			if (L_41)
			{
				goto IL_005f;
			}
		}

IL_00f9:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  L_42 = ((GenericXRSDKController_t11AF783263695F22D97BDFDDD33F5C9D86EB5F49 *)__this)->get_CurrentControllerPose_14();
			V_8 = L_42;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * L_43 = (&V_8);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = MixedRealityPose_get_Rotation_m5743693C335DDE5904384EF96E31C001D036A177((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)L_43, /*hidden argument*/NULL);
			uint8_t L_45 = BaseController_get_ControllerHandedness_m0DE3694541B659D1511AE99E331328EF9536F8C4_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = L_44;
			G_B10_1 = L_43;
			if ((((int32_t)L_45) == ((int32_t)1)))
			{
				G_B11_0 = L_44;
				G_B11_1 = L_43;
				goto IL_0119;
			}
		}

IL_0112:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = ((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->get_rightPalmOffset_27();
			G_B12_0 = L_46;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_011e;
		}

IL_0119:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = ((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->get_leftPalmOffset_28();
			G_B12_0 = L_47;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_011e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_mBC38C5ADAFE34FBB83899A1C6C72CA7CEB0EC7E0((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)G_B12_2, L_48, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * L_49 = __this->get_unityJointPoses_23();
			MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  L_50 = V_8;
			NullCheck(L_49);
			Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED(L_49, 2, L_50, /*hidden argument*/Dictionary_2_set_Item_m83E753E4655F65A64B45015DCA779CEC7AB36EED_RuntimeMethod_var);
		}

IL_0139:
		{
			int32_t L_51 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		}

IL_0140:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_52 = V_5;
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_53 = V_4;
			NullCheck(L_53);
			if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))))
			{
				goto IL_0036;
			}
		}

IL_014b:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_54 = __this->get_handDefinition_24();
			WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_55 = L_54;
			G_B16_0 = L_55;
			if (L_55)
			{
				G_B17_0 = L_55;
				goto IL_0157;
			}
		}

IL_0154:
		{
			goto IL_0163;
		}

IL_0157:
		{
			Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E * L_56 = __this->get_unityJointPoses_23();
			NullCheck(G_B17_0);
			ArticulatedHandDefinition_UpdateHandJoints_m1C4072C3B24036B44C068BD46B5C993B3F90A905(G_B17_0, L_56, /*hidden argument*/NULL);
		}

IL_0163:
		{
		}

IL_0164:
		{
			IL2CPP_LEAVE(0x176, FINALLY_0167);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0167;
	}

FINALLY_0167:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(359)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(359)
	{
		IL2CPP_JUMP_TBL(0x176, IL_0176)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0176:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m38617E0601935C1CC1F569C10ABC8679C9DF1C3D (WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		// switch (finger)
		int32_t L_0 = ___finger0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0048;
	}

IL_001f:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_2 = ___index1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___index1;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_3)), (int32_t)1));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 1;
	}

IL_002a:
	{
		V_1 = G_B5_0;
		goto IL_004c;
	}

IL_002d:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_4 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_4));
		goto IL_004c;
	}

IL_0033:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_5 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_5));
		goto IL_004c;
	}

IL_003a:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_6));
		goto IL_004c;
	}

IL_0041:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_7 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_7));
		goto IL_004c;
	}

IL_0048:
	{
		// default: return TrackedHandJoint.None;
		V_1 = 0;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m02A1F1DDCC657B0507F355DC1CAF1663398B10CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__cctor_m02A1F1DDCC657B0507F355DC1CAF1663398B10CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->set_handFingers_25(((HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = sqrtf((0.125f));
		float L_4 = sqrtf((0.125f));
		float L_5 = sqrtf((1.5f));
		float L_6 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->set_rightPalmOffset_27(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8 = sqrtf((0.125f));
		float L_9 = sqrtf((0.125f));
		float L_10 = sqrtf((1.5f));
		float L_11 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->set_leftPalmOffset_28(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_29(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_14), _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tD83E080D756E06E2206428E2AC23750450145769_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_30(L_14);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_m89AEEE59D5E53AE639B640C4F3C9340A0A7A7A19 (WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKGGVHand__ctor_m89AEEE59D5E53AE639B640C4F3C9340A0A7A7A19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip),
		// };
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_0 = (MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A*)(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_1 = L_0;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_2 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_2, 0, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_2);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_3 = L_1;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_4 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_4, 1, _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_4);
		__this->set_U3CDefaultInteractionsU3Ek__BackingField_23(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_5 = ___trackingState0;
		uint8_t L_6 = ___controllerHandedness1;
		RuntimeObject* L_7 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_8 = ___interactions3;
		BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* WindowsMixedRealityXRSDKGGVHand_get_DefaultInteractions_mDD871B8D4C90B6B86AD339CA97FDFD75A9B35C0A (WindowsMixedRealityXRSDKGGVHand_t9A18321628433E30357C6241CC12F543B73658FD * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_0 = __this->get_U3CDefaultInteractionsU3Ek__BackingField_23();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m7C435FC035E171817AE0B00BA1071DE0DED910FE (WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* ___interactions3, const RuntimeMethod* method)
{
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_3 = ___interactions3;
		BaseWindowsMixedRealityXRSDKSource__ctor_m62D08840C4AF7C13123A9B63743EA1A112F8C37E(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m9518794A89CDF41CA46B0FF02450DAFA9AD896FC (WindowsMixedRealityXRSDKMotionController_tBB07DED90D96AB8DA3B54EA595890C4408FCBB56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_m9518794A89CDF41CA46B0FF02450DAFA9AD896FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Grip Press", AxisType.SingleAxis, DeviceInputType.TriggerPress),
		//     new MixedRealityInteractionMapping(3, "Trigger Position", AxisType.SingleAxis, DeviceInputType.Trigger),
		//     new MixedRealityInteractionMapping(4, "Trigger Touch", AxisType.Digital, DeviceInputType.TriggerTouch),
		//     new MixedRealityInteractionMapping(5, "Trigger Press (Select)", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(6, "Touchpad Position", AxisType.DualAxis, DeviceInputType.Touchpad),
		//     new MixedRealityInteractionMapping(7, "Touchpad Touch", AxisType.Digital, DeviceInputType.TouchpadTouch),
		//     new MixedRealityInteractionMapping(8, "Touchpad Press", AxisType.Digital, DeviceInputType.TouchpadPress),
		//     new MixedRealityInteractionMapping(9, "Menu Press", AxisType.Digital, DeviceInputType.Menu),
		//     new MixedRealityInteractionMapping(10, "Thumbstick Position", AxisType.DualAxis, DeviceInputType.ThumbStick),
		//     new MixedRealityInteractionMapping(11, "Thumbstick Press", AxisType.Digital, DeviceInputType.ThumbStickPress),
		// };
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_0 = (MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A*)(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_1 = L_0;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_2 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_2, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_2);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_3 = L_1;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_4 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_4, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_4);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_5 = L_3;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_6 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_6, 2, _stringLiteralD282A4F94D38B8423798E0B911C67BBC72DF0C48, 3, ((int32_t)13), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_6);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_7 = L_5;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_8 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_8, 3, _stringLiteral389C31E60DD0E577273C009A47D71D79B84A138C, 3, ((int32_t)10), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_8);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_9 = L_7;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_10 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_10, 4, _stringLiteral95EFCD8A09FF0DFDCCBB845A6A8357BA36522BF3, 2, ((int32_t)11), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_10);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_11 = L_9;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_12 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_12, 5, _stringLiteral66E3998641BA92B9A789AE078DDAF008AE3C3881, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_12);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_13 = L_11;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_14 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_14, 6, _stringLiteralC6009AD6297D694342B38B7BB7C2F5545C22E489, 4, ((int32_t)21), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_14);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_15 = L_13;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_16 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_16, 7, _stringLiteralD7852FDD25BF42473FAC2A55D1781621F018CF34, 2, ((int32_t)22), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_16);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_17 = L_15;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_18 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_18, 8, _stringLiteral79522B49BD0D558EBDEA565DD9F3AC297668EBAB, 2, ((int32_t)24), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_18);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_19 = L_17;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_20 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_20, ((int32_t)9), _stringLiteral1C05AAB7B530CCD6533ADF1EB5DF2EB71A089FC1, 2, ((int32_t)27), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_20);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_21 = L_19;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_22 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_22, ((int32_t)10), _stringLiteral9849FBA41D7E35885EDE335C6B0E1B26C43A4CAF, 4, ((int32_t)17), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_22);
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_23 = L_21;
		MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * L_24 = (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mC7D1E1C8447FC202167C7417C805A6AD9605FB19(L_24, ((int32_t)11), _stringLiteralE95349BE7E80138756C18FE6E39B29D379961B40, 2, ((int32_t)18), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 *)L_24);
		return L_23;
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
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m05F5A1F05C071B024C9A052B6B40AFAD45CD1FB4 (XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m05F5A1F05C071B024C9A052B6B40AFAD45CD1FB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m67EBDB9138F58BD0B17EBA28284E621337C9E520 (XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m67EBDB9138F58BD0B17EBA28284E621337C9E520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr IWindowsMixedRealityUtilitiesProvider.IHolographicFramePtr => IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0854582400CD09EEA0559531F8A5525A488D63B1 (XRSDKWindowsMixedRealityUtilitiesProvider_tDA1EF40F62DF6A106DC3988AA533E051AE0F84A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4AMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m874DB9DBDD4D601E913B7EAB7D09AED6ED11973E_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m96C0DC4E89C159B478AB1B8E8846C1086DC69642_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m12E6F7B1C04E0DBA60D7A607DA94A2D40E964641_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m8E0DC9BB43A107E87B530C8A1F18B614CEAA6BE7_inline (BaseSpatialObserver_t8A26E246A83CEF60F8E7F6202EA5ED8B6876F139 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m463BE59B9AA4724234EE801DDA94DC1AADB007D2_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* BaseController_get_Interactions_m84B57E09ED7A39F8FB0EBBFF1B5AF9F62966C439_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tE330A63D12CF463F30CA17BF8DBD16E32791C91A* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m9CDF459E05000A4F66546BF917DB36288CE08220_inline (MixedRealityInteractionMapping_t0C8EA2AB8DF12A2570FBF18A3A2767354A5AB662 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m0DE3694541B659D1511AE99E331328EF9536F8C4_inline (BaseController_t47B5E15AA4B4787353CBAA592C988E9E9482DBA2 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m7BEFB212EB3A81D2EA46B9A461E2B9A6A0F82B59_gshared_inline (BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* L_2 = (BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
