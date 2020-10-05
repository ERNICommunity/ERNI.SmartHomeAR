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

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tCDDDA610C55C5FF21BEB1203DBEA8052DAC61939;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2898F47DA9C854A4CCA74054354C58B3EF9E90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B88EF10801997FB9BC916F3A54B2909D6CDD203;
IL2CPP_EXTERN_C String_t* _stringLiteral7F150DB49BE5211DEE33ED681B35512189789774;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D298A77CBCBBF423FF029039310D1DC19D8583;
IL2CPP_EXTERN_C String_t* _stringLiteralD098A68B379F7A373020990B860A646E1431CFE4;
IL2CPP_EXTERN_C String_t* _stringLiteralE81FB5C253068009561B6E452887770A732107A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_m0B726F8F700DBE795850CDBB1178B89275D581D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LostTrackingService_OnPositionalLocatorStateChanged_m2C44C6E82E32B963D8B7950CD7ED7F8E07953B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_ResetVisual_m56FE47BC2327CB57120BA971C472EB3B2C9BCE34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_SetLayer_mBDF7E6EC473EA7E79D6BDEE82ADD759A25DB0A92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_Update_m75599C450ADB2E8D19CB01B97ABCEB8B90452A64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_DisableTrackingLostVisual_m2E56006900B567FD30BACA7ADA93642A2041B614_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_EnableTrackingLostVisual_m5EECBA41679574E3CAE73185C86EA4DC20B676D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_Initialize_m2DACA50E1F2ED937D64060C52988967B9BCF18F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_OnPositionalLocatorStateChanged_m2C44C6E82E32B963D8B7950CD7ED7F8E07953B54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__cctor_m5062E870505FD23634A5A8763FB5BD73F3C0DFC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__ctor_m9132870EC6FF5F987725BAEF23F27CB9BED2A961_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4A032D0018BB3DD903BA6AFEBD3A187B34D482CF 
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

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct  BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
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


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
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

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct  LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8  : public BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_6;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COnTrackingLostU3Ek__BackingField_7;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COnTrackingRestoredU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * ___profile_9;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_11;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_12;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___U3CTrackingLostU3Ek__BackingField_6)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_6() const { return ___U3CTrackingLostU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_6() { return &___U3CTrackingLostU3Ek__BackingField_6; }
	inline void set_U3CTrackingLostU3Ek__BackingField_6(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___U3COnTrackingLostU3Ek__BackingField_7)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COnTrackingLostU3Ek__BackingField_7() const { return ___U3COnTrackingLostU3Ek__BackingField_7; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_7() { return &___U3COnTrackingLostU3Ek__BackingField_7; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_7(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___U3COnTrackingRestoredU3Ek__BackingField_8)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COnTrackingRestoredU3Ek__BackingField_8() const { return ___U3COnTrackingRestoredU3Ek__BackingField_8; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_8() { return &___U3COnTrackingRestoredU3Ek__BackingField_8; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_8(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_profile_9() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___profile_9)); }
	inline LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * get_profile_9() const { return ___profile_9; }
	inline LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 ** get_address_of_profile_9() { return &___profile_9; }
	inline void set_profile_9(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * value)
	{
		___profile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_9), (void*)value);
	}

	inline static int32_t get_offset_of_visual_10() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___visual_10)); }
	inline RuntimeObject* get_visual_10() const { return ___visual_10; }
	inline RuntimeObject** get_address_of_visual_10() { return &___visual_10; }
	inline void set_visual_10(RuntimeObject* value)
	{
		___visual_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_10), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_11() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___cullingMaskOnTrackingLost_11)); }
	inline int32_t get_cullingMaskOnTrackingLost_11() const { return ___cullingMaskOnTrackingLost_11; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_11() { return &___cullingMaskOnTrackingLost_11; }
	inline void set_cullingMaskOnTrackingLost_11(int32_t value)
	{
		___cullingMaskOnTrackingLost_11 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_12() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8, ___timeScaleOnTrackingLost_12)); }
	inline float get_timeScaleOnTrackingLost_12() const { return ___timeScaleOnTrackingLost_12; }
	inline float* get_address_of_timeScaleOnTrackingLost_12() { return &___timeScaleOnTrackingLost_12; }
	inline void set_timeScaleOnTrackingLost_12(float value)
	{
		___timeScaleOnTrackingLost_12 = value;
	}
};

