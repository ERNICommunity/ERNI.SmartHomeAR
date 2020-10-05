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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tCDDDA610C55C5FF21BEB1203DBEA8052DAC61939;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tE7BC325D1F0C258289389E634657D21462CB4963;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t15602A0B845B92C24367013F5FE6C53B9EBC926C;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t3A04E16F22806C7DB0B7779023F0BC033A0986FA;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tEC7C6559D419A660E66401F0D380AA8B75EA9F74;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
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
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t32F12EE88220D4E8566B1CBB86E44E03F632FE53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDF5EBD016387969283398400025AA361533EC6D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_tB5C0F291C72BA46101010A6FE3A1E58943C8B994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tAF83D3E68C1B8F2ABF731862DB58B3951B8B1AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B;
IL2CPP_EXTERN_C String_t* _stringLiteralD47B37C1B233818E5C869621EE522D30507C5050;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mBD78922E37A3F7B12DC5C70E0929383DC3B13B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m6C87B030EBE2CD9EA9B9ED09B5699B3069A2BF05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mAA45B4ECEF5E1EF770787FA2CA1497EBD988EB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Destroy_mA56319673C646599294D366AE1D95647F2D8DC7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Disable_m004C9E68DC41A3DD32BF24BB3463B0CFB3B86D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Enable_mDC5DFF09DE965F14B290BC3F6E000310BB51C716_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Initialize_m40252C8DAF726C95BA8DF9DE0D3F2C6DE98A3780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mE66AA948CB25A036E7E328BB3B1F07307608F898_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Update_mC3A30B847F4EC15E95B8138C7C65A91F88B17B7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__cctor_mDD3C831A345A59E2C3084B795E9E1B47BCF87852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_m42C29FD0AC188622050BD25A8CD7973D42BB605D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A_MetadataUsageId;

struct MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t18964CAFAA8CE606972BC1906D82AF469E46CFF3 
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


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct  DisplayType_tB218F19A62B11B86FEEB92B68D8E6FC4267A990E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tB218F19A62B11B86FEEB92B68D8E6FC4267A990E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_t681E57155628F0ED7507887B1352DF2B2EC1B9FC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_t681E57155628F0ED7507887B1352DF2B2EC1B9FC, ___value___2)); }
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


// UnityEngine.CameraClearFlags
struct  CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
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

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18  : public BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tEC7C6559D419A660E66401F0D380AA8B75EA9F74 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t3A04E16F22806C7DB0B7779023F0BC033A0986FA * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tE7BC325D1F0C258289389E634657D21462CB4963 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___postponedActions_8)); }
	inline List_1_tEC7C6559D419A660E66401F0D380AA8B75EA9F74 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_tEC7C6559D419A660E66401F0D380AA8B75EA9F74 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_tEC7C6559D419A660E66401F0D380AA8B75EA9F74 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___postponedObjectActions_9)); }
	inline List_1_t3A04E16F22806C7DB0B7779023F0BC033A0986FA * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t3A04E16F22806C7DB0B7779023F0BC033A0986FA ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t3A04E16F22806C7DB0B7779023F0BC033A0986FA * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_tE7BC325D1F0C258289389E634657D21462CB4963 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_tE7BC325D1F0C258289389E634657D21462CB4963 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_tE7BC325D1F0C258289389E634657D21462CB4963 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct  MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA, ___componentType_0)); }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA_marshaled_pinvoke
{
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA_marshaled_com
{
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * ___settingsProfile_4;
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011  : public BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_13), (void*)value);
	}
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


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535  : public BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t15602A0B845B92C24367013F5FE6C53B9EBC926C * ___dataProviders_14;

