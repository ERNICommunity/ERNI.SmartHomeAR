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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tBDC01CCDE4E1E57AA8E37C0378D0A638D439DD62;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tCDDDA610C55C5FF21BEB1203DBEA8052DAC61939;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t343CA62E290851F0406FBAC50A04858D942040B6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t03F33EC58C80CAB707B8C240352C4E6F4479279E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_tB483D4F18B5CB97B2D64AEA4539DE82B1A2C3BA9;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t0700C197F2AF5291917FFC342851E69C741DC8DE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t19C5490A66EB182517DA3EDB954B9C938A745244;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_tF35BEE48E16518D1C2002FEC98387A96A416FDF1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t374B045E057BD617B00BC13BFC980818C2C8F0C6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9
struct U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Int64>
struct Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_tEBEA2FB8A82730CA993C9CF46E8604C28CBC1BA3;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t4069D1DA0BB9F7C35E168133DC4366313AB9F78E;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.StreamWriter
struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_tB05577DB4F3F14A0734CA864F92F65D4B61DF3C5;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t090608560EB14F610D573A01BF8C02A874135D4E;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_t50CAC585FCBC96C8EFE13ED36C9868ED70BC00F4;
// Windows.Graphics.Holographic.HolographicDisplay
struct HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C;
// Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543;
// Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90;
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622;
// Windows.Perception.People.HandMeshVertexState
struct HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4;
// Windows.Perception.People.HandPose
struct HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_t38D1161B71145B22ABD8FD7F244BB8DEE837A7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral115DA163D47AF900A552D60440D697D80BE9EAA6;
IL2CPP_EXTERN_C String_t* _stringLiteral19A62EFA935D2025B377B7ACDC2E030A1DBBAB91;
IL2CPP_EXTERN_C String_t* _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64;
IL2CPP_EXTERN_C String_t* _stringLiteral3F46CB4BB3ED4814A4B764D654C7F542D8253E1B;
IL2CPP_EXTERN_C String_t* _stringLiteral71356565B0BDA2511BAAC64A6780DC965ABD1A8A;
IL2CPP_EXTERN_C String_t* _stringLiteral75CFB32F644507536A264B176892612FF5F518CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBA683544036E9391092847670BF68C892E6D1F4A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3F575CC4B274140D1ED6BA5DE03C34BEA6E0D9A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m44B1866AEDCC298B4684EF1F744426FDB50D031D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m14E9B8FCBD12065779B2882D4DC5B9761F4251D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912_mDE2C1F2CB403B0548CCF15608D103166C4543DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m1E3E76BF58A28E2FDB9415F981E2EF400575A230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC4C4640CAC528A2DC39C2805D7664736D54ADF21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_mC569F4412F7D47F64AAB915B8EFB6604C2045998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_t63904D1A17C5924E50BC674A4E1D45D72BF123E8_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_mF7D6031EC83179949271D90678F4BDF42E70663A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m64C3E922C350A458125B25AC4E0FB5D06221953D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m927198AE1EACBC2E233DB045BF82A75241FC3663_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings__cctor_m4EED4F0B25BF0B96B382F16DA2B786035A718846_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetHandMeshObserverU3Ed__9_MoveNext_mA621B4963E45C782DC5F2159304F1ECD471F3E7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_m50D7D387B1506313E9AC22266BD2F3B83CC324AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m8173257B297EEC86E74C311446702FC145780EC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mE28BE446FBEF13291520DE63C21B872598DA5372_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition__cctor_m8AA9A7B6A54B84E8DA7DF8A9ED4C84B4A8E85BD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition__ctor_mD527BDD5C570C621E77652334803A4CB94847156_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_RecordHandStop_mAEAE1FB79379F149426D67EA58E04430F1BF843A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m0C85088D4A358BCDDE56A7E54C6ADF6DD11F03FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__cctor_mA4295B76391AFF2C0CE1391F4B6B50161F323C4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__ctor_mFC9765E1B7E06F66D10D4BCC7D43BD9B4C74CC16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities__cctor_m7B6312909CCB2584929B69C15925EFE145D10521_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m5065FFC005E7575F511BA84DB07AE1103CE51174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t79310BDAD6A307D7F6B6A24915AC8874A0C49B40_ComCallableWrapper;
struct IHandMeshObserver_t02A87312E60FF1CFB426A8287E4C41BB51545EDB;
struct IHandMeshVertexState_t23A593DBC3225D490E3367909E596D2524D29B3E;
struct IHandPose_tED14057CBEC7A43491741B9D1C8247FA1CEBEEE9;
struct IHolographicDisplay_tF0874CC665466ADA20A761507B203B4C3227CAED;
struct IHolographicFrame_tB1B952F92A1453CFB04C4266BD14609A400648EF;
struct IHolographicViewConfiguration_t4CCDD7342488700CFE3C015D7DA58569FBDACB0D;
struct ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57;
struct ISpatialInteractionSourceState_t7819CBCDBD13F7DB715D2EFC13F79467B2D07C99;
struct ISpatialInteractionSource_t6D3E806945AEAFC89DAF792071E009B85AD8DC81;

struct MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0A8CCA0D803F86FD1F851BD25C42C8CB4ABCA83A 
{
public:

public:
};


// System.Object

// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_t50CAC585FCBC96C8EFE13ED36C9868ED70BC00F4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDF968D4662BAEA87C592586587500BA2CEA499AD(IAsyncOperationCompletedHandler_1_t79310BDAD6A307D7F6B6A24915AC8874A0C49B40_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9D4E1487FCBDB45464A96AF0A26239F727F341EB(IAsyncOperationCompletedHandler_1_t79310BDAD6A307D7F6B6A24915AC8874A0C49B40_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m53574EF88D2509D5A94729888CEAA21258918571(IHandMeshObserver_t02A87312E60FF1CFB426A8287E4C41BB51545EDB** comReturnValue) = 0;
};
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct NOVTABLE IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHolographicDisplayStatics_GetDefault_mDDB92CBB49CDED28CC3A37EB64B0680C86E34F60(IHolographicDisplay_tF0874CC665466ADA20A761507B203B4C3227CAED** comReturnValue) = 0;
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


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct  ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* ___localJointPoses_1;

public:
	inline static int32_t get_offset_of_localJointPoses_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA, ___localJointPoses_1)); }
	inline MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* get_localJointPoses_1() const { return ___localJointPoses_1; }
	inline MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552** get_address_of_localJointPoses_1() { return &___localJointPoses_1; }
	inline void set_localJointPoses_1(MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* value)
	{
		___localJointPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_1), (void*)value);
	}
};

struct ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::jointCount
	int32_t ___jointCount_0;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_tEBEA2FB8A82730CA993C9CF46E8604C28CBC1BA3 * ___handPoses_2;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}

	inline static int32_t get_offset_of_handPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA_StaticFields, ___handPoses_2)); }
	inline Dictionary_2_tEBEA2FB8A82730CA993C9CF46E8604C28CBC1BA3 * get_handPoses_2() const { return ___handPoses_2; }
	inline Dictionary_2_tEBEA2FB8A82730CA993C9CF46E8604C28CBC1BA3 ** get_address_of_handPoses_2() { return &___handPoses_2; }
	inline void set_handPoses_2(Dictionary_2_tEBEA2FB8A82730CA993C9CF46E8604C28CBC1BA3 * value)
	{
		___handPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions
struct  WindowsExtensions_t066BBFFDE361E85AD066A8C812069B9A74079872  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC  : public RuntimeObject
{
public:
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<>c__DisplayClass12_0::neutralVertexAndNormals
	HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* ___neutralVertexAndNormals_0;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<>c__DisplayClass12_0::neutralPoseVertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___neutralPoseVertices_1;

public:
	inline static int32_t get_offset_of_neutralVertexAndNormals_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC, ___neutralVertexAndNormals_0)); }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* get_neutralVertexAndNormals_0() const { return ___neutralVertexAndNormals_0; }
	inline HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4** get_address_of_neutralVertexAndNormals_0() { return &___neutralVertexAndNormals_0; }
	inline void set_neutralVertexAndNormals_0(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* value)
	{
		___neutralVertexAndNormals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralVertexAndNormals_0), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseVertices_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC, ___neutralPoseVertices_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_neutralPoseVertices_1() const { return ___neutralPoseVertices_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_neutralPoseVertices_1() { return &___neutralPoseVertices_1; }
	inline void set_neutralPoseVertices_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___neutralPoseVertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseVertices_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Nullable`1<System.Int64>
struct  Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Numerics.Matrix4x4
struct  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields, ____identity_16)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Quaternion
struct  Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>
struct  TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tB05577DB4F3F14A0734CA864F92F65D4B61DF3C5 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3, ___m_task_0)); }
	inline Task_1_tB05577DB4F3F14A0734CA864F92F65D4B61DF3C5 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB05577DB4F3F14A0734CA864F92F65D4B61DF3C5 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB05577DB4F3F14A0734CA864F92F65D4B61DF3C5 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// Windows.Graphics.Holographic.HolographicDisplay
struct  HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C  : public Il2CppComObject
{
public:

public:
};

struct HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Holographic.IHolographicDisplayStatics
	IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Holographic.HolographicDisplay"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* get_____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5()
	{
		IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* returnValue = ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5>((&____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
			}
		}
		return returnValue;
	}
};


// Windows.Graphics.Holographic.HolographicFrame
struct  HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicViewConfiguration
struct  HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshObserver
struct  HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshVertexState
struct  HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandPose
struct  HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C  : public Il2CppComObject
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


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384  : public Il2CppComObject
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct  HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::vertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vertices_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::triangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___triangles_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::normals
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::uvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___uvs_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___vertices_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___triangles_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___normals_2)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___uvs_3)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_3), (void*)value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___position_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_4() const { return ___position_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084, ___rotation_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_5() const { return ___rotation_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_5 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes
struct  SupportedApplicationModes_t302FD9775B29287A31B3F00B5BBCB0B24464CA72 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedApplicationModes_t302FD9775B29287A31B3F00B5BBCB0B24464CA72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod
struct  HolographicDepthReprojectionMethod_t25DF32712984F094B70F478DF833F4291157D429 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_t25DF32712984F094B70F478DF833F4291157D429, ___value___2)); }
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.StreamWriter
struct  StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___stream_12)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_12() const { return ___stream_12; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoding_13)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoder_14)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___byteBuffer_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charBuffer_16)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ____asyncWriteTask_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ___Null_11)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// System.Nullable`1<System.Numerics.Matrix4x4>
struct  Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___value_0)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
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