struct LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DisableTrackingLostVisualPerfMarker_13;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___EnableTrackingLostVisualPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SetTrackingLostPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::OnPositionLocatorStateChangedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPositionLocatorStateChangedPerfMarker_16;

public:
	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_13() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields, ___DisableTrackingLostVisualPerfMarker_13)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DisableTrackingLostVisualPerfMarker_13() const { return ___DisableTrackingLostVisualPerfMarker_13; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DisableTrackingLostVisualPerfMarker_13() { return &___DisableTrackingLostVisualPerfMarker_13; }
	inline void set_DisableTrackingLostVisualPerfMarker_13(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DisableTrackingLostVisualPerfMarker_13 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_14() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields, ___EnableTrackingLostVisualPerfMarker_14)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_EnableTrackingLostVisualPerfMarker_14() const { return ___EnableTrackingLostVisualPerfMarker_14; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_EnableTrackingLostVisualPerfMarker_14() { return &___EnableTrackingLostVisualPerfMarker_14; }
	inline void set_EnableTrackingLostVisualPerfMarker_14(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___EnableTrackingLostVisualPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_15() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields, ___SetTrackingLostPerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SetTrackingLostPerfMarker_15() const { return ___SetTrackingLostPerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SetTrackingLostPerfMarker_15() { return &___SetTrackingLostPerfMarker_15; }
	inline void set_SetTrackingLostPerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SetTrackingLostPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_OnPositionLocatorStateChangedPerfMarker_16() { return static_cast<int32_t>(offsetof(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields, ___OnPositionLocatorStateChangedPerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPositionLocatorStateChangedPerfMarker_16() const { return ___OnPositionLocatorStateChangedPerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPositionLocatorStateChangedPerfMarker_16() { return &___OnPositionLocatorStateChangedPerfMarker_16; }
	inline void set_OnPositionLocatorStateChangedPerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPositionLocatorStateChangedPerfMarker_16 = value;
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
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


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct  LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingLostVisualPrefab_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualLayer
	int32_t ___trackingLostVisualLayer_6;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostCullingMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___trackingLostCullingMask_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltTimeWhileTrackingLost
	bool ___haltTimeWhileTrackingLost_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltAudioWhileTrackingLost
	bool ___haltAudioWhileTrackingLost_9;

public:
	inline static int32_t get_offset_of_trackingLostVisualPrefab_5() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48, ___trackingLostVisualPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingLostVisualPrefab_5() const { return ___trackingLostVisualPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingLostVisualPrefab_5() { return &___trackingLostVisualPrefab_5; }
	inline void set_trackingLostVisualPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingLostVisualPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingLostVisualPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackingLostVisualLayer_6() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48, ___trackingLostVisualLayer_6)); }
	inline int32_t get_trackingLostVisualLayer_6() const { return ___trackingLostVisualLayer_6; }
	inline int32_t* get_address_of_trackingLostVisualLayer_6() { return &___trackingLostVisualLayer_6; }
	inline void set_trackingLostVisualLayer_6(int32_t value)
	{
		___trackingLostVisualLayer_6 = value;
	}

	inline static int32_t get_offset_of_trackingLostCullingMask_7() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48, ___trackingLostCullingMask_7)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_trackingLostCullingMask_7() const { return ___trackingLostCullingMask_7; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_trackingLostCullingMask_7() { return &___trackingLostCullingMask_7; }
	inline void set_trackingLostCullingMask_7(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___trackingLostCullingMask_7 = value;
	}

	inline static int32_t get_offset_of_haltTimeWhileTrackingLost_8() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48, ___haltTimeWhileTrackingLost_8)); }
	inline bool get_haltTimeWhileTrackingLost_8() const { return ___haltTimeWhileTrackingLost_8; }
	inline bool* get_address_of_haltTimeWhileTrackingLost_8() { return &___haltTimeWhileTrackingLost_8; }
	inline void set_haltTimeWhileTrackingLost_8(bool value)
	{
		___haltTimeWhileTrackingLost_8 = value;
	}

	inline static int32_t get_offset_of_haltAudioWhileTrackingLost_9() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48, ___haltAudioWhileTrackingLost_9)); }
	inline bool get_haltAudioWhileTrackingLost_9() const { return ___haltAudioWhileTrackingLost_9; }
	inline bool* get_address_of_haltAudioWhileTrackingLost_9() { return &___haltAudioWhileTrackingLost_9; }
	inline void set_haltAudioWhileTrackingLost_9(bool value)
	{
		___haltAudioWhileTrackingLost_9 = value;
	}
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
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


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct  BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::gridRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___gridRenderer_4;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::loopClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___loopClip_5;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_6;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseTimer
	float ___pulseTimer_7;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseDuration
	float ___pulseDuration_8;