public:
	inline static int32_t get_offset_of_dataProviders_14() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535, ___dataProviders_14)); }
	inline List_1_t15602A0B845B92C24367013F5FE6C53B9EBC926C * get_dataProviders_14() const { return ___dataProviders_14; }
	inline List_1_t15602A0B845B92C24367013F5FE6C53B9EBC926C ** get_address_of_dataProviders_14() { return &___dataProviders_14; }
	inline void set_dataProviders_14(List_1_t15602A0B845B92C24367013F5FE6C53B9EBC926C * value)
	{
		___dataProviders_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_14), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535_StaticFields, ___LateUpdatePerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_16() const { return ___LateUpdatePerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_16() { return &___LateUpdatePerfMarker_16; }
	inline void set_LateUpdatePerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct  MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6  : public BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45
{
public:
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;

public:
	inline static int32_t get_offset_of_settingsConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___settingsConfigurations_5)); }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* get_settingsConfigurations_5() const { return ___settingsConfigurations_5; }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2** get_address_of_settingsConfigurations_5() { return &___settingsConfigurations_5; }
	inline void set_settingsConfigurations_5(MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* value)
	{
		___settingsConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_nearClipPlaneOpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___nearClipPlaneOpaqueDisplay_6)); }
	inline float get_nearClipPlaneOpaqueDisplay_6() const { return ___nearClipPlaneOpaqueDisplay_6; }
	inline float* get_address_of_nearClipPlaneOpaqueDisplay_6() { return &___nearClipPlaneOpaqueDisplay_6; }
	inline void set_nearClipPlaneOpaqueDisplay_6(float value)
	{
		___nearClipPlaneOpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneOpaqueDisplay_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___farClipPlaneOpaqueDisplay_7)); }
	inline float get_farClipPlaneOpaqueDisplay_7() const { return ___farClipPlaneOpaqueDisplay_7; }
	inline float* get_address_of_farClipPlaneOpaqueDisplay_7() { return &___farClipPlaneOpaqueDisplay_7; }
	inline void set_farClipPlaneOpaqueDisplay_7(float value)
	{
		___farClipPlaneOpaqueDisplay_7 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsOpaqueDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___cameraClearFlagsOpaqueDisplay_8)); }
	inline int32_t get_cameraClearFlagsOpaqueDisplay_8() const { return ___cameraClearFlagsOpaqueDisplay_8; }
	inline int32_t* get_address_of_cameraClearFlagsOpaqueDisplay_8() { return &___cameraClearFlagsOpaqueDisplay_8; }
	inline void set_cameraClearFlagsOpaqueDisplay_8(int32_t value)
	{
		___cameraClearFlagsOpaqueDisplay_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColorOpaqueDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___backgroundColorOpaqueDisplay_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorOpaqueDisplay_9() const { return ___backgroundColorOpaqueDisplay_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorOpaqueDisplay_9() { return &___backgroundColorOpaqueDisplay_9; }
	inline void set_backgroundColorOpaqueDisplay_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorOpaqueDisplay_9 = value;
	}

	inline static int32_t get_offset_of_opaqueQualityLevel_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___opaqueQualityLevel_10)); }
	inline int32_t get_opaqueQualityLevel_10() const { return ___opaqueQualityLevel_10; }
	inline int32_t* get_address_of_opaqueQualityLevel_10() { return &___opaqueQualityLevel_10; }
	inline void set_opaqueQualityLevel_10(int32_t value)
	{
		___opaqueQualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_nearClipPlaneTransparentDisplay_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___nearClipPlaneTransparentDisplay_11)); }
	inline float get_nearClipPlaneTransparentDisplay_11() const { return ___nearClipPlaneTransparentDisplay_11; }
	inline float* get_address_of_nearClipPlaneTransparentDisplay_11() { return &___nearClipPlaneTransparentDisplay_11; }
	inline void set_nearClipPlaneTransparentDisplay_11(float value)
	{
		___nearClipPlaneTransparentDisplay_11 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneTransparentDisplay_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___farClipPlaneTransparentDisplay_12)); }
	inline float get_farClipPlaneTransparentDisplay_12() const { return ___farClipPlaneTransparentDisplay_12; }
	inline float* get_address_of_farClipPlaneTransparentDisplay_12() { return &___farClipPlaneTransparentDisplay_12; }
	inline void set_farClipPlaneTransparentDisplay_12(float value)
	{
		___farClipPlaneTransparentDisplay_12 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsTransparentDisplay_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___cameraClearFlagsTransparentDisplay_13)); }
	inline int32_t get_cameraClearFlagsTransparentDisplay_13() const { return ___cameraClearFlagsTransparentDisplay_13; }
	inline int32_t* get_address_of_cameraClearFlagsTransparentDisplay_13() { return &___cameraClearFlagsTransparentDisplay_13; }
	inline void set_cameraClearFlagsTransparentDisplay_13(int32_t value)
	{
		___cameraClearFlagsTransparentDisplay_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColorTransparentDisplay_14() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___backgroundColorTransparentDisplay_14)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorTransparentDisplay_14() const { return ___backgroundColorTransparentDisplay_14; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorTransparentDisplay_14() { return &___backgroundColorTransparentDisplay_14; }
	inline void set_backgroundColorTransparentDisplay_14(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorTransparentDisplay_14 = value;
	}

	inline static int32_t get_offset_of_transparentQualityLevel_15() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6, ___transparentQualityLevel_15)); }
	inline int32_t get_transparentQualityLevel_15() const { return ___transparentQualityLevel_15; }
	inline int32_t* get_address_of_transparentQualityLevel_15() { return &___transparentQualityLevel_15; }
	inline void set_transparentQualityLevel_15(int32_t value)
	{
		___transparentQualityLevel_15 = value;
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


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct  MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C  : public BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_18;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_22;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___U3CSourceIdU3Ek__BackingField_18)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_18() const { return ___U3CSourceIdU3Ek__BackingField_18; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_18() { return &___U3CSourceIdU3Ek__BackingField_18; }
	inline void set_U3CSourceIdU3Ek__BackingField_18(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___U3CSourceNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_19() const { return ___U3CSourceNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_19() { return &___U3CSourceNameU3Ek__BackingField_19; }
	inline void set_U3CSourceNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___currentDisplayType_20)); }
	inline int32_t get_currentDisplayType_20() const { return ___currentDisplayType_20; }
	inline int32_t* get_address_of_currentDisplayType_20() { return &___currentDisplayType_20; }
	inline void set_currentDisplayType_20(int32_t value)
	{
		___currentDisplayType_20 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___cameraOpaqueLastFrame_21)); }
	inline bool get_cameraOpaqueLastFrame_21() const { return ___cameraOpaqueLastFrame_21; }
	inline bool* get_address_of_cameraOpaqueLastFrame_21() { return &___cameraOpaqueLastFrame_21; }
	inline void set_cameraOpaqueLastFrame_21(bool value)
	{
		___cameraOpaqueLastFrame_21 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C, ___useFallbackBehavior_22)); }
	inline bool get_useFallbackBehavior_22() const { return ___useFallbackBehavior_22; }
	inline bool* get_address_of_useFallbackBehavior_22() { return &___useFallbackBehavior_22; }
	inline void set_useFallbackBehavior_22(bool value)
	{
		___useFallbackBehavior_22 = value;
	}
};

