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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tCDDDA610C55C5FF21BEB1203DBEA8052DAC61939;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAE4A5BA9291B10D261EA1C422A3E0F3D7A9FC879;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tA64958356FC4ABDCB3CF2CFC334E3DA65A885D78;
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
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31
struct U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7
struct U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10
struct U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8
struct U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12
struct U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tBD5EA4A16ABECCBE35026A398E45C61F39D33547;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
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
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>>
struct Func_2_t9142D625393521B287A80A741A754EC358C5C5DF;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
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
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral06BD102DA84401C1495DEC46CC8EBC9725E8FC16;
IL2CPP_EXTERN_C String_t* _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0;
IL2CPP_EXTERN_C String_t* _stringLiteral1C74F05B62743E108EB5E44F3AF19A5E8B714D82;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69;
IL2CPP_EXTERN_C String_t* _stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4C35893AFF46A5FE641A9455D147A7E1F69671C6;
IL2CPP_EXTERN_C String_t* _stringLiteral6724E09980AD74647D832717B4E330AFD1DA80B3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7239BC082C083BAF270F01C05BDC34B410C10BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral7382B9DF10E8CD20E4A5047E0466AC111124EC32;
IL2CPP_EXTERN_C String_t* _stringLiteral74A09C083C928B7925FC5F212135B32F4278D915;
IL2CPP_EXTERN_C String_t* _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6;
IL2CPP_EXTERN_C String_t* _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77;
IL2CPP_EXTERN_C String_t* _stringLiteralAC4EEBD42C476BB8C2FC104DB2EC3E14B9ABC361;
IL2CPP_EXTERN_C String_t* _stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311;
IL2CPP_EXTERN_C String_t* _stringLiteralD8259643549B7FA2D109DA0AFC1E9486946DC0C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE8FC5A5EAF7157371226B78F77C919CAD83E741A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E;
IL2CPP_EXTERN_C String_t* _stringLiteralF2858B3463A4505F9D7FDF42C2F37FFF7EDF011E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mA33E6854DF3C09D5A707B9F164F50081F151EA70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_mD79C1C0AA30B658DD8125EFB90613FD7E327A8FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m4DA19B1EFB2F41402FDC359B23641D2F76DC4E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m310A3A172A382BF2FB209ADD2DA5F6E7609D881D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m563639255F6BB256A0858853E3C680CFCAE6301E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m16FE10AC5285E1F2B38617AEDF30D8D8D40AB51C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m8A3660D92698D2C4764B51A377FEE5DA0A52CD22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m55AD312E17C79EE04255AA1E63360FF04B30E639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_0_mCF9A303018FA222ADE34B08E30829584994207F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_1_mEA7799FC4788088C77DF6E6A3C822F3B0D97B938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_2_m3F7CFAD7960920F7E41BFD8C8F812726ACF0FEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_3_m808452C90329105C9736C1F53EB24FDBE1183B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_mD12167A17AFAEC8184E1D0ADFB0E40F91C4DFC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CDisableU3Ed__31_MoveNext_mA125C79CD7EC7492FDC97EE14AE444F2E1FA275F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartRecordingAsyncU3Ed__10_MoveNext_mE17C18A8D5924CCE3E9559DF928051E5690D0BFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartRecordingU3Ed__7_MoveNext_m99E036CB3D18FB0ECD55F535958C9C2150DFEC02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopRecordingAsyncU3Ed__12_MoveNext_m7C626E670E41748A3B0AE2AAA1261CE09C23DAF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopRecordingU3Ed__8_MoveNext_m850241447B2799D13CE0F4709459658B189A1AFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__1_2_m3F7CFAD7960920F7E41BFD8C8F812726ACF0FEAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__1_3_m808452C90329105C9736C1F53EB24FDBE1183B0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mE2007ED30E3BF74F5DD7C50E896D83D240AFE848_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Disable_mC7DD5F11ED75841A68300A3B8AED2A0111804EB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Dispose_mDFB6D06A2BD90327F170D739FADB536B5D3AB259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Enable_m330EB7E5E44B1BC2C0AEC2962244FB58CAB5ABF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StartRecordingAsync_mA72E4191574E6C600089D9B915005B735E119B7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StartRecording_mD9F5F23971E59FF4CB85A5B41E88F72082AC2D06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StopRecording_mAE283B98835FF1973DE710FC4603EEF25DB47A57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Update_m832574DCF3DEE7388705F56AA0700BFD05DBF4CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider__cctor_mF47741C7416AABCF56BBB399E377FD1D1A356F9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider__ctor_m6C59EC810094E44EEF1B50A2C00AA5E483E54C09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider__ctor_mE8BF6E8AA3A52EF73F6BD061E1FF2A27B98D259B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_Disable_mB6DD19F254F69BCC38A70BFCA99FB0EB1D348FAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_Update_m5A3519C2CB3F300C5DF91C8CCED5F0D4B8856FFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider__cctor_m476713715B0FE640769BA46C68049C67C33632C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider__ctor_m3D7A97862E6CAD046A748D9B4C45B572108F551C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider__ctor_m66B1FC5AE32EFC42CE7F0A54F0EEF4D2A3A0F0E4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17;
struct SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2EA6460F82C52C10048259E037534F390F018FE0 
{
public:

public:
};


// System.Object


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


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c
struct  U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9
	U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__1_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__1_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__1_1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__1_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__1_2
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__1_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__1_3
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__1_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields, ___U3CU3E9__1_2_3)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__1_2_3() const { return ___U3CU3E9__1_2_3; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__1_2_3() { return &___U3CU3E9__1_2_3; }
	inline void set_U3CU3E9__1_2_3(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__1_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields, ___U3CU3E9__1_3_4)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__1_3_4() const { return ___U3CU3E9__1_3_4; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__1_3_4() { return &___U3CU3E9__1_3_4; }
	inline void set_U3CU3E9__1_3_4(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__1_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_3_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
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

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
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


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99, ___m_task_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
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


// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t7F641BEA135B93B8560393EB922AED99AED5C983 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t7F641BEA135B93B8560393EB922AED99AED5C983, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_task_2)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
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

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
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

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationHypothesis_1), (void*)value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationResult_2)); }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationError_4)); }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationError_4), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31
struct  U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::<>4__this
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7
struct  U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_2;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::initialSilenceTimeout
	float ___initialSilenceTimeout_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::autoSilenceTimeout
	float ___autoSilenceTimeout_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::recordingTime
	int32_t ___recordingTime_5;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::micDeviceName
	String_t* ___micDeviceName_6;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::<>4__this
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * ___U3CU3E4__this_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___listener_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_2() const { return ___listener_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___initialSilenceTimeout_3)); }
	inline float get_initialSilenceTimeout_3() const { return ___initialSilenceTimeout_3; }
	inline float* get_address_of_initialSilenceTimeout_3() { return &___initialSilenceTimeout_3; }
	inline void set_initialSilenceTimeout_3(float value)
	{
		___initialSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___autoSilenceTimeout_4)); }
	inline float get_autoSilenceTimeout_4() const { return ___autoSilenceTimeout_4; }
	inline float* get_address_of_autoSilenceTimeout_4() { return &___autoSilenceTimeout_4; }
	inline void set_autoSilenceTimeout_4(float value)
	{
		___autoSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_recordingTime_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___recordingTime_5)); }
	inline int32_t get_recordingTime_5() const { return ___recordingTime_5; }
	inline int32_t* get_address_of_recordingTime_5() { return &___recordingTime_5; }
	inline void set_recordingTime_5(int32_t value)
	{
		___recordingTime_5 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___micDeviceName_6)); }
	inline String_t* get_micDeviceName_6() const { return ___micDeviceName_6; }
	inline String_t** get_address_of_micDeviceName_6() { return &___micDeviceName_6; }
	inline void set_micDeviceName_6(String_t* value)
	{
		___micDeviceName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___U3CU3E4__this_7)); }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8
struct  U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::<>4__this
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12
struct  U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<>4__this
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker_AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<>s__1
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ___U3CU3Es__1_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<inputSystem>5__2
	RuntimeObject* ___U3CinputSystemU3E5__2_4;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::<>u__1
	RuntimeObject * ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CU3Es__1_3)); }
	inline AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  value)
	{
		___U3CU3Es__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CinputSystemU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CinputSystemU3E5__2_4)); }
	inline RuntimeObject* get_U3CinputSystemU3E5__2_4() const { return ___U3CinputSystemU3E5__2_4; }
	inline RuntimeObject** get_address_of_U3CinputSystemU3E5__2_4() { return &___U3CinputSystemU3E5__2_4; }
	inline void set_U3CinputSystemU3E5__2_4(RuntimeObject* value)
	{
		___U3CinputSystemU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSystemU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C, ___U3CU3Eu__1_5)); }
	inline RuntimeObject * get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(RuntimeObject * value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_5), (void*)value);
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC, ___m_result_22)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_m_result_22() const { return ___m_result_22; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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

// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C  : public PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseStartTime_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseDuration_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
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


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct  SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7, ___action_4)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_com ___action_4;
};

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct  WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA  : public BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_19;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_20;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_21;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_22;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_23;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_24;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___dictationAudioClip_25;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStarted_27;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStopped_28;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStarted_29;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStopped_30;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___U3CIsListeningU3Ek__BackingField_14)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_14() const { return ___U3CIsListeningU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_14() { return &___U3CIsListeningU3Ek__BackingField_14; }
	inline void set_U3CIsListeningU3Ek__BackingField_14(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_hasFailed_17() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___hasFailed_17)); }
	inline bool get_hasFailed_17() const { return ___hasFailed_17; }
	inline bool* get_address_of_hasFailed_17() { return &___hasFailed_17; }
	inline void set_hasFailed_17(bool value)
	{
		___hasFailed_17 = value;
	}

	inline static int32_t get_offset_of_hasListener_18() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___hasListener_18)); }
	inline bool get_hasListener_18() const { return ___hasListener_18; }
	inline bool* get_address_of_hasListener_18() { return &___hasListener_18; }
	inline void set_hasListener_18(bool value)
	{
		___hasListener_18 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_19() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___isTransitioning_19)); }
	inline bool get_isTransitioning_19() const { return ___isTransitioning_19; }
	inline bool* get_address_of_isTransitioning_19() { return &___isTransitioning_19; }
	inline void set_isTransitioning_19(bool value)
	{
		___isTransitioning_19 = value;
	}

	inline static int32_t get_offset_of_inputSource_20() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___inputSource_20)); }
	inline RuntimeObject* get_inputSource_20() const { return ___inputSource_20; }
	inline RuntimeObject** get_address_of_inputSource_20() { return &___inputSource_20; }
	inline void set_inputSource_20(RuntimeObject* value)
	{
		___inputSource_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_20), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___textSoFar_21)); }
	inline StringBuilder_t * get_textSoFar_21() const { return ___textSoFar_21; }
	inline StringBuilder_t ** get_address_of_textSoFar_21() { return &___textSoFar_21; }
	inline void set_textSoFar_21(StringBuilder_t * value)
	{
		___textSoFar_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_21), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___deviceName_22)); }
	inline String_t* get_deviceName_22() const { return ___deviceName_22; }
	inline String_t** get_address_of_deviceName_22() { return &___deviceName_22; }
	inline void set_deviceName_22(String_t* value)
	{
		___deviceName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_22), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___samplingRate_23)); }
	inline int32_t get_samplingRate_23() const { return ___samplingRate_23; }
	inline int32_t* get_address_of_samplingRate_23() { return &___samplingRate_23; }
	inline void set_samplingRate_23(int32_t value)
	{
		___samplingRate_23 = value;
	}

	inline static int32_t get_offset_of_dictationResult_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___dictationResult_24)); }
	inline String_t* get_dictationResult_24() const { return ___dictationResult_24; }
	inline String_t** get_address_of_dictationResult_24() { return &___dictationResult_24; }
	inline void set_dictationResult_24(String_t* value)
	{
		___dictationResult_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_24), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___dictationAudioClip_25)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_dictationAudioClip_25() const { return ___dictationAudioClip_25; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_dictationAudioClip_25() { return &___dictationAudioClip_25; }
	inline void set_dictationAudioClip_25(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___dictationAudioClip_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_25), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___waitUntilPhraseRecognitionSystemHasStarted_27)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStarted_27() const { return ___waitUntilPhraseRecognitionSystemHasStarted_27; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_27() { return &___waitUntilPhraseRecognitionSystemHasStarted_27; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_27(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_27), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___waitUntilPhraseRecognitionSystemHasStopped_28)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStopped_28() const { return ___waitUntilPhraseRecognitionSystemHasStopped_28; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_28() { return &___waitUntilPhraseRecognitionSystemHasStopped_28; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_28(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_28), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___waitUntilDictationRecognizerHasStarted_29)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStarted_29() const { return ___waitUntilDictationRecognizerHasStarted_29; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStarted_29() { return &___waitUntilDictationRecognizerHasStarted_29; }
	inline void set_waitUntilDictationRecognizerHasStarted_29(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStarted_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_29), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA, ___waitUntilDictationRecognizerHasStopped_30)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStopped_30() const { return ___waitUntilDictationRecognizerHasStopped_30; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStopped_30() { return &___waitUntilDictationRecognizerHasStopped_30; }
	inline void set_waitUntilDictationRecognizerHasStopped_30(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStopped_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_30), (void*)value);
	}
};