public:
	inline static int32_t get_offset_of_gridRenderer_4() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF, ___gridRenderer_4)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_gridRenderer_4() const { return ___gridRenderer_4; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_gridRenderer_4() { return &___gridRenderer_4; }
	inline void set_gridRenderer_4(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___gridRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopClip_5() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF, ___loopClip_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_loopClip_5() const { return ___loopClip_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_loopClip_5() { return &___loopClip_5; }
	inline void set_loopClip_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___loopClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF, ___audioSource_6)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_pulseTimer_7() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF, ___pulseTimer_7)); }
	inline float get_pulseTimer_7() const { return ___pulseTimer_7; }
	inline float* get_address_of_pulseTimer_7() { return &___pulseTimer_7; }
	inline void set_pulseTimer_7(float value)
	{
		___pulseTimer_7 = value;
	}

	inline static int32_t get_offset_of_pulseDuration_8() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF, ___pulseDuration_8)); }
	inline float get_pulseDuration_8() const { return ___pulseDuration_8; }
	inline float* get_address_of_pulseDuration_8() { return &___pulseDuration_8; }
	inline void set_pulseDuration_8(float value)
	{
		___pulseDuration_8 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m9132870EC6FF5F987725BAEF23F27CB9BED2A961 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mABF9C44DE80B4B4F763A1CA5285632225AA97438_inline (BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m79914ADC7E6257A819937FD57176081CFBBC83F7 (BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager::add_OnPositionalLocatorStateChanged(UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManager_add_OnPositionalLocatorStateChanged_m2C5CBEE910A53ED9AAD26AA82DCA0D1B0EFA632D (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * ___value0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6 (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_mF21B27914B50E855CA15C6555EB49DB90F5E4BB0_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m7F4F453194B444F9BD1D7D36A22283C98E51E04C_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0 (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_mD08FCDCD72FB6C24085A4F6D28466B04EA103958_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_m0B726F8F700DBE795850CDBB1178B89275D581D7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m0992E96D87A4221E38746EBD882780CEFF7C2BCD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8 (const RuntimeMethod* method);
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_m293A9060420C1F3447F5354357F2ED4CB3AF57A5_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m834925455F01EC20A23E258BF8B017A00555C8D9_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m0BA15E281B59620A7214613376D47552FF10B991_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m61D622A14DA7342E1285BD5D89D96CB8DDD69286_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_mA6B34796D1DB341DF9D680C15C4C1367881C7841_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_m5EECBA41679574E3CAE73185C86EA4DC20B676D4 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m8541DC3FDB2CD907BE383C7EF85B03B30F0CCE2E_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m2E56006900B567FD30BACA7ADA93642A2041B614 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, bool ___trackingLost0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m682288E860BBE36F5668DCDBC59245DE6319E537 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_m56653944C7760E9D456E6B9E68F85CAA5B24A042 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF8313CFF441FEBAA9EEBE1B4D2B229306EB9CE37 (BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * __this, const RuntimeMethod* method);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasicLostTrackingVisual_get_Enabled_mB036F324435087B19844684260DCD7622CF5CA6E (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return gameObject.activeSelf; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return gameObject.activeSelf; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_set_Enabled_mC50B9AE888B3CA01D0926597F1A89AC4E5328888 (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { gameObject.SetActive(value); }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, L_1, /*hidden argument*/NULL);
		// set { gameObject.SetActive(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::ResetVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_ResetVisual_m56FE47BC2327CB57120BA971C472EB3B2C9BCE34 (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_ResetVisual_m56FE47BC2327CB57120BA971C472EB3B2C9BCE34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (audioSource != null && loopClip != null)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_audioSource_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = __this->get_loopClip_5();
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
			goto IL_004f;
		}
	}
	{
		// audioSource.clip = loopClip;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_audioSource_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_6 = __this->get_loopClip_5();
		NullCheck(L_5);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_5, L_6, /*hidden argument*/NULL);
		// audioSource.loop = true;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_audioSource_6();
		NullCheck(L_7);
		AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4(L_7, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_8 = __this->get_audioSource_6();
		NullCheck(L_8);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// pulseTimer = 0.0f;
		__this->set_pulseTimer_7((0.0f));
		// if (gridRenderer != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_9 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", 0.0f);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_12 = __this->get_gridRenderer_4();
		NullCheck(L_12);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_13, _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A, (0.0f), /*hidden argument*/NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::SetLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_SetLayer_mBDF7E6EC473EA7E79D6BDEE82ADD759A25DB0A92 (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_SetLayer_mBDF7E6EC473EA7E79D6BDEE82ADD759A25DB0A92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_1 = Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0029;
	}

IL_0012:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// child.gameObject.layer = layer;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_2;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___layer0;
		NullCheck(L_7);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0029:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		int32_t L_10 = V_1;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_Update_m75599C450ADB2E8D19CB01B97ABCEB8B90452A64 (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_Update_m75599C450ADB2E8D19CB01B97ABCEB8B90452A64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	{
		// pulseTimer += Time.unscaledDeltaTime;
		float L_0 = __this->get_pulseTimer_7();
		float L_1 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		__this->set_pulseTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// float normalizedPulseValue = Mathf.Clamp01(pulseTimer / pulseDuration);
		float L_2 = __this->get_pulseTimer_7();
		float L_3 = __this->get_pulseDuration_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		// if (pulseTimer >= pulseDuration)
		float L_5 = __this->get_pulseTimer_7();
		float L_6 = __this->get_pulseDuration_8();
		V_1 = (bool)((((int32_t)((!(((float)L_5) >= ((float)L_6)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// pulseTimer = 0;
		__this->set_pulseTimer_7((0.0f));
	}

IL_0048:
	{
		// if (gridRenderer != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_009c;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", normalizedPulseValue);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_11 = __this->get_gridRenderer_4();
		NullCheck(L_11);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_12 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		NullCheck(L_12);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_12, _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A, L_13, /*hidden argument*/NULL);
		// gridRenderer.material.SetVector("_Pulse_Origin_", gridRenderer.transform.position);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_14 = __this->get_gridRenderer_4();
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_14, /*hidden argument*/NULL);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_16 = __this->get_gridRenderer_4();
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_19 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_15, _stringLiteralA3D298A77CBCBBF423FF029039310D1DC19D8583, L_19, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual__ctor_m8949E9DF7F62E16C382ADE21B5BC0A8E4E3F098F (BasicLostTrackingVisual_t9105678A5A8D20F5CF67801BA2A882CEC22F55CF * __this, const RuntimeMethod* method)
{
	{
		// private MeshRenderer gridRenderer = null;
		__this->set_gridRenderer_4((MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED *)NULL);
		// private AudioClip loopClip = null;
		__this->set_loopClip_5((AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// private AudioSource audioSource = null;
		__this->set_audioSource_6((AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *)NULL);
		// private float pulseTimer = 0.0f;
		__this->set_pulseTimer_7((0.0f));
		// private float pulseDuration = 2.0f;
		__this->set_pulseDuration_8((2.0f));
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m0BA15E281B59620A7214613376D47552FF10B991 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m61D622A14DA7342E1285BD5D89D96CB8DDD69286 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_mA6B34796D1DB341DF9D680C15C4C1367881C7841 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingLost_m48C69C86CF7FC255AEC90A1ABC9520B1A18AB001 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___value0;
		__this->set_U3COnTrackingLostU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m8541DC3FDB2CD907BE383C7EF85B03B30F0CCE2E (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingRestored(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingRestored_mAAA13DAC805D04636601BE30BD58417E9ED56638 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___value0;
		__this->set_U3COnTrackingRestoredU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m223FB0262615A56AC3BFAFD696600C766FA7AB78 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_2 = ___profile3;
		LostTrackingService__ctor_m9132870EC6FF5F987725BAEF23F27CB9BED2A961(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_mABF9C44DE80B4B4F763A1CA5285632225AA97438_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m9132870EC6FF5F987725BAEF23F27CB9BED2A961 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__ctor_m9132870EC6FF5F987725BAEF23F27CB9BED2A961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TrackingLost { get; private set; } = false;
		__this->set_U3CTrackingLostU3Ek__BackingField_6((bool)0);
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_0 = ___name0;
		uint32_t L_1 = ___priority1;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_2 = ___profile2;
		BaseExtensionService__ctor_m79914ADC7E6257A819937FD57176081CFBBC83F7(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.profile = profile as LostTrackingServiceProfile;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_3 = ___profile2;
		__this->set_profile_9(((LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 *)IsInstClass((RuntimeObject*)L_3, LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Initialize_m2DACA50E1F2ED937D64060C52988967B9BCF18F4 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_Initialize_m2DACA50E1F2ED937D64060C52988967B9BCF18F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WorldManager.OnPositionalLocatorStateChanged += OnPositionalLocatorStateChanged;
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_0 = (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B *)il2cpp_codegen_object_new(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B_il2cpp_TypeInfo_var);
		OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2(L_0, __this, (intptr_t)((intptr_t)LostTrackingService_OnPositionalLocatorStateChanged_m2C44C6E82E32B963D8B7950CD7ED7F8E07953B54_RuntimeMethod_var), /*hidden argument*/NULL);
		WorldManager_add_OnPositionalLocatorStateChanged_m2C5CBEE910A53ED9AAD26AA82DCA0D1B0EFA632D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m2E56006900B567FD30BACA7ADA93642A2041B614 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_DisableTrackingLostVisual_m2E56006900B567FD30BACA7ADA93642A2041B614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		// using (DisableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->get_DisableTrackingLostVisualPerfMarker_13();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (visual != null && visual.Enabled)
			RuntimeObject* L_2 = __this->get_visual_10();
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_0018:
		{
			RuntimeObject* L_3 = __this->get_visual_10();
			NullCheck(L_3);
			bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_3);
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
				goto IL_0081;
			}
		}

IL_002a:
		{
			// CameraCache.Main.cullingMask = cullingMaskOnTrackingLost;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
			int32_t L_7 = __this->get_cullingMaskOnTrackingLost_11();
			NullCheck(L_6);
			Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD(L_6, L_7, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_8 = __this->get_profile_9();
			NullCheck(L_8);
			bool L_9 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_mF21B27914B50E855CA15C6555EB49DB90F5E4BB0_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0059;
			}
		}

IL_004b:
		{
			// Time.timeScale = timeScaleOnTrackingLost;
			float L_11 = __this->get_timeScaleOnTrackingLost_12();
			Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(L_11, /*hidden argument*/NULL);
		}

IL_0059:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_12 = __this->get_profile_9();
			NullCheck(L_12);
			bool L_13 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m7F4F453194B444F9BD1D7D36A22283C98E51E04C_inline(L_12, /*hidden argument*/NULL);
			V_4 = L_13;
			bool L_14 = V_4;
			if (!L_14)
			{
				goto IL_0073;
			}
		}

IL_006a:
		{
			// AudioListener.pause = false;
			AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0((bool)0, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// visual.Enabled = false;
			RuntimeObject* L_15 = __this->get_visual_10();
			NullCheck(L_15);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_15, (bool)0);
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_m5EECBA41679574E3CAE73185C86EA4DC20B676D4 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_EnableTrackingLostVisual_m5EECBA41679574E3CAE73185C86EA4DC20B676D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (EnableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->get_EnableTrackingLostVisualPerfMarker_14();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (visual == null)
			RuntimeObject* L_2 = __this->get_visual_10();
			V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0078;
			}
		}

IL_001d:
		{
			// GameObject visualObject = UnityEngine.Object.Instantiate(profile.TrackingLostVisualPrefab);
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_4 = __this->get_profile_9();
			NullCheck(L_4);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = LostTrackingServiceProfile_get_TrackingLostVisualPrefab_mD08FCDCD72FB6C24085A4F6D28466B04EA103958_inline(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
			V_3 = L_6;
			// if (visualObject != null)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_3;
			bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_4 = L_8;
			bool L_9 = V_4;
			if (!L_9)
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			// visual = visualObject.GetComponentInChildren<ILostTrackingVisual>();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_3;
			NullCheck(L_10);
			RuntimeObject* L_11 = GameObject_GetComponentInChildren_TisILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_m0B726F8F700DBE795850CDBB1178B89275D581D7(L_10, /*hidden argument*/GameObject_GetComponentInChildren_TisILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_m0B726F8F700DBE795850CDBB1178B89275D581D7_RuntimeMethod_var);
			__this->set_visual_10(L_11);
		}

IL_004a:
		{
			// if (visual == null)
			RuntimeObject* L_12 = __this->get_visual_10();
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_006a;
			}
		}

IL_0059:
		{
			// Debug.LogError("No ILostTrackingVisual found on prefab supplied by LostTrackingServiceProfile.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralD098A68B379F7A373020990B860A646E1431CFE4, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x141, FINALLY_0132);
		}

IL_006a:
		{
			// visual.Enabled = false;
			RuntimeObject* L_14 = __this->get_visual_10();
			NullCheck(L_14);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_14, (bool)0);
		}

IL_0078:
		{
			// if (!visual.Enabled)
			RuntimeObject* L_15 = __this->get_visual_10();
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_15);
			V_6 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
			bool L_17 = V_6;
			if (!L_17)
			{
				goto IL_012f;
			}
		}

IL_008f:
		{
			// cullingMaskOnTrackingLost = CameraCache.Main.cullingMask;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
			NullCheck(L_18);
			int32_t L_19 = Camera_get_cullingMask_m0992E96D87A4221E38746EBD882780CEFF7C2BCD(L_18, /*hidden argument*/NULL);
			__this->set_cullingMaskOnTrackingLost_11(L_19);
			// timeScaleOnTrackingLost = Time.timeScale;
			float L_20 = Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8(/*hidden argument*/NULL);
			__this->set_timeScaleOnTrackingLost_12(L_20);
			// CameraCache.Main.cullingMask = profile.TrackingLostCullingMask;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_21 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_22 = __this->get_profile_9();
			NullCheck(L_22);
			LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_23 = LostTrackingServiceProfile_get_TrackingLostCullingMask_m293A9060420C1F3447F5354357F2ED4CB3AF57A5_inline(L_22, /*hidden argument*/NULL);
			int32_t L_24 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_23, /*hidden argument*/NULL);
			NullCheck(L_21);
			Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD(L_21, L_24, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_25 = __this->get_profile_9();
			NullCheck(L_25);
			bool L_26 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_mF21B27914B50E855CA15C6555EB49DB90F5E4BB0_inline(L_25, /*hidden argument*/NULL);
			V_7 = L_26;
			bool L_27 = V_7;
			if (!L_27)
			{
				goto IL_00e4;
			}
		}

IL_00d7:
		{
			// Time.timeScale = 0.0f;
			Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		}

IL_00e4:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_28 = __this->get_profile_9();
			NullCheck(L_28);
			bool L_29 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m7F4F453194B444F9BD1D7D36A22283C98E51E04C_inline(L_28, /*hidden argument*/NULL);
			V_8 = L_29;
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_00fe;
			}
		}

IL_00f5:
		{
			// AudioListener.pause = true;
			AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0((bool)1, /*hidden argument*/NULL);
		}

IL_00fe:
		{
			// visual.Enabled = true;
			RuntimeObject* L_31 = __this->get_visual_10();
			NullCheck(L_31);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_31, (bool)1);
			// visual.SetLayer(profile.TrackingLostVisualLayer);
			RuntimeObject* L_32 = __this->get_visual_10();
			LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * L_33 = __this->get_profile_9();
			NullCheck(L_33);
			int32_t L_34 = LostTrackingServiceProfile_get_TrackingLostVisualLayer_m834925455F01EC20A23E258BF8B017A00555C8D9_inline(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::SetLayer(System.Int32) */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_32, L_34);
			// visual.ResetVisual();
			RuntimeObject* L_35 = __this->get_visual_10();
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::ResetVisual() */, ILostTrackingVisual_t97391BA7D459B5C7472552DA3CF514F8FA542D3F_il2cpp_TypeInfo_var, L_35);
		}

IL_012f:
		{
			IL2CPP_LEAVE(0x141, FINALLY_0132);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0132;
	}

FINALLY_0132:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(306)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(306)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, bool ___trackingLost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B5_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B4_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B9_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B8_0 = NULL;
	{
		// using (SetTrackingLostPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->get_SetTrackingLostPerfMarker_15();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (TrackingLost != trackingLost)
			bool L_2 = LostTrackingService_get_TrackingLost_m0BA15E281B59620A7214613376D47552FF10B991_inline(__this, /*hidden argument*/NULL);
			bool L_3 = ___trackingLost0;
			V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_006c;
			}
		}

IL_0020:
		{
			// TrackingLost = trackingLost;
			bool L_5 = ___trackingLost0;
			LostTrackingService_set_TrackingLost_m61D622A14DA7342E1285BD5D89D96CB8DDD69286_inline(__this, L_5, /*hidden argument*/NULL);
			// if (TrackingLost)
			bool L_6 = LostTrackingService_get_TrackingLost_m0BA15E281B59620A7214613376D47552FF10B991_inline(__this, /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0050;
			}
		}

IL_0033:
		{
			// OnTrackingLost?.Invoke();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = LostTrackingService_get_OnTrackingLost_mA6B34796D1DB341DF9D680C15C4C1367881C7841_inline(__this, /*hidden argument*/NULL);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0040;
			}
		}

IL_003d:
		{
			goto IL_0046;
		}

IL_0040:
		{
			NullCheck(G_B5_0);
			Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B5_0, /*hidden argument*/NULL);
		}

IL_0046:
		{
			// EnableTrackingLostVisual();
			LostTrackingService_EnableTrackingLostVisual_m5EECBA41679574E3CAE73185C86EA4DC20B676D4(__this, /*hidden argument*/NULL);
			goto IL_006b;
		}

IL_0050:
		{
			// OnTrackingRestored?.Invoke();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = LostTrackingService_get_OnTrackingRestored_m8541DC3FDB2CD907BE383C7EF85B03B30F0CCE2E_inline(__this, /*hidden argument*/NULL);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_11 = L_10;
			G_B8_0 = L_11;
			if (L_11)
			{
				G_B9_0 = L_11;
				goto IL_005d;
			}
		}

IL_005a:
		{
			goto IL_0063;
		}

IL_005d:
		{
			NullCheck(G_B9_0);
			Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B9_0, /*hidden argument*/NULL);
		}

IL_0063:
		{
			// DisableTrackingLostVisual();
			LostTrackingService_DisableTrackingLostVisual_m2E56006900B567FD30BACA7ADA93642A2041B614(__this, /*hidden argument*/NULL);
		}

IL_006b:
		{
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::OnPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_OnPositionalLocatorStateChanged_m2C44C6E82E32B963D8B7950CD7ED7F8E07953B54 (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_OnPositionalLocatorStateChanged_m2C44C6E82E32B963D8B7950CD7ED7F8E07953B54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (OnPositionLocatorStateChangedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->get_OnPositionLocatorStateChangedPerfMarker_16();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// switch (newState)
			int32_t L_2 = ___newState1;
			V_2 = L_2;
			int32_t L_3 = V_2;
			if ((((int32_t)L_3) == ((int32_t)4)))
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			goto IL_0022;
		}

IL_0018:
		{
			// SetTrackingLost(true);
			LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9(__this, (bool)1, /*hidden argument*/NULL);
			// break;
			goto IL_002c;
		}

IL_0022:
		{
			// SetTrackingLost(false);
			LostTrackingService_SetTrackingLost_m9E822FE1AE6C1B15D9C62BE41FFE519FC0ECDEF9(__this, (bool)0, /*hidden argument*/NULL);
			// break;
			goto IL_002c;
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__cctor_m5062E870505FD23634A5A8763FB5BD73F3C0DFC8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__cctor_m5062E870505FD23634A5A8763FB5BD73F3C0DFC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker DisableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.DisableTrackingLostVisual");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral2898F47DA9C854A4CCA74054354C58B3EF9E90F7, /*hidden argument*/NULL);
		((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->set_DisableTrackingLostVisualPerfMarker_13(L_0);
		// private static readonly ProfilerMarker EnableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.EnableTrackingLostVisual");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral7B88EF10801997FB9BC916F3A54B2909D6CDD203, /*hidden argument*/NULL);
		((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->set_EnableTrackingLostVisualPerfMarker_14(L_1);
		// private static readonly ProfilerMarker SetTrackingLostPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.SetTrackingLost");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralE81FB5C253068009561B6E452887770A732107A2, /*hidden argument*/NULL);
		((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->set_SetTrackingLostPerfMarker_15(L_2);
		// private static readonly ProfilerMarker OnPositionLocatorStateChangedPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.OnPositionalLocatorStateChanged");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7F150DB49BE5211DEE33ED681B35512189789774, /*hidden argument*/NULL);
		((LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8_il2cpp_TypeInfo_var))->set_OnPositionLocatorStateChangedPerfMarker_16(L_3);
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_mD08FCDCD72FB6C24085A4F6D28466B04EA103958 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m834925455F01EC20A23E258BF8B017A00555C8D9 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_m293A9060420C1F3447F5354357F2ED4CB3AF57A5 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_mF21B27914B50E855CA15C6555EB49DB90F5E4BB0 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m7F4F453194B444F9BD1D7D36A22283C98E51E04C (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile_OnValidate_m208FAF3E5073CD9900F1714E61CEA2971AA02DA6 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// trackingLostCullingMask.value |= 1 << trackingLostVisualLayer;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * L_0 = __this->get_address_of_trackingLostCullingMask_7();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * L_1 = L_0;
		int32_t L_2 = LayerMask_get_value_m682288E860BBE36F5668DCDBC59245DE6319E537((LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 *)L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_trackingLostVisualLayer_6();
		LayerMask_set_value_m56653944C7760E9D456E6B9E68F85CAA5B24A042((LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 *)L_1, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile__ctor_mBC6BEB89D952D292E6650AF5A40AD8793B71D059 (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// private GameObject trackingLostVisualPrefab = null;
		__this->set_trackingLostVisualPrefab_5((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private int trackingLostVisualLayer = 31;
		__this->set_trackingLostVisualLayer_6(((int32_t)31));
		// private LayerMask trackingLostCullingMask = new LayerMask();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * L_0 = __this->get_address_of_trackingLostCullingMask_7();
		il2cpp_codegen_initobj(L_0, sizeof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 ));
		// private bool haltTimeWhileTrackingLost = true;
		__this->set_haltTimeWhileTrackingLost_8((bool)1);
		// private bool haltAudioWhileTrackingLost = true;
		__this->set_haltAudioWhileTrackingLost_9((bool)1);
		BaseMixedRealityProfile__ctor_mF8313CFF441FEBAA9EEBE1B4D2B229306EB9CE37(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mABF9C44DE80B4B4F763A1CA5285632225AA97438_inline (BaseExtensionService_tD8ADEB9F289CA5BAB8E2C959A917640FEE655526 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_5(L_0);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_mF21B27914B50E855CA15C6555EB49DB90F5E4BB0_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m7F4F453194B444F9BD1D7D36A22283C98E51E04C_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_mD08FCDCD72FB6C24085A4F6D28466B04EA103958_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_m293A9060420C1F3447F5354357F2ED4CB3AF57A5_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m834925455F01EC20A23E258BF8B017A00555C8D9_inline (LostTrackingServiceProfile_tCAB66FE182D3AB645A05494F27B751AAB8DF4B48 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m0BA15E281B59620A7214613376D47552FF10B991_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m61D622A14DA7342E1285BD5D89D96CB8DDD69286_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_mA6B34796D1DB341DF9D680C15C4C1367881C7841_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m8541DC3FDB2CD907BE383C7EF85B03B30F0CCE2E_inline (LostTrackingService_t820D87D6D79C2CB282F520EED42025FFD2E5B7C8 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_8();
		return L_0;
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