struct MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForOpaquePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForTransparentPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields, ___UpdatePerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_23() const { return ___UpdatePerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_23() { return &___UpdatePerfMarker_23; }
	inline void set_UpdatePerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields, ___ApplySettingsForOpaquePerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForOpaquePerfMarker_24() const { return ___ApplySettingsForOpaquePerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForOpaquePerfMarker_24() { return &___ApplySettingsForOpaquePerfMarker_24; }
	inline void set_ApplySettingsForOpaquePerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForOpaquePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields, ___ApplySettingsForTransparentPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForTransparentPerfMarker_25() const { return ___ApplySettingsForTransparentPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForTransparentPerfMarker_25() { return &___ApplySettingsForTransparentPerfMarker_25; }
	inline void set_ApplySettingsForTransparentPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForTransparentPerfMarker_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m37AE045F703C34371B9972FED0C1EDFB0356AEB8_gshared (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, Type_t * ___concreteType0, int32_t ___supportedPlatforms1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m19105D5FB53C22704312F10F2760309F3C9B9DA2_gshared (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m42C29FD0AC188622050BD25A8CD7973D42BB605D (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mC483BF645658C0E6BDCE33214E5DD72778533D2F_inline (BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m156CE48FF8D3B71752C76D2A6C4D77C2B3D063AB (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* MixedRealityCameraProfile_get_SettingsConfigurations_m46852DE75C2E9DDFFFA8C374DC709F8BFC2D9F88 (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * MixedRealityCameraSettingsConfiguration_get_ComponentType_mB0FEE311B52AFDFE6995D785491514F02E03458C_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m43909FABC539AB0844952D8982A00FF0EDB618CA_inline (SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mDBC3C0470A700C8CB41A2DDF98136AF07D56570E_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m5AE6E3DCA081EC6444EA4203429AE11D410B38C4_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mE2CE14090080673D017D76240355CEAEA4663985_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m504B3C64E5FCD06FDCDBAA053376C91D3B850007_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m6C87B030EBE2CD9EA9B9ED09B5699B3069A2BF05 (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, Type_t * ___concreteType0, int32_t ___supportedPlatforms1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 *, Type_t *, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m37AE045F703C34371B9972FED0C1EDFB0356AEB8_gshared)(__this, ___concreteType0, ___supportedPlatforms1, ___args2, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_m4C9A22BC7CA46A05A672177418482F60903BC1BA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_m9C2BAE234B7A72AEEA82B15EC06B86B21DA861BF (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m31DBB009868DC7274EC61F587D43FEE6EA290805 (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m699ACE4F6BEF7AF2B2651285C4877A10D3EB22AA (BaseService_tDE42F96B445E724D04565AAD9303503CBE7093D2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mAA45B4ECEF5E1EF770787FA2CA1497EBD988EB09 (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535 *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m19105D5FB53C22704312F10F2760309F3C9B9DA2_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m209103D604A24B01CDD91C4E0A8EE4E7D797B440 (BaseEventSystem_t8F8846012AB556BB8B8B36BF2EFE0DFC5F2F2E18 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2B50C799770A53ACC111480C1AF2A0D8CC220AFC_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE061C2BF4487E0F6E812959788A0512A25FAFA88_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m74F929BEEE0415B365C33540658B1B614308B858_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mE2B1A1D27C78BF84C488360A32162AD35F5DA62E_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m80C0779B33B0F8E2482DBF10A178C2A90B8677ED_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mF0D5816E234EE541C74846DD3681E07579F1B75A_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m1F64096137BDCCFE816EC2FF40D1AC22A50561F6_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m062DE4BDBE427F179F35AFF4DD34B13BEB1EB48F_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mDAA5E5ADB4EDBCB2A2963698F29F54E5340BAB42_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m07B5BCFB6803C61A06E3B8CE176786280F4BA8A3_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m54637C710B36B6B50028A17646884A06AB1B837B_inline (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mD7E0DF6E49A747FC35CE459165408D161C173280 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile1, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_0 = ___profile1;
		MixedRealityCameraSystem__ctor_m42C29FD0AC188622050BD25A8CD7973D42BB605D(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mC483BF645658C0E6BDCE33214E5DD72778533D2F_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m42C29FD0AC188622050BD25A8CD7973D42BB605D (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_m42C29FD0AC188622050BD25A8CD7973D42BB605D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		__this->set_U3CNameU3Ek__BackingField_17(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// public uint SourceId { get; } = 0;
		__this->set_U3CSourceIdU3Ek__BackingField_18(0);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		__this->set_U3CSourceNameU3Ek__BackingField_19(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// private bool cameraOpaqueLastFrame = false;
		__this->set_cameraOpaqueLastFrame_21((bool)0);
		// private bool useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// BaseMixedRealityProfile profile = null) : base(profile)
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_tEC30D51F31BA37D15DA66B7E10C2FC3AEA41F535_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m156CE48FF8D3B71752C76D2A6C4D77C2B3D063AB(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_mCE1EA2C7C03CC4F266F564B0F563E73CBF27B872 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_mE895740D3A6D459909A03DCDDCE12670E3ED7BC9 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// currentDisplayType = DisplayType.Opaque;
		__this->set_currentDisplayType_20(0);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var, L_1);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// if (!dataProviders[0].IsOpaque)
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAF83D3E68C1B8F2ABF731862DB58B3951B8B1AAE_il2cpp_TypeInfo_var, L_4, 0);
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_il2cpp_TypeInfo_var, L_5);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_20(1);
	}

IL_0039:
	{
		goto IL_005e;
	}

IL_003c:
	{
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE, /*hidden argument*/NULL);
		// if (!UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
		bool L_8 = HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_20(1);
	}

IL_005d:
	{
	}

IL_005e:
	{
		// return currentDisplayType == DisplayType.Opaque;
		int32_t L_10 = __this->get_currentDisplayType_20();
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_006b;
	}

IL_006b:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_m7FC55E99FBA287D3158CDEDF0978CA213F0C63CA (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_18();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m54637C710B36B6B50028A17646884A06AB1B837B (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_m40252C8DAF726C95BA8DF9DE0D3F2C6DE98A3780 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Initialize_m40252C8DAF726C95BA8DF9DE0D3F2C6DE98A3780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * G_B7_0 = NULL;
	SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * G_B6_0 = NULL;
	Type_t * G_B8_0 = NULL;
	{
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t21904E750DA46227C760BE848C647C1AFB094E45 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6_il2cpp_TypeInfo_var));
		// if ((GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0) && (profile != null))
		RuntimeObject* L_1 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00ec;
		}
	}
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		V_2 = 0;
		goto IL_00d7;
	}

IL_0033:
	{
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_6 = V_0;
		NullCheck(L_6);
		MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* L_7 = MixedRealityCameraProfile_get_SettingsConfigurations_m46852DE75C2E9DDFFFA8C374DC709F8BFC2D9F88(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// if (configuration.ComponentType?.Type == null)
		SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * L_11 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mB0FEE311B52AFDFE6995D785491514F02E03458C_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_004f;
		}
	}
	{
		G_B8_0 = ((Type_t *)(NULL));
		goto IL_0054;
	}

IL_004f:
	{
		NullCheck(G_B7_0);
		Type_t * L_13 = SystemType_get_Type_m43909FABC539AB0844952D8982A00FF0EDB618CA_inline(G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_13;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_14 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(G_B8_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// continue;
		goto IL_00d3;
	}

IL_0063:
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, __this);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		String_t* L_19 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mDBC3C0470A700C8CB41A2DDF98136AF07D56570E_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_18;
		uint32_t L_21 = MixedRealityCameraSettingsConfiguration_get_Priority_m5AE6E3DCA081EC6444EA4203429AE11D410B38C4_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		uint32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_20;
		BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * L_25 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mE2CE14090080673D017D76240355CEAEA4663985_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		V_4 = L_24;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.RuntimePlatform,
		//     args))
		SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * L_26 = MixedRealityCameraSettingsConfiguration_get_ComponentType_mB0FEE311B52AFDFE6995D785491514F02E03458C_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_26);
		Type_t * L_27 = SystemType_get_Type_m43909FABC539AB0844952D8982A00FF0EDB618CA_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m504B3C64E5FCD06FDCDBAA053376C91D3B850007_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = V_4;
		bool L_30 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m6C87B030EBE2CD9EA9B9ED09B5699B3069A2BF05(__this, L_27, L_28, L_29, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m6C87B030EBE2CD9EA9B9ED09B5699B3069A2BF05_RuntimeMethod_var);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d2;
		}
	}
	{
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		String_t* L_32 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mDBC3C0470A700C8CB41A2DDF98136AF07D56570E_inline((MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA *)(&V_3), /*hidden argument*/NULL);
		RuntimeObject* L_33 = GenericVirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mBD78922E37A3F7B12DC5C70E0929383DC3B13B8D_RuntimeMethod_var, __this, L_32);
		V_7 = L_33;
		// provider?.ApplyConfiguration();
		RuntimeObject* L_34 = V_7;
		if (L_34)
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00d1;
	}

IL_00c9:
	{
		RuntimeObject* L_35 = V_7;
		NullCheck(L_35);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_il2cpp_TypeInfo_var, L_35);
	}

IL_00d1:
	{
	}

IL_00d2:
	{
	}

IL_00d3:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d7:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_37 = V_2;
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_38 = V_0;
		NullCheck(L_38);
		MixedRealityCameraSettingsConfigurationU5BU5D_tBD92F818D9FABCA8B20F0812B77303DF5334BAE2* L_39 = MixedRealityCameraProfile_get_SettingsConfigurations_m46852DE75C2E9DDFFFA8C374DC709F8BFC2D9F88(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		V_8 = (bool)((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))? 1 : 0);
		bool L_40 = V_8;
		if (L_40)
		{
			goto IL_0033;
		}
	}
	{
	}

IL_00ec:
	{
		// useFallbackBehavior = (GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0);
		RuntimeObject* L_41 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		NullCheck(L_41);
		int32_t L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var, L_41);
		__this->set_useFallbackBehavior_22((bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0));
		// if (useFallbackBehavior)
		bool L_43 = __this->get_useFallbackBehavior_22();
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_01ba;
		}
	}
	{
		// cameraOpaqueLastFrame = IsOpaque;
		bool L_45 = MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A(__this, /*hidden argument*/NULL);
		__this->set_cameraOpaqueLastFrame_21(L_45);
		// if (IsOpaque)
		bool L_46 = MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A(__this, /*hidden argument*/NULL);
		V_10 = L_46;
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		// ApplySettingsForOpaqueDisplay();
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0(__this, /*hidden argument*/NULL);
		goto IL_013c;
	}

IL_0133:
	{
		// ApplySettingsForTransparentDisplay();
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6(__this, /*hidden argument*/NULL);
	}

IL_013c:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t35AD327AE9DFA07DB589D4A5146D9EB88C8BC2F4_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_set_Position_m4C9A22BC7CA46A05A672177418482F60903BC1BA(L_48, /*hidden argument*/NULL);
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		MixedRealityPlayspace_set_Rotation_m9C2BAE234B7A72AEEA82B15EC06B86B21DA861BF(L_49, /*hidden argument*/NULL);
		// if (CameraCache.Main.transform.position != Vector3.zero)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_50 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_54 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_52, L_53, /*hidden argument*/NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_018d;
		}
	}
	{
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = L_56;
		RuntimeObject * L_58 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_57);
		String_t* L_59 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_59, /*hidden argument*/NULL);
	}

IL_018d:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_60 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		bool L_64 = Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70(L_62, L_63, /*hidden argument*/NULL);
		V_12 = L_64;
		bool L_65 = V_12;
		if (!L_65)
		{
			goto IL_01b9;
		}
	}
	{
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD47B37C1B233818E5C869621EE522D30507C5050, /*hidden argument*/NULL);
	}

IL_01b9:
	{
	}

IL_01ba:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_mDC5DFF09DE965F14B290BC3F6E000310BB51C716 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Enable_mDC5DFF09DE965F14B290BC3F6E000310BB51C716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m31DBB009868DC7274EC61F587D43FEE6EA290805(__this, /*hidden argument*/NULL);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_0013:
	{
		// providers[i].Enable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAF83D3E68C1B8F2ABF731862DB58B3951B8B1AAE_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_tB5C0F291C72BA46101010A6FE3A1E58943C8B994_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_m004C9E68DC41A3DD32BF24BB3463B0CFB3B86D74 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Disable_m004C9E68DC41A3DD32BF24BB3463B0CFB3B86D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_001f;
	}

IL_000c:
	{
		// providers[i].Disable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tAF83D3E68C1B8F2ABF731862DB58B3951B8B1AAE_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_tB5C0F291C72BA46101010A6FE3A1E58943C8B994_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tCF701ED7382EE1C81D01DEF3FABD270BD1763A36_il2cpp_TypeInfo_var, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		// base.Disable();
		BaseService_Disable_m699ACE4F6BEF7AF2B2651285C4877A10D3EB22AA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_mA56319673C646599294D366AE1D95647F2D8DC7B (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Destroy_mA56319673C646599294D366AE1D95647F2D8DC7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_m21CD50ECD539A7206CFACDA5808A820492988EB9_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_t32F12EE88220D4E8566B1CBB86E44E03F632FE53_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0010:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_tDF5EBD016387969283398400025AA361533EC6D5_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mAA45B4ECEF5E1EF770787FA2CA1497EBD988EB09(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t00757F5943FA05F77C2D1E4C44072C9D31C1DDF7_mAA45B4ECEF5E1EF770787FA2CA1497EBD988EB09_RuntimeMethod_var);
		}

IL_0021:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		// useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// base.Destroy();
		BaseEventSystem_Destroy_m209103D604A24B01CDD91C4E0A8EE4E7D797B440(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_mC3A30B847F4EC15E95B8138C7C65A91F88B17B7D (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Update_mC3A30B847F4EC15E95B8138C7C65A91F88B17B7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!useFallbackBehavior) { return; }
		bool L_0 = __this->get_useFallbackBehavior_22();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!useFallbackBehavior) { return; }
		goto IL_0075;
	}

IL_0011:
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_23();
		V_2 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			// if (IsOpaque != cameraOpaqueLastFrame)
			bool L_4 = MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A(__this, /*hidden argument*/NULL);
			bool L_5 = __this->get_cameraOpaqueLastFrame_21();
			V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0063;
			}
		}