struct WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___StartRecordingAsyncPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___StopRecordingAsyncPerfMarker_16;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * ___dictationRecognizer_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DictationHypothesisPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DictationResultPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DictationCompletePerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DictationErrorPerfMarker_35;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_15() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___StartRecordingAsyncPerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_StartRecordingAsyncPerfMarker_15() const { return ___StartRecordingAsyncPerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_StartRecordingAsyncPerfMarker_15() { return &___StartRecordingAsyncPerfMarker_15; }
	inline void set_StartRecordingAsyncPerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___StartRecordingAsyncPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_16() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___StopRecordingAsyncPerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_StopRecordingAsyncPerfMarker_16() const { return ___StopRecordingAsyncPerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_StopRecordingAsyncPerfMarker_16() { return &___StopRecordingAsyncPerfMarker_16; }
	inline void set_StopRecordingAsyncPerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___StopRecordingAsyncPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___dictationRecognizer_26)); }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * get_dictationRecognizer_26() const { return ___dictationRecognizer_26; }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 ** get_address_of_dictationRecognizer_26() { return &___dictationRecognizer_26; }
	inline void set_dictationRecognizer_26(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * value)
	{
		___dictationRecognizer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_26), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___UpdatePerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_31() const { return ___UpdatePerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_31() { return &___UpdatePerfMarker_31; }
	inline void set_UpdatePerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___DictationHypothesisPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DictationHypothesisPerfMarker_32() const { return ___DictationHypothesisPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DictationHypothesisPerfMarker_32() { return &___DictationHypothesisPerfMarker_32; }
	inline void set_DictationHypothesisPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DictationHypothesisPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___DictationResultPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DictationResultPerfMarker_33() const { return ___DictationResultPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DictationResultPerfMarker_33() { return &___DictationResultPerfMarker_33; }
	inline void set_DictationResultPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DictationResultPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___DictationCompletePerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DictationCompletePerfMarker_34() const { return ___DictationCompletePerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DictationCompletePerfMarker_34() { return &___DictationCompletePerfMarker_34; }
	inline void set_DictationCompletePerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DictationCompletePerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields, ___DictationErrorPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DictationErrorPerfMarker_35() const { return ___DictationErrorPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DictationErrorPerfMarker_35() { return &___DictationErrorPerfMarker_35; }
	inline void set_DictationErrorPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DictationErrorPerfMarker_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10
struct  U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_2;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::initialSilenceTimeout
	float ___initialSilenceTimeout_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::autoSilenceTimeout
	float ___autoSilenceTimeout_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::recordingTime
	int32_t ___recordingTime_5;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::micDeviceName
	String_t* ___micDeviceName_6;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<>4__this
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * ___U3CU3E4__this_7;
	// Unity.Profiling.ProfilerMarker_AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<>s__1
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ___U3CU3Es__1_8;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<inputSystem>5__2
	RuntimeObject* ___U3CinputSystemU3E5__2_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<minSamplingRate>5__3
	int32_t ___U3CminSamplingRateU3E5__3_10;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___listener_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_2() const { return ___listener_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___initialSilenceTimeout_3)); }
	inline float get_initialSilenceTimeout_3() const { return ___initialSilenceTimeout_3; }
	inline float* get_address_of_initialSilenceTimeout_3() { return &___initialSilenceTimeout_3; }
	inline void set_initialSilenceTimeout_3(float value)
	{
		___initialSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___autoSilenceTimeout_4)); }
	inline float get_autoSilenceTimeout_4() const { return ___autoSilenceTimeout_4; }
	inline float* get_address_of_autoSilenceTimeout_4() { return &___autoSilenceTimeout_4; }
	inline void set_autoSilenceTimeout_4(float value)
	{
		___autoSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_recordingTime_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___recordingTime_5)); }
	inline int32_t get_recordingTime_5() const { return ___recordingTime_5; }
	inline int32_t* get_address_of_recordingTime_5() { return &___recordingTime_5; }
	inline void set_recordingTime_5(int32_t value)
	{
		___recordingTime_5 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___micDeviceName_6)); }
	inline String_t* get_micDeviceName_6() const { return ___micDeviceName_6; }
	inline String_t** get_address_of_micDeviceName_6() { return &___micDeviceName_6; }
	inline void set_micDeviceName_6(String_t* value)
	{
		___micDeviceName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CU3E4__this_7)); }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CU3Es__1_8)); }
	inline AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  get_U3CU3Es__1_8() const { return ___U3CU3Es__1_8; }
	inline AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * get_address_of_U3CU3Es__1_8() { return &___U3CU3Es__1_8; }
	inline void set_U3CU3Es__1_8(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  value)
	{
		___U3CU3Es__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CinputSystemU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CinputSystemU3E5__2_9)); }
	inline RuntimeObject* get_U3CinputSystemU3E5__2_9() const { return ___U3CinputSystemU3E5__2_9; }
	inline RuntimeObject** get_address_of_U3CinputSystemU3E5__2_9() { return &___U3CinputSystemU3E5__2_9; }
	inline void set_U3CinputSystemU3E5__2_9(RuntimeObject* value)
	{
		___U3CinputSystemU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSystemU3E5__2_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CminSamplingRateU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CminSamplingRateU3E5__3_10)); }
	inline int32_t get_U3CminSamplingRateU3E5__3_10() const { return ___U3CminSamplingRateU3E5__3_10; }
	inline int32_t* get_address_of_U3CminSamplingRateU3E5__3_10() { return &___U3CminSamplingRateU3E5__3_10; }
	inline void set_U3CminSamplingRateU3E5__3_10(int32_t value)
	{
		___U3CminSamplingRateU3E5__3_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F, ___U3CU3Eu__1_11)); }
	inline RuntimeObject * get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(RuntimeObject * value)
	{
		___U3CU3Eu__1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct  WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222  : public BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InputSource
	RuntimeObject* ___InputSource_14;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * ___keywordRecognizer_16;

public:
	inline static int32_t get_offset_of_InputSource_14() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222, ___InputSource_14)); }
	inline RuntimeObject* get_InputSource_14() const { return ___InputSource_14; }
	inline RuntimeObject** get_address_of_InputSource_14() { return &___InputSource_14; }
	inline void set_InputSource_14(RuntimeObject* value)
	{
		___InputSource_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputSource_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_15; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_keywordRecognizer_16() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222, ___keywordRecognizer_16)); }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * get_keywordRecognizer_16() const { return ___keywordRecognizer_16; }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C ** get_address_of_keywordRecognizer_16() { return &___keywordRecognizer_16; }
	inline void set_keywordRecognizer_16(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * value)
	{
		___keywordRecognizer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_16), (void*)value);
	}
};

struct WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPhraseRecognizedPerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_17() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields, ___UpdatePerfMarker_17)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_17() const { return ___UpdatePerfMarker_17; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_17() { return &___UpdatePerfMarker_17; }
	inline void set_UpdatePerfMarker_17(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_18() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields, ___OnPhraseRecognizedPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPhraseRecognizedPerfMarker_18() const { return ___OnPhraseRecognizedPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPhraseRecognizedPerfMarker_18() { return &___OnPhraseRecognizedPerfMarker_18; }
	inline void set_OnPhraseRecognizedPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPhraseRecognizedPerfMarker_18 = value;
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate
struct  DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler
struct  DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate
struct  DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0  : public MulticastDelegate_t
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct  MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::startBehavior
	int32_t ___startBehavior_5;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::speechCommands
	SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* ___speechCommands_7;

public:
	inline static int32_t get_offset_of_startBehavior_5() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B, ___startBehavior_5)); }
	inline int32_t get_startBehavior_5() const { return ___startBehavior_5; }
	inline int32_t* get_address_of_startBehavior_5() { return &___startBehavior_5; }
	inline void set_startBehavior_5(int32_t value)
	{
		___startBehavior_5 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_6() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B, ___recognitionConfidenceLevel_6)); }
	inline int32_t get_recognitionConfidenceLevel_6() const { return ___recognitionConfidenceLevel_6; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_6() { return &___recognitionConfidenceLevel_6; }
	inline void set_recognitionConfidenceLevel_6(int32_t value)
	{
		___recognitionConfidenceLevel_6 = value;
	}

	inline static int32_t get_offset_of_speechCommands_7() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B, ___speechCommands_7)); }
	inline SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* get_speechCommands_7() const { return ___speechCommands_7; }
	inline SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB** get_address_of_speechCommands_7() { return &___speechCommands_7; }
	inline void set_speechCommands_7(SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* value)
	{
		___speechCommands_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommands_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  m_Items[1];

public:
	inline SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
	}
	inline SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
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


// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m3F9D12EB2C721B6D4C341F12C9AF4DC3A0B99EE5_gshared_inline (BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_m696634597BF79F3070C7F1040ABAC2FF9A616C79_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m3BBDF211132C4A6EFB4836FC8E243102D598A1E7_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m7BEFB212EB3A81D2EA46B9A461E2B9A6A0F82B59_gshared_inline (BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisRuntimeObject_m9DC2C2CB1B91EC2329E1201B14390AA34F980C78_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisRuntimeObject_m97ECCB65C1BEF0E1858546511A21FE6583DEB2F8_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m998E6DC2E193386FB9D8C483ADE66DBEE15EA6D7_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m8B47A7CBE8DE8644BC53F92C5D20BEFD39007933_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_mE8BF6E8AA3A52EF73F6BD061E1FF2A27B98D259B (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_inline (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB *, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m3F9D12EB2C721B6D4C341F12C9AF4DC3A0B99EE5_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___predicate0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_mCDCE13A366238514ADD5EA86433B347E6F61942A (BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7__ctor_mFB0AC1CD54AD5E7A0FEE9ACF033934A70E4432EC (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m8A3660D92698D2C4764B51A377FEE5DA0A52CD22 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8__ctor_mFDF1E3ABFAB0B0A1A88ECF7DFB33418E83C8E7EA (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m55AD312E17C79EE04255AA1E63360FF04B30E639 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10__ctor_mF575A8595689DBE9F0B16EA8823E1E30054930AA (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_mD79C1C0AA30B658DD8125EFB90613FD7E327A8FE (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_m696634597BF79F3070C7F1040ABAC2FF9A616C79_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12__ctor_m52BBB354A6C2C008B040F86CFC5D8E353D823335 (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mA33E6854DF3C09D5A707B9F164F50081F151EA70 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m3BBDF211132C4A6EFB4836FC8E243102D598A1E7_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t43BC8767D20E44102434711F32A229661E6B22DB *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m7BEFB212EB3A81D2EA46B9A461E2B9A6A0F82B59_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::get_InputSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40 (BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_SpeechCommandsProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5 (MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognizerStartBehavior()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004 (String_t* ___deviceName0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_mAE283B98835FF1973DE710FC4603EEF25DB47A57 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31__ctor_m956BBB87AAC80CB010A900E662BDFBBD9443D271 (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m16FE10AC5285E1F2B38617AEDF30D8D8D40AB51C (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m8590BDB280C38FD9D41163DF39805FFA6EA8F508_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DFDFB5BDC2A096526F13F4E9EF2FA8D134A55F8 (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986 (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  (*) (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444 (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m4DA19B1EFB2F41402FDC359B23641D2F76DC4E7A (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * ___awaiter0, U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisRuntimeObject_m9DC2C2CB1B91EC2329E1201B14390AA34F980C78_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_mA72E4191574E6C600089D9B915005B735E119B7F (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m563639255F6BB256A0858853E3C680CFCAE6301E (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisRuntimeObject_m97ECCB65C1BEF0E1858546511A21FE6583DEB2F8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m471EEE28469E8D20DBFAFFF1840719277C1FAA24_inline (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * AwaiterExtensions_GetAwaiter_m6A4C2F2DC2894E56310C5C556F2E5207ADE93061 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 ** ___awaiter0, U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **, U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m998E6DC2E193386FB9D8C483ADE66DBEE15EA6D7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m420A13389F33A1A75EF95E5A6585C160B0A68A9F (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E (bool ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m310A3A172A382BF2FB209ADD2DA5F6E7609D881D (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * ___awaiter0, U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisRuntimeObject_m9DC2C2CB1B91EC2329E1201B14390AA34F980C78_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 ** ___awaiter0, U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **, U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m8B47A7CBE8DE8644BC53F92C5D20BEFD39007933_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m3D7A97862E6CAD046A748D9B4C45B572108F551C (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechCommands()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* MixedRealitySpeechCommandsProfile_get_SpeechCommands_mBFBEF18A05460FF616273D4BC61A5CFECACD34B6_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m3F9D8297A9B43C5FA9A677ACCFBA666A4722E80C (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_LocalizedKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_LocalizedKeyword_m23D2BA08EFD47A734B6E5516C5460DA02A7D4767 (SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognitionConfidenceLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_mFD4A90281DCF87C00D29C8F47F7C88021E66840C_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mBCF3F5EA2A0309C0A2488920E7A25528CF06981E_inline (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m20F738492D5C6A145EF0B80D836CFA4E96593178_inline (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56 (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___keywords0, int32_t ___minimumConfidence1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_KeyCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_mC48892B8A7C5BF42809AA7948DB9DF4C0DF4A35C_inline (SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_m674E25BB37DACFF21DDD43A91AF1A532F78DDBDB (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m6C59EC810094E44EEF1B50A2C00AA5E483E54C09 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider__ctor_m6C59EC810094E44EEF1B50A2C00AA5E483E54C09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile4;
		WindowsDictationInputProvider__ctor_mE8BF6E8AA3A52EF73F6BD061E1FF2A27B98D259B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_mE8BF6E8AA3A52EF73F6BD061E1FF2A27B98D259B (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider__ctor_mE8BF6E8AA3A52EF73F6BD061E1FF2A27B98D259B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B2_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B2_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B1_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B1_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B4_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B4_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B3_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B3_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B6_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B6_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B5_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B5_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B8_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B8_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B7_0 = NULL;
	WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * G_B7_1 = NULL;
	{
		// public bool IsListening { get; private set; } = false;
		__this->set_U3CIsListeningU3Ek__BackingField_14((bool)0);
		// private IMixedRealityInputSource inputSource = null;
		__this->set_inputSource_20((RuntimeObject*)NULL);
		// private string deviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_deviceName_22(L_0);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_1 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * L_3 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_0_mCF9A303018FA222ADE34B08E30829584994207F8_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_5 = L_4;
		((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_6 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_6, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_waitUntilPhraseRecognitionSystemHasStarted_27(L_6);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_7 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_2();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * L_9 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_10 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_1_mEA7799FC4788088C77DF6E6A3C822F3B0D97B938_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_11 = L_10;
		((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0063:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_12 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_12, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		G_B4_1->set_waitUntilPhraseRecognitionSystemHasStopped_28(L_12);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_13 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9__1_2_3();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = __this;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = __this;
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * L_15 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_16 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_2_m3F7CFAD7960920F7E41BFD8C8F812726ACF0FEAA_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_17 = L_16;
		((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->set_U3CU3E9__1_2_3(L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_008d:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_18 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_18, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_1);
		G_B6_1->set_waitUntilDictationRecognizerHasStarted_29(L_18);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_19 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9__1_3_4();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * L_21 = ((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_22 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_3_m808452C90329105C9736C1F53EB24FDBE1183B0D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_23 = L_22;
		((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->set_U3CU3E9__1_3_4(L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00b7:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_24 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_24, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_waitUntilDictationRecognizerHasStopped_30(L_24);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_25 = ___inputSystem0;
		String_t* L_26 = ___name1;
		uint32_t L_27 = ___priority2;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_28 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_mCDCE13A366238514ADD5EA86433B347E6F61942A(__this, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m471EEE28469E8D20DBFAFFF1840719277C1FAA24 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_CheckCapability_m49B2E24BD406D5D8CFC423C8FC3CDB4EB599609D (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return (capability == MixedRealityCapability.VoiceDictation);
		int32_t L_0 = ___capability0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StartRecording_mD9F5F23971E59FF4CB85A5B41E88F72082AC2D06 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecording_mD9F5F23971E59FF4CB85A5B41E88F72082AC2D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * V_0 = NULL;
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_0 = (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 *)il2cpp_codegen_object_new(U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_il2cpp_TypeInfo_var);
		U3CStartRecordingU3Ed__7__ctor_mFB0AC1CD54AD5E7A0FEE9ACF033934A70E4432EC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_2 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___listener0;
		NullCheck(L_2);
		L_2->set_listener_2(L_3);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_4 = V_0;
		float L_5 = ___initialSilenceTimeout1;
		NullCheck(L_4);
		L_4->set_initialSilenceTimeout_3(L_5);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_6 = V_0;
		float L_7 = ___autoSilenceTimeout2;
		NullCheck(L_6);
		L_6->set_autoSilenceTimeout_4(L_7);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_8 = V_0;
		int32_t L_9 = ___recordingTime3;
		NullCheck(L_8);
		L_8->set_recordingTime_5(L_9);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_10 = V_0;
		String_t* L_11 = ___micDeviceName4;
		NullCheck(L_10);
		L_10->set_micDeviceName_6(L_11);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_12 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_13 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_U3CU3Et__builder_1(L_13);
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_U3CU3E1__state_0((-1));
		U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * L_15 = V_0;
		NullCheck(L_15);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_16 = L_15->get_U3CU3Et__builder_1();
		V_1 = L_16;
		AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m8A3660D92698D2C4764B51A377FEE5DA0A52CD22((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m8A3660D92698D2C4764B51A377FEE5DA0A52CD22_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_mAE283B98835FF1973DE710FC4603EEF25DB47A57 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecording_mAE283B98835FF1973DE710FC4603EEF25DB47A57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * V_0 = NULL;
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * L_0 = (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 *)il2cpp_codegen_object_new(U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_il2cpp_TypeInfo_var);
		U3CStopRecordingU3Ed__8__ctor_mFDF1E3ABFAB0B0A1A88ECF7DFB33418E83C8E7EA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * L_2 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_3 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m55AD312E17C79EE04255AA1E63360FF04B30E639((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m55AD312E17C79EE04255AA1E63360FF04B30E639_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_mA72E4191574E6C600089D9B915005B735E119B7F (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecordingAsync_mA72E4191574E6C600089D9B915005B735E119B7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * V_0 = NULL;
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_0 = (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F *)il2cpp_codegen_object_new(U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_il2cpp_TypeInfo_var);
		U3CStartRecordingAsyncU3Ed__10__ctor_mF575A8595689DBE9F0B16EA8823E1E30054930AA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_2 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___listener0;
		NullCheck(L_2);
		L_2->set_listener_2(L_3);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_4 = V_0;
		float L_5 = ___initialSilenceTimeout1;
		NullCheck(L_4);
		L_4->set_initialSilenceTimeout_3(L_5);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_6 = V_0;
		float L_7 = ___autoSilenceTimeout2;
		NullCheck(L_6);
		L_6->set_autoSilenceTimeout_4(L_7);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_8 = V_0;
		int32_t L_9 = ___recordingTime3;
		NullCheck(L_8);
		L_8->set_recordingTime_5(L_9);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_10 = V_0;
		String_t* L_11 = ___micDeviceName4;
		NullCheck(L_10);
		L_10->set_micDeviceName_6(L_11);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_13 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_U3CU3Et__builder_1(L_13);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_15 = V_0;
		NullCheck(L_15);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_16 = L_15->get_U3CU3Et__builder_1();
		V_1 = L_16;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_mD79C1C0AA30B658DD8125EFB90613FD7E327A8FE((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_mD79C1C0AA30B658DD8125EFB90613FD7E327A8FE_RuntimeMethod_var);
		U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * L_17 = V_0;
		NullCheck(L_17);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_18 = L_17->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_19 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * V_0 = NULL;
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_0 = (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C *)il2cpp_codegen_object_new(U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_il2cpp_TypeInfo_var);
		U3CStopRecordingAsyncU3Ed__12__ctor_m52BBB354A6C2C008B040F86CFC5D8E353D823335(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_3 = AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mA33E6854DF3C09D5A707B9F164F50081F151EA70((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)(&V_1), (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mA33E6854DF3C09D5A707B9F164F50081F151EA70_RuntimeMethod_var);
		U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_9 = AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_8, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Enable_m330EB7E5E44B1BC2C0AEC2962244FB58CAB5ABF0 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Enable_m330EB7E5E44B1BC2C0AEC2962244FB58CAB5ABF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		goto IL_0086;
	}

IL_0010:
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_2 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
		V_0 = L_2;
		// if (inputSystem == null)
		RuntimeObject* L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogError($"Unable to start {Name}. An Input System is required for this feature.");
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B, L_5, _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
		// return;
		goto IL_0086;
	}

IL_003d:
	{
		// inputSource = inputSystem.RequestNewGenericInputSource(Name, sourceType: InputSourceType.Voice);
		RuntimeObject* L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		NullCheck(L_7);
		RuntimeObject* L_9 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_7, L_8, (IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)(IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)NULL, 3);
		__this->set_inputSource_20(L_9);
		// dictationResult = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_24(L_10);
		// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_11 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_12 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_13 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline(L_13, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0079;
	}

IL_0078:
	{
		G_B7_0 = 0;
	}

IL_0079:
	{
		V_3 = (bool)G_B7_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// InitializeDictationRecognizer();
		WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022(__this, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// if (dictationRecognizer == null)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			V_0 = (bool)((((RuntimeObject*)(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0076;
			}
		}

IL_000e:
		{
			// dictationRecognizer = new DictationRecognizer();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_2 = (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)il2cpp_codegen_object_new(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var);
			DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_dictationRecognizer_26(L_2);
			// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_3 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_4 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_4, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_3);
			DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196(L_3, L_4, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_5 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_6 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_6, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E(L_5, L_6, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_7 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_8 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_8, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10(L_7, L_8, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_9 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_10 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_10, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0076:
		{
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0079;
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		// catch (System.Exception ex)
		V_1 = ((Exception_t *)__exception_local);
		// Debug.LogWarning($"Failed to start dictation recognizer. Are microphone permissions granted? Exception: {ex}");
		Exception_t * L_11 = V_1;
		String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralE8FC5A5EAF7157371226B78F77C919CAD83E741A, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_12, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// dictationRecognizer = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_dictationRecognizer_26((DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)NULL);
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Update_m832574DCF3DEE7388705F56AA0700BFD05DBF4CE (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Update_m832574DCF3DEE7388705F56AA0700BFD05DBF4CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_31();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_2 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_2;
			// if (!Application.isPlaying || inputSystem == null || dictationRecognizer == null) { return; }
			bool L_3 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001e:
		{
			RuntimeObject* L_4 = V_2;
			if (!L_4)
			{
				goto IL_002b;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_5 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			G_B5_0 = ((((RuntimeObject*)(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			goto IL_002c;
		}

IL_002b:
		{
			G_B5_0 = 1;
		}

IL_002c:
		{
			V_3 = (bool)G_B5_0;
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			// if (!Application.isPlaying || inputSystem == null || dictationRecognizer == null) { return; }
			IL2CPP_LEAVE(0xBE, FINALLY_00af);
		}

IL_0036:
		{
			// if (!isTransitioning && IsListening && !Microphone.IsRecording(deviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
			bool L_7 = __this->get_isTransitioning_19();
			if (L_7)
			{
				goto IL_0062;
			}
		}

IL_003e:
		{
			bool L_8 = WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline(__this, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0062;
			}
		}

IL_0046:
		{
			String_t* L_9 = __this->get_deviceName_22();
			bool L_10 = Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004(L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0062;
			}
		}

IL_0053:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_11 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			NullCheck(L_11);
			int32_t L_12 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_11, /*hidden argument*/NULL);
			G_B12_0 = ((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
			goto IL_0063;
		}

IL_0062:
		{
			G_B12_0 = 0;
		}

IL_0063:
		{
			V_4 = (bool)G_B12_0;
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_0072;
			}
		}

IL_0069:
		{
			// StopRecording();
			WindowsDictationInputProvider_StopRecording_mAE283B98835FF1973DE710FC4603EEF25DB47A57(__this, /*hidden argument*/NULL);
		}

IL_0072:
		{
			// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
			bool L_14 = __this->get_hasFailed_17();
			if (L_14)
			{
				goto IL_0089;
			}
		}

IL_007a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_15 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			NullCheck(L_15);
			int32_t L_16 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_15, /*hidden argument*/NULL);
			G_B17_0 = ((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
			goto IL_008a;
		}

IL_0089:
		{
			G_B17_0 = 0;
		}

IL_008a:
		{
			V_5 = (bool)G_B17_0;
			bool L_17 = V_5;
			if (!L_17)
			{
				goto IL_00ac;
			}
		}

IL_0090:
		{
			// hasFailed = true;
			__this->set_hasFailed_17((bool)1);
			// inputSystem.RaiseDictationError(inputSource, "Dictation recognizer has failed!");
			RuntimeObject* L_18 = V_2;
			RuntimeObject* L_19 = __this->get_inputSource_20();
			NullCheck(L_18);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_18, L_19, _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		}

IL_00ac:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(175)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Disable_mC7DD5F11ED75841A68300A3B8AED2A0111804EB5 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Disable_mC7DD5F11ED75841A68300A3B8AED2A0111804EB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * V_0 = NULL;
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * L_0 = (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB *)il2cpp_codegen_object_new(U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_il2cpp_TypeInfo_var);
		U3CDisableU3Ed__31__ctor_m956BBB87AAC80CB010A900E662BDFBBD9443D271(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * L_2 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_3 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m16FE10AC5285E1F2B38617AEDF30D8D8D40AB51C((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m16FE10AC5285E1F2B38617AEDF30D8D8D40AB51C_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Dispose_mDFB6D06A2BD90327F170D739FADB536B5D3AB259 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Dispose_mDFB6D06A2BD90327F170D739FADB536B5D3AB259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B3_0 = NULL;
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// dictationRecognizer?.Dispose();
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_2 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0012;
		}
	}
	{
		goto IL_0018;
	}

IL_0012:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7(G_B3_0, /*hidden argument*/NULL);
	}

IL_0018:
	{
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationHypothesis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DictationHypothesisPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_DictationHypothesisPerfMarker_32();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{textSoFar} {text}...";
			StringBuilder_t * L_2 = __this->get_textSoFar_21();
			String_t* L_3 = ___text0;
			String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6, L_2, L_3, /*hidden argument*/NULL);
			__this->set_dictationResult_24(L_4);
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_5 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_5;
			// inputSystem?.RaiseDictationHypothesis(inputSource, dictationResult);
			RuntimeObject* L_6 = V_2;
			if (L_6)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			goto IL_0047;
		}

IL_0033:
		{
			RuntimeObject* L_7 = V_2;
			RuntimeObject* L_8 = __this->get_inputSource_20();
			String_t* L_9 = __this->get_dictationResult_24();
			NullCheck(L_7);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(58 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_7, L_8, L_9, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DictationResultPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_DictationResultPerfMarker_33();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// textSoFar.Append($"{text}. ");
			StringBuilder_t * L_2 = __this->get_textSoFar_21();
			String_t* L_3 = ___text0;
			String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_3, _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77, /*hidden argument*/NULL);
			NullCheck(L_2);
			StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_2, L_4, /*hidden argument*/NULL);
			// dictationResult = textSoFar.ToString();
			StringBuilder_t * L_5 = __this->get_textSoFar_21();
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
			__this->set_dictationResult_24(L_6);
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_7 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_7;
			// inputSystem?.RaiseDictationResult(inputSource, dictationResult);
			RuntimeObject* L_8 = V_2;
			if (L_8)
			{
				goto IL_0044;
			}
		}

IL_0042:
		{
			goto IL_0058;
		}

IL_0044:
		{
			RuntimeObject* L_9 = V_2;
			RuntimeObject* L_10 = __this->get_inputSource_20();
			String_t* L_11 = __this->get_dictationResult_24();
			NullCheck(L_9);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_9, L_10, L_11, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DictationCompletePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_DictationCompletePerfMarker_34();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (cause == DictationCompletionCause.TimeoutExceeded)
			int32_t L_2 = ___cause0;
			V_3 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
			bool L_3 = V_3;
			if (!L_3)
			{
				goto IL_0031;
			}
		}

IL_0018:
		{
			// Microphone.End(deviceName);
			String_t* L_4 = __this->get_deviceName_22();
			Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_4, /*hidden argument*/NULL);
			// dictationResult = "Dictation has timed out. Please try again.";
			__this->set_dictationResult_24(_stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311);
		}

IL_0031:
		{
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_5 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_5;
			// inputSystem?.RaiseDictationComplete(inputSource, dictationResult, dictationAudioClip);
			RuntimeObject* L_6 = V_2;
			if (L_6)
			{
				goto IL_003d;
			}
		}

IL_003b:
		{
			goto IL_0056;
		}

IL_003d:
		{
			RuntimeObject* L_7 = V_2;
			RuntimeObject* L_8 = __this->get_inputSource_20();
			String_t* L_9 = __this->get_dictationResult_24();
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_10 = __this->get_dictationAudioClip_25();
			NullCheck(L_7);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(60 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_7, L_8, L_9, L_10);
		}

IL_0056:
		{
			// textSoFar = null;
			__this->set_textSoFar_21((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_24(L_11);
			IL2CPP_LEAVE(0x7A, FINALLY_006b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006b;
	}

FINALLY_006b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(107)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationError(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2 (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DictationErrorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_DictationErrorPerfMarker_35();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{error}\nHRESULT: {hresult}";
			String_t* L_2 = ___error0;
			int32_t L_3 = ___hresult1;
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
			String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3, L_2, L_5, /*hidden argument*/NULL);
			__this->set_dictationResult_24(L_6);
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_7 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_7;
			// inputSystem?.RaiseDictationError(inputSource, dictationResult);
			RuntimeObject* L_8 = V_2;
			if (L_8)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			goto IL_0047;
		}

IL_0033:
		{
			RuntimeObject* L_9 = V_2;
			RuntimeObject* L_10 = __this->get_inputSource_20();
			String_t* L_11 = __this->get_dictationResult_24();
			NullCheck(L_9);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_9, L_10, L_11, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		}

IL_0047:
		{
			// textSoFar = null;
			__this->set_textSoFar_21((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_24(L_12);
			IL2CPP_LEAVE(0x6B, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__cctor_mF47741C7416AABCF56BBB399E377FD1D1A356F9C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider__cctor_mF47741C7416AABCF56BBB399E377FD1D1A356F9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StartRecordingAsync");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral7239BC082C083BAF270F01C05BDC34B410C10BD6, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_StartRecordingAsyncPerfMarker_15(L_0);
		// private static readonly ProfilerMarker StopRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StopRecordingAsync");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral6724E09980AD74647D832717B4E330AFD1DA80B3, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_StopRecordingAsyncPerfMarker_16(L_1);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteral1C74F05B62743E108EB5E44F3AF19A5E8B714D82, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_31(L_2);
		// private static readonly ProfilerMarker DictationHypothesisPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationHypothesis");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7382B9DF10E8CD20E4A5047E0466AC111124EC32, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_DictationHypothesisPerfMarker_32(L_3);
		// private static readonly ProfilerMarker DictationResultPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationResult");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_4), _stringLiteral4C35893AFF46A5FE641A9455D147A7E1F69671C6, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_DictationResultPerfMarker_33(L_4);
		// private static readonly ProfilerMarker DictationCompletePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationComplete");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_5), _stringLiteral74A09C083C928B7925FC5F212135B32F4278D915, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_DictationCompletePerfMarker_34(L_5);
		// private static readonly ProfilerMarker DictationErrorPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationError");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteralF2858B3463A4505F9D7FDF42C2F37FFF7EDF011E, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->set_DictationErrorPerfMarker_35(L_6);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE2007ED30E3BF74F5DD7C50E896D83D240AFE848 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mE2007ED30E3BF74F5DD7C50E896D83D240AFE848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * L_0 = (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 *)il2cpp_codegen_object_new(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6DFDFB5BDC2A096526F13F4E9EF2FA8D134A55F8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DFDFB5BDC2A096526F13F4E9EF2FA8D134A55F8 (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_0_mCF9A303018FA222ADE34B08E30829584994207F8 (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_1_mEA7799FC4788088C77DF6E6A3C822F3B0D97B938 (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_2_m3F7CFAD7960920F7E41BFD8C8F812726ACF0FEAA (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__1_2_m3F7CFAD7960920F7E41BFD8C8F812726ACF0FEAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_3_m808452C90329105C9736C1F53EB24FDBE1183B0D (U3CU3Ec_tFD728B53704FEAC9211E9182CA1BA499EC20B853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__1_3_m808452C90329105C9736C1F53EB24FDBE1183B0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31__ctor_m956BBB87AAC80CB010A900E662BDFBBD9443D271 (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_MoveNext_mA125C79CD7EC7492FDC97EE14AE444F2E1FA275F (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisableU3Ed__31_MoveNext_mA125C79CD7EC7492FDC97EE14AE444F2E1FA275F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
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
			goto IL_008b;
		}

IL_000e:
		{
			// if (Application.isPlaying && dictationRecognizer != null)
			bool L_2 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_3 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			G_B7_0 = ((!(((RuntimeObject*)(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_0021;
		}

IL_0020:
		{
			G_B7_0 = 0;
		}

IL_0021:
		{
			V_1 = (bool)G_B7_0;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0121;
			}
		}

IL_0028:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			bool L_6 = L_5->get_isTransitioning_19();
			if (L_6)
			{
				goto IL_0043;
			}
		}

IL_0036:
		{
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_7 = __this->get_U3CU3E4__this_2();
			NullCheck(L_7);
			bool L_8 = WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline(L_7, /*hidden argument*/NULL);
			G_B11_0 = ((int32_t)(L_8));
			goto IL_0044;
		}

IL_0043:
		{
			G_B11_0 = 0;
		}

IL_0044:
		{
			V_2 = (bool)G_B11_0;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_00b0;
			}
		}

IL_0048:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_10 = __this->get_U3CU3E4__this_2();
			NullCheck(L_10);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_11 = WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_12 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_11, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a7;
			}
		}

IL_0063:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_15 = V_3;
			__this->set_U3CU3Eu__1_3(L_15);
			V_4 = __this;
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m4DA19B1EFB2F41402FDC359B23641D2F76DC4E7A((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_16, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_3), (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB **)(&V_4), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB_m4DA19B1EFB2F41402FDC359B23641D2F76DC4E7A_RuntimeMethod_var);
			goto IL_0151;
		}

IL_008b:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_17 = __this->get_U3CU3Eu__1_3();
			V_3 = L_17;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_18 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a7:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
		}

IL_00b0:
		{
			// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_20 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_21 = __this->get_U3CU3E4__this_2();
			DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_22 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_22, L_21, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m960DDA2CA947EF014A46C7B24F312B97358C71A1_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_20);
			DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816(L_20, L_22, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_23 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_24 = __this->get_U3CU3E4__this_2();
			DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_25 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_25, L_24, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5A33C65FA2E77C7160FE4C56496AD86D02A31479_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_23);
			DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6(L_23, L_25, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_26 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_27 = __this->get_U3CU3E4__this_2();
			DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_28 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_28, L_27, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB41C9A42693629B1312C2D1351498F16C24B2051_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_26);
			DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F(L_26, L_28, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_29 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_30 = __this->get_U3CU3E4__this_2();
			DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_31 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_31, L_30, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m6FCA65916974704477EB37EDE1BCB79BC031EDD2_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_29);
			DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3(L_29, L_31, /*hidden argument*/NULL);
		}

IL_0121:
		{
			goto IL_013d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0123;
		throw e;
	}

CATCH_0123:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_5;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_32, L_33, /*hidden argument*/NULL);
		goto IL_0151;
	} // end catch (depth: 1)

IL_013d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_34, /*hidden argument*/NULL);
	}

IL_0151:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_SetStateMachine_mF4A39653C8A57089E57EBB27476FB7395DBE3F95 (U3CDisableU3Ed__31_tBA134E2BEEFA4E71DD5A30E16FD98F5D439C7FBB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7__ctor_mFB0AC1CD54AD5E7A0FEE9ACF033934A70E4432EC (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_MoveNext_m99E036CB3D18FB0ECD55F535958C9C2150DFEC02 (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingU3Ed__7_MoveNext_m99E036CB3D18FB0ECD55F535958C9C2150DFEC02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * V_2 = NULL;
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
			goto IL_006b;
		}

IL_000e:
		{
			// await StartRecordingAsync(listener, initialSilenceTimeout, autoSilenceTimeout, recordingTime, micDeviceName);
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_2 = __this->get_U3CU3E4__this_7();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_listener_2();
			float L_4 = __this->get_initialSilenceTimeout_3();
			float L_5 = __this->get_autoSilenceTimeout_4();
			int32_t L_6 = __this->get_recordingTime_5();
			String_t* L_7 = __this->get_micDeviceName_6();
			NullCheck(L_2);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = WindowsDictationInputProvider_StartRecordingAsync_mA72E4191574E6C600089D9B915005B735E119B7F(L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_9 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			bool L_10 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0087;
			}
		}

IL_0047:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_12 = V_1;
			__this->set_U3CU3Eu__1_8(L_12);
			V_2 = __this;
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m563639255F6BB256A0858853E3C680CFCAE6301E((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_1), (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6_m563639255F6BB256A0858853E3C680CFCAE6301E_RuntimeMethod_var);
			goto IL_00bd;
		}

IL_006b:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_14 = __this->get_U3CU3Eu__1_8();
			V_1 = L_14;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_15 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0087:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_1), /*hidden argument*/NULL);
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0091;
		throw e;
	}

CATCH_0091:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_17, L_18, /*hidden argument*/NULL);
		goto IL_00bd;
	} // end catch (depth: 1)

IL_00a9:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_19, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_SetStateMachine_mD35DEC009F914C4EE1F436D0105D0AEB85F99B68 (U3CStartRecordingU3Ed__7_tD51959A9263BDE6F287E67F878FDE3DC301834F6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10__ctor_mF575A8595689DBE9F0B16EA8823E1E30054930AA (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_MoveNext_mE17C18A8D5924CCE3E9559DF928051E5690D0BFE (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingAsyncU3Ed__10_MoveNext_mE17C18A8D5924CCE3E9559DF928051E5690D0BFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_6 = NULL;
	U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * V_7 = NULL;
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_8 = NULL;
	bool V_9 = false;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (StartRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_StartRecordingAsyncPerfMarker_15();
			V_1 = L_2;
			AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_8(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_0172;
			}

IL_0034:
			{
				goto IL_0249;
			}

IL_0039:
			{
				// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_6 = __this->get_U3CU3E4__this_7();
				NullCheck(L_6);
				RuntimeObject* L_7 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(L_6, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
				__this->set_U3CinputSystemU3E5__2_9(L_7);
				// if (IsListening || isTransitioning || inputSystem == null || !Application.isPlaying)
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_8 = __this->get_U3CU3E4__this_7();
				NullCheck(L_8);
				bool L_9 = WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline(L_8, /*hidden argument*/NULL);
				if (L_9)
				{
					goto IL_0077;
				}
			}

IL_0058:
			{
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_10 = __this->get_U3CU3E4__this_7();
				NullCheck(L_10);
				bool L_11 = L_10->get_isTransitioning_19();
				if (L_11)
				{
					goto IL_0077;
				}
			}

IL_0065:
			{
				RuntimeObject* L_12 = __this->get_U3CinputSystemU3E5__2_9();
				if (!L_12)
				{
					goto IL_0077;
				}
			}

IL_006d:
			{
				bool L_13 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
				G_B17_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
				goto IL_0078;
			}

IL_0077:
			{
				G_B17_0 = 1;
			}

IL_0078:
			{
				V_2 = (bool)G_B17_0;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_008d;
				}
			}

IL_007c:
			{
				// Debug.LogWarning("Unable to start recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x349, FINALLY_030a);
			}

IL_008d:
			{
				// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_15 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				if (L_15)
				{
					goto IL_00ae;
				}
			}

IL_0094:
			{
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_16 = __this->get_U3CU3E4__this_7();
				NullCheck(L_16);
				MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_17 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_18 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_17, /*hidden argument*/NULL);
				NullCheck(L_18);
				int32_t L_19 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline(L_18, /*hidden argument*/NULL);
				G_B22_0 = ((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
				goto IL_00af;
			}

IL_00ae:
			{
				G_B22_0 = 0;
			}

IL_00af:
			{
				V_3 = (bool)G_B22_0;
				bool L_20 = V_3;
				if (!L_20)
				{
					goto IL_00c1;
				}
			}

IL_00b3:
			{
				// InitializeDictationRecognizer();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_21 = __this->get_U3CU3E4__this_7();
				NullCheck(L_21);
				WindowsDictationInputProvider_InitializeDictationRecognizer_m5951BA0A47844975587F50ACA08488A2D1F0A022(L_21, /*hidden argument*/NULL);
			}

IL_00c1:
			{
				// hasFailed = false;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_22 = __this->get_U3CU3E4__this_7();
				NullCheck(L_22);
				L_22->set_hasFailed_17((bool)0);
				// IsListening = true;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_23 = __this->get_U3CU3E4__this_7();
				NullCheck(L_23);
				WindowsDictationInputProvider_set_IsListening_m471EEE28469E8D20DBFAFFF1840719277C1FAA24_inline(L_23, (bool)1, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_24 = __this->get_U3CU3E4__this_7();
				NullCheck(L_24);
				L_24->set_isTransitioning_19((bool)1);
				// if (listener != null)
				GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_listener_2();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
				bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
				V_4 = L_26;
				bool L_27 = V_4;
				if (!L_27)
				{
					goto IL_0118;
				}
			}

IL_00f8:
			{
				// hasListener = true;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_28 = __this->get_U3CU3E4__this_7();
				NullCheck(L_28);
				L_28->set_hasListener_18((bool)1);
				// inputSystem.PushModalInputHandler(listener);
				RuntimeObject* L_29 = __this->get_U3CinputSystemU3E5__2_9();
				GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_listener_2();
				NullCheck(L_29);
				InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(15 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_29, L_30);
			}

IL_0118:
			{
				// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
				int32_t L_31 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_31) == ((int32_t)1))? 1 : 0);
				bool L_32 = V_5;
				if (!L_32)
				{
					goto IL_012e;
				}
			}

IL_0126:
			{
				// PhraseRecognitionSystem.Shutdown();
				PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC(/*hidden argument*/NULL);
			}

IL_012e:
			{
				// await waitUntilPhraseRecognitionSystemHasStopped;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_33 = __this->get_U3CU3E4__this_7();
				NullCheck(L_33);
				WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_34 = L_33->get_waitUntilPhraseRecognitionSystemHasStopped_28();
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_35 = AwaiterExtensions_GetAwaiter_m6A4C2F2DC2894E56310C5C556F2E5207ADE93061(L_34, /*hidden argument*/NULL);
				V_6 = L_35;
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_36 = V_6;
				NullCheck(L_36);
				bool L_37 = SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline(L_36, /*hidden argument*/NULL);
				if (L_37)
				{
					goto IL_018f;
				}
			}

IL_0149:
			{
				int32_t L_38 = 0;
				V_0 = L_38;
				__this->set_U3CU3E1__state_0(L_38);
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_39 = V_6;
				__this->set_U3CU3Eu__1_11(L_39);
				V_7 = __this;
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_40, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_6), (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x35D, FINALLY_030a);
			}

IL_0172:
			{
				RuntimeObject * L_41 = __this->get_U3CU3Eu__1_11();
				V_6 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_41, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_11(NULL);
				int32_t L_42 = (-1);
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
			}

IL_018f:
			{
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_43 = V_6;
				NullCheck(L_43);
				SimpleCoroutineAwaiter_GetResult_m420A13389F33A1A75EF95E5A6585C160B0A68A9F(L_43, /*hidden argument*/NULL);
				// Debug.Assert(PhraseRecognitionSystem.Status == SpeechSystemStatus.Stopped);
				int32_t L_44 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
				// deviceName = micDeviceName;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_45 = __this->get_U3CU3E4__this_7();
				String_t* L_46 = __this->get_micDeviceName_6();
				NullCheck(L_45);
				L_45->set_deviceName_22(L_46);
				// Microphone.GetDeviceCaps(deviceName, out minSamplingRate, out samplingRate);
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_47 = __this->get_U3CU3E4__this_7();
				NullCheck(L_47);
				String_t* L_48 = L_47->get_deviceName_22();
				int32_t* L_49 = __this->get_address_of_U3CminSamplingRateU3E5__3_10();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_50 = __this->get_U3CU3E4__this_7();
				NullCheck(L_50);
				int32_t* L_51 = L_50->get_address_of_samplingRate_23();
				Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B(L_48, (int32_t*)L_49, (int32_t*)L_51, /*hidden argument*/NULL);
				// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_52 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				float L_53 = __this->get_initialSilenceTimeout_3();
				NullCheck(L_52);
				DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06(L_52, L_53, /*hidden argument*/NULL);
				// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_54 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				float L_55 = __this->get_autoSilenceTimeout_4();
				NullCheck(L_54);
				DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9(L_54, L_55, /*hidden argument*/NULL);
				// dictationRecognizer.Start();
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_56 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_56);
				DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536(L_56, /*hidden argument*/NULL);
				// await waitUntilDictationRecognizerHasStarted;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_57 = __this->get_U3CU3E4__this_7();
				NullCheck(L_57);
				WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_58 = L_57->get_waitUntilDictationRecognizerHasStarted_29();
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_59 = AwaiterExtensions_GetAwaiter_m6A4C2F2DC2894E56310C5C556F2E5207ADE93061(L_58, /*hidden argument*/NULL);
				V_8 = L_59;
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_60 = V_8;
				NullCheck(L_60);
				bool L_61 = SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline(L_60, /*hidden argument*/NULL);
				if (L_61)
				{
					goto IL_0266;
				}
			}

IL_0220:
			{
				int32_t L_62 = 1;
				V_0 = L_62;
				__this->set_U3CU3E1__state_0(L_62);
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_63 = V_8;
				__this->set_U3CU3Eu__1_11(L_63);
				V_7 = __this;
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_64 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_64, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_8), (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F_m5D15B5A7CFCD6837B64C8CB20DE74E110FF9B3BF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x35D, FINALLY_030a);
			}

IL_0249:
			{
				RuntimeObject * L_65 = __this->get_U3CU3Eu__1_11();
				V_8 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_65, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_11(NULL);
				int32_t L_66 = (-1);
				V_0 = L_66;
				__this->set_U3CU3E1__state_0(L_66);
			}

IL_0266:
			{
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_67 = V_8;
				NullCheck(L_67);
				SimpleCoroutineAwaiter_GetResult_m420A13389F33A1A75EF95E5A6585C160B0A68A9F(L_67, /*hidden argument*/NULL);
				// Debug.Assert(dictationRecognizer.Status == SpeechSystemStatus.Running);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_68 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_68);
				int32_t L_69 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_68, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_69) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_70 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_70);
				int32_t L_71 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_70, /*hidden argument*/NULL);
				V_9 = (bool)((((int32_t)L_71) == ((int32_t)2))? 1 : 0);
				bool L_72 = V_9;
				if (!L_72)
				{
					goto IL_02b7;
				}
			}

IL_0294:
			{
				// inputSystem.RaiseDictationError(inputSource, "Dictation recognizer failed to start!");
				RuntimeObject* L_73 = __this->get_U3CinputSystemU3E5__2_9();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_74 = __this->get_U3CU3E4__this_7();
				NullCheck(L_74);
				RuntimeObject* L_75 = L_74->get_inputSource_20();
				NullCheck(L_73);
				InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_73, L_75, _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
				// return;
				IL2CPP_LEAVE(0x349, FINALLY_030a);
			}

IL_02b7:
			{
				// dictationAudioClip = Microphone.Start(deviceName, false, recordingTime, samplingRate);
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_76 = __this->get_U3CU3E4__this_7();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_77 = __this->get_U3CU3E4__this_7();
				NullCheck(L_77);
				String_t* L_78 = L_77->get_deviceName_22();
				int32_t L_79 = __this->get_recordingTime_5();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_80 = __this->get_U3CU3E4__this_7();
				NullCheck(L_80);
				int32_t L_81 = L_80->get_samplingRate_23();
				AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_82 = Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047(L_78, (bool)0, L_79, L_81, /*hidden argument*/NULL);
				NullCheck(L_76);
				L_76->set_dictationAudioClip_25(L_82);
				// textSoFar = new StringBuilder();
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_83 = __this->get_U3CU3E4__this_7();
				StringBuilder_t * L_84 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_84, /*hidden argument*/NULL);
				NullCheck(L_83);
				L_83->set_textSoFar_21(L_84);
				// isTransitioning = false;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_85 = __this->get_U3CU3E4__this_7();
				NullCheck(L_85);
				L_85->set_isTransitioning_19((bool)0);
				__this->set_U3CinputSystemU3E5__2_9((RuntimeObject*)NULL);
				IL2CPP_LEAVE(0x321, FINALLY_030a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_030a;
		}

FINALLY_030a:
		{ // begin finally (depth: 2)
			{
				int32_t L_86 = V_0;
				if ((((int32_t)L_86) >= ((int32_t)0)))
				{
					goto IL_0320;
				}
			}

IL_030e:
			{
				AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * L_87 = __this->get_address_of_U3CU3Es__1_8();
				AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)L_87, /*hidden argument*/NULL);
			}

IL_0320:
			{
				IL2CPP_END_FINALLY(778)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(778)
		{
			IL2CPP_JUMP_TBL(0x349, IL_0349)
			IL2CPP_JUMP_TBL(0x35D, IL_035d)
			IL2CPP_JUMP_TBL(0x321, IL_0321)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0321:
		{
			AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * L_88 = __this->get_address_of_U3CU3Es__1_8();
			il2cpp_codegen_initobj(L_88, sizeof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F ));
			goto IL_0349;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_032f;
		throw e;
	}

CATCH_032f:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_89 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_90 = V_10;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_89, L_90, /*hidden argument*/NULL);
		goto IL_035d;
	} // end catch (depth: 1)

IL_0349:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_91 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_91, /*hidden argument*/NULL);
	}

IL_035d:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_SetStateMachine_m27D50D6A913F6555FD18588F9D9B9B8AEF87C5C2 (U3CStartRecordingAsyncU3Ed__10_t9485E3786D0335BE5564B83BCD33C3328BA8A72F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8__ctor_mFDF1E3ABFAB0B0A1A88ECF7DFB33418E83C8E7EA (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_MoveNext_m850241447B2799D13CE0F4709459658B189A1AFA (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingU3Ed__8_MoveNext_m850241447B2799D13CE0F4709459658B189A1AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * V_2 = NULL;
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
			goto IL_004d;
		}

IL_000e:
		{
			// await StopRecordingAsync();
			WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_3 = WindowsDictationInputProvider_StopRecordingAsync_mC87508DCB2D9A940BA3A681862A2A919BC69FA2C(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_4 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_3, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_1 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_1), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0069;
			}
		}

IL_0029:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_7 = V_1;
			__this->set_U3CU3Eu__1_3(L_7);
			V_2 = __this;
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m310A3A172A382BF2FB209ADD2DA5F6E7609D881D((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_8, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_1), (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8_m310A3A172A382BF2FB209ADD2DA5F6E7609D881D_RuntimeMethod_var);
			goto IL_009f;
		}

IL_004d:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_9 = __this->get_U3CU3Eu__1_3();
			V_1 = L_9;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_10 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0069:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_1), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_12, L_13, /*hidden argument*/NULL);
		goto IL_009f;
	} // end catch (depth: 1)

IL_008b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, /*hidden argument*/NULL);
	}

IL_009f:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_SetStateMachine_m625A57DC24398F121CFBC612838235DF7282F498 (U3CStopRecordingU3Ed__8_tA0B0AEE5A99FCFFEEC278BF47A390FA2E7ED08B8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12__ctor_m52BBB354A6C2C008B040F86CFC5D8E353D823335 (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_MoveNext_m7C626E670E41748A3B0AE2AAA1261CE09C23DAF5 (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__12_MoveNext_m7C626E670E41748A3B0AE2AAA1261CE09C23DAF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_1 = NULL;
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_6 = NULL;
	U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * V_7 = NULL;
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B16_0 = 0;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (StopRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
			ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_StopRecordingAsyncPerfMarker_16();
			V_2 = L_2;
			AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_0146;
			}

IL_0034:
			{
				goto IL_01c8;
			}

IL_0039:
			{
				// if (!IsListening || isTransitioning || !Application.isPlaying)
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_6 = __this->get_U3CU3E4__this_2();
				NullCheck(L_6);
				bool L_7 = WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline(L_6, /*hidden argument*/NULL);
				if (!L_7)
				{
					goto IL_005e;
				}
			}

IL_0047:
			{
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_8 = __this->get_U3CU3E4__this_2();
				NullCheck(L_8);
				bool L_9 = L_8->get_isTransitioning_19();
				if (L_9)
				{
					goto IL_005e;
				}
			}

IL_0054:
			{
				bool L_10 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
				G_B16_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				goto IL_005f;
			}

IL_005e:
			{
				G_B16_0 = 1;
			}

IL_005f:
			{
				V_3 = (bool)G_B16_0;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0076;
				}
			}

IL_0063:
			{
				// Debug.LogWarning("Unable to stop recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6, /*hidden argument*/NULL);
				// return null;
				V_1 = (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL;
				IL2CPP_LEAVE(0x246, FINALLY_0215);
			}

IL_0076:
			{
				// IsListening = false;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_12 = __this->get_U3CU3E4__this_2();
				NullCheck(L_12);
				WindowsDictationInputProvider_set_IsListening_m471EEE28469E8D20DBFAFFF1840719277C1FAA24_inline(L_12, (bool)0, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_13 = __this->get_U3CU3E4__this_2();
				NullCheck(L_13);
				L_13->set_isTransitioning_19((bool)1);
				// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_14 = __this->get_U3CU3E4__this_2();
				NullCheck(L_14);
				RuntimeObject* L_15 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(L_14, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
				__this->set_U3CinputSystemU3E5__2_4(L_15);
				// if (hasListener)
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_16 = __this->get_U3CU3E4__this_2();
				NullCheck(L_16);
				bool L_17 = L_16->get_hasListener_18();
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_00d1;
				}
			}

IL_00b1:
			{
				// inputSystem?.PopModalInputHandler();
				RuntimeObject* L_19 = __this->get_U3CinputSystemU3E5__2_4();
				RuntimeObject* L_20 = L_19;
				G_B20_0 = L_20;
				if (L_20)
				{
					G_B21_0 = L_20;
					goto IL_00be;
				}
			}

IL_00bb:
			{
				goto IL_00c4;
			}

IL_00be:
			{
				NullCheck(G_B21_0);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, G_B21_0);
			}

IL_00c4:
			{
				// hasListener = false;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_21 = __this->get_U3CU3E4__this_2();
				NullCheck(L_21);
				L_21->set_hasListener_18((bool)0);
			}

IL_00d1:
			{
				// Microphone.End(deviceName);
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_22 = __this->get_U3CU3E4__this_2();
				NullCheck(L_22);
				String_t* L_23 = L_22->get_deviceName_22();
				Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_23, /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_24 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_24);
				int32_t L_25 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_24, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_0102;
				}
			}

IL_00f5:
			{
				// dictationRecognizer.Stop();
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_27 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_27);
				DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E(L_27, /*hidden argument*/NULL);
			}

IL_0102:
			{
				// await waitUntilDictationRecognizerHasStopped;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_28 = __this->get_U3CU3E4__this_2();
				NullCheck(L_28);
				WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_29 = L_28->get_waitUntilDictationRecognizerHasStopped_30();
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_30 = AwaiterExtensions_GetAwaiter_m6A4C2F2DC2894E56310C5C556F2E5207ADE93061(L_29, /*hidden argument*/NULL);
				V_6 = L_30;
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_31 = V_6;
				NullCheck(L_31);
				bool L_32 = SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline(L_31, /*hidden argument*/NULL);
				if (L_32)
				{
					goto IL_0163;
				}
			}

IL_011d:
			{
				int32_t L_33 = 0;
				V_0 = L_33;
				__this->set_U3CU3E1__state_0(L_33);
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_34 = V_6;
				__this->set_U3CU3Eu__1_5(L_34);
				V_7 = __this;
				AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_35, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_6), (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8_RuntimeMethod_var);
				IL2CPP_LEAVE(0x25B, FINALLY_0215);
			}

IL_0146:
			{
				RuntimeObject * L_36 = __this->get_U3CU3Eu__1_5();
				V_6 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_36, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_5(NULL);
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->set_U3CU3E1__state_0(L_37);
			}

IL_0163:
			{
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_38 = V_6;
				NullCheck(L_38);
				SimpleCoroutineAwaiter_GetResult_m420A13389F33A1A75EF95E5A6585C160B0A68A9F(L_38, /*hidden argument*/NULL);
				// Debug.Assert(dictationRecognizer.Status == SpeechSystemStatus.Stopped);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var);
				DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_39 = ((WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_39);
				int32_t L_40 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_39, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
				// PhraseRecognitionSystem.Restart();
				PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F(/*hidden argument*/NULL);
				// await waitUntilPhraseRecognitionSystemHasStarted;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_41 = __this->get_U3CU3E4__this_2();
				NullCheck(L_41);
				WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_42 = L_41->get_waitUntilPhraseRecognitionSystemHasStarted_27();
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_43 = AwaiterExtensions_GetAwaiter_m6A4C2F2DC2894E56310C5C556F2E5207ADE93061(L_42, /*hidden argument*/NULL);
				V_8 = L_43;
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_44 = V_8;
				NullCheck(L_44);
				bool L_45 = SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline(L_44, /*hidden argument*/NULL);
				if (L_45)
				{
					goto IL_01e5;
				}
			}

IL_019f:
			{
				int32_t L_46 = 1;
				V_0 = L_46;
				__this->set_U3CU3E1__state_0(L_46);
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_47 = V_8;
				__this->set_U3CU3Eu__1_5(L_47);
				V_7 = __this;
				AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_48 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_48, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_8), (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C_mB95C19C4DB5CC8542C64B4B15223ED25A4B723D8_RuntimeMethod_var);
				IL2CPP_LEAVE(0x25B, FINALLY_0215);
			}

IL_01c8:
			{
				RuntimeObject * L_49 = __this->get_U3CU3Eu__1_5();
				V_8 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_49, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_5(NULL);
				int32_t L_50 = (-1);
				V_0 = L_50;
				__this->set_U3CU3E1__state_0(L_50);
			}

IL_01e5:
			{
				SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_51 = V_8;
				NullCheck(L_51);
				SimpleCoroutineAwaiter_GetResult_m420A13389F33A1A75EF95E5A6585C160B0A68A9F(L_51, /*hidden argument*/NULL);
				// Debug.Assert(PhraseRecognitionSystem.Status == SpeechSystemStatus.Running);
				int32_t L_52 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_52) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
				// isTransitioning = false;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_53 = __this->get_U3CU3E4__this_2();
				NullCheck(L_53);
				L_53->set_isTransitioning_19((bool)0);
				// return dictationAudioClip;
				WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * L_54 = __this->get_U3CU3E4__this_2();
				NullCheck(L_54);
				AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_55 = L_54->get_dictationAudioClip_25();
				V_1 = L_55;
				IL2CPP_LEAVE(0x246, FINALLY_0215);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0215;
		}

FINALLY_0215:
		{ // begin finally (depth: 2)
			{
				int32_t L_56 = V_0;
				if ((((int32_t)L_56) >= ((int32_t)0)))
				{
					goto IL_022b;
				}
			}

IL_0219:
			{
				AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * L_57 = __this->get_address_of_U3CU3Es__1_3();
				AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)L_57, /*hidden argument*/NULL);
			}

IL_022b:
			{
				IL2CPP_END_FINALLY(533)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(533)
		{
			IL2CPP_JUMP_TBL(0x246, IL_0246)
			IL2CPP_JUMP_TBL(0x25B, IL_025b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_022c;
		throw e;
	}

CATCH_022c:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_59 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_58, L_59, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var);
		goto IL_025b;
	} // end catch (depth: 1)

IL_0246:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_60 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_61 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_60, L_61, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var);
	}

IL_025b:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m40E495ABB67D82B981AED87AE2B060DFE03E9081 (U3CStopRecordingAsyncU3Ed__12_t0F1CC30ABB72948750B25B0987712456EB8CA62C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m66B1FC5AE32EFC42CE7F0A54F0EEF4D2A3A0F0E4 (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider__ctor_m66B1FC5AE32EFC42CE7F0A54F0EEF4D2A3A0F0E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile4;
		WindowsSpeechInputProvider__ctor_m3D7A97862E6CAD046A748D9B4C45B572108F551C(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_m9CF179C88E49C717ED2F305EE5535E66913776AD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m3D7A97862E6CAD046A748D9B4C45B572108F551C (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider__ctor_m3D7A97862E6CAD046A748D9B4C45B572108F551C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IMixedRealityInputSource InputSource = null;
		__this->set_InputSource_14((RuntimeObject*)NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t228D15326B7B078F3073FBEF1324C53B4F0E4C65_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_mCDCE13A366238514ADD5EA86433B347E6F61942A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	{
		// private SpeechCommands[] Commands => InputSystemProfile.SpeechCommandsProfile.SpeechCommands;
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_0 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_2 = MixedRealitySpeechCommandsProfile_get_SpeechCommands_mBFBEF18A05460FF616273D4BC61A5CFECACD34B6_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m20F738492D5C6A145EF0B80D836CFA4E96593178 (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mBCF3F5EA2A0309C0A2488920E7A25528CF06981E (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_IsRecognitionActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_get_IsRecognitionActive_mA0E6E261C2050B47BE002F5492893D7AF5D9CFF5 (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * G_B2_0 = NULL;
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		//             keywordRecognizer?.IsRunning ??
		// #endif
		//             false;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_16();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0012:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_CheckCapability_mDA326B3B5400900AC9CB5A198AE673C9D8DFAE33 (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return capability == MixedRealityCapability.VoiceCommand;
		int32_t L_0 = ___capability0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m3F9D8297A9B43C5FA9A677ACCFBA666A4722E80C (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (keywordRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_16();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_1 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_2 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_5 = __this->get_keywordRecognizer_16();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_6 = __this->get_keywordRecognizer_16();
		NullCheck(L_6);
		bool L_7 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_6, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 0;
	}

IL_0045:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_9 = __this->get_keywordRecognizer_16();
		NullCheck(L_9);
		PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459(L_9, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_m674E25BB37DACFF21DDD43A91AF1A532F78DDBDB (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_16();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_16();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_4 = __this->get_keywordRecognizer_16();
		NullCheck(L_4);
		PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19(L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Enable_m0F38E06629A72D066E38BB75CA8344FB213D121C (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_0 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E(__this, /*hidden argument*/NULL);
		// StartRecognition();
		WindowsSpeechInputProvider_StartRecognition_m3F9D8297A9B43C5FA9A677ACCFBA666A4722E80C(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_InitializeKeywordRecognizer_m67F2BF040CB941FD8D5C85B434BC1115333BAF3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * G_B10_0 = NULL;
	WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * G_B11_1 = NULL;
	{
		// if (!Application.isPlaying ||
		//     (Commands == null) ||
		//     (Commands.Length == 0) ||
		//     InputSystemProfile == null ||
		//     keywordRecognizer != null
		//     )
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_1 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_2 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0032;
		}
	}
	{
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_3 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_5 = __this->get_keywordRecognizer_16();
		G_B6_0 = ((!(((RuntimeObject*)(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 1;
	}

IL_0033:
	{
		V_2 = (bool)G_B6_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return;
		goto IL_00fd;
	}

IL_003d:
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_7 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
		V_0 = L_7;
		// InputSource = inputSystem?.RequestNewGenericInputSource("Windows Speech Input Source", sourceType: InputSourceType.Voice);
		RuntimeObject* L_8 = V_0;
		G_B9_0 = __this;
		if (L_8)
		{
			G_B10_0 = __this;
			goto IL_004b;
		}
	}
	{
		G_B11_0 = ((RuntimeObject*)(NULL));
		G_B11_1 = G_B9_0;
		goto IL_0058;
	}

IL_004b:
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_9, _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0, (IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)(IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)NULL, 3);
		G_B11_0 = L_10;
		G_B11_1 = G_B10_0;
	}

IL_0058:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_InputSource_14(G_B11_0);
		// var newKeywords = new string[Commands.Length];
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_11 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		V_1 = L_12;
		// for (int i = 0; i < Commands.Length; i++)
		V_3 = 0;
		goto IL_0089;
	}

IL_006f:
	{
		// newKeywords[i] = Commands[i].LocalizedKeyword;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_1;
		int32_t L_14 = V_3;
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_15 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		String_t* L_17 = SpeechCommands_get_LocalizedKeyword_m23D2BA08EFD47A734B6E5516C5460DA02A7D4767((SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (String_t*)L_17);
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0089:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_19 = V_3;
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_20 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		V_4 = (bool)((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))? 1 : 0);
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_006f;
		}
	}
	{
		// RecognitionConfidenceLevel = InputSystemProfile.SpeechCommandsProfile.SpeechRecognitionConfidenceLevel;
		MixedRealityInputSystemProfile_t8EB22AE3D6B694918800E3530608AC811379673B * L_22 = BaseInputDeviceManager_get_InputSystemProfile_m65EE918F00AB7A560805DE03E505BB7F3C0D3D40(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * L_23 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m6BB9744A30455525CA13E8AF7E8DC3D82DC336E5(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_mFD4A90281DCF87C00D29C8F47F7C88021E66840C_inline(L_23, /*hidden argument*/NULL);
		WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mBCF3F5EA2A0309C0A2488920E7A25528CF06981E_inline(__this, L_24, /*hidden argument*/NULL);
	}

IL_00b1:
	try
	{ // begin try (depth: 1)
		// keywordRecognizer = new KeywordRecognizer(newKeywords, (ConfidenceLevel)RecognitionConfidenceLevel);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_1;
		int32_t L_26 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m20F738492D5C6A145EF0B80D836CFA4E96593178_inline(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_27 = (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)il2cpp_codegen_object_new(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56(L_27, L_25, L_26, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_16(L_27);
		goto IL_00e5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c7;
		throw e;
	}

CATCH_00c7:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_5 = ((Exception_t *)__exception_local);
		// Debug.LogWarning($"Failed to start keyword recognizer. Are microphone permissions granted? Exception: {ex}");
		Exception_t * L_28 = V_5;
		String_t* L_29 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD8259643549B7FA2D109DA0AFC1E9486946DC0C1, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_29, /*hidden argument*/NULL);
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_16((KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)NULL);
		// return;
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00e5:
	{
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_30 = __this->get_keywordRecognizer_16();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_31 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_31, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_mD12167A17AFAEC8184E1D0ADFB0E40F91C4DFC0A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Update_m5A3519C2CB3F300C5DF91C8CCED5F0D4B8856FFD (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Update_m5A3519C2CB3F300C5DF91C8CCED5F0D4B8856FFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_17();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
			KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_2 = __this->get_keywordRecognizer_16();
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_0018:
		{
			KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_16();
			NullCheck(L_3);
			bool L_4 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_3, /*hidden argument*/NULL);
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0026;
		}

IL_0025:
		{
			G_B4_0 = 0;
		}

IL_0026:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_008d;
			}
		}

IL_002a:
		{
			// for (int i = 0; i < Commands.Length; i++)
			V_3 = 0;
			goto IL_007b;
		}

IL_002f:
		{
			// if (UInput.GetKeyDown(Commands[i].KeyCode))
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_6 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			int32_t L_7 = V_3;
			NullCheck(L_6);
			int32_t L_8 = SpeechCommands_get_KeyCode_mC48892B8A7C5BF42809AA7948DB9DF4C0DF4A35C_inline((SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
			bool L_9 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_0076;
			}
		}

IL_004c:
		{
			// OnPhraseRecognized((ConfidenceLevel)RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.UtcNow, Commands[i].LocalizedKeyword);
			int32_t L_11 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m20F738492D5C6A145EF0B80D836CFA4E96593178_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
			TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_12 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_13 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_14 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_3;
			NullCheck(L_14);
			String_t* L_16 = SpeechCommands_get_LocalizedKeyword_m23D2BA08EFD47A734B6E5516C5460DA02A7D4767((SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), /*hidden argument*/NULL);
			WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F(__this, L_11, L_12, L_13, L_16, /*hidden argument*/NULL);
		}

IL_0076:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_17 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_007b:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_18 = V_3;
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_19 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			V_5 = (bool)((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))? 1 : 0);
			bool L_20 = V_5;
			if (L_20)
			{
				goto IL_002f;
			}
		}

IL_008c:
		{
		}

IL_008d:
		{
			IL2CPP_LEAVE(0x9F, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Disable_mB6DD19F254F69BCC38A70BFCA99FB0EB1D348FAE (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Disable_mB6DD19F254F69BCC38A70BFCA99FB0EB1D348FAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (keywordRecognizer != null)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_16();
		V_0 = (bool)((!(((RuntimeObject*)(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// StopRecognition();
		WindowsSpeechInputProvider_StopRecognition_m674E25BB37DACFF21DDD43A91AF1A532F78DDBDB(__this, /*hidden argument*/NULL);
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_2 = __this->get_keywordRecognizer_16();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_3 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_3, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_mD12167A17AFAEC8184E1D0ADFB0E40F91C4DFC0A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69(L_2, L_3, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_4 = __this->get_keywordRecognizer_16();
		NullCheck(L_4);
		PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A(L_4, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_16((KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Dispose_m7FA6E608C9266BD3F12C956A46F644BA6332BDCF (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * G_B3_0 = NULL;
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// keywordRecognizer?.Dispose();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_2 = __this->get_keywordRecognizer_16();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A(G_B3_0, /*hidden argument*/NULL);
	}

IL_0019:
	{
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_mD12167A17AFAEC8184E1D0ADFB0E40F91C4DFC0A (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.text);
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_2 = ___args0;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_4 = ___args0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_6 = ___args0;
		String_t* L_7 = L_6.get_text_2();
		WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_OnPhraseRecognized_m1E36E0CBA4C4A2C0939ED13D29313D9C66122F3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
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
	SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	int32_t G_B11_1 = 0;
	{
		// using (OnPhraseRecognizedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var))->get_OnPhraseRecognizedPerfMarker_18();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			RuntimeObject* L_2 = BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m237EF4D80CF62A3F2D6C3FD40FEF4C6C9B5504A7_RuntimeMethod_var);
			V_2 = L_2;
			// for (int i = 0; i < Commands?.Length; i++)
			V_3 = 0;
			goto IL_0063;
		}

IL_001b:
		{
			// if (Commands[i].LocalizedKeyword == text)
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_3 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			int32_t L_4 = V_3;
			NullCheck(L_3);
			String_t* L_5 = SpeechCommands_get_LocalizedKeyword_m23D2BA08EFD47A734B6E5516C5460DA02A7D4767((SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), /*hidden argument*/NULL);
			String_t* L_6 = ___text3;
			bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
			V_4 = L_7;
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_003a:
		{
			// inputSystem?.RaiseSpeechCommandRecognized(InputSource, (RecognitionConfidenceLevel)confidence, phraseDuration, phraseStartTime, Commands[i]);
			RuntimeObject* L_9 = V_2;
			if (L_9)
			{
				goto IL_0040;
			}
		}

IL_003e:
		{
			goto IL_005c;
		}

IL_0040:
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = __this->get_InputSource_14();
			int32_t L_12 = ___confidence0;
			TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_13 = ___phraseDuration1;
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_14 = ___phraseStartTime2;
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_15 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			int32_t L_16 = V_3;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(L_10);
			InterfaceActionInvoker5< RuntimeObject*, int32_t, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7  >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,Microsoft.MixedReality.Toolkit.Input.SpeechCommands) */, IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13, L_14, L_18);
		}

IL_005c:
		{
			// break;
			goto IL_009a;
		}

IL_005e:
		{
			// for (int i = 0; i < Commands?.Length; i++)
			int32_t L_19 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		}

IL_0063:
		{
			// for (int i = 0; i < Commands?.Length; i++)
			int32_t L_20 = V_3;
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_21 = WindowsSpeechInputProvider_get_Commands_m95800E4D2FB379182CD554C0273075F5438DFEDF(__this, /*hidden argument*/NULL);
			SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_22 = L_21;
			G_B9_0 = L_22;
			G_B9_1 = L_20;
			if (L_22)
			{
				G_B10_0 = L_22;
				G_B10_1 = L_20;
				goto IL_007a;
			}
		}

IL_006d:
		{
			il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_23 = V_7;
			G_B11_0 = L_23;
			G_B11_1 = G_B9_1;
			goto IL_0081;
		}

IL_007a:
		{
			NullCheck(G_B10_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_24;
			memset((&L_24), 0, sizeof(L_24));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_24), (((int32_t)((int32_t)(((RuntimeArray*)G_B10_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B11_0 = L_24;
			G_B11_1 = G_B10_1;
		}

IL_0081:
		{
			V_6 = G_B11_0;
			int32_t L_25 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_26 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			V_5 = (bool)((int32_t)((int32_t)((((int32_t)G_B11_1) < ((int32_t)L_25))? 1 : 0)&(int32_t)L_26));
			bool L_27 = V_5;
			if (L_27)
			{
				goto IL_001b;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__cctor_m476713715B0FE640769BA46C68049C67C33632C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider__cctor_m476713715B0FE640769BA46C68049C67C33632C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteralAC4EEBD42C476BB8C2FC104DB2EC3E14B9ABC361, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_17(L_0);
		// private static readonly ProfilerMarker OnPhraseRecognizedPerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.OnPhraseRecognized");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral06BD102DA84401C1495DEC46CC8EBC9725E8FC16, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222_il2cpp_TypeInfo_var))->set_OnPhraseRecognizedPerfMarker_18(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m48DA33EFD4B20196542111073A80265629B72A29_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method)
{
	{
		// public AutoStartBehavior SpeechRecognizerStartBehavior => startBehavior;
		int32_t L_0 = __this->get_startBehavior_5();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m75EA88BDDF98E5F37395E89975BB0EF3E3716A7E_inline (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_14();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m471EEE28469E8D20DBFAFFF1840719277C1FAA24_inline (WindowsDictationInputProvider_t3DC7D13AC9C00EF945DB18114185B1DD746AA6CA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mE41F526B42F210BFAEE1FB7B289B92E59BEC0B2A_inline (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* MixedRealitySpeechCommandsProfile_get_SpeechCommands_mBFBEF18A05460FF616273D4BC61A5CFECACD34B6_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands[] SpeechCommands => speechCommands;
		SpeechCommandsU5BU5D_tE06E8919C7B5CC56B5A242F96C95B06C89254CAB* L_0 = __this->get_speechCommands_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_mFD4A90281DCF87C00D29C8F47F7C88021E66840C_inline (MixedRealitySpeechCommandsProfile_tF5CF385ADB4430B7167096F6234844B9F35CA25B * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel SpeechRecognitionConfidenceLevel => recognitionConfidenceLevel;
		int32_t L_0 = __this->get_recognitionConfidenceLevel_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mBCF3F5EA2A0309C0A2488920E7A25528CF06981E_inline (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m20F738492D5C6A145EF0B80D836CFA4E96593178_inline (WindowsSpeechInputProvider_t0F318016DAB24DDE10CEC4E9329A5268EF463222 * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_mC48892B8A7C5BF42809AA7948DB9DF4C0DF4A35C_inline (SpeechCommands_tE961AB304147A56B09655E7BFC563B1B24173AD7 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode KeyCode => keyCode;
		int32_t L_0 = __this->get_keyCode_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m3F9D12EB2C721B6D4C341F12C9AF4DC3A0B99EE5_gshared_inline (BaseDataProvider_1_t248C8F35227643CB9016FC77BD445E132FD81B05 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_5(L_0);
		return;
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