// System.Threading.Tasks.ParallelLoopResult
struct  ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8 
{
public:
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::m_completed
	bool ___m_completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::m_lowestBreakIteration
	Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  ___m_lowestBreakIteration_1;

public:
	inline static int32_t get_offset_of_m_completed_0() { return static_cast<int32_t>(offsetof(ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8, ___m_completed_0)); }
	inline bool get_m_completed_0() const { return ___m_completed_0; }
	inline bool* get_address_of_m_completed_0() { return &___m_completed_0; }
	inline void set_m_completed_0(bool value)
	{
		___m_completed_0 = value;
	}

	inline static int32_t get_offset_of_m_lowestBreakIteration_1() { return static_cast<int32_t>(offsetof(ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8, ___m_lowestBreakIteration_1)); }
	inline Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  get_m_lowestBreakIteration_1() const { return ___m_lowestBreakIteration_1; }
	inline Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * get_address_of_m_lowestBreakIteration_1() { return &___m_lowestBreakIteration_1; }
	inline void set_m_lowestBreakIteration_1(Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  value)
	{
		___m_lowestBreakIteration_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8_marshaled_pinvoke
{
	int32_t ___m_completed_0;
	Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  ___m_lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8_marshaled_com
{
	int32_t ___m_completed_0;
	Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  ___m_lowestBreakIteration_1;
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

// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct  HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct  HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Position_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_0() const { return ___Position_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Normal_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Normal_1 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct  SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9
struct  U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Windows.UI.Input.Spatial.SpatialInteractionSourceState Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::sourceState
	SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState_2;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::<>4__this
	WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * ___U3CU3E4__this_3;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::<>s__1
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * ___U3CU3Es__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::<>u__1
	TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sourceState_2() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___sourceState_2)); }
	inline SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * get_sourceState_2() const { return ___sourceState_2; }
	inline SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 ** get_address_of_sourceState_2() { return &___sourceState_2; }
	inline void set_sourceState_2(SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * value)
	{
		___sourceState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceState_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___U3CU3E4__this_3)); }
	inline WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___U3CU3Es__1_4)); }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 ** get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// System.Action`1<System.Int64>
struct  Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct  MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::jointPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___jointPrefab_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::palmPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___palmPrefab_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::fingertipPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fingertipPrefab_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___handMeshPrefab_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshVisualizationModes
	int32_t ___handMeshVisualizationModes_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handJointVisualizationModes
	int32_t ___handJointVisualizationModes_10;

public:
	inline static int32_t get_offset_of_jointPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___jointPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_jointPrefab_5() const { return ___jointPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_jointPrefab_5() { return &___jointPrefab_5; }
	inline void set_jointPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___jointPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_palmPrefab_6() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___palmPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_palmPrefab_6() const { return ___palmPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_palmPrefab_6() { return &___palmPrefab_6; }
	inline void set_palmPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___palmPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_fingertipPrefab_7() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___fingertipPrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fingertipPrefab_7() const { return ___fingertipPrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fingertipPrefab_7() { return &___fingertipPrefab_7; }
	inline void set_fingertipPrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fingertipPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingertipPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshPrefab_8() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___handMeshPrefab_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_handMeshPrefab_8() const { return ___handMeshPrefab_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_handMeshPrefab_8() { return &___handMeshPrefab_8; }
	inline void set_handMeshPrefab_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___handMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVisualizationModes_9() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___handMeshVisualizationModes_9)); }
	inline int32_t get_handMeshVisualizationModes_9() const { return ___handMeshVisualizationModes_9; }
	inline int32_t* get_address_of_handMeshVisualizationModes_9() { return &___handMeshVisualizationModes_9; }
	inline void set_handMeshVisualizationModes_9(int32_t value)
	{
		___handMeshVisualizationModes_9 = value;
	}

	inline static int32_t get_offset_of_handJointVisualizationModes_10() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C, ___handJointVisualizationModes_10)); }
	inline int32_t get_handJointVisualizationModes_10() const { return ___handJointVisualizationModes_10; }
	inline int32_t* get_address_of_handJointVisualizationModes_10() { return &___handJointVisualizationModes_10; }
	inline void set_handJointVisualizationModes_10(int32_t value)
	{
		___handJointVisualizationModes_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_tF35BEE48E16518D1C2002FEC98387A96A416FDF1* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t19C5490A66EB182517DA3EDB954B9C938A745244 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t0700C197F2AF5291917FFC342851E69C741DC8DE * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t374B045E057BD617B00BC13BFC980818C2C8F0C6 * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_tB483D4F18B5CB97B2D64AEA4539DE82B1A2C3BA9 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t343CA62E290851F0406FBAC50A04858D942040B6 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t03F33EC58C80CAB707B8C240352C4E6F4479279E * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tF35BEE48E16518D1C2002FEC98387A96A416FDF1* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tF35BEE48E16518D1C2002FEC98387A96A416FDF1** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_tF35BEE48E16518D1C2002FEC98387A96A416FDF1* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___focusProviderType_6)); }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___raycastProviderType_7)); }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_t19C5490A66EB182517DA3EDB954B9C938A745244 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_t19C5490A66EB182517DA3EDB954B9C938A745244 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_t19C5490A66EB182517DA3EDB954B9C938A745244 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t0700C197F2AF5291917FFC342851E69C741DC8DE * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t0700C197F2AF5291917FFC342851E69C741DC8DE ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t0700C197F2AF5291917FFC342851E69C741DC8DE * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t374B045E057BD617B00BC13BFC980818C2C8F0C6 * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t374B045E057BD617B00BC13BFC980818C2C8F0C6 ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t374B045E057BD617B00BC13BFC980818C2C8F0C6 * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_tB483D4F18B5CB97B2D64AEA4539DE82B1A2C3BA9 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_tB483D4F18B5CB97B2D64AEA4539DE82B1A2C3BA9 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_tB483D4F18B5CB97B2D64AEA4539DE82B1A2C3BA9 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___supportedVoiceCultures_14)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_t343CA62E290851F0406FBAC50A04858D942040B6 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_t343CA62E290851F0406FBAC50A04858D942040B6 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_t343CA62E290851F0406FBAC50A04858D942040B6 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t03F33EC58C80CAB707B8C240352C4E6F4479279E * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t03F33EC58C80CAB707B8C240352C4E6F4479279E ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t03F33EC58C80CAB707B8C240352C4E6F4479279E * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct  WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<ReferenceJoint>k__BackingField
	int32_t ___U3CReferenceJointU3Ek__BackingField_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<OutputFileName>k__BackingField
	String_t* ___U3COutputFileNameU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_7;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::recordingHand
	uint8_t ___recordingHand_8;

public:
	inline static int32_t get_offset_of_U3CReferenceJointU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2, ___U3CReferenceJointU3Ek__BackingField_5)); }
	inline int32_t get_U3CReferenceJointU3Ek__BackingField_5() const { return ___U3CReferenceJointU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CReferenceJointU3Ek__BackingField_5() { return &___U3CReferenceJointU3Ek__BackingField_5; }
	inline void set_U3CReferenceJointU3Ek__BackingField_5(int32_t value)
	{
		___U3CReferenceJointU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COutputFileNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2, ___U3COutputFileNameU3Ek__BackingField_6)); }
	inline String_t* get_U3COutputFileNameU3Ek__BackingField_6() const { return ___U3COutputFileNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3COutputFileNameU3Ek__BackingField_6() { return &___U3COutputFileNameU3Ek__BackingField_6; }
	inline void set_U3COutputFileNameU3Ek__BackingField_6(String_t* value)
	{
		___U3COutputFileNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputFileNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2, ___offset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_7() const { return ___offset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_7 = value;
	}

	inline static int32_t get_offset_of_recordingHand_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2, ___recordingHand_8)); }
	inline uint8_t get_recordingHand_8() const { return ___recordingHand_8; }
	inline uint8_t* get_address_of_recordingHand_8() { return &___recordingHand_8; }
	inline void set_recordingHand_8(uint8_t value)
	{
		___recordingHand_8 = value;
	}
};

struct WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::jointCount
	int32_t ___jointCount_4;