IL_0035:
		{
			// cameraOpaqueLastFrame = IsOpaque;
			bool L_7 = MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A(__this, /*hidden argument*/NULL);
			__this->set_cameraOpaqueLastFrame_21(L_7);
			// if (IsOpaque)
			bool L_8 = MixedRealityCameraSystem_get_IsOpaque_m12A87563BEB7B7A6D4F9B7992F0F3119E439B87A(__this, /*hidden argument*/NULL);
			V_4 = L_8;
			bool L_9 = V_4;
			if (!L_9)
			{
				goto IL_0059;
			}
		}

IL_004e:
		{
			// ApplySettingsForOpaqueDisplay();
			MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0(__this, /*hidden argument*/NULL);
			goto IL_0062;
		}

IL_0059:
		{
			// ApplySettingsForTransparentDisplay();
			MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6(__this, /*hidden argument*/NULL);
		}

IL_0062:
		{
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m6B08E95593D4818E5590831E9DAAB956788BEDF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->get_ApplySettingsForOpaquePerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_3 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2B50C799770A53ACC111480C1AF2A0D8CC220AFC_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_6 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE061C2BF4487E0F6E812959788A0512A25FAFA88_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_9 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m74F929BEEE0415B365C33540658B1B614308B858_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_12 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mE2B1A1D27C78BF84C488360A32162AD35F5DA62E_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_14 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_m80C0779B33B0F8E2482DBF10A178C2A90B8677ED_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8C, FINALLY_007d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mF59B33CC89D5584A886365E1E6B918768B52E2D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->get_ApplySettingsForTransparentPerfMarker_25();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_3 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mF0D5816E234EE541C74846DD3681E07579F1B75A_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_6 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m1F64096137BDCCFE816EC2FF40D1AC22A50561F6_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_9 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m062DE4BDBE427F179F35AFF4DD34B13BEB1EB48F_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_12 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mDAA5E5ADB4EDBCB2A2963698F29F54E5340BAB42_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
		MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * L_14 = MixedRealityCameraSystem_get_CameraProfile_mDA7E069312EEE385DD494DAB94AA7B06A4F5A5FF(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_m07B5BCFB6803C61A06E3B8CE176786280F4BA8A3_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8C, FINALLY_007d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m1BCDC9E51D93B47FC3946462DD38EE73D1975A0C (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mE66AA948CB25A036E7E328BB3B1F07307608F898 (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mE66AA948CB25A036E7E328BB3B1F07307608F898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityCameraSystem_get_SourceName_m54637C710B36B6B50028A17646884A06AB1B837B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_mDD3C831A345A59E2C3084B795E9E1B47BCF87852 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__cctor_mDD3C831A345A59E2C3084B795E9E1B47BCF87852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_23(L_0);
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->set_ApplySettingsForOpaquePerfMarker_24(L_1);
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C_il2cpp_TypeInfo_var))->set_ApplySettingsForTransparentPerfMarker_25(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mC483BF645658C0E6BDCE33214E5DD72778533D2F_inline (BaseCoreSystem_t00B85EDE058A8952B9D68A39014BA25516D29011 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * MixedRealityCameraSettingsConfiguration_get_ComponentType_mB0FEE311B52AFDFE6995D785491514F02E03458C_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m43909FABC539AB0844952D8982A00FF0EDB618CA_inline (SystemType_tF064F635D313A17F19AD3C57FDB664714A8AD4F5 * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mDBC3C0470A700C8CB41A2DDF98136AF07D56570E_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m5AE6E3DCA081EC6444EA4203429AE11D410B38C4_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mE2CE14090080673D017D76240355CEAEA4663985_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method)
{
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		BaseCameraSettingsProfile_t0D1BED511B9C93C0B4F9CF816A9833DD307F2BD5 * L_0 = __this->get_settingsProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m504B3C64E5FCD06FDCDBAA053376C91D3B850007_inline (MixedRealityCameraSettingsConfiguration_t1A0F279A8A973F926FFEBB526B697F2BA994CCBA * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2B50C799770A53ACC111480C1AF2A0D8CC220AFC_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsOpaqueDisplay_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE061C2BF4487E0F6E812959788A0512A25FAFA88_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		float L_0 = __this->get_nearClipPlaneOpaqueDisplay_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_m74F929BEEE0415B365C33540658B1B614308B858_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		float L_0 = __this->get_farClipPlaneOpaqueDisplay_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mE2B1A1D27C78BF84C488360A32162AD35F5DA62E_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorOpaqueDisplay_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m80C0779B33B0F8E2482DBF10A178C2A90B8677ED_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		int32_t L_0 = __this->get_opaqueQualityLevel_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_mF0D5816E234EE541C74846DD3681E07579F1B75A_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsTransparentDisplay_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m1F64096137BDCCFE816EC2FF40D1AC22A50561F6_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorTransparentDisplay_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m062DE4BDBE427F179F35AFF4DD34B13BEB1EB48F_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		float L_0 = __this->get_nearClipPlaneTransparentDisplay_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_mDAA5E5ADB4EDBCB2A2963698F29F54E5340BAB42_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		float L_0 = __this->get_farClipPlaneTransparentDisplay_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m07B5BCFB6803C61A06E3B8CE176786280F4BA8A3_inline (MixedRealityCameraProfile_tCDCB78CD68D09149ED9AFCBF7D6576DFC2B9E8E6 * __this, const RuntimeMethod* method)
{
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		int32_t L_0 = __this->get_transparentQualityLevel_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m54637C710B36B6B50028A17646884A06AB1B837B_inline (MixedRealityCameraSystem_t6C83CBAC4C6A8947612E6CE8C0D24DDB8A0A9B5C * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
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