public:
	inline static int32_t get_offset_of_jointCount_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_StaticFields, ___jointCount_4)); }
	inline int32_t get_jointCount_4() const { return ___jointCount_4; }
	inline int32_t* get_address_of_jointCount_4() { return &___jointCount_4; }
	inline void set_jointCount_4(int32_t value)
	{
		___jointCount_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct  WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D  : public BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::renderFromPVCameraForMixedRealityCapture
	bool ___renderFromPVCameraForMixedRealityCapture_5;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::reprojectionMethod
	int32_t ___reprojectionMethod_6;

public:
	inline static int32_t get_offset_of_renderFromPVCameraForMixedRealityCapture_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D, ___renderFromPVCameraForMixedRealityCapture_5)); }
	inline bool get_renderFromPVCameraForMixedRealityCapture_5() const { return ___renderFromPVCameraForMixedRealityCapture_5; }
	inline bool* get_address_of_renderFromPVCameraForMixedRealityCapture_5() { return &___renderFromPVCameraForMixedRealityCapture_5; }
	inline void set_renderFromPVCameraForMixedRealityCapture_5(bool value)
	{
		___renderFromPVCameraForMixedRealityCapture_5 = value;
	}

	inline static int32_t get_offset_of_reprojectionMethod_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D, ___reprojectionMethod_6)); }
	inline int32_t get_reprojectionMethod_6() const { return ___reprojectionMethod_6; }
	inline int32_t* get_address_of_reprojectionMethod_6() { return &___reprojectionMethod_6; }
	inline void set_reprojectionMethod_6(int32_t value)
	{
		___reprojectionMethod_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct  WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::<ReprojectionMethod>k__BackingField
	int32_t ___U3CReprojectionMethodU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReprojectionMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912, ___U3CReprojectionMethodU3Ek__BackingField_4)); }
	inline int32_t get_U3CReprojectionMethodU3Ek__BackingField_4() const { return ___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CReprojectionMethodU3Ek__BackingField_4() { return &___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline void set_U3CReprojectionMethodU3Ek__BackingField_4(int32_t value)
	{
		___U3CReprojectionMethodU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  m_Items[1];

public:
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  m_Items[1];

public:
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};


// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ComponentExtensions_EnsureComponent_TisRuntimeObject_m2AFFCF815F5B424987D72A3B533EB26FD8D3C094_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___component0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581_gshared (Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_gshared (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_mD084990E56A6524DAA9B2F4DEA4F5DABC6AFFDBD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisRuntimeObject_m9DC2C2CB1B91EC2329E1201B14390AA34F980C78_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m1D100258EB9C50569F044CA1AD3202AB44867224 (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m5E532521BBE952C45995BB13A35AD4347D6A4D9B_inline (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_mB2E62B82760A01B871072CD42F54C7FE249887A1 (int32_t ___joint0, uint8_t ___handedness1, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * ___pose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose__ctor_m7793A7F46592EECFCE64EE75B59A18252815BF39 (ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ParseFromJointPoses(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_ParseFromJointPoses_mF793467D5BCFA78833D21DB508F4766AD4D12EDA (ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * __this, MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* ___joints0, uint8_t ___handedness1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position3, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m7E4434905791D82E785EA0529602349C9A31D75F_inline (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArticulatedHandPose_ToJson_m29C2880E6DD007411C5DF4245F8A6073086414C2 (ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m0C85088D4A358BCDDE56A7E54C6ADF6DD11F03FA (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * File_CreateText_mEED28D1DDECB47B208D7ACA7CDC99B32EE86F162 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m7DFA27C08EFDF4EFDA91C22F6F3A673900112163 (BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mBB7A951ECE5AD81AFA687801917E1854CACE4773 (BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m64C3E922C350A458125B25AC4E0FB5D06221953D (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m927198AE1EACBC2E233DB045BF82A75241FC3663 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m699ACE4F6BEF7AF2B2651285C4877A10D3EB22AA (BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider_ApplyConfiguration_m0F68D04271F7370F79EFCC902E9776BAF68639A9 (BaseCameraSettingsProvider_t42F9811466F34952665EA368DD222A90EB94CA2A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mD03089A9BBFED9BDAE758FA3FC6D583478AE270A_inline (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicDisplay Windows.Graphics.Holographic.HolographicDisplay::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * HolographicDisplay_GetDefault_m5FD6C09F64FA7A6564166BE1A999E21B0F0AD95A (const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicViewConfiguration Windows.Graphics.Holographic.HolographicDisplay::TryGetViewConfiguration(Windows.Graphics.Holographic.HolographicViewConfigurationKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * HolographicDisplay_TryGetViewConfiguration_mF64CA55EEC9D85EF5396964429CDD41E8AD69C7B (HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Void Windows.Graphics.Holographic.HolographicViewConfiguration::put_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration_put_IsEnabled_m3476B0065A7EC22D37A44C6BA77B0920495C6C2B (HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6 (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater>(UnityEngine.Component)
inline WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912_mDE2C1F2CB403B0548CCF15608D103166C4543DB0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___component0, const RuntimeMethod* method)
{
	return ((  WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_m2AFFCF815F5B424987D72A3B533EB26FD8D3C094_gshared)(___component0, method);
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m1284D05D4B8592EC1DF05EE7FBDCAC1DEFA1C367_inline (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m111629E95B8264B36665A3490B86F13260BF802E_inline (WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_mECFA80EC0AD78DEC6664C9F5AD64BF434F6B6A8B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_m7857B6764BDB2723EA6AB47F81BDAB3D42E4C3A0 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m684DD81480861B0885C317749DEB3CF3AAB43F63 (ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9__ctor_mD847B9ED3A0EBD39A9D851F3F1DADF9ED8017F0F (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m14E9B8FCBD12065779B2882D4DC5B9761F4251D6 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_HandTrackingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * MixedRealityInputSystemProfile_get_HandTrackingProfile_m58ECD3BE07D8A795A9372BB18D51E5AED565241D (MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::get_EnableHandMeshVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_m08591604F620836B839531EA663CEBBDA1390F18 (MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshInfo__ctor_mCCCC55AB6A5C1EC448F11EF72C024F3128677DE3 (HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.UI.Input.Spatial.SpatialInteractionSourceState::TryGetHandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * SpatialInteractionSourceState_TryGetHandPose_m54DE5045E63ACBCED5CF3C67E22A837AA0139DC4 (SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m8173257B297EEC86E74C311446702FC145780EC8 (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m9FA0CBB22F70BE543DC7D481B1B552CFEC447BF1 (U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * __this, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshObserver::GetTriangleIndices(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshObserver_GetTriangleIndices_mA0A850F3FF458E34C3B7DED4BF76FFE0B3B7F772 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___indices0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.Perception.People.HandMeshObserver::get_NeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * HandMeshObserver_get_NeutralPose_m52D8D9190216865D1339450336A6E6410F762DD0 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandMeshVertexState Windows.Perception.People.HandMeshObserver::GetVertexStateForPose(Windows.Perception.People.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * HandMeshObserver_GetVertexStateForPose_mBCD404AED85B997A48330D479D295BB9C3E92315 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * ___handPose0, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshVertexState::GetVertices(Windows.Perception.People.HandMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshVertexState_GetVertices_mD127927C5F1FD4A2CFB4F3B9C4F056B42E2EBFD7 (HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * __this, HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* ___vertices0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581 (Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::For(System.Int64,System.Int64,System.Action`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_tA91C524FD393FB385C3C16AD96D6FC4107BAA7F8  Parallel_For_mB7E877605BDA67B403D9EEB3C5EB0A82764E8030 (int64_t ___fromInclusive0, int64_t ___toExclusive1, Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 * ___body2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_m50D7D387B1506313E9AC22266BD2F3B83CC324AF (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___neutralPoseVertices0, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Windows.Perception.People.HandMeshVertexState::get_CoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * HandMeshVertexState_get_CoordinateSystem_m29DC81AC2E44306D18DBDAADE121170395101AEA (HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * __this, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4 (const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.Matrix4x4> Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  SpatialCoordinateSystem_TryGetTransformTo_m41446F7879A49D8D9B5EA767BFF4569308BA13C2 (SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * __this, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___target0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *, const RuntimeMethod*))Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57 (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  (*) (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *, const RuntimeMethod*))Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_gshared)(__this, method);
}
// System.Boolean System.Numerics.Matrix4x4::Decompose(System.Numerics.Matrix4x4,System.Numerics.Vector3&,System.Numerics.Quaternion&,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Decompose_m2E014E7635A20424EDDD710F414B6DAD0F501E84 (Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___matrix0, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * ___scale1, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A * ___rotation2, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * ___translation3, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5 (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m5C8BAFA6828F095E1424BD4ACCB30852535F3A4D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_m25125C6D4AF826CF6F568344B87EA431D3013932 (const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityQuaternion(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SystemNumericsExtensions_ToUnityQuaternion_m102890BA5BEA13EB4677DB9D67F4C4454B849471 (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___quaternion0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ConvertToUnityVector3(System.Numerics.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemNumericsExtensions_ConvertToUnityVector3_m90D7390018540FAFDE6231C0079953BA87AD6ACE (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___target1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * SpatialInteractionSourceState_get_Source_m5D7BA0667E118603D99A5C89FE1BACA3E1660E15 (SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver> Windows.UI.Input.Spatial.SpatialInteractionSource::TryCreateHandMeshObserverAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionSource_TryCreateHandMeshObserverAsync_m77EBC16735940E67759356C145DA827024320B88 (SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Perception.People.HandMeshObserver>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_mC569F4412F7D47F64AAB915B8EFB6604C2045998 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_mD084990E56A6524DAA9B2F4DEA4F5DABC6AFFDBD_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC4C4640CAC528A2DC39C2805D7664736D54ADF21 (TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m44B1866AEDCC298B4684EF1F744426FDB50D031D (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 * ___awaiter0, U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *, U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisRuntimeObject_m9DC2C2CB1B91EC2329E1201B14390AA34F980C78_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::GetResult()
inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * TaskAwaiter_1_GetResult_m1E3E76BF58A28E2FDB9415F981E2EF400575A230 (TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 * __this, const RuntimeMethod* method)
{
	return ((  HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * (*) (TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_m1C6189EF81FED1165D2649DD239E0FB9FA906D5A (BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m5E532521BBE952C45995BB13A35AD4347D6A4D9B (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::set_ReferenceJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_set_ReferenceJoint_m548F482D66BC86F6E0B6A6307CA7B461B1FF50FA (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = ___value0;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m7E4434905791D82E785EA0529602349C9A31D75F (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordLeftHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordLeftHandStart_m17530F5698C7D9A195C2AE03C735C81BB7C95283 (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Left);
		WindowsMixedRealityHandRecorder_RecordHandStart_m1D100258EB9C50569F044CA1AD3202AB44867224(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordRightHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordRightHandStart_m198FC5CEECF4120E5397C1489F1641FCBEE44C14 (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Right);
		WindowsMixedRealityHandRecorder_RecordHandStart_m1D100258EB9C50569F044CA1AD3202AB44867224(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m1D100258EB9C50569F044CA1AD3202AB44867224 (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandJointUtils.TryGetJointPose(ReferenceJoint, handedness, out MixedRealityPose joint);
		int32_t L_0 = WindowsMixedRealityHandRecorder_get_ReferenceJoint_m5E532521BBE952C45995BB13A35AD4347D6A4D9B_inline(__this, /*hidden argument*/NULL);
		uint8_t L_1 = ___handedness0;
		HandJointUtils_TryGetJointPose_mB2E62B82760A01B871072CD42F54C7FE249887A1(L_0, L_1, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_0), /*hidden argument*/NULL);
		// offset = joint.Position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_0), /*hidden argument*/NULL);
		__this->set_offset_7(L_2);
		// recordingHand = handedness;
		uint8_t L_3 = ___handedness0;
		__this->set_recordingHand_8(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStop_mAEAE1FB79379F149426D67EA58E04430F1BF843A (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_RecordHandStop_mAEAE1FB79379F149426D67EA58E04430F1BF843A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* V_0 = NULL;
	ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// MixedRealityPose[] jointPoses = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var))->get_jointCount_4();
		MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* L_1 = (MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552*)(MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552*)SZArrayNew(MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < jointCount; ++i)
		V_3 = 0;
		goto IL_002a;
	}

IL_0010:
	{
		// HandJointUtils.TryGetJointPose((TrackedHandJoint)i, recordingHand, out jointPoses[i]);
		int32_t L_2 = V_3;
		uint8_t L_3 = __this->get_recordingHand_8();
		MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		HandJointUtils_TryGetJointPose_mB2E62B82760A01B871072CD42F54C7FE249887A1(L_2, L_3, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var);
		int32_t L_8 = ((WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var))->get_jointCount_4();
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0010;
		}
	}
	{
		// ArticulatedHandPose pose = new ArticulatedHandPose();
		ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * L_10 = (ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA *)il2cpp_codegen_object_new(ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA_il2cpp_TypeInfo_var);
		ArticulatedHandPose__ctor_m7793A7F46592EECFCE64EE75B59A18252815BF39(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		// pose.ParseFromJointPoses(jointPoses, recordingHand, Quaternion.identity, offset);
		ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * L_11 = V_1;
		MixedRealityPoseU5BU5D_tADA48FCA75C9E15D31730C5C2C05D6AA84537552* L_12 = V_0;
		uint8_t L_13 = __this->get_recordingHand_8();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_offset_7();
		NullCheck(L_11);
		ArticulatedHandPose_ParseFromJointPoses_mF793467D5BCFA78833D21DB508F4766AD4D12EDA(L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		// recordingHand = Handedness.None;
		__this->set_recordingHand_8(0);
		// var filename = String.Format("{0}-{1}.json", OutputFileName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"));
		String_t* L_16 = WindowsMixedRealityHandRecorder_get_OutputFileName_m7E4434905791D82E785EA0529602349C9A31D75F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_17 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_5 = L_17;
		String_t* L_18 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_5), _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64, /*hidden argument*/NULL);
		String_t* L_19 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral75CFB32F644507536A264B176892612FF5F518CD, L_16, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// StoreRecordedHandPose(pose.ToJson(), filename);
		ArticulatedHandPose_tFAF8DC767F91B1DE658FE2F3601074C02A41D7EA * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = ArticulatedHandPose_ToJson_m29C2880E6DD007411C5DF4245F8A6073086414C2(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m0C85088D4A358BCDDE56A7E54C6ADF6DD11F03FA(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m0C85088D4A358BCDDE56A7E54C6ADF6DD11F03FA (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m0C85088D4A358BCDDE56A7E54C6ADF6DD11F03FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string path = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_1 = ___filename1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// using (TextWriter writer = File.CreateText(path))
		String_t* L_3 = V_0;
		StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_4 = File_CreateText_mEED28D1DDECB47B208D7ACA7CDC99B32EE86F162(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// writer.Write(data);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_5 = V_1;
		String_t* L_6 = ___data0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, L_6);
		IL2CPP_LEAVE(0x2B, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_7 = V_1;
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0023:
		{
			TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__ctor_mFC9765E1B7E06F66D10D4BCC7D43BD9B4C74CC16 (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__ctor_mFC9765E1B7E06F66D10D4BCC7D43BD9B4C74CC16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(((int32_t)11));
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		__this->set_U3COutputFileNameU3Ek__BackingField_6(_stringLiteralC3F575CC4B274140D1ED6BA5DE03C34BEA6E0D9A);
		// private Vector3 offset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offset_7(L_0);
		// private Handedness recordingHand = Handedness.None;
		__this->set_recordingHand_8(0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__cctor_mA4295B76391AFF2C0CE1391F4B6B50161F323C4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__cctor_mA4295B76391AFF2C0CE1391F4B6B50161F323C4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t63904D1A17C5924E50BC674A4E1D45D72BF123E8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2_il2cpp_TypeInfo_var))->set_jointCount_4((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m48F305156CBEC96F0D781A06725A74C725DD956F (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___profile3, const RuntimeMethod* method)
{
	{
		// private WindowsMixedRealityReprojectionUpdater reprojectionUpdater = null;
		__this->set_reprojectionUpdater_9((WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 *)NULL);
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m7DFA27C08EFDF4EFDA91C22F6F3A673900112163(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_m69751AB817B22A19603EA107FAEC02B656188666 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	{
		// base.Enable();
		BaseService_Enable_mBB7A951ECE5AD81AFA687801917E1854CACE4773(__this, /*hidden argument*/NULL);
		// InitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m64C3E922C350A458125B25AC4E0FB5D06221953D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Disable_m1E7ADF98021E1FE7775FEDCB3D01C32F1E0B6002 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	{
		// UninitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m927198AE1EACBC2E233DB045BF82A75241FC3663(__this, /*hidden argument*/NULL);
		// base.Disable();
		BaseService_Disable_m699ACE4F6BEF7AF2B2651285C4877A10D3EB22AA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WindowsMixedRealityCameraSettingsProfile Profile => ConfigurationProfile as WindowsMixedRealityCameraSettingsProfile;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D *)IsInstClass((RuntimeObject*)L_0, WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_mF7D6031EC83179949271D90678F4BDF42E70663A (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_mF7D6031EC83179949271D90678F4BDF42E70663A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * G_B7_0 = NULL;
	HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * G_B6_0 = NULL;
	HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * G_B8_0 = NULL;
	{
		// base.ApplyConfiguration();
		BaseCameraSettingsProvider_ApplyConfiguration_m0F68D04271F7370F79EFCC902E9776BAF68639A9(__this, /*hidden argument*/NULL);
		// if (Profile != null
		//     && Profile.RenderFromPVCameraForMixedRealityCapture
		//     && isTryGetViewConfigurationSupported)
		WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * L_0 = BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mD03089A9BBFED9BDAE758FA3FC6D583478AE270A_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var);
		bool L_4 = ((BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var))->get_isTryGetViewConfigurationSupported_8();
		G_B4_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B4_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// global::Windows.Graphics.Holographic.HolographicViewConfiguration viewConfiguration = global::Windows.Graphics.Holographic.HolographicDisplay.GetDefault()?.TryGetViewConfiguration(global::Windows.Graphics.Holographic.HolographicViewConfigurationKind.PhotoVideoCamera);
		HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * L_6 = HolographicDisplay_GetDefault_m5FD6C09F64FA7A6564166BE1A999E21B0F0AD95A(/*hidden argument*/NULL);
		HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * L_7 = L_6;
		G_B6_0 = L_7;
		if (L_7)
		{
			G_B7_0 = L_7;
			goto IL_003c;
		}
	}
	{
		G_B8_0 = ((HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 *)(NULL));
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B7_0);
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_8 = HolographicDisplay_TryGetViewConfiguration_mF64CA55EEC9D85EF5396964429CDD41E8AD69C7B(G_B7_0, 1, /*hidden argument*/NULL);
		G_B8_0 = L_8;
	}

IL_0042:
	{
		V_1 = G_B8_0;
		// if (viewConfiguration != null)
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_9 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// viewConfiguration.IsEnabled = true;
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_11 = V_1;
		NullCheck(L_11);
		HolographicViewConfiguration_put_IsEnabled_m3476B0065A7EC22D37A44C6BA77B0920495C6C2B(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m64C3E922C350A458125B25AC4E0FB5D06221953D (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m64C3E922C350A458125B25AC4E0FB5D06221953D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (reprojectionUpdater == null && Profile != null)
		WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// reprojectionUpdater = CameraCache.Main.EnsureComponent<WindowsMixedRealityReprojectionUpdater>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * L_6 = ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912_mDE2C1F2CB403B0548CCF15608D103166C4543DB0(L_5, /*hidden argument*/ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912_mDE2C1F2CB403B0548CCF15608D103166C4543DB0_RuntimeMethod_var);
		__this->set_reprojectionUpdater_9(L_6);
		// reprojectionUpdater.ReprojectionMethod = Profile.ReprojectionMethod;
		WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * L_7 = __this->get_reprojectionUpdater_9();
		WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * L_8 = BaseWindowsMixedRealityCameraSettings_get_Profile_m3A9499B4037EC5E4F7CD5695ED4E4123848450F6(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m1284D05D4B8592EC1DF05EE7FBDCAC1DEFA1C367_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m111629E95B8264B36665A3490B86F13260BF802E_inline(L_7, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m927198AE1EACBC2E233DB045BF82A75241FC3663 (BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m927198AE1EACBC2E233DB045BF82A75241FC3663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (reprojectionUpdater != null)
		WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(reprojectionUpdater);
		WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * L_3 = __this->get_reprojectionUpdater_9();
		UnityObjectExtensions_DestroyObject_mECFA80EC0AD78DEC6664C9F5AD64BF434F6B6A8B(L_3, (0.0f), /*hidden argument*/NULL);
		// reprojectionUpdater = null;
		__this->set_reprojectionUpdater_9((WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 *)NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__cctor_m4EED4F0B25BF0B96B382F16DA2B786035A718846 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings__cctor_m4EED4F0B25BF0B96B382F16DA2B786035A718846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly bool isTryGetViewConfigurationSupported = Windows.Utilities.WindowsApiChecker.IsMethodAvailable(
		//     "Windows.Graphics.Holographic",
		//     "HolographicDisplay",
		//     "TryGetViewConfiguration");
		bool L_0 = WindowsApiChecker_IsMethodAvailable_m7857B6764BDB2723EA6AB47F81BDAB3D42E4C3A0(_stringLiteral115DA163D47AF900A552D60440D697D80BE9EAA6, _stringLiteral3F46CB4BB3ED4814A4B764D654C7F542D8253E1B, _stringLiteral71356565B0BDA2511BAAC64A6780DC965ABD1A8A, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t889605FE4EA0754CB3C3A51846D7BB64D51AB8FB_il2cpp_TypeInfo_var))->set_isTryGetViewConfigurationSupported_8(L_0);
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
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions::ToMRTKHandedness(Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsExtensions_ToMRTKHandedness_m4E7B5E818D6A8F4AEE172BD2FABEF839B816FCE8 (int32_t ___handedness0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		// switch (handedness)
		int32_t L_0 = ___handedness0;
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
				goto IL_0017;
			}
			case 2:
			{
				goto IL_001b;
			}
		}
	}
	{
		goto IL_001f;
	}

IL_0017:
	{
		// return Handedness.Left;
		V_1 = 1;
		goto IL_0023;
	}

IL_001b:
	{
		// return Handedness.Right;
		V_1 = 2;
		goto IL_0023;
	}

IL_001f:
	{
		// return Handedness.None;
		V_1 = 0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		uint8_t L_2 = V_1;
		return L_2;
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__ctor_mD527BDD5C570C621E77652334803A4CB94847156 (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition__ctor_mD527BDD5C570C621E77652334803A4CB94847156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HandMeshObserver handMeshObserver = null;
		__this->set_handMeshObserver_13((HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 *)NULL);
		// private ushort[] handMeshTriangleIndices = null;
		__this->set_handMeshTriangleIndices_14((UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)NULL);
		// private HandMeshVertex[] vertexAndNormals = null;
		__this->set_vertexAndNormals_15((HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)NULL);
		// private Vector3[] handMeshVerticesUnity = null;
		__this->set_handMeshVerticesUnity_16((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL);
		// private Vector3[] handMeshNormalsUnity = null;
		__this->set_handMeshNormalsUnity_17((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL);
		// private int[] handMeshTriangleIndicesUnity = null;
		__this->set_handMeshTriangleIndicesUnity_18((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL);
		// private Vector2[] handMeshUVsUnity = null;
		__this->set_handMeshUVsUnity_19((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)NULL);
		// private bool hasRequestedHandMeshObserver = false;
		__this->set_hasRequestedHandMeshObserver_20((bool)0);
		// public WindowsMixedRealityArticulatedHandDefinition(IMixedRealityInputSource source, Handedness handedness) : base(source, handedness) { }
		RuntimeObject* L_0 = ___source0;
		uint8_t L_1 = ___handedness1;
		IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m684DD81480861B0885C317749DEB3CF3AAB43F63(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WindowsMixedRealityArticulatedHandDefinition(IMixedRealityInputSource source, Handedness handedness) : base(source, handedness) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m8173257B297EEC86E74C311446702FC145780EC8 (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m8173257B297EEC86E74C311446702FC145780EC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * V_0 = NULL;
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_0 = (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 *)il2cpp_codegen_object_new(U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_il2cpp_TypeInfo_var);
		U3CSetHandMeshObserverU3Ed__9__ctor_mD847B9ED3A0EBD39A9D851F3F1DADF9ED8017F0F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_2 = V_0;
		SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_3 = ___sourceState0;
		NullCheck(L_2);
		L_2->set_sourceState_2(L_3);
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_4 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_5 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * L_7 = V_0;
		NullCheck(L_7);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m14E9B8FCBD12065779B2882D4DC5B9761F4251D6((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m14E9B8FCBD12065779B2882D4DC5B9761F4251D6_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_m50D7D387B1506313E9AC22266BD2F3B83CC324AF (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_m50D7D387B1506313E9AC22266BD2F3B83CC324AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		V_3 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralBA683544036E9391092847670BF68C892E6D1F4A, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ___neutralPoseVertices0;
		NullCheck(L_2);
		float L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_3;
		// float maxY = minY;
		float L_4 = V_0;
		V_1 = L_4;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_4 = 1;
		goto IL_0073;
	}

IL_002b:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = ___neutralPoseVertices0;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// if (p.y < minY)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_5;
		float L_10 = L_9.get_y_3();
		float L_11 = V_0;
		V_6 = (bool)((((float)L_10) < ((float)L_11))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// minY = p.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_5;
		float L_14 = L_13.get_y_3();
		V_0 = L_14;
		goto IL_006c;
	}

IL_0052:
	{
		// else if (p.y > maxY)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_5;
		float L_16 = L_15.get_y_3();
		float L_17 = V_1;
		V_7 = (bool)((((float)L_16) > ((float)L_17))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		// maxY = p.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_5;
		float L_20 = L_19.get_y_3();
		V_1 = L_20;
	}

IL_006c:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0073:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_22 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		V_8 = (bool)((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))? 1 : 0);
		bool L_24 = V_8;
		if (L_24)
		{
			goto IL_002b;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_25 = V_1;
		float L_26 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_26))));
		// handMeshUVsUnity = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_27 = ___neutralPoseVertices0;
		NullCheck(L_27);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_28 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))));
		__this->set_handMeshUVsUnity_19(L_28);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_9 = 0;
		goto IL_00db;
	}

IL_009d:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_29 = ___neutralPoseVertices0;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		// handMeshUVsUnity[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_33 = __this->get_handMeshUVsUnity_19();
		int32_t L_34 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_10;
		float L_36 = L_35.get_x_2();
		float L_37 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_10;
		float L_39 = L_38.get_y_3();
		float L_40 = V_0;
		float L_41 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_42), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40)), (float)L_41)), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_42);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_43 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00db:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_44 = V_9;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_45 = ___neutralPoseVertices0;
		NullCheck(L_45);
		V_11 = (bool)((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_009d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mE28BE446FBEF13291520DE63C21B872598DA5372 (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mE28BE446FBEF13291520DE63C21B872598DA5372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * V_2 = NULL;
	MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * V_3 = NULL;
	HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * V_12 = NULL;
	HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * V_13 = NULL;
	HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * V_17 = NULL;
	Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_23;
	memset((&V_23), 0, sizeof(V_23));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_24;
	memset((&V_24), 0, sizeof(V_24));
	HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * V_25 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * G_B4_0 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B32_0 = 0;
	RuntimeObject* G_B36_0 = NULL;
	RuntimeObject* G_B35_0 = NULL;
	{
		// using (UpdateHandMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var))->get_UpdateHandMeshPerfMarker_21();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// MixedRealityHandTrackingProfile handTrackingProfile = null;
			V_2 = (MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C *)NULL;
			// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
			RuntimeObject* L_2 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
			RuntimeObject* L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001e;
			}
		}

IL_001a:
		{
			G_B4_0 = ((MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B *)(NULL));
			goto IL_0023;
		}

IL_001e:
		{
			NullCheck(G_B3_0);
			MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_4 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, G_B3_0);
			G_B4_0 = L_4;
		}

IL_0023:
		{
			V_3 = G_B4_0;
			// if (inputSystemProfile != null)
			MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_5 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_5 = L_6;
			bool L_7 = V_5;
			if (!L_7)
			{
				goto IL_003a;
			}
		}

IL_0031:
		{
			// handTrackingProfile = inputSystemProfile.HandTrackingProfile;
			MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_8 = V_3;
			NullCheck(L_8);
			MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * L_9 = MixedRealityInputSystemProfile_get_HandTrackingProfile_m58ECD3BE07D8A795A9372BB18D51E5AED565241D(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
		}

IL_003a:
		{
			// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
			MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * L_10 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_004e;
			}
		}

IL_0043:
		{
			MixedRealityHandTrackingProfile_tE964E132EE236F598019278A141CB3E6810AD14C * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_m08591604F620836B839531EA663CEBBDA1390F18(L_12, /*hidden argument*/NULL);
			G_B9_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			goto IL_004f;
		}

IL_004e:
		{
			G_B9_0 = 1;
		}

IL_004f:
		{
			V_6 = (bool)G_B9_0;
			bool L_14 = V_6;
			if (!L_14)
			{
				goto IL_00a0;
			}
		}

IL_0055:
		{
			// if (handMeshObserver != null)
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_15 = __this->get_handMeshObserver_13();
			V_7 = (bool)((!(((RuntimeObject*)(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_16 = V_7;
			if (!L_16)
			{
				goto IL_009b;
			}
		}

IL_0065:
		{
			// HandMeshInfo handMeshInfo = new HandMeshInfo();
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_17 = (HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 *)il2cpp_codegen_object_new(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mCCCC55AB6A5C1EC448F11EF72C024F3128677DE3(L_17, /*hidden argument*/NULL);
			V_8 = L_17;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
			RuntimeObject* L_18 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
			RuntimeObject* L_19 = L_18;
			G_B12_0 = L_19;
			if (L_19)
			{
				G_B13_0 = L_19;
				goto IL_0078;
			}
		}

IL_0075:
		{
			goto IL_008c;
		}

IL_0078:
		{
			RuntimeObject* L_20 = ((ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 *)__this)->get_inputSource_0();
			uint8_t L_21 = ((ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 *)__this)->get_handedness_1();
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_22 = V_8;
			NullCheck(G_B13_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, G_B13_0, L_20, L_21, L_22);
		}

IL_008c:
		{
			// hasRequestedHandMeshObserver = false;
			__this->set_hasRequestedHandMeshObserver_20((bool)0);
			// handMeshObserver = null;
			__this->set_handMeshObserver_13((HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 *)NULL);
		}

IL_009b:
		{
			// return;
			IL2CPP_LEAVE(0x36C, FINALLY_035d);
		}

IL_00a0:
		{
			// HandPose handPose = sourceState.TryGetHandPose();
			SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_23 = ___sourceState0;
			NullCheck(L_23);
			HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_24 = SpatialInteractionSourceState_TryGetHandPose_m54DE5045E63ACBCED5CF3C67E22A837AA0139DC4(L_23, /*hidden argument*/NULL);
			V_4 = L_24;
			// if (handMeshObserver == null && !hasRequestedHandMeshObserver)
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_25 = __this->get_handMeshObserver_13();
			if (L_25)
			{
				goto IL_00bb;
			}
		}

IL_00b0:
		{
			bool L_26 = __this->get_hasRequestedHandMeshObserver_20();
			G_B19_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
			goto IL_00bc;
		}

IL_00bb:
		{
			G_B19_0 = 0;
		}

IL_00bc:
		{
			V_9 = (bool)G_B19_0;
			bool L_27 = V_9;
			if (!L_27)
			{
				goto IL_00d3;
			}
		}

IL_00c2:
		{
			// SetHandMeshObserver(sourceState);
			SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_28 = ___sourceState0;
			WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m8173257B297EEC86E74C311446702FC145780EC8(__this, L_28, /*hidden argument*/NULL);
			// hasRequestedHandMeshObserver = true;
			__this->set_hasRequestedHandMeshObserver_20((bool)1);
		}

IL_00d3:
		{
			// if (handMeshObserver != null && handPose != null)
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_29 = __this->get_handMeshObserver_13();
			if (!L_29)
			{
				goto IL_00e2;
			}
		}

IL_00db:
		{
			HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_30 = V_4;
			G_B24_0 = ((!(((RuntimeObject*)(HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C *)L_30) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_00e3;
		}

IL_00e2:
		{
			G_B24_0 = 0;
		}

IL_00e3:
		{
			V_10 = (bool)G_B24_0;
			bool L_31 = V_10;
			if (!L_31)
			{
				goto IL_035a;
			}
		}

IL_00ec:
		{
			// if (handMeshTriangleIndices == null)
			UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_32 = __this->get_handMeshTriangleIndices_14();
			V_11 = (bool)((((RuntimeObject*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_32) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_33 = V_11;
			if (!L_33)
			{
				goto IL_01eb;
			}
		}

IL_00ff:
		{
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_34 = (U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass12_0__ctor_m9FA0CBB22F70BE543DC7D481B1B552CFEC447BF1(L_34, /*hidden argument*/NULL);
			V_12 = L_34;
			// handMeshTriangleIndices = new ushort[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_35 = __this->get_handMeshObserver_13();
			NullCheck(L_35);
			uint32_t L_36 = HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466(L_35, /*hidden argument*/NULL);
			UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_37 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)SZArrayNew(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var, (uint32_t)L_36);
			__this->set_handMeshTriangleIndices_14(L_37);
			// handMeshTriangleIndicesUnity = new int[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_38 = __this->get_handMeshObserver_13();
			NullCheck(L_38);
			uint32_t L_39 = HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466(L_38, /*hidden argument*/NULL);
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_40 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_39);
			__this->set_handMeshTriangleIndicesUnity_18(L_40);
			// handMeshObserver.GetTriangleIndices(handMeshTriangleIndices);
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_41 = __this->get_handMeshObserver_13();
			UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_42 = __this->get_handMeshTriangleIndices_14();
			NullCheck(L_41);
			HandMeshObserver_GetTriangleIndices_mA0A850F3FF458E34C3B7DED4BF76FFE0B3B7F772(L_41, L_42, /*hidden argument*/NULL);
			// Array.Copy(handMeshTriangleIndices, handMeshTriangleIndicesUnity, (int)handMeshObserver.TriangleIndexCount);
			UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_43 = __this->get_handMeshTriangleIndices_14();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_44 = __this->get_handMeshTriangleIndicesUnity_18();
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_45 = __this->get_handMeshObserver_13();
			NullCheck(L_45);
			uint32_t L_46 = HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466(L_45, /*hidden argument*/NULL);
			Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_43, (RuntimeArray *)(RuntimeArray *)L_44, L_46, /*hidden argument*/NULL);
			// Vector3[] neutralPoseVertices = new Vector3[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_47 = V_12;
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_48 = __this->get_handMeshObserver_13();
			NullCheck(L_48);
			uint32_t L_49 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_48, /*hidden argument*/NULL);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_50 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_49);
			NullCheck(L_47);
			L_47->set_neutralPoseVertices_1(L_50);
			// HandPose neutralPose = handMeshObserver.NeutralPose;
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_51 = __this->get_handMeshObserver_13();
			NullCheck(L_51);
			HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_52 = HandMeshObserver_get_NeutralPose_m52D8D9190216865D1339450336A6E6410F762DD0(L_51, /*hidden argument*/NULL);
			V_13 = L_52;
			// var neutralVertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_53 = V_12;
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_54 = __this->get_handMeshObserver_13();
			NullCheck(L_54);
			uint32_t L_55 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_54, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_56 = (HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)SZArrayNew(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4_il2cpp_TypeInfo_var, (uint32_t)L_55);
			NullCheck(L_53);
			L_53->set_neutralVertexAndNormals_0(L_56);
			// HandMeshVertexState handMeshVertexState = handMeshObserver.GetVertexStateForPose(neutralPose);
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_57 = __this->get_handMeshObserver_13();
			HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_58 = V_13;
			NullCheck(L_57);
			HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_59 = HandMeshObserver_GetVertexStateForPose_mBCD404AED85B997A48330D479D295BB9C3E92315(L_57, L_58, /*hidden argument*/NULL);
			V_14 = L_59;
			// handMeshVertexState.GetVertices(neutralVertexAndNormals);
			HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_60 = V_14;
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_61 = V_12;
			NullCheck(L_61);
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_62 = L_61->get_neutralVertexAndNormals_0();
			NullCheck(L_60);
			HandMeshVertexState_GetVertices_mD127927C5F1FD4A2CFB4F3B9C4F056B42E2EBFD7(L_60, L_62, /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
			// });
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_63 = __this->get_handMeshObserver_13();
			NullCheck(L_63);
			uint32_t L_64 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_63, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_65 = V_12;
			Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 * L_66 = (Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 *)il2cpp_codegen_object_new(Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703_il2cpp_TypeInfo_var);
			Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581(L_66, L_65, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_t38D1161B71145B22ABD8FD7F244BB8DEE837A7F4_il2cpp_TypeInfo_var);
			Parallel_For_mB7E877605BDA67B403D9EEB3C5EB0A82764E8030((((int64_t)((int64_t)0))), (((int64_t)((uint64_t)L_64))), L_66, /*hidden argument*/NULL);
			// InitializeUVs(neutralPoseVertices);
			U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * L_67 = V_12;
			NullCheck(L_67);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_68 = L_67->get_neutralPoseVertices_1();
			WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_m50D7D387B1506313E9AC22266BD2F3B83CC324AF(__this, L_68, /*hidden argument*/NULL);
		}

IL_01eb:
		{
			// if (vertexAndNormals == null)
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_69 = __this->get_vertexAndNormals_15();
			V_15 = (bool)((((RuntimeObject*)(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)L_69) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_70 = V_15;
			if (!L_70)
			{
				goto IL_023e;
			}
		}

IL_01fa:
		{
			// vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_71 = __this->get_handMeshObserver_13();
			NullCheck(L_71);
			uint32_t L_72 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_71, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_73 = (HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4*)SZArrayNew(HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4_il2cpp_TypeInfo_var, (uint32_t)L_72);
			__this->set_vertexAndNormals_15(L_73);
			// handMeshVerticesUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_74 = __this->get_handMeshObserver_13();
			NullCheck(L_74);
			uint32_t L_75 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_74, /*hidden argument*/NULL);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_76 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_75);
			__this->set_handMeshVerticesUnity_16(L_76);
			// handMeshNormalsUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_77 = __this->get_handMeshObserver_13();
			NullCheck(L_77);
			uint32_t L_78 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_77, /*hidden argument*/NULL);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_79 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_78);
			__this->set_handMeshNormalsUnity_17(L_79);
		}

IL_023e:
		{
			// if (vertexAndNormals != null && handMeshTriangleIndices != null)
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_80 = __this->get_vertexAndNormals_15();
			if (!L_80)
			{
				goto IL_0251;
			}
		}

IL_0246:
		{
			UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_81 = __this->get_handMeshTriangleIndices_14();
			G_B32_0 = ((!(((RuntimeObject*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_81) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_0252;
		}

IL_0251:
		{
			G_B32_0 = 0;
		}

IL_0252:
		{
			V_16 = (bool)G_B32_0;
			bool L_82 = V_16;
			if (!L_82)
			{
				goto IL_0359;
			}
		}

IL_025b:
		{
			// var handMeshVertexState = handMeshObserver.GetVertexStateForPose(handPose);
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_83 = __this->get_handMeshObserver_13();
			HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_84 = V_4;
			NullCheck(L_83);
			HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_85 = HandMeshObserver_GetVertexStateForPose_mBCD404AED85B997A48330D479D295BB9C3E92315(L_83, L_84, /*hidden argument*/NULL);
			V_17 = L_85;
			// handMeshVertexState.GetVertices(vertexAndNormals);
			HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_86 = V_17;
			HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_87 = __this->get_vertexAndNormals_15();
			NullCheck(L_86);
			HandMeshVertexState_GetVertices_mD127927C5F1FD4A2CFB4F3B9C4F056B42E2EBFD7(L_86, L_87, /*hidden argument*/NULL);
			// var meshTransform = handMeshVertexState.CoordinateSystem.TryGetTransformTo(WindowsMixedRealityUtilities.SpatialCoordinateSystem);
			HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_88 = V_17;
			NullCheck(L_88);
			SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_89 = HandMeshVertexState_get_CoordinateSystem_m29DC81AC2E44306D18DBDAADE121170395101AEA(L_88, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
			SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_90 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4(/*hidden argument*/NULL);
			NullCheck(L_89);
			Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  L_91 = SpatialCoordinateSystem_TryGetTransformTo_m41446F7879A49D8D9B5EA767BFF4569308BA13C2(L_89, L_90, /*hidden argument*/NULL);
			V_18 = L_91;
			// if (meshTransform.HasValue)
			bool L_92 = Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_inline((Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *)(&V_18), /*hidden argument*/Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_RuntimeMethod_var);
			V_19 = L_92;
			bool L_93 = V_19;
			if (!L_93)
			{
				goto IL_0358;
			}
		}

IL_029c:
		{
			// System.Numerics.Matrix4x4.Decompose(meshTransform.Value,
			//     out System.Numerics.Vector3 scale,
			//     out System.Numerics.Quaternion rotation,
			//     out System.Numerics.Vector3 translation);
			Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_94 = Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57((Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *)(&V_18), /*hidden argument*/Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var);
			Matrix4x4_Decompose_m2E014E7635A20424EDDD710F414B6DAD0F501E84(L_94, (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 *)(&V_20), (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A *)(&V_21), (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 *)(&V_22), /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
			//     vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
			// });
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_95 = __this->get_handMeshObserver_13();
			NullCheck(L_95);
			uint32_t L_96 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_95, /*hidden argument*/NULL);
			Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 * L_97 = (Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703 *)il2cpp_codegen_object_new(Action_1_t3F91D2593C80181986F6D400B3944EA3C78AA703_il2cpp_TypeInfo_var);
			Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581(L_97, __this, (intptr_t)((intptr_t)WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE6AF66ADADA490132D58643FF76985B2FEA30581_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_t38D1161B71145B22ABD8FD7F244BB8DEE837A7F4_il2cpp_TypeInfo_var);
			Parallel_For_mB7E877605BDA67B403D9EEB3C5EB0A82764E8030((((int64_t)((int64_t)0))), (((int64_t)((uint64_t)L_96))), L_97, /*hidden argument*/NULL);
			// Vector3 positionUnity = MixedRealityPlayspace.TransformPoint(translation.ToUnityVector3());
			Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_98 = V_22;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5(L_98, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = MixedRealityPlayspace_TransformPoint_m5C8BAFA6828F095E1424BD4ACCB30852535F3A4D(L_99, /*hidden argument*/NULL);
			V_23 = L_100;
			// Quaternion rotationUnity = MixedRealityPlayspace.Rotation * rotation.ToUnityQuaternion();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_101 = MixedRealityPlayspace_get_Rotation_m25125C6D4AF826CF6F568344B87EA431D3013932(/*hidden argument*/NULL);
			Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  L_102 = V_21;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_103 = SystemNumericsExtensions_ToUnityQuaternion_m102890BA5BEA13EB4677DB9D67F4C4454B849471(L_102, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_104 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_101, L_103, /*hidden argument*/NULL);
			V_24 = L_104;
			// HandMeshInfo handMeshInfo = new HandMeshInfo
			// {
			//     vertices = handMeshVerticesUnity,
			//     normals = handMeshNormalsUnity,
			//     triangles = handMeshTriangleIndicesUnity,
			//     uvs = handMeshUVsUnity,
			//     position = positionUnity,
			//     rotation = rotationUnity
			// };
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_105 = (HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 *)il2cpp_codegen_object_new(HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mCCCC55AB6A5C1EC448F11EF72C024F3128677DE3(L_105, /*hidden argument*/NULL);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_106 = L_105;
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_107 = __this->get_handMeshVerticesUnity_16();
			NullCheck(L_106);
			L_106->set_vertices_0(L_107);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_108 = L_106;
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_109 = __this->get_handMeshNormalsUnity_17();
			NullCheck(L_108);
			L_108->set_normals_2(L_109);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_110 = L_108;
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_111 = __this->get_handMeshTriangleIndicesUnity_18();
			NullCheck(L_110);
			L_110->set_triangles_1(L_111);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_112 = L_110;
			Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_113 = __this->get_handMeshUVsUnity_19();
			NullCheck(L_112);
			L_112->set_uvs_3(L_113);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_114 = L_112;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_115 = V_23;
			NullCheck(L_114);
			L_114->set_position_4(L_115);
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_116 = L_114;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_117 = V_24;
			NullCheck(L_116);
			L_116->set_rotation_5(L_117);
			V_25 = L_116;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
			RuntimeObject* L_118 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
			RuntimeObject* L_119 = L_118;
			G_B35_0 = L_119;
			if (L_119)
			{
				G_B36_0 = L_119;
				goto IL_0343;
			}
		}

IL_0340:
		{
			goto IL_0357;
		}

IL_0343:
		{
			RuntimeObject* L_120 = ((ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 *)__this)->get_inputSource_0();
			uint8_t L_121 = ((ArticulatedHandDefinition_t64AB6F7A62F1D0E19D6B11BFBA472F176ADCD709 *)__this)->get_handedness_1();
			HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * L_122 = V_25;
			NullCheck(G_B36_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t97CE256FABE551C015BE36E467AA7EFC57254084 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, G_B36_0, L_120, L_121, L_122);
		}

IL_0357:
		{
		}

IL_0358:
		{
		}

IL_0359:
		{
		}

IL_035a:
		{
			IL2CPP_LEAVE(0x36C, FINALLY_035d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_035d;
	}

FINALLY_035d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(861)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(861)
	{
		IL2CPP_JUMP_TBL(0x36C, IL_036c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_036c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__cctor_m8AA9A7B6A54B84E8DA7DF8A9ED4C84B4A8E85BD6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition__cctor_m8AA9A7B6A54B84E8DA7DF8A9ED4C84B4A8E85BD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHandMeshPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityArticulatedHandDefinition.UpdateHandMesh");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral19A62EFA935D2025B377B7ACDC2E030A1DBBAB91, /*hidden argument*/NULL);
		((WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5_il2cpp_TypeInfo_var))->set_UpdateHandMeshPerfMarker_21(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::<UpdateHandMesh>b__12_1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E (WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
		HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_0 = __this->get_vertexAndNormals_15();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_1)))))->get_Position_0();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_handMeshVerticesUnity_16();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m90D7390018540FAFDE6231C0079953BA87AD6ACE(L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_4))))), /*hidden argument*/NULL);
		// vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
		HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_5 = __this->get_vertexAndNormals_15();
		int64_t L_6 = ___i0;
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_6)))))->get_Normal_1();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = __this->get_handMeshNormalsUnity_17();
		int64_t L_9 = ___i0;
		if ((int64_t)(L_9) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_mE70A64D2B4DC513DB314E79622970E7A5A08E07E_RuntimeMethod_var);
		NullCheck(L_8);
		SystemNumericsExtensions_ConvertToUnityVector3_m90D7390018540FAFDE6231C0079953BA87AD6ACE(L_7, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_9))))), /*hidden argument*/NULL);
		// });
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m9FA0CBB22F70BE543DC7D481B1B552CFEC447BF1 (U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<>c__DisplayClass12_0::<UpdateHandMesh>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0 (U3CU3Ec__DisplayClass12_0_t92F8312F7F89D1227EDB3A5438ED19E1814370AC * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
		HandMeshVertexU5BU5D_tA8168A3DA6AB631C7BADDBB4D2337087B5BA21B4* L_0 = __this->get_neutralVertexAndNormals_0();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_1)))))->get_Position_0();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_neutralPoseVertices_1();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_m968F48E213AA12B6D67019A8FE235126E3F450C0_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m90D7390018540FAFDE6231C0079953BA87AD6ACE(L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_4))))), /*hidden argument*/NULL);
		// });
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9__ctor_mD847B9ED3A0EBD39A9D851F3F1DADF9ED8017F0F (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_MoveNext_mA621B4963E45C782DC5F2159304F1ECD471F3E7B (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetHandMeshObserverU3Ed__9_MoveNext_mA621B4963E45C782DC5F2159304F1ECD471F3E7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0052;
		}

IL_000e:
		{
			// handMeshObserver = await sourceState.Source.TryCreateHandMeshObserverAsync();
			SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_2 = __this->get_sourceState_2();
			NullCheck(L_2);
			SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * L_3 = SpatialInteractionSourceState_get_Source_m5D7BA0667E118603D99A5C89FE1BACA3E1660E15(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			RuntimeObject* L_4 = SpatialInteractionSource_TryCreateHandMeshObserverAsync_m77EBC16735940E67759356C145DA827024320B88(L_3, /*hidden argument*/NULL);
			TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  L_5 = WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_mC569F4412F7D47F64AAB915B8EFB6604C2045998(L_4, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_mC569F4412F7D47F64AAB915B8EFB6604C2045998_RuntimeMethod_var);
			V_1 = L_5;
			bool L_6 = TaskAwaiter_1_get_IsCompleted_mC4C4640CAC528A2DC39C2805D7664736D54ADF21((TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *)(&V_1), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC4C4640CAC528A2DC39C2805D7664736D54ADF21_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_006e;
			}
		}

IL_002e:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  L_8 = V_1;
			__this->set_U3CU3Eu__1_5(L_8);
			V_2 = __this;
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m44B1866AEDCC298B4684EF1F744426FDB50D031D((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_9, (TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *)(&V_1), (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3_TisU3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8_m44B1866AEDCC298B4684EF1F744426FDB50D031D_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_0052:
		{
			TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3  L_10 = __this->get_U3CU3Eu__1_5();
			V_1 = L_10;
			TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 * L_11 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_006e:
		{
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_13 = TaskAwaiter_1_GetResult_m1E3E76BF58A28E2FDB9415F981E2EF400575A230((TaskAwaiter_1_t096813A32910697159944CCF69A0579741EAA6D3 *)(&V_1), /*hidden argument*/TaskAwaiter_1_GetResult_m1E3E76BF58A28E2FDB9415F981E2EF400575A230_RuntimeMethod_var);
			__this->set_U3CU3Es__1_4(L_13);
			WindowsMixedRealityArticulatedHandDefinition_t2AAEA2DB7EF0B774E2F726C52F997095905DCFA5 * L_14 = __this->get_U3CU3E4__this_3();
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_15 = __this->get_U3CU3Es__1_4();
			NullCheck(L_14);
			L_14->set_handMeshObserver_13(L_15);
			__this->set_U3CU3Es__1_4((HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 *)NULL);
			goto IL_00ad;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_16, L_17, /*hidden argument*/NULL);
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ad:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_18, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_SetStateMachine_mBE508812B55EC52727C07FAC4D76FF4E9A69E0C4 (U3CSetHandMeshObserverU3Ed__9_t3E0AB5ADB931E0CCE0E60FC3BCAB498EEF710AA8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mD03089A9BBFED9BDAE758FA3FC6D583478AE270A (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m1284D05D4B8592EC1DF05EE7FBDCAC1DEFA1C367 (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettingsProfile__ctor_mE32EFBFC25E826941B4EF3496E80F203F4ABB8A9 (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method)
{
	{
		// private bool renderFromPVCameraForMixedRealityCapture = false;
		__this->set_renderFromPVCameraForMixedRealityCapture_5((bool)0);
		// private HolographicDepthReprojectionMethod reprojectionMethod = HolographicDepthReprojectionMethod.DepthReprojection;
		__this->set_reprojectionMethod_6(0);
		BaseCameraSettingsProfile__ctor_m1C6189EF81FED1165D2649DD239E0FB9FA906D5A(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityReprojectionUpdater_get_ReprojectionMethod_mD57741FBD94E4B3771F670CB1DDA64E1C91C21A8 (WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = __this->get_U3CReprojectionMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m111629E95B8264B36665A3490B86F13260BF802E (WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater__ctor_m061B37922CEECD587F2055E12D467A7A10A2669E (WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_mDF9251746EB4F7499A176DC6CA85E8F811BBEA4A_MetadataUsageId);
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
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mEE7D8A6AB54A991D8E6424ACBCCB400A6494F0C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * V_3 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (UtilitiesProvider != null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// IntPtr newSpatialCoordinateSystemPtr = UtilitiesProvider.ISpatialCoordinateSystemPtr;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		intptr_t L_3 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_ISpatialCoordinateSystemPtr() */, IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9_il2cpp_TypeInfo_var, L_2);
		V_1 = (intptr_t)L_3;
		// if (newSpatialCoordinateSystemPtr != currentSpatialCoordinateSystemPtr && newSpatialCoordinateSystemPtr != IntPtr.Zero)
		intptr_t L_4 = V_1;
		intptr_t L_5 = ((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->get_currentSpatialCoordinateSystemPtr_1();
		bool L_6 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		intptr_t L_7 = V_1;
		bool L_8 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B4_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// spatialCoordinateSystem = Marshal.GetObjectForIUnknown(newSpatialCoordinateSystemPtr) as SpatialCoordinateSystem;
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_11 = Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2(((SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)IsInstSealed((RuntimeObject*)L_11, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var)));
		// currentSpatialCoordinateSystemPtr = newSpatialCoordinateSystemPtr;
		intptr_t L_12 = V_1;
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)L_12);
	}

IL_0050:
	{
	}

IL_0051:
	{
		// return spatialCoordinateSystem;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_13 = ((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->get_spatialCoordinateSystem_2();
		V_3 = L_13;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_14 = V_3;
		return L_14;
	}
}
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 * WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m5065FFC005E7575F511BA84DB07AE1103CE51174 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m5065FFC005E7575F511BA84DB07AE1103CE51174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (UtilitiesProvider == null || UtilitiesProvider.IHolographicFramePtr == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9_il2cpp_TypeInfo_var, L_1);
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return null;
		V_1 = (HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 *)NULL;
		goto IL_003f;
	}

IL_0028:
	{
		// return Marshal.GetObjectForIUnknown(UtilitiesProvider.IHolographicFramePtr) as HolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		intptr_t L_6 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tD8177025B376E0FF0CB6865543834030FF7FD7B9_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2((intptr_t)L_6, /*hidden argument*/NULL);
		V_1 = ((HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 *)IsInstSealed((RuntimeObject*)L_7, HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543_il2cpp_TypeInfo_var));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemVector3ToUnity(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WindowsMixedRealityUtilities_SystemVector3ToUnity_m8BCC47619A6BF5DDE25920614BA767D3047A659E (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return vector.ToUnityVector3();
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_0 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SystemNumericsExtensions_ToUnityVector3_mACCACD0698A1BFA6EA096E32EB2292D304E4ECC5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemQuaternionToUnity(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WindowsMixedRealityUtilities_SystemQuaternionToUnity_mC8246D486EECF5CA8A0295F27A547AD90CDD533E (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___quaternion0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return quaternion.ToUnityQuaternion();
		Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  L_0 = ___quaternion0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SystemNumericsExtensions_ToUnityQuaternion_m102890BA5BEA13EB4677DB9D67F4C4454B849471(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities__cctor_m7B6312909CCB2584929B69C15925EFE145D10521 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities__cctor_m7B6312909CCB2584929B69C15925EFE145D10521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0((RuntimeObject*)NULL);
		// private static IntPtr currentSpatialCoordinateSystemPtr = IntPtr.Zero;
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)(0));
		// private static SpatialCoordinateSystem spatialCoordinateSystem = null;
		((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2((SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m5E532521BBE952C45995BB13A35AD4347D6A4D9B_inline (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m7E4434905791D82E785EA0529602349C9A31D75F_inline (WindowsMixedRealityHandRecorder_tB9A8F7232346DCC177366C6A041216F5BA8587E2 * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mD03089A9BBFED9BDAE758FA3FC6D583478AE270A_inline (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m1284D05D4B8592EC1DF05EE7FBDCAC1DEFA1C367_inline (WindowsMixedRealityCameraSettingsProfile_t6D6A2ABAF98885B844C999548E86AB5C5E5A098D * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m111629E95B8264B36665A3490B86F13260BF802E_inline (WindowsMixedRealityReprojectionUpdater_t8C6765530A702DCC532CE980006F45E30AFDA912 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3CB7C13BA78DE762ECC202DDE52955B48B8AAC9Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD634AE84FADFB60334E4C565795B160C02827666_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
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
