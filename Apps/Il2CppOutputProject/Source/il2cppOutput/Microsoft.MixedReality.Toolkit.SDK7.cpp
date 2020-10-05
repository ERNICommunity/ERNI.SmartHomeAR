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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC;
// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct HandBounds_tC1127219472725CEDC28B1DD825CD87986E9E8D9;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_t7FBC6B647E102B764FBC6019B67F2FFBBDCA4AFF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_tE328C8BD991056668984D67A323E3143DDD5CD31;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_tC30C3A1B4B3E241A9ADEC73BDE00E12F30BF3749;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tCB9C57FA1C39CAB596EC45CF4163E48BDCA34135;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t142023776CCC57DFC5696BEA994C4F369CB5806E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tA64958356FC4ABDCB3CF2CFC334E3DA65A885D78;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_tB6543C82D1BD9E396F75892CD1EEC952D5A56319;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tBB578444878BD1FD29CD67786C8EB20C4EF1B2BB;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tFF04DFF5FDA20B3E103C59064F8FC818EF1BB1B9;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_t8D8BD4F654DD8C6E41A1C670CD1DB5AAC36E7138;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_t47803979E70399CA4772811ACFFC752E870FA93A;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__51
struct U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t27FD08FFD78CBE667472D71DE4AB05412E1A6FBE;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_tC62D81AA576B14F490732FBEE12776DBA5F98C0A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_tEFA9E9D42AF9535175C0C5862C3DF8F8348E6EC3;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_t27D9643642635D9D98EE2AEF7F55813C043AC006;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_tE328C8BD991056668984D67A323E3143DDD5CD31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCursor_tC30C3A1B4B3E241A9ADEC73BDE00E12F30BF3749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t0073FC33F5F6BD61F502D77FA5B6C90A6B22E210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tA64958356FC4ABDCB3CF2CFC334E3DA65A885D78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t972F1F899F22D7138D453F9EE6335BB2ABA1A516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A;
IL2CPP_EXTERN_C String_t* _stringLiteral787C1414705A5BB205FC61C22B67643D57F90A57;
IL2CPP_EXTERN_C String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
IL2CPP_EXTERN_C String_t* _stringLiteral8604633F91A5364A570785AE4355317FF69CAA79;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
IL2CPP_EXTERN_C String_t* _stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E0DFEC468C7B19CACF875ACED4277DD39E045;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE76D1FEF7514784ED8CF0160EC45D84D098ADA;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m7B6A4FB0600C7D3701BC44F58190250B8CD733BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m26AD98AA4510DAEC40229D04C6525707022691BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m95D3DA607B4F8572D22EBB9CEBA9756505669DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_m157BD67D3A89CD38DB0A6A09A304895FD715E1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m211D087C671701B56FA6CCEB748AF4A87A4A4ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m58919CFFC4B8E0C0D1B08F11EBA3228F7EAE6558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m455A87CD3FC137A413BD066BD112541290F2E0D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_tAB30AF314323490DC19B42E9E12F67CFFE976BF3_m8C0154C5D993ED06B5D2DEBDC8E9016FD0452588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_tAB30AF314323490DC19B42E9E12F67CFFE976BF3_m79769E68E6097FF6CCE376388DA9BA86F3A3D18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m35584E5341D8C0258780FCFB7018896EA46C8F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m457BA0F54E13309C7EF4ED4A34F252959E6C487B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m54F67B0D484AD0899C3C9DF83D615AA9E83D1647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m382FDC72BB804BF1154933BDEADE125EAB54FC74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF7CE5C524D8BBF55DBDF16D0905DDE14A2701C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m959E10B2C5B4E2F34A7D8766BAE64AA63066C528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF20F4E0A946A50D6D829C9D8B9823C7A168690DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D31D93EA08BC6AE15A1C36CDD955F2E0C41A806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8D016F17C5E3A4B810F5BE9D1EBED518F41D571A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_Reset_mCD7BEA6601172E930C68176BB3ABD0F3701C7C28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_Reset_mDD2CF1B9509E3654C93A39206B36E167D6F63958_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_IsValidController_m2E24C6C2BF95FE3EBD18DAF01E3C21D732DA94E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_TryGenerateActivationPoint_mE9D1A30585F35D0EF63FBBEBEED9453145C111D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_TryGenerateHandPlaneAndActivationPoint_m5CA7C2F8DD23FAD1B85131027471A5ABB41E0953_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandConstraintPalmUp_WorldLockedReattachCheck_m8E9D0741E717154590E55DB1074488E62FB1680A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_AdjustPositionForOffset_m2A316947F7DE91CFD7F6E83604AADADBB5F13D22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_SolverUpdate_mD66E1D220078C13E93CBB71EAA5183BF8752836B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_Start_m7912483D7B9800C7E8D9711D7ED60470E5AACD18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_set_PartwayOffset_m14CC63EAB737C5C22146CE04BD6C680198BB32E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InBetween_set_SecondTransformOverride_m3971ABD63AA12C1FFF51284C93A7075C2D7741BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_OnEnable_m1902004F7DB11351E99A53F91DF364BF9AC37484_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SnapTo_m23856D3B1F6A5E02727F30A9AEC7340C164163CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SolverUpdate_m0569901970554755CDC20170474CA46F8F0FCDCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_get_ReferencePosition_mF7803C7EDB831D20D055F299C2504681E3EA30DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_CalculateDesiredRotation_mE6E37E1B85EDCE9541CE0A5B232549ED285D2E17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SolverUpdate_mAF8F9D76CBAA627D2CAA56EA066F3CD1B104ED82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital__ctor_m1D2EC09EF4D2DB078F9CB21EFE4AA557D0A9FD3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_set_TetherAngleSteps_m69675C758BD79B5A7C9CAA894AA396CEC7CE161F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Overlap_SolverUpdate_mD4C3EDEC2DC57F7B63D9C283A2F865BE28492868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_m0CF411EBA0F12BA140842529958A25CB0BA4F01A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_mD9B16468029365B764FCF82C0CF21CF1E47BF8DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_SolverUpdate_m0ADCD79BA6CAF0DBA49B007F6928D44D65F40380_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_AttachToNewTrackedObject_mD062765074A1CFC9FCDC5EC52AACEC20700B2A52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_Awake_mB823410FDB3B4264F62DBCEB7BC24531C53A0216_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_DetachFromCurrentTrackedObject_mC07291A73C76A3BA84FDDA9C8803C49C086057D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_GetControllerRay_m7569F66C1C7F3D350AB70E248825ABAC88C2DBBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_LateUpdate_m9004F93BCA440AA2351AEBCF45ADF23A735B6A54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_RegisterSolver_m5881BDAF414A1E7F39F1640E64F6B0D0521DC819_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_TrackTransform_mF7880ACE7791FB37EA04B0037135ECD9E7E339BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_UnregisterSolver_mA2311CFE0CFBD386CACD01DB228154DADFDF3295_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler__ctor_mB9C62BE96AC027FD0E6C454BAAAC92EC5AE1E66D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_Solvers_mB1ED8DC71CF0A395FFCC0BD9BD383D926084D254_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalOffset_m703BA8EFF9A10FB4325714CD76F51E19700E272C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalRotation_m19EB9A59708EEA1140AB9A8BF57B3FE480B41288_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_Solvers_m348FEA1934ACA6C4A5AB92C130533B22A9473EF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_TransformOverride_m646352419E76B01F8DCE16291664156C71A9AB32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_AddOffset_m783CB2A01FFD12418B1A1799AB54F24D9C1DC51E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Awake_mCBA52635660998D6B79823D6BA3DB07A045843BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnDestroy_mA91DE1F414D6B6B4BA97917E9190624449AF66E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnEnable_mEA5D74A740D42EE91D5614DCF07EB487A2E40F2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m4884DA369E6E96ACDF2B8FB387BE40BDF0EC301C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_FindPlacementPlane_m5CCD7E3512700B9A9444A7284E6A36ED0129B3DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_IsNormalVertical_mAC6314CCB7CFD4B48CB59D2AC53F57B6EC011D02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_m7456043639A20732E4CF56764B58490682D9EAA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SolverUpdate_mE169AAB3EA400F117B54230E661D128CC048BBAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_mC07909A28FBB25B74345B08E6E4550B5BF88807C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism__ctor_mDA77224DA3DE4B027592AE8079DBD87F57B104C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastDirection_m2818A889990AC65D362BE0F35CAAA7F5B1095334_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_OnDisable_mCBE905E33FDEB73741D685051610C9F1F7487927_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_PerformRaycast_m4E79809C4623C5414DFD39972E3E66382FAFAC83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetPosition_m2A07513E023C973533A752572645998F2F0556F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetRotation_mE8C7FD24810B474002C28077BC35CF102248B6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SolverUpdate_m744DB8B1F3C08493ED965C912A12A724E81E971A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_Start_mBB7B940012BBA6E49642827282A996E0B9B9615A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StopPlacement_m62212B51D6ECAF2A5741BA9931962A5123411F65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace__ctor_mB81D6746D5C3AE6FDC5A1BDCA89C2648F8BB690E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_get_IsColliderPresent_m6C466C798C8F84C9F3AAF7F2C04AFA6BAC69AA9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_GetListPosition_m419CE9AC858122E7284022689A5DFD9CE641FC7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_Update_mE5E7B2EDCD8EDE663F2884BBC04E8A99D4A6AE63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection__ctor_m52C7ED0434034F6BE0533EEC781DB7BB72BE2969_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CToggleCursorsU3Ed__51_MoveNext_m215C99A9B4B4727FB45E74EE4DF7A9F2072CED65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_Reset_mCD7BEA6601172E930C68176BB3ABD0F3701C7C28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldLockedReattachCheckU3Ed__42_MoveNext_mC33D38612B3599FE300F332E8483A418F5D3DF10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_Reset_mDD2CF1B9509E3654C93A39206B36E167D6F63958_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17;
struct SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51
struct  U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::controller
	RuntimeObject* ___controller_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::visible
	bool ___visible_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::frameDelay
	bool ___frameDelay_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<>4__this
	HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * ___U3CU3E4__this_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<>s__1
	IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* ___U3CU3Es__1_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<>s__2
	int32_t ___U3CU3Es__2_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::<pointer>5__3
	RuntimeObject* ___U3CpointerU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_visible_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___visible_3)); }
	inline bool get_visible_3() const { return ___visible_3; }
	inline bool* get_address_of_visible_3() { return &___visible_3; }
	inline void set_visible_3(bool value)
	{
		___visible_3 = value;
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CU3E4__this_5)); }
	inline HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CU3Es__1_6)); }
	inline IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_7() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CU3Es__2_7)); }
	inline int32_t get_U3CU3Es__2_7() const { return ___U3CU3Es__2_7; }
	inline int32_t* get_address_of_U3CU3Es__2_7() { return &___U3CU3Es__2_7; }
	inline void set_U3CU3Es__2_7(int32_t value)
	{
		___U3CU3Es__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902, ___U3CpointerU3E5__3_8)); }
	inline RuntimeObject* get_U3CpointerU3E5__3_8() const { return ___U3CpointerU3E5__3_8; }
	inline RuntimeObject** get_address_of_U3CpointerU3E5__3_8() { return &___U3CpointerU3E5__3_8; }
	inline void set_U3CpointerU3E5__3_8(RuntimeObject* value)
	{
		___U3CpointerU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerU3E5__3_8), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62, ____items_1)); }
	inline SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
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

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
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


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
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


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct  RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct  SceneQueryType_t9006BC4B5A46F7E841B16E9BD24C8E521F4973AA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t9006BC4B5A46F7E841B16E9BD24C8E521F4973AA, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct  RadialViewReferenceDirection_t287011B6C776FEA59F3EB06041B3B21B7BB52EA7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t287011B6C776FEA59F3EB06041B3B21B7BB52EA7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct  SolverOrientationType_t9789980F76D1DB0372747A09FD370A29A87557BD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t9789980F76D1DB0372747A09FD370A29A87557BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverOffsetBehavior
struct  SolverOffsetBehavior_tBC04640894ED4043445FB81100BC56DE6BDEE3D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverOffsetBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOffsetBehavior_tBC04640894ED4043445FB81100BC56DE6BDEE3D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior
struct  SolverRotationBehavior_t9B19ADBD9EB7C79AB756DDB24FB1E041962B59CF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverRotationBehavior_t9B19ADBD9EB7C79AB756DDB24FB1E041962B59CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone
struct  SolverSafeZone_tB2A295B67C010989F18D5A4678E40D35FE750C4A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverSafeZone_tB2A295B67C010989F18D5A4678E40D35FE750C4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode
struct  OrientationMode_tC46002867BFC8118CA14D5C8B0700CCC13A7F13C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_tC46002867BFC8118CA14D5C8B0700CCC13A7F13C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode
struct  RaycastDirectionMode_tC0D142A5EFAFC6126AF73D07471B482C8337CF4B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_tC0D142A5EFAFC6126AF73D07471B482C8337CF4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions
struct  GridDivisions_t5A29A97AD12ACC14F819140BBCFB1E2966B4154E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t5A29A97AD12ACC14F819140BBCFB1E2966B4154E, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_tC5BB5AB8A7F39F43379D614EC24034569AA3B76F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_tC5BB5AB8A7F39F43379D614EC24034569AA3B76F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
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


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
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

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
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

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42
struct  U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<>4__this
	HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<palmPose>5__1
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___U3CpalmPoseU3E5__1_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<jointedHand>5__2
	RuntimeObject* ___U3CjointedHandU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::<palmCameraAngle>5__3
	float ___U3CpalmCameraAngleU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CU3E4__this_2)); }
	inline HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpalmPoseU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CpalmPoseU3E5__1_3)); }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  get_U3CpalmPoseU3E5__1_3() const { return ___U3CpalmPoseU3E5__1_3; }
	inline MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * get_address_of_U3CpalmPoseU3E5__1_3() { return &___U3CpalmPoseU3E5__1_3; }
	inline void set_U3CpalmPoseU3E5__1_3(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  value)
	{
		___U3CpalmPoseU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CjointedHandU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CjointedHandU3E5__2_4)); }
	inline RuntimeObject* get_U3CjointedHandU3E5__2_4() const { return ___U3CjointedHandU3E5__2_4; }
	inline RuntimeObject** get_address_of_U3CjointedHandU3E5__2_4() { return &___U3CjointedHandU3E5__2_4; }
	inline void set_U3CjointedHandU3E5__2_4(RuntimeObject* value)
	{
		___U3CjointedHandU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CjointedHandU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpalmCameraAngleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF, ___U3CpalmCameraAngleU3E5__3_5)); }
	inline float get_U3CpalmCameraAngleU3E5__3_5() const { return ___U3CpalmCameraAngleU3E5__3_5; }
	inline float* get_address_of_U3CpalmCameraAngleU3E5__3_5() { return &___U3CpalmCameraAngleU3E5__3_5; }
	inline void set_U3CpalmCameraAngleU3E5__3_5(float value)
	{
		___U3CpalmCameraAngleU3E5__3_5 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_tBB63D9BEE1678B2CD47272D16449017A2AC4B04A  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tBB63D9BEE1678B2CD47272D16449017A2AC4B04A, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tBB63D9BEE1678B2CD47272D16449017A2AC4B04A, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tBB63D9BEE1678B2CD47272D16449017A2AC4B04A, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct  InputEventData_t4448A1ECF70018591A9050CEC5582EEF07663896  : public BaseInputEventData_tBB63D9BEE1678B2CD47272D16449017A2AC4B04A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t4448A1ECF70018591A9050CEC5582EEF07663896, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct  InputSystemGlobalHandlerListener_tE8350C6FA491A93F2539B53405EA0F0BA72A187C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_tE8350C6FA491A93F2539B53405EA0F0BA72A187C, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964  : public InputEventData_t4448A1ECF70018591A9050CEC5582EEF07663896
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C, ___SolverHandler_12)); }
	inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___solvers_11)); }
	inline List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * get_solvers_11() const { return ___solvers_11; }
	inline List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solvers_11), (void*)value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___controllerRay_21)); }
	inline LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerRay_21), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct  TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct  ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC  : public InputSystemGlobalHandlerListener_tE8350C6FA491A93F2539B53405EA0F0BA72A187C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___poseAction_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_10;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_poseAction_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___poseAction_9)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_poseAction_9() const { return ___poseAction_9; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_poseAction_9() { return &___poseAction_9; }
	inline void set_poseAction_9(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___poseAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poseAction_9))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_handedness_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC, ___handedness_10)); }
	inline uint8_t get_handedness_10() const { return ___handedness_10; }
	inline uint8_t* get_address_of_handedness_10() { return &___handedness_10; }
	inline void set_handedness_10(uint8_t value)
	{
		___handedness_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct  HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZone
	int32_t ___safeZone_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZoneBuffer
	float ___safeZoneBuffer_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::updateWhenOppositeHandNear
	bool ___updateWhenOppositeHandNear_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::hideHandCursorsOnActivate
	bool ___hideHandCursorsOnActivate_16;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::rotationBehavior
	int32_t ___rotationBehavior_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverOffsetBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::offsetBehavior
	int32_t ___offsetBehavior_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandActivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandActivate_19;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandDeactivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandDeactivate_20;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onFirstHandDetected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onFirstHandDetected_21;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onLastHandLost
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onLastHandLost_22;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::previousHandedness
	uint8_t ___previousHandedness_23;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::trackedController
	RuntimeObject* ___trackedController_24;
	// Microsoft.MixedReality.Toolkit.Input.HandBounds Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handBounds
	HandBounds_tC1127219472725CEDC28B1DD825CD87986E9E8D9 * ___handBounds_25;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handToWorldRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___handToWorldRotation_26;

public:
	inline static int32_t get_offset_of_safeZone_13() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___safeZone_13)); }
	inline int32_t get_safeZone_13() const { return ___safeZone_13; }
	inline int32_t* get_address_of_safeZone_13() { return &___safeZone_13; }
	inline void set_safeZone_13(int32_t value)
	{
		___safeZone_13 = value;
	}

	inline static int32_t get_offset_of_safeZoneBuffer_14() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___safeZoneBuffer_14)); }
	inline float get_safeZoneBuffer_14() const { return ___safeZoneBuffer_14; }
	inline float* get_address_of_safeZoneBuffer_14() { return &___safeZoneBuffer_14; }
	inline void set_safeZoneBuffer_14(float value)
	{
		___safeZoneBuffer_14 = value;
	}

	inline static int32_t get_offset_of_updateWhenOppositeHandNear_15() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___updateWhenOppositeHandNear_15)); }
	inline bool get_updateWhenOppositeHandNear_15() const { return ___updateWhenOppositeHandNear_15; }
	inline bool* get_address_of_updateWhenOppositeHandNear_15() { return &___updateWhenOppositeHandNear_15; }
	inline void set_updateWhenOppositeHandNear_15(bool value)
	{
		___updateWhenOppositeHandNear_15 = value;
	}

	inline static int32_t get_offset_of_hideHandCursorsOnActivate_16() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___hideHandCursorsOnActivate_16)); }
	inline bool get_hideHandCursorsOnActivate_16() const { return ___hideHandCursorsOnActivate_16; }
	inline bool* get_address_of_hideHandCursorsOnActivate_16() { return &___hideHandCursorsOnActivate_16; }
	inline void set_hideHandCursorsOnActivate_16(bool value)
	{
		___hideHandCursorsOnActivate_16 = value;
	}

	inline static int32_t get_offset_of_rotationBehavior_17() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___rotationBehavior_17)); }
	inline int32_t get_rotationBehavior_17() const { return ___rotationBehavior_17; }
	inline int32_t* get_address_of_rotationBehavior_17() { return &___rotationBehavior_17; }
	inline void set_rotationBehavior_17(int32_t value)
	{
		___rotationBehavior_17 = value;
	}

	inline static int32_t get_offset_of_offsetBehavior_18() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___offsetBehavior_18)); }
	inline int32_t get_offsetBehavior_18() const { return ___offsetBehavior_18; }
	inline int32_t* get_address_of_offsetBehavior_18() { return &___offsetBehavior_18; }
	inline void set_offsetBehavior_18(int32_t value)
	{
		___offsetBehavior_18 = value;
	}

	inline static int32_t get_offset_of_onHandActivate_19() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___onHandActivate_19)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandActivate_19() const { return ___onHandActivate_19; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandActivate_19() { return &___onHandActivate_19; }
	inline void set_onHandActivate_19(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandActivate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandActivate_19), (void*)value);
	}

	inline static int32_t get_offset_of_onHandDeactivate_20() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___onHandDeactivate_20)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandDeactivate_20() const { return ___onHandDeactivate_20; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandDeactivate_20() { return &___onHandDeactivate_20; }
	inline void set_onHandDeactivate_20(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandDeactivate_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandDeactivate_20), (void*)value);
	}

	inline static int32_t get_offset_of_onFirstHandDetected_21() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___onFirstHandDetected_21)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onFirstHandDetected_21() const { return ___onFirstHandDetected_21; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onFirstHandDetected_21() { return &___onFirstHandDetected_21; }
	inline void set_onFirstHandDetected_21(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onFirstHandDetected_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFirstHandDetected_21), (void*)value);
	}

	inline static int32_t get_offset_of_onLastHandLost_22() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___onLastHandLost_22)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onLastHandLost_22() const { return ___onLastHandLost_22; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onLastHandLost_22() { return &___onLastHandLost_22; }
	inline void set_onLastHandLost_22(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onLastHandLost_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLastHandLost_22), (void*)value);
	}

	inline static int32_t get_offset_of_previousHandedness_23() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___previousHandedness_23)); }
	inline uint8_t get_previousHandedness_23() const { return ___previousHandedness_23; }
	inline uint8_t* get_address_of_previousHandedness_23() { return &___previousHandedness_23; }
	inline void set_previousHandedness_23(uint8_t value)
	{
		___previousHandedness_23 = value;
	}

	inline static int32_t get_offset_of_trackedController_24() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___trackedController_24)); }
	inline RuntimeObject* get_trackedController_24() const { return ___trackedController_24; }
	inline RuntimeObject** get_address_of_trackedController_24() { return &___trackedController_24; }
	inline void set_trackedController_24(RuntimeObject* value)
	{
		___trackedController_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedController_24), (void*)value);
	}

	inline static int32_t get_offset_of_handBounds_25() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___handBounds_25)); }
	inline HandBounds_tC1127219472725CEDC28B1DD825CD87986E9E8D9 * get_handBounds_25() const { return ___handBounds_25; }
	inline HandBounds_tC1127219472725CEDC28B1DD825CD87986E9E8D9 ** get_address_of_handBounds_25() { return &___handBounds_25; }
	inline void set_handBounds_25(HandBounds_tC1127219472725CEDC28B1DD825CD87986E9E8D9 * value)
	{
		___handBounds_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handBounds_25), (void*)value);
	}

	inline static int32_t get_offset_of_handToWorldRotation_26() { return static_cast<int32_t>(offsetof(HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E, ___handToWorldRotation_26)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_handToWorldRotation_26() const { return ___handToWorldRotation_26; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_handToWorldRotation_26() { return &___handToWorldRotation_26; }
	inline void set_handToWorldRotation_26(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___handToWorldRotation_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTrackedObjectType
	int32_t ___secondTrackedObjectType_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * ___secondSolverHandler_16;

public:
	inline static int32_t get_offset_of_partwayOffset_13() { return static_cast<int32_t>(offsetof(InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65, ___partwayOffset_13)); }
	inline float get_partwayOffset_13() const { return ___partwayOffset_13; }
	inline float* get_address_of_partwayOffset_13() { return &___partwayOffset_13; }
	inline void set_partwayOffset_13(float value)
	{
		___partwayOffset_13 = value;
	}

	inline static int32_t get_offset_of_secondTrackedObjectType_14() { return static_cast<int32_t>(offsetof(InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65, ___secondTrackedObjectType_14)); }
	inline int32_t get_secondTrackedObjectType_14() const { return ___secondTrackedObjectType_14; }
	inline int32_t* get_address_of_secondTrackedObjectType_14() { return &___secondTrackedObjectType_14; }
	inline void set_secondTrackedObjectType_14(int32_t value)
	{
		___secondTrackedObjectType_14 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_15() { return static_cast<int32_t>(offsetof(InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65, ___secondTransformOverride_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_15() const { return ___secondTransformOverride_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_15() { return &___secondTransformOverride_15; }
	inline void set_secondTransformOverride_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondTransformOverride_15), (void*)value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_16() { return static_cast<int32_t>(offsetof(InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65, ___secondSolverHandler_16)); }
	inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * get_secondSolverHandler_16() const { return ___secondSolverHandler_16; }
	inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D ** get_address_of_secondSolverHandler_16() { return &___secondSolverHandler_16; }
	inline void set_secondSolverHandler_16(SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * value)
	{
		___secondSolverHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondSolverHandler_16), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct  Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_18;

public:
	inline static int32_t get_offset_of_resistance_13() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___resistance_13)); }
	inline float get_resistance_13() const { return ___resistance_13; }
	inline float* get_address_of_resistance_13() { return &___resistance_13; }
	inline void set_resistance_13(float value)
	{
		___resistance_13 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_14() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___resistanceVelocityPower_14)); }
	inline float get_resistanceVelocityPower_14() const { return ___resistanceVelocityPower_14; }
	inline float* get_address_of_resistanceVelocityPower_14() { return &___resistanceVelocityPower_14; }
	inline void set_resistanceVelocityPower_14(float value)
	{
		___resistanceVelocityPower_14 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_15() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___accelerationRate_15)); }
	inline float get_accelerationRate_15() const { return ___accelerationRate_15; }
	inline float* get_address_of_accelerationRate_15() { return &___accelerationRate_15; }
	inline void set_accelerationRate_15(float value)
	{
		___accelerationRate_15 = value;
	}

	inline static int32_t get_offset_of_springiness_16() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___springiness_16)); }
	inline float get_springiness_16() const { return ___springiness_16; }
	inline float* get_address_of_springiness_16() { return &___springiness_16; }
	inline void set_springiness_16(float value)
	{
		___springiness_16 = value;
	}

	inline static int32_t get_offset_of_snapZ_17() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___snapZ_17)); }
	inline bool get_snapZ_17() const { return ___snapZ_17; }
	inline bool* get_address_of_snapZ_17() { return &___snapZ_17; }
	inline void set_snapZ_17(bool value)
	{
		___snapZ_17 = value;
	}

	inline static int32_t get_offset_of_velocity_18() { return static_cast<int32_t>(offsetof(Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819, ___velocity_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_18() const { return ___velocity_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_18() { return &___velocity_18; }
	inline void set_velocity_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct  Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleStepping
	bool ___useAngleStepping_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_17;

public:
	inline static int32_t get_offset_of_orientationType_13() { return static_cast<int32_t>(offsetof(Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988, ___orientationType_13)); }
	inline int32_t get_orientationType_13() const { return ___orientationType_13; }
	inline int32_t* get_address_of_orientationType_13() { return &___orientationType_13; }
	inline void set_orientationType_13(int32_t value)
	{
		___orientationType_13 = value;
	}

	inline static int32_t get_offset_of_localOffset_14() { return static_cast<int32_t>(offsetof(Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988, ___localOffset_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_14() const { return ___localOffset_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_14() { return &___localOffset_14; }
	inline void set_localOffset_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_14 = value;
	}

	inline static int32_t get_offset_of_worldOffset_15() { return static_cast<int32_t>(offsetof(Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988, ___worldOffset_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_15() const { return ___worldOffset_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_15() { return &___worldOffset_15; }
	inline void set_worldOffset_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_15 = value;
	}

	inline static int32_t get_offset_of_useAngleStepping_16() { return static_cast<int32_t>(offsetof(Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988, ___useAngleStepping_16)); }
	inline bool get_useAngleStepping_16() const { return ___useAngleStepping_16; }
	inline bool* get_address_of_useAngleStepping_16() { return &___useAngleStepping_16; }
	inline void set_useAngleStepping_16(bool value)
	{
		___useAngleStepping_16 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_17() { return static_cast<int32_t>(offsetof(Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988, ___tetherAngleSteps_17)); }
	inline int32_t get_tetherAngleSteps_17() const { return ___tetherAngleSteps_17; }
	inline int32_t* get_address_of_tetherAngleSteps_17() { return &___tetherAngleSteps_17; }
	inline void set_tetherAngleSteps_17(int32_t value)
	{
		___tetherAngleSteps_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct  Overlap_t27FD08FFD78CBE667472D71DE4AB05412E1A6FBE  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct  RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct  SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___currentRayStep_32)); }
	inline RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct  TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151  : public Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::autoStart
	bool ___autoStart_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_19;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::debugEnabled
	bool ___debugEnabled_21;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStarted
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStarted_22;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStopped
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStopped_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_25;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentRay
	RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  ___CurrentRay_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DidHitSurface
	bool ___DidHitSurface_27;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentHit
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___CurrentHit_28;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::LastTimeClicked
	float ___LastTimeClicked_29;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DoubleClickTimeout
	float ___DoubleClickTimeout_30;

public:
	inline static int32_t get_offset_of_autoStart_13() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___autoStart_13)); }
	inline bool get_autoStart_13() const { return ___autoStart_13; }
	inline bool* get_address_of_autoStart_13() { return &___autoStart_13; }
	inline void set_autoStart_13(bool value)
	{
		___autoStart_13 = value;
	}

	inline static int32_t get_offset_of_defaultPlacementDistance_14() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___defaultPlacementDistance_14)); }
	inline float get_defaultPlacementDistance_14() const { return ___defaultPlacementDistance_14; }
	inline float* get_address_of_defaultPlacementDistance_14() { return &___defaultPlacementDistance_14; }
	inline void set_defaultPlacementDistance_14(float value)
	{
		___defaultPlacementDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxRaycastDistance_15() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___maxRaycastDistance_15)); }
	inline float get_maxRaycastDistance_15() const { return ___maxRaycastDistance_15; }
	inline float* get_address_of_maxRaycastDistance_15() { return &___maxRaycastDistance_15; }
	inline void set_maxRaycastDistance_15(float value)
	{
		___maxRaycastDistance_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___U3CIsBeingPlacedU3Ek__BackingField_16)); }
	inline bool get_U3CIsBeingPlacedU3Ek__BackingField_16() const { return ___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return &___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline void set_U3CIsBeingPlacedU3Ek__BackingField_16(bool value)
	{
		___U3CIsBeingPlacedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_17() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___surfaceNormalOffset_17)); }
	inline float get_surfaceNormalOffset_17() const { return ___surfaceNormalOffset_17; }
	inline float* get_address_of_surfaceNormalOffset_17() { return &___surfaceNormalOffset_17; }
	inline void set_surfaceNormalOffset_17(float value)
	{
		___surfaceNormalOffset_17 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_18() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___keepOrientationVertical_18)); }
	inline bool get_keepOrientationVertical_18() const { return ___keepOrientationVertical_18; }
	inline bool* get_address_of_keepOrientationVertical_18() { return &___keepOrientationVertical_18; }
	inline void set_keepOrientationVertical_18(bool value)
	{
		___keepOrientationVertical_18 = value;
	}

	inline static int32_t get_offset_of_rotateAccordingToSurface_19() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___rotateAccordingToSurface_19)); }
	inline bool get_rotateAccordingToSurface_19() const { return ___rotateAccordingToSurface_19; }
	inline bool* get_address_of_rotateAccordingToSurface_19() { return &___rotateAccordingToSurface_19; }
	inline void set_rotateAccordingToSurface_19(bool value)
	{
		___rotateAccordingToSurface_19 = value;
	}

	inline static int32_t get_offset_of_magneticSurfaces_20() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___magneticSurfaces_20)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_20() const { return ___magneticSurfaces_20; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_20() { return &___magneticSurfaces_20; }
	inline void set_magneticSurfaces_20(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_20), (void*)value);
	}

	inline static int32_t get_offset_of_debugEnabled_21() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___debugEnabled_21)); }
	inline bool get_debugEnabled_21() const { return ___debugEnabled_21; }
	inline bool* get_address_of_debugEnabled_21() { return &___debugEnabled_21; }
	inline void set_debugEnabled_21(bool value)
	{
		___debugEnabled_21 = value;
	}

	inline static int32_t get_offset_of_onPlacingStarted_22() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___onPlacingStarted_22)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStarted_22() const { return ___onPlacingStarted_22; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStarted_22() { return &___onPlacingStarted_22; }
	inline void set_onPlacingStarted_22(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStarted_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStarted_22), (void*)value);
	}

	inline static int32_t get_offset_of_onPlacingStopped_23() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___onPlacingStopped_23)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStopped_23() const { return ___onPlacingStopped_23; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStopped_23() { return &___onPlacingStopped_23; }
	inline void set_onPlacingStopped_23(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStopped_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStopped_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectLayerU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___U3CGameObjectLayerU3Ek__BackingField_24)); }
	inline int32_t get_U3CGameObjectLayerU3Ek__BackingField_24() const { return ___U3CGameObjectLayerU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CGameObjectLayerU3Ek__BackingField_24() { return &___U3CGameObjectLayerU3Ek__BackingField_24; }
	inline void set_U3CGameObjectLayerU3Ek__BackingField_24(int32_t value)
	{
		___U3CGameObjectLayerU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_ignoreRaycastLayer_25() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___ignoreRaycastLayer_25)); }
	inline int32_t get_ignoreRaycastLayer_25() const { return ___ignoreRaycastLayer_25; }
	inline int32_t* get_address_of_ignoreRaycastLayer_25() { return &___ignoreRaycastLayer_25; }
	inline void set_ignoreRaycastLayer_25(int32_t value)
	{
		___ignoreRaycastLayer_25 = value;
	}

	inline static int32_t get_offset_of_CurrentRay_26() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___CurrentRay_26)); }
	inline RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  get_CurrentRay_26() const { return ___CurrentRay_26; }
	inline RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * get_address_of_CurrentRay_26() { return &___CurrentRay_26; }
	inline void set_CurrentRay_26(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  value)
	{
		___CurrentRay_26 = value;
	}

	inline static int32_t get_offset_of_DidHitSurface_27() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___DidHitSurface_27)); }
	inline bool get_DidHitSurface_27() const { return ___DidHitSurface_27; }
	inline bool* get_address_of_DidHitSurface_27() { return &___DidHitSurface_27; }
	inline void set_DidHitSurface_27(bool value)
	{
		___DidHitSurface_27 = value;
	}

	inline static int32_t get_offset_of_CurrentHit_28() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___CurrentHit_28)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_CurrentHit_28() const { return ___CurrentHit_28; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_CurrentHit_28() { return &___CurrentHit_28; }
	inline void set_CurrentHit_28(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___CurrentHit_28 = value;
	}

	inline static int32_t get_offset_of_LastTimeClicked_29() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___LastTimeClicked_29)); }
	inline float get_LastTimeClicked_29() const { return ___LastTimeClicked_29; }
	inline float* get_address_of_LastTimeClicked_29() { return &___LastTimeClicked_29; }
	inline void set_LastTimeClicked_29(float value)
	{
		___LastTimeClicked_29 = value;
	}

	inline static int32_t get_offset_of_DoubleClickTimeout_30() { return static_cast<int32_t>(offsetof(TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151, ___DoubleClickTimeout_30)); }
	inline float get_DoubleClickTimeout_30() const { return ___DoubleClickTimeout_30; }
	inline float* get_address_of_DoubleClickTimeout_30() { return &___DoubleClickTimeout_30; }
	inline void set_DoubleClickTimeout_30(float value)
	{
		___DoubleClickTimeout_30 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct  BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF  : public ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___pointerAction_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_23;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_25;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_28;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_33;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_34;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_35;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_tFF04DFF5FDA20B3E103C59064F8FC818EF1BB1B9* ___U3CRaysU3Ek__BackingField_36;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_40;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_41;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_42;

public:
	inline static int32_t get_offset_of_cursorPrefab_11() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___cursorPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_11() const { return ___cursorPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_11() { return &___cursorPrefab_11; }
	inline void set_cursorPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___disableCursorOnStart_12)); }
	inline bool get_disableCursorOnStart_12() const { return ___disableCursorOnStart_12; }
	inline bool* get_address_of_disableCursorOnStart_12() { return &___disableCursorOnStart_12; }
	inline void set_disableCursorOnStart_12(bool value)
	{
		___disableCursorOnStart_12 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___setCursorVisibilityOnSourceDetected_13)); }
	inline bool get_setCursorVisibilityOnSourceDetected_13() const { return ___setCursorVisibilityOnSourceDetected_13; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_13() { return &___setCursorVisibilityOnSourceDetected_13; }
	inline void set_setCursorVisibilityOnSourceDetected_13(bool value)
	{
		___setCursorVisibilityOnSourceDetected_13 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___cursorInstance_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorInstance_14), (void*)value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___raycastOrigin_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastOrigin_15), (void*)value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___activeHoldAction_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___activeHoldAction_16))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___pointerAction_17)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___pointerAction_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pointerAction_17))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_requiresHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___requiresHoldAction_18)); }
	inline bool get_requiresHoldAction_18() const { return ___requiresHoldAction_18; }
	inline bool* get_address_of_requiresHoldAction_18() { return &___requiresHoldAction_18; }
	inline void set_requiresHoldAction_18(bool value)
	{
		___requiresHoldAction_18 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___requiresActionBeforeEnabling_19)); }
	inline bool get_requiresActionBeforeEnabling_19() const { return ___requiresActionBeforeEnabling_19; }
	inline bool* get_address_of_requiresActionBeforeEnabling_19() { return &___requiresActionBeforeEnabling_19; }
	inline void set_requiresActionBeforeEnabling_19(bool value)
	{
		___requiresActionBeforeEnabling_19 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___IsSelectPressed_20)); }
	inline bool get_IsSelectPressed_20() const { return ___IsSelectPressed_20; }
	inline bool* get_address_of_IsSelectPressed_20() { return &___IsSelectPressed_20; }
	inline void set_IsSelectPressed_20(bool value)
	{
		___IsSelectPressed_20 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___HasSelectPressedOnce_21)); }
	inline bool get_HasSelectPressedOnce_21() const { return ___HasSelectPressedOnce_21; }
	inline bool* get_address_of_HasSelectPressedOnce_21() { return &___HasSelectPressedOnce_21; }
	inline void set_HasSelectPressedOnce_21(bool value)
	{
		___HasSelectPressedOnce_21 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___IsHoldPressed_22)); }
	inline bool get_IsHoldPressed_22() const { return ___IsHoldPressed_22; }
	inline bool* get_address_of_IsHoldPressed_22() { return &___IsHoldPressed_22; }
	inline void set_IsHoldPressed_22(bool value)
	{
		___IsHoldPressed_22 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___isCursorInstantiatedFromPrefab_23)); }
	inline bool get_isCursorInstantiatedFromPrefab_23() const { return ___isCursorInstantiatedFromPrefab_23; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_23() { return &___isCursorInstantiatedFromPrefab_23; }
	inline void set_isCursorInstantiatedFromPrefab_23(bool value)
	{
		___isCursorInstantiatedFromPrefab_23 = value;
	}

	inline static int32_t get_offset_of_pointerId_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___pointerId_25)); }
	inline uint32_t get_pointerId_25() const { return ___pointerId_25; }
	inline uint32_t* get_address_of_pointerId_25() { return &___pointerId_25; }
	inline void set_pointerId_25(uint32_t value)
	{
		___pointerId_25 = value;
	}

	inline static int32_t get_offset_of_pointerName_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___pointerName_26)); }
	inline String_t* get_pointerName_26() const { return ___pointerName_26; }
	inline String_t** get_address_of_pointerName_26() { return &___pointerName_26; }
	inline void set_pointerName_26(String_t* value)
	{
		___pointerName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerName_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CInputSourceParentU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_27() const { return ___U3CInputSourceParentU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_27() { return &___U3CInputSourceParentU3Ek__BackingField_27; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CBaseCursorU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_28() const { return ___U3CBaseCursorU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_28() { return &___U3CBaseCursorU3Ek__BackingField_28; }
	inline void set_U3CBaseCursorU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CCursorModifierU3Ek__BackingField_29)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_29() const { return ___U3CCursorModifierU3Ek__BackingField_29; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_29() { return &___U3CCursorModifierU3Ek__BackingField_29; }
	inline void set_U3CCursorModifierU3Ek__BackingField_29(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CIsActiveU3Ek__BackingField_30)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_30() const { return ___U3CIsActiveU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_30() { return &___U3CIsActiveU3Ek__BackingField_30; }
	inline void set_U3CIsActiveU3Ek__BackingField_30(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CIsFocusLockedU3Ek__BackingField_31)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_31() const { return ___U3CIsFocusLockedU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_31() { return &___U3CIsFocusLockedU3Ek__BackingField_31; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_31(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___overrideGlobalPointerExtent_33)); }
	inline bool get_overrideGlobalPointerExtent_33() const { return ___overrideGlobalPointerExtent_33; }
	inline bool* get_address_of_overrideGlobalPointerExtent_33() { return &___overrideGlobalPointerExtent_33; }
	inline void set_overrideGlobalPointerExtent_33(bool value)
	{
		___overrideGlobalPointerExtent_33 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___pointerExtent_34)); }
	inline float get_pointerExtent_34() const { return ___pointerExtent_34; }
	inline float* get_address_of_pointerExtent_34() { return &___pointerExtent_34; }
	inline void set_pointerExtent_34(float value)
	{
		___pointerExtent_34 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___defaultPointerExtent_35)); }
	inline float get_defaultPointerExtent_35() const { return ___defaultPointerExtent_35; }
	inline float* get_address_of_defaultPointerExtent_35() { return &___defaultPointerExtent_35; }
	inline void set_defaultPointerExtent_35(float value)
	{
		___defaultPointerExtent_35 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CRaysU3Ek__BackingField_36)); }
	inline RayStepU5BU5D_tFF04DFF5FDA20B3E103C59064F8FC818EF1BB1B9* get_U3CRaysU3Ek__BackingField_36() const { return ___U3CRaysU3Ek__BackingField_36; }
	inline RayStepU5BU5D_tFF04DFF5FDA20B3E103C59064F8FC818EF1BB1B9** get_address_of_U3CRaysU3Ek__BackingField_36() { return &___U3CRaysU3Ek__BackingField_36; }
	inline void set_U3CRaysU3Ek__BackingField_36(RayStepU5BU5D_tFF04DFF5FDA20B3E103C59064F8FC818EF1BB1B9* value)
	{
		___U3CRaysU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CFocusTargetU3Ek__BackingField_38)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_38() const { return ___U3CFocusTargetU3Ek__BackingField_38; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_38() { return &___U3CFocusTargetU3Ek__BackingField_38; }
	inline void set_U3CFocusTargetU3Ek__BackingField_38(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CResultU3Ek__BackingField_39)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_39() const { return ___U3CResultU3Ek__BackingField_39; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_39() { return &___U3CResultU3Ek__BackingField_39; }
	inline void set_U3CResultU3Ek__BackingField_39(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CRayStabilizerU3Ek__BackingField_40)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_40() const { return ___U3CRayStabilizerU3Ek__BackingField_40; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_40() { return &___U3CRayStabilizerU3Ek__BackingField_40; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_40(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___U3CSceneQueryTypeU3Ek__BackingField_41)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_41() const { return ___U3CSceneQueryTypeU3Ek__BackingField_41; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_41() { return &___U3CSceneQueryTypeU3Ek__BackingField_41; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_41(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_42() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF, ___sphereCastRadius_42)); }
	inline float get_sphereCastRadius_42() const { return ___sphereCastRadius_42; }
	inline float* get_address_of_sphereCastRadius_42() { return &___sphereCastRadius_42; }
	inline void set_sphereCastRadius_42(float value)
	{
		___sphereCastRadius_42 = value;
	}
};

struct BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::SetCursorPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SetCursorPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnSourceLostPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnSourceLostPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputUpPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputUpPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputDownPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputDownPerfMarker_46;

public:
	inline static int32_t get_offset_of_SetCursorPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields, ___SetCursorPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SetCursorPerfMarker_24() const { return ___SetCursorPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SetCursorPerfMarker_24() { return &___SetCursorPerfMarker_24; }
	inline void set_SetCursorPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SetCursorPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_43() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields, ___OnPostSceneQueryPerfMarker_43)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_43() const { return ___OnPostSceneQueryPerfMarker_43; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_43() { return &___OnPostSceneQueryPerfMarker_43; }
	inline void set_OnPostSceneQueryPerfMarker_43(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_44() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields, ___OnSourceLostPerfMarker_44)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnSourceLostPerfMarker_44() const { return ___OnSourceLostPerfMarker_44; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnSourceLostPerfMarker_44() { return &___OnSourceLostPerfMarker_44; }
	inline void set_OnSourceLostPerfMarker_44(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnSourceLostPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_OnInputUpPerfMarker_45() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields, ___OnInputUpPerfMarker_45)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputUpPerfMarker_45() const { return ___OnInputUpPerfMarker_45; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputUpPerfMarker_45() { return &___OnInputUpPerfMarker_45; }
	inline void set_OnInputUpPerfMarker_45(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputUpPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_OnInputDownPerfMarker_46() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF_StaticFields, ___OnInputDownPerfMarker_46)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputDownPerfMarker_46() const { return ___OnInputDownPerfMarker_46; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputDownPerfMarker_46() { return &___OnInputDownPerfMarker_46; }
	inline void set_OnInputDownPerfMarker_46(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputDownPerfMarker_46 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct  HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3  : public HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::facingCameraTrackingThreshold
	float ___facingCameraTrackingThreshold_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::requireFlatHand
	bool ___requireFlatHand_28;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::flatHandThreshold
	float ___flatHandThreshold_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::followHandUntilFacingCamera
	bool ___followHandUntilFacingCamera_30;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::followHandCameraFacingThresholdAngle
	float ___followHandCameraFacingThresholdAngle_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::useGazeActivation
	bool ___useGazeActivation_32;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::eyeGazeProximityThreshold
	float ___eyeGazeProximityThreshold_33;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::headGazeProximityThreshold
	float ___headGazeProximityThreshold_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::gazeActivationAlreadyTriggered
	bool ___gazeActivationAlreadyTriggered_35;

public:
	inline static int32_t get_offset_of_facingCameraTrackingThreshold_27() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___facingCameraTrackingThreshold_27)); }
	inline float get_facingCameraTrackingThreshold_27() const { return ___facingCameraTrackingThreshold_27; }
	inline float* get_address_of_facingCameraTrackingThreshold_27() { return &___facingCameraTrackingThreshold_27; }
	inline void set_facingCameraTrackingThreshold_27(float value)
	{
		___facingCameraTrackingThreshold_27 = value;
	}

	inline static int32_t get_offset_of_requireFlatHand_28() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___requireFlatHand_28)); }
	inline bool get_requireFlatHand_28() const { return ___requireFlatHand_28; }
	inline bool* get_address_of_requireFlatHand_28() { return &___requireFlatHand_28; }
	inline void set_requireFlatHand_28(bool value)
	{
		___requireFlatHand_28 = value;
	}

	inline static int32_t get_offset_of_flatHandThreshold_29() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___flatHandThreshold_29)); }
	inline float get_flatHandThreshold_29() const { return ___flatHandThreshold_29; }
	inline float* get_address_of_flatHandThreshold_29() { return &___flatHandThreshold_29; }
	inline void set_flatHandThreshold_29(float value)
	{
		___flatHandThreshold_29 = value;
	}

	inline static int32_t get_offset_of_followHandUntilFacingCamera_30() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___followHandUntilFacingCamera_30)); }
	inline bool get_followHandUntilFacingCamera_30() const { return ___followHandUntilFacingCamera_30; }
	inline bool* get_address_of_followHandUntilFacingCamera_30() { return &___followHandUntilFacingCamera_30; }
	inline void set_followHandUntilFacingCamera_30(bool value)
	{
		___followHandUntilFacingCamera_30 = value;
	}

	inline static int32_t get_offset_of_followHandCameraFacingThresholdAngle_31() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___followHandCameraFacingThresholdAngle_31)); }
	inline float get_followHandCameraFacingThresholdAngle_31() const { return ___followHandCameraFacingThresholdAngle_31; }
	inline float* get_address_of_followHandCameraFacingThresholdAngle_31() { return &___followHandCameraFacingThresholdAngle_31; }
	inline void set_followHandCameraFacingThresholdAngle_31(float value)
	{
		___followHandCameraFacingThresholdAngle_31 = value;
	}

	inline static int32_t get_offset_of_useGazeActivation_32() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___useGazeActivation_32)); }
	inline bool get_useGazeActivation_32() const { return ___useGazeActivation_32; }
	inline bool* get_address_of_useGazeActivation_32() { return &___useGazeActivation_32; }
	inline void set_useGazeActivation_32(bool value)
	{
		___useGazeActivation_32 = value;
	}

	inline static int32_t get_offset_of_eyeGazeProximityThreshold_33() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___eyeGazeProximityThreshold_33)); }
	inline float get_eyeGazeProximityThreshold_33() const { return ___eyeGazeProximityThreshold_33; }
	inline float* get_address_of_eyeGazeProximityThreshold_33() { return &___eyeGazeProximityThreshold_33; }
	inline void set_eyeGazeProximityThreshold_33(float value)
	{
		___eyeGazeProximityThreshold_33 = value;
	}

	inline static int32_t get_offset_of_headGazeProximityThreshold_34() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___headGazeProximityThreshold_34)); }
	inline float get_headGazeProximityThreshold_34() const { return ___headGazeProximityThreshold_34; }
	inline float* get_address_of_headGazeProximityThreshold_34() { return &___headGazeProximityThreshold_34; }
	inline void set_headGazeProximityThreshold_34(float value)
	{
		___headGazeProximityThreshold_34 = value;
	}

	inline static int32_t get_offset_of_gazeActivationAlreadyTriggered_35() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3, ___gazeActivationAlreadyTriggered_35)); }
	inline bool get_gazeActivationAlreadyTriggered_35() const { return ___gazeActivationAlreadyTriggered_35; }
	inline bool* get_address_of_gazeActivationAlreadyTriggered_35() { return &___gazeActivationAlreadyTriggered_35; }
	inline void set_gazeActivationAlreadyTriggered_35(bool value)
	{
		___gazeActivationAlreadyTriggered_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct  LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C  : public BaseControllerPointer_t2E3FEBDC2045E7D8A1EBF11C982A2678B2E3FFBF
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_47;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_48;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_49;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_50;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_51;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_t8D8BD4F654DD8C6E41A1C670CD1DB5AAC36E7138 * ___lineBase_52;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_t47803979E70399CA4772811ACFFC752E870FA93A* ___lineRenderers_53;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineStartPoint_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineEndPoint_55;

public:
	inline static int32_t get_offset_of_LineColorSelected_47() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___LineColorSelected_47)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_47() const { return ___LineColorSelected_47; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_47() { return &___LineColorSelected_47; }
	inline void set_LineColorSelected_47(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorSelected_47), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorValid_48() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___LineColorValid_48)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_48() const { return ___LineColorValid_48; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_48() { return &___LineColorValid_48; }
	inline void set_LineColorValid_48(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorValid_48), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_49() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___LineColorInvalid_49)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_49() const { return ___LineColorInvalid_49; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_49() { return &___LineColorInvalid_49; }
	inline void set_LineColorInvalid_49(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorInvalid_49), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_50() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___LineColorNoTarget_50)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_50() const { return ___LineColorNoTarget_50; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_50() { return &___LineColorNoTarget_50; }
	inline void set_LineColorNoTarget_50(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorNoTarget_50), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_51() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___LineColorLockFocus_51)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_51() const { return ___LineColorLockFocus_51; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_51() { return &___LineColorLockFocus_51; }
	inline void set_LineColorLockFocus_51(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorLockFocus_51), (void*)value);
	}

	inline static int32_t get_offset_of_lineBase_52() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___lineBase_52)); }
	inline BaseMixedRealityLineDataProvider_t8D8BD4F654DD8C6E41A1C670CD1DB5AAC36E7138 * get_lineBase_52() const { return ___lineBase_52; }
	inline BaseMixedRealityLineDataProvider_t8D8BD4F654DD8C6E41A1C670CD1DB5AAC36E7138 ** get_address_of_lineBase_52() { return &___lineBase_52; }
	inline void set_lineBase_52(BaseMixedRealityLineDataProvider_t8D8BD4F654DD8C6E41A1C670CD1DB5AAC36E7138 * value)
	{
		___lineBase_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineBase_52), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderers_53() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___lineRenderers_53)); }
	inline BaseMixedRealityLineRendererU5BU5D_t47803979E70399CA4772811ACFFC752E870FA93A* get_lineRenderers_53() const { return ___lineRenderers_53; }
	inline BaseMixedRealityLineRendererU5BU5D_t47803979E70399CA4772811ACFFC752E870FA93A** get_address_of_lineRenderers_53() { return &___lineRenderers_53; }
	inline void set_lineRenderers_53(BaseMixedRealityLineRendererU5BU5D_t47803979E70399CA4772811ACFFC752E870FA93A* value)
	{
		___lineRenderers_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderers_53), (void*)value);
	}

	inline static int32_t get_offset_of_lineStartPoint_54() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___lineStartPoint_54)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineStartPoint_54() const { return ___lineStartPoint_54; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineStartPoint_54() { return &___lineStartPoint_54; }
	inline void set_lineStartPoint_54(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineStartPoint_54 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_55() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C, ___lineEndPoint_55)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineEndPoint_55() const { return ___lineEndPoint_55; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineEndPoint_55() { return &___lineEndPoint_55; }
	inline void set_lineEndPoint_55(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineEndPoint_55 = value;
	}
};

struct LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPreSceneQueryPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PreUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PreUpdateLineRenderersPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PostUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PostUpdateLineRenderersPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::UpdateRaysPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateRaysPerfMarker_60;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_56() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields, ___OnPreSceneQueryPerfMarker_56)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPreSceneQueryPerfMarker_56() const { return ___OnPreSceneQueryPerfMarker_56; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPreSceneQueryPerfMarker_56() { return &___OnPreSceneQueryPerfMarker_56; }
	inline void set_OnPreSceneQueryPerfMarker_56(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPreSceneQueryPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_57() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields, ___OnPostSceneQueryPerfMarker_57)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_57() const { return ___OnPostSceneQueryPerfMarker_57; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_57() { return &___OnPostSceneQueryPerfMarker_57; }
	inline void set_OnPostSceneQueryPerfMarker_57(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_PreUpdateLineRenderersPerfMarker_58() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields, ___PreUpdateLineRenderersPerfMarker_58)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PreUpdateLineRenderersPerfMarker_58() const { return ___PreUpdateLineRenderersPerfMarker_58; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PreUpdateLineRenderersPerfMarker_58() { return &___PreUpdateLineRenderersPerfMarker_58; }
	inline void set_PreUpdateLineRenderersPerfMarker_58(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PreUpdateLineRenderersPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_PostUpdateLineRenderersPerfMarker_59() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields, ___PostUpdateLineRenderersPerfMarker_59)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PostUpdateLineRenderersPerfMarker_59() const { return ___PostUpdateLineRenderersPerfMarker_59; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PostUpdateLineRenderersPerfMarker_59() { return &___PostUpdateLineRenderersPerfMarker_59; }
	inline void set_PostUpdateLineRenderersPerfMarker_59(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PostUpdateLineRenderersPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_UpdateRaysPerfMarker_60() { return static_cast<int32_t>(offsetof(LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_StaticFields, ___UpdateRaysPerfMarker_60)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateRaysPerfMarker_60() const { return ___UpdateRaysPerfMarker_60; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateRaysPerfMarker_60() { return &___UpdateRaysPerfMarker_60; }
	inline void set_UpdateRaysPerfMarker_60(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateRaysPerfMarker_60 = value;
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
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * m_Items[1];

public:
	inline Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
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
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mEC1DCED208A691B143EF3493E343676EE4E5B705_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m91CB6B12D3659888D1725B10A236E2732E536325_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_m31E158469D54828418FAAF1C5E35F7348F32330F_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingCameraTrackingThreshold()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingCameraTrackingThreshold_m013269D80CB2EE84E08E40C4F906657A852F6170_inline (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingCameraTrackingThreshold(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingCameraTrackingThreshold_m503991666228C3A279AF81BC34AE701F5B25CE48_inline (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_mF5A0F5A1AAABCE9405E9437A7286000992DA0E89 (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Up_m76427D611ECA5E74B10816DFC242651A0E550F02 (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsPalmMeetingThresholdRequirements(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___palmPose1, float ___palmCameraAngle2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_RotationBehavior(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/SolverRotationBehavior)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraint_set_RotationBehavior_m4DFC626AF3FA66585581D6FA9B83ED04DD5720DC_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OffsetBehavior(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/SolverOffsetBehavior)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraint_set_OffsetBehavior_m036272D62181A51D75A2CC304EF83D4A9570BDEC_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsUserGazeMeetingThresholdRequirements(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRayUtils::TryGetRay(Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Ray&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRayUtils_TryGetRay_mAE5D23538B2A5F8B9C838DDAEF60418BDD687A8C (int32_t ___sourceType0, uint8_t ___hand1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * ___ray2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::TryGenerateHandPlaneAndActivationPoint(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,UnityEngine.Plane&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_TryGenerateHandPlaneAndActivationPoint_m5CA7C2F8DD23FAD1B85131027471A5ABB41E0953 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___handPlane1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___activationPoint2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_ClosestPointOnPlane_m5BD59F43459CAC4A3CEA9F763455C23E3162A4AE (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::WorldLockedReattachCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraintPalmUp_WorldLockedReattachCheck_m8E9D0741E717154590E55DB1074488E62FB1680A (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m231D58E7BD9DADE44EFD56F5B13677CF81ACD64C (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___c2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::TryGenerateActivationPoint(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_TryGenerateActivationPoint_mE9D1A30585F35D0EF63FBBEBEED9453145C111D8 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___activationPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_SafeZone()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandConstraint_get_SafeZone_m4A9398DC62E3C6994C66CD0DA3FD1603AA4E392F_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__42__ctor_m75FE4846C6CD8703CD7AC23F3EE6B1C8CB0A198F (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint_OnEnable_m8346448348E99D6EF7BDDA3C598D397C3B6C1414 (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraint__ctor_m6AAFBED936376D4CF758B1B5D6CFF4DBF5A45BDA (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m390DE358BF7066A94F75950910C072758D5A0C65_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::GetController(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_GetController_mD259370430EB7DF0B4C4B88ED28E994BFDD283FA (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * GameObject_AddComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m455A87CD3FC137A413BD066BD112541290F2E0D0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m2A316947F7DE91CFD7F6E83604AADADBB5F13D22 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m01C5E049E90500E61BC6F12736763B03C4AC8294 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m646352419E76B01F8DCE16291664156C71A9AB32 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_mEA5D74A740D42EE91D5614DCF07EB487A2E40F2C (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mF170066F49825EBA3D804F7658A2A681B1E0CF7D (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mF7803C7EDB831D20D055F299C2504681E3EA30DB (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m138347E36DC629F3792EAFD0F3A7AE25D89F6F4B (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m5B7CA0443A61694AC72847D96B73D9AF07DA9EAC (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m6D8EA962D4EE5F1D8C2D0C1D7E5832C53E4BCEFF (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m375F6219E731A88BA061091A84B6CFFD360A8A3E (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m0518FC680A1323194557B4F98A2BF64E6F3FE4CB (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_mE5DDA6CDEC5FD88C750B4AC6E0E133CCDFD07946 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m98139761A4205EC6A94114BE242A5221D4E66D01 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_mE6E37E1B85EDCE9541CE0A5B232549ED285D2E17 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_mA0B6A30E371C58778F8EA83858949AFCE8F88965 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mBBE7BE2A5C25181F6EF9221F3EBBB4430AB440CE (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m0CF411EBA0F12BA140842529958A25CB0BA4F01A (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mD9B16468029365B764FCF82C0CF21CF1E47BF8DA (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m3EF82A03B4DE55EA88726F68C8B750D982EA3282_inline (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m4546A61D4000A985ADAABED1178A1DA454F6B282_inline (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m61841992F5F387E654AECDCAD908AED04FEA127A_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mDB5F5B39478017CAE701D482C7CA1D1564F5018F_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m2D2A75CE0C280A4C6F3654E71A526C6146C047BC_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_mD226BDF8CDF3DF4D22742113703F205CC4B91C9C_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mF5209DB2291D45A89518EE5B28B60A6E7AA8A83B (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * Component_GetComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m26AD98AA4510DAEC40229D04C6525707022691BD (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m5881BDAF414A1E7F39F1640E64F6B0D0521DC819 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mA2311CFE0CFBD386CACD01DB228154DADFDF3295 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___solver0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m144B59C949B76A50EB9E9898D256807C9D6085A1 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m313B408176A863BAD6747B938B42D271069ACB2D (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m1E1733E567BD9566E9B3922745486866E19F1A94 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m2B2EF59838330F8A4E55D1008B3EC760DBF34F48 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4EA9D269E7106B915E2266F85DF25362CC1AD839 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m373FBA345E09BDBD15591C9A841C724D95917425 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mB15006B4D0EF976D80BEA019D29A3B81D7099473 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m69E3C484B582C736702E12E3459EAC47DF648A1D (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_mF5075FD1463EBB894409CC0F0CC17F3C7360FD62 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m558031AC6E76AA1B0B0E82DDAF68BBA10D40A35D (int32_t ___type0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m262F9036782D88AA6EA144DB15109B4A2E4898D1 (uint8_t ___hand0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * List_1_AsReadOnly_m54F67B0D484AD0899C3C9DF83D615AA9E83D1647 (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, const RuntimeMethod*))List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_m382FDC72BB804BF1154933BDEADE125EAB54FC74 (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m35584E5341D8C0258780FCFB7018896EA46C8F23 (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_mBF44868F4662A620ABB5A02915B9CEAA40233FF9 (uint8_t ___current0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_m74E725A996DB57EF446B5416ED46E7DC7C572BA1 (uint8_t ___current0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_m157BD67D3A89CD38DB0A6A09A304895FD715E1EE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mEC1DCED208A691B143EF3493E343676EE4E5B705_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_mEFF209F2352637A8F8CAA900CD8E93EB4F26309B (Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, float ___smoothingTime1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m146DC120FA7DB5B0F5B8B195E8044A18B21C5358_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mFD25A298BB95498C1C4310C54AC4B10285F5DA64_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m456EB110CA3946CC75DE75CEB0A31FDF6E9A9F4B (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* Component_GetComponents_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m95D3DA607B4F8572D22EBB9CEBA9756505669DF1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m211D087C671701B56FA6CCEB748AF4A87A4A4ABF (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mB1ED8DC71CF0A395FFCC0BD9BD383D926084D254 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m58919CFFC4B8E0C0D1B08F11EBA3228F7EAE6558 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared)(___first0, ___second1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * CollectionsExtensions_ToReadOnlyCollection_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m7B6A4FB0600C7D3701BC44F58190250B8CD733BB (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m91CB6B12D3659888D1725B10A236E2732E536325_gshared)(___elements0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m348FEA1934ACA6C4A5AB92C130533B22A9473EF5 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * List_1_get_Item_m8D016F17C5E3A4B810F5BE9D1EBED518F41D571A_inline (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m6EB8C7846429463B253385DFE569F067B7D8D3E9 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_m2D31D93EA08BC6AE15A1C36CDD955F2E0C41A806_inline (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_mF7CE5C524D8BBF55DBDF16D0905DDE14A2701C2A (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_m457BA0F54E13309C7EF4ED4A34F252959E6C487B (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_m959E10B2C5B4E2F34A7D8766BAE64AA63066C528 (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_m31E158469D54828418FAAF1C5E35F7348F32330F_gshared)(___handedness0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m24D6C76BCFB756F5BF9602DA8FB125C4653473A9 (uint8_t ___current0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m2E92554BFEB284727CD6D93D9B3EF4587E606E47_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mF7880ACE7791FB37EA04B0037135ECD9E7E339BF (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m01A36727E627799ABC651B50DEE4B8FF24230DE2_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mF995DA1310451AB41F09D76A30733F723F2838C3_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerPoseSynchronizer_get_IsTracked_mFB129D0DF4365BE473FC7A75132F11786FB0D6BC (ControllerPoseSynchronizer_t79519A92A2A20F09D946CD7669608F4EA49583FC * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_m3819283C1B674A19E30E98C8E71DF2AB7CDBC25C (uint8_t ___current0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_mF20F4E0A946A50D6D829C9D8B9823C7A168690DB (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m06045B0DF1A977E7EFAF8FC06F5E67E3E9B87AB0_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  SolverHandler_get_AltScale_m0A60DA8B77606C3868E87DC943A1603F42E9272D_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m308A2967475B5A6244EB6F75090F2D9700C60AEF_inline (Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m85823D16D53DCF579EACCE92190B2C75EA685AD7_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mA55ADC3AE92C6CE7BB74AC60BDBFA00600F8CA92_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mE27C49037313B039029C1AB8093FE55FD8B4B371 (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m5752160BF8758DAF8E6D077E3845A4A9C8ECF883_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_mEE95F28FACFC1997E4753F7E60456AF18B50C475_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m34CF53FB5EB54A15CC8072050E79C09919CA72BB_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m7456043639A20732E4CF56764B58490682D9EAA4 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m4884DA369E6E96ACDF2B8FB387BE40BDF0EC301C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mC07909A28FBB25B74345B08E6E4550B5BF88807C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_mF39FC246F1C6CA29DA541903CDC2148BB0052995 (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  ___step0, float ___maxDistance1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_mE277C229C48319068DAFA67E972B70128676E340 (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_mC36D102B66C6A28EDCA5FE822DBE01F76DA8447E (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  ___step0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___points9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___normals10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** ___hits11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m5CCD7E3512700B9A9444A7284E6A36ED0129B3DB (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mAC6314CCB7CFD4B48CB59D2AC53F57B6EC011D02 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inNormal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_m6C466C798C8F84C9F3AAF7F2C04AFA6BAC69AA9C (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58 (const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m8E7E470F404AC94D4D9C8ADE3B20781974E099DE_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901 (String_t* ___layerName0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mC4FF918739AEA89B3E8EE3517191D49611977C99_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m014EF25F89B1324478310D974AF019781E62E4C9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m01B86CC0077C2E55EED7D467AD73BE5B209C7396_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m33E4A0F27D0ABDFE1EA8DAC8E004E09A11FECEB9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m20A938CA807044E7BC7FCF0A0EBED50D71F81FAF_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_mAE8E77B4B82CC245FEDB13609BEEF7E3A60655A2_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m2AD4E171698A409C490A8976AC308E71BBC93ED9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_mCE35496D0352A60B7F53A68208E2E0BC0E5AFC46_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mBDB32103FA9C3FF8ADBCD6B30DB678079C842250_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m547ED0E82B942C5B6A037B2A9BD095080827AA15_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m7498679B627B4318283E0DDF82F639D11C35B56A_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m62212B51D6ECAF2A5741BA9931962A5123411F65 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__51__ctor_mDAF06900F979D5554E8D517B9BCC04F0FAB0286D (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__51_System_IDisposable_Dispose_m1A0243EE3F7C17731CF8E7858D9CF104202EA47A (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CToggleCursorsU3Ed__51_MoveNext_m215C99A9B4B4727FB45E74EE4DF7A9F2072CED65 (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__51_MoveNext_m215C99A9B4B4727FB45E74EE4DF7A9F2072CED65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* G_B15_0 = NULL;
	U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * G_B15_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * G_B14_1 = NULL;
	IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* G_B16_0 = NULL;
	U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * G_B16_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (controller == null)
		RuntimeObject* L_3 = __this->get_controller_2();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0030:
	{
		// if (hideHandCursorsOnActivate)
		HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_5);
		bool L_6 = L_5->get_hideHandCursorsOnActivate_16();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00f2;
		}
	}
	{
		// if (frameDelay)
		bool L_8 = __this->get_frameDelay_4();
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0066:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		RuntimeObject* L_10 = __this->get_controller_2();
		RuntimeObject* L_11 = L_10;
		G_B14_0 = L_11;
		G_B14_1 = __this;
		if (L_11)
		{
			G_B15_0 = L_11;
			G_B15_1 = __this;
			goto IL_0075;
		}
	}
	{
		G_B16_0 = ((IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)(NULL));
		G_B16_1 = G_B14_1;
		goto IL_007f;
	}

IL_0075:
	{
		NullCheck(G_B15_0);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tE328C8BD991056668984D67A323E3143DDD5CD31_il2cpp_TypeInfo_var, G_B15_0);
		NullCheck(L_12);
		IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* L_13 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tAA20C112E0AFFD46BA331685ACADCB90DC9D13E9_il2cpp_TypeInfo_var, L_12);
		G_B16_0 = L_13;
		G_B16_1 = G_B15_1;
	}

IL_007f:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_U3CU3Es__1_6(G_B16_0);
		__this->set_U3CU3Es__2_7(0);
		goto IL_00da;
	}

IL_008d:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* L_14 = __this->get_U3CU3Es__1_6();
		int32_t L_15 = __this->get_U3CU3Es__2_7();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_U3CpointerU3E5__3_8(L_17);
		// pointer?.BaseCursor?.SetVisibility(visible);
		RuntimeObject* L_18 = __this->get_U3CpointerU3E5__3_8();
		RuntimeObject* L_19 = L_18;
		G_B18_0 = L_19;
		if (L_19)
		{
			G_B19_0 = L_19;
			goto IL_00ad;
		}
	}
	{
		goto IL_00c4;
	}

IL_00ad:
	{
		NullCheck(G_B19_0);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tA64958356FC4ABDCB3CF2CFC334E3DA65A885D78_il2cpp_TypeInfo_var, G_B19_0);
		RuntimeObject* L_21 = L_20;
		G_B20_0 = L_21;
		if (L_21)
		{
			G_B21_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_22 = __this->get_visible_3();
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_tC30C3A1B4B3E241A9ADEC73BDE00E12F30BF3749_il2cpp_TypeInfo_var, G_B21_0, L_22);
	}

IL_00c4:
	{
		__this->set_U3CpointerU3E5__3_8((RuntimeObject*)NULL);
		int32_t L_23 = __this->get_U3CU3Es__2_7();
		__this->set_U3CU3Es__2_7(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00da:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		int32_t L_24 = __this->get_U3CU3Es__2_7();
		IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17* L_25 = __this->get_U3CU3Es__1_6();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_008d;
		}
	}
	{
		__this->set_U3CU3Es__1_6((IMixedRealityPointerU5BU5D_t7E917B8256E48234C77090E598A651A0957D0D17*)NULL);
	}

IL_00f2:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52013E9DD5A7080453BC26C8288E0ACB98FFC869 (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_Reset_mCD7BEA6601172E930C68176BB3ABD0F3701C7C28 (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_Reset_mCD7BEA6601172E930C68176BB3ABD0F3701C7C28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_Reset_mCD7BEA6601172E930C68176BB3ABD0F3701C7C28_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__51_System_Collections_IEnumerator_get_Current_m92D05D1D9F737AA3D156FD46D2CA17030A89859E (U3CToggleCursorsU3Ed__51_t213B0AFB07CDD4AEDF4EBD3EA6FA386EE63F2902 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingCameraTrackingThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingCameraTrackingThreshold_m013269D80CB2EE84E08E40C4F906657A852F6170 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => facingCameraTrackingThreshold;
		float L_0 = __this->get_facingCameraTrackingThreshold_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingCameraTrackingThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingCameraTrackingThreshold_m503991666228C3A279AF81BC34AE701F5B25CE48 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => facingCameraTrackingThreshold = value;
		float L_0 = ___value0;
		__this->set_facingCameraTrackingThreshold_27(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingThreshold_m2F227548E71E88F3CBB140A66099378755D5A9C2 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => FacingCameraTrackingThreshold;
		float L_0 = HandConstraintPalmUp_get_FacingCameraTrackingThreshold_m013269D80CB2EE84E08E40C4F906657A852F6170_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingThreshold_mC2A2ABF34A5D3E0553EC73CC1ACF42AD885852D0 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => FacingCameraTrackingThreshold = value;
		float L_0 = ___value0;
		HandConstraintPalmUp_set_FacingCameraTrackingThreshold_m503991666228C3A279AF81BC34AE701F5B25CE48_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_RequireFlatHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_RequireFlatHand_m2748253CAF6FF6BE2CD2C422EE2B615018B1FA3E (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => requireFlatHand;
		bool L_0 = __this->get_requireFlatHand_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_RequireFlatHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_RequireFlatHand_mE55ED6CF339F442B5C7184319B40D7038CFCA4AC (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => requireFlatHand = value;
		bool L_0 = ___value0;
		__this->set_requireFlatHand_28(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FlatHandThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FlatHandThreshold_m6A55700AFE7761E7C1F1F11B004D18C8A9273721 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => flatHandThreshold;
		float L_0 = __this->get_flatHandThreshold_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FlatHandThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FlatHandThreshold_mC53CB35C147C53E85E1BE7E3B865C3C4C98E3A98 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => flatHandThreshold = value;
		float L_0 = ___value0;
		__this->set_flatHandThreshold_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FollowHandUntilFacingCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_FollowHandUntilFacingCamera_mE080CEE1484C709617F9A4FF36B14204A4A600C9 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => followHandUntilFacingCamera;
		bool L_0 = __this->get_followHandUntilFacingCamera_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FollowHandUntilFacingCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FollowHandUntilFacingCamera_m151CFBE2EBFA0C4E8A32607CEC3B48EA2A3EBC60 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => followHandUntilFacingCamera = value;
		bool L_0 = ___value0;
		__this->set_followHandUntilFacingCamera_30(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FollowHandCameraFacingThresholdAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FollowHandCameraFacingThresholdAngle_m5749AB8861C96F18EC8D7E740EB686B02B199B73 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => followHandCameraFacingThresholdAngle;
		float L_0 = __this->get_followHandCameraFacingThresholdAngle_31();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FollowHandCameraFacingThresholdAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FollowHandCameraFacingThresholdAngle_mF164E601C793E72D1861B4FEC412A01BB5CED4AC (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => followHandCameraFacingThresholdAngle = value;
		float L_0 = ___value0;
		__this->set_followHandCameraFacingThresholdAngle_31(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_UseGazeActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_UseGazeActivation_m31A3F9B751BFE2D3CE13CC08028174B455C21682 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => useGazeActivation;
		bool L_0 = __this->get_useGazeActivation_32();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_UseGazeActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_UseGazeActivation_m7F113A28126899D7BB4EE0956D51C4D259811483 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useGazeActivation = value;
		bool L_0 = ___value0;
		__this->set_useGazeActivation_32(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_EyeGazeProximityThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_EyeGazeProximityThreshold_m599A7368594570B8908A490972CB39365954BE84 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => eyeGazeProximityThreshold;
		float L_0 = __this->get_eyeGazeProximityThreshold_33();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_EyeGazeProximityThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_EyeGazeProximityThreshold_m02A05F85D7A96FC2178261352BE97E8C406A690E (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => eyeGazeProximityThreshold = value;
		float L_0 = ___value0;
		__this->set_eyeGazeProximityThreshold_33(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_HeadGazeProximityThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_HeadGazeProximityThreshold_m1805B701B9EC6553BECD988C94FD42C3C3B840DE (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => headGazeProximityThreshold;
		float L_0 = __this->get_headGazeProximityThreshold_34();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_HeadGazeProximityThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_HeadGazeProximityThreshold_mA3F278387800C06EA40CD535A06F2F46EB04D4CC (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => headGazeProximityThreshold = value;
		float L_0 = ___value0;
		__this->set_headGazeProximityThreshold_34(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsValidController_m2E24C6C2BF95FE3EBD18DAF01E3C21D732DA94E7 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsValidController_m2E24C6C2BF95FE3EBD18DAF01E3C21D732DA94E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (!base.IsValidController(controller))
		RuntimeObject* L_0 = ___controller0;
		bool L_1 = HandConstraint_IsValidController_mF5A0F5A1AAABCE9405E9437A7286000992DA0E89(__this, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_012d;
	}

IL_0017:
	{
		// bool palmFacingThresholdMet = false;
		V_0 = (bool)0;
		// if (controller is IMixedRealityHand jointedHand)
		RuntimeObject* L_3 = ___controller0;
		RuntimeObject* L_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var));
		V_1 = L_4;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0129;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.Palm, out MixedRealityPose palmPose))
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_6, 2, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_5));
		V_6 = L_7;
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_0103;
		}
	}
	{
		// float palmCameraAngle = Vector3.Angle(palmPose.Up, CameraCache.Main.transform.forward);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = MixedRealityPose_get_Up_m76427D611ECA5E74B10816DFC242651A0E550F02((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_5), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_13 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_9, L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		// palmFacingThresholdMet = IsPalmMeetingThresholdRequirements(jointedHand, palmPose, palmCameraAngle);
		RuntimeObject* L_14 = V_1;
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  L_15 = V_5;
		float L_16 = V_7;
		bool L_17 = HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// if (palmFacingThresholdMet)
		bool L_18 = V_0;
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00ec;
		}
	}
	{
		// if (followHandUntilFacingCamera)
		bool L_20 = __this->get_followHandUntilFacingCamera_30();
		V_9 = L_20;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00b6;
		}
	}
	{
		// if (palmCameraAngle > followHandCameraFacingThresholdAngle)
		float L_22 = V_7;
		float L_23 = __this->get_followHandCameraFacingThresholdAngle_31();
		V_10 = (bool)((((float)L_22) > ((float)L_23))? 1 : 0);
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		// RotationBehavior = SolverRotationBehavior.LookAtTrackedObject;
		HandConstraint_set_RotationBehavior_m4DFC626AF3FA66585581D6FA9B83ED04DD5720DC_inline(__this, 3, /*hidden argument*/NULL);
		// OffsetBehavior = SolverOffsetBehavior.TrackedObjectRotation;
		HandConstraint_set_OffsetBehavior_m036272D62181A51D75A2CC304EF83D4A9570BDEC_inline(__this, 1, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_00a3:
	{
		// RotationBehavior = SolverRotationBehavior.LookAtMainCamera;
		HandConstraint_set_RotationBehavior_m4DFC626AF3FA66585581D6FA9B83ED04DD5720DC_inline(__this, 2, /*hidden argument*/NULL);
		// OffsetBehavior = SolverOffsetBehavior.LookAtCameraRotation;
		HandConstraint_set_OffsetBehavior_m036272D62181A51D75A2CC304EF83D4A9570BDEC_inline(__this, 0, /*hidden argument*/NULL);
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		// if (useGazeActivation && (!gazeActivationAlreadyTriggered || !SolverHandler.UpdateSolvers))
		bool L_25 = __this->get_useGazeActivation_32();
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_26 = __this->get_gazeActivationAlreadyTriggered_35();
		if (!L_26)
		{
			goto IL_00d6;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_27 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		bool L_28 = SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978_inline(L_27, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B14_0 = 1;
	}

IL_00d7:
	{
		G_B16_0 = G_B14_0;
		goto IL_00da;
	}

IL_00d9:
	{
		G_B16_0 = 0;
	}

IL_00da:
	{
		V_11 = (bool)G_B16_0;
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00eb;
		}
	}
	{
		// return IsUserGazeMeetingThresholdRequirements(jointedHand);
		RuntimeObject* L_30 = V_1;
		bool L_31 = HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35(__this, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		goto IL_012d;
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		// if (!palmFacingThresholdMet)
		bool L_32 = V_0;
		V_12 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_12;
		if (!L_33)
		{
			goto IL_00ff;
		}
	}
	{
		// gazeActivationAlreadyTriggered = false;
		__this->set_gazeActivationAlreadyTriggered_35((bool)0);
	}

IL_00ff:
	{
		// return palmFacingThresholdMet;
		bool L_34 = V_0;
		V_3 = L_34;
		goto IL_012d;
	}

IL_0103:
	{
		// Debug.LogWarning($"HandConstraintPalmUp requires a palm joint, but none was provided by {controller.InputSource.SourceName}.");
		RuntimeObject* L_35 = ___controller0;
		NullCheck(L_35);
		RuntimeObject* L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tE328C8BD991056668984D67A323E3143DDD5CD31_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		String_t* L_37 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t0073FC33F5F6BD61F502D77FA5B6C90A6B22E210_il2cpp_TypeInfo_var, L_36);
		String_t* L_38 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralEAE76D1FEF7514784ED8CF0160EC45D84D098ADA, L_37, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_38, /*hidden argument*/NULL);
		// return palmFacingThresholdMet;
		bool L_39 = V_0;
		V_3 = L_39;
		goto IL_012d;
	}

IL_0129:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_012d;
	}

IL_012d:
	{
		// }
		bool L_40 = V_3;
		return L_40;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsPalmMeetingThresholdRequirements(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  ___palmPose1, float ___palmCameraAngle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	float G_B8_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	{
		// if (requireFlatHand)
		bool L_0 = __this->get_requireFlatHand_28();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.IndexTip, out indexTipPose) &&
		//     jointedHand.TryGetJoint(TrackedHandJoint.RingTip, out ringTipPose))
		RuntimeObject* L_2 = ___jointedHand0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_2, ((int32_t)11), (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_1));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_4 = ___jointedHand0;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_4, ((int32_t)21), (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2));
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
	}

IL_0028:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00a4;
		}
	}
	{
		// var handNormal = Vector3.Cross(indexTipPose.Position - palmPose.Position,
		//                                ringTipPose.Position - indexTipPose.Position).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&___palmPose1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_9, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_4 = L_14;
		// handNormal *= (jointedHand.ControllerHandedness == Handedness.Right) ? 1.0f : -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_4;
		RuntimeObject* L_16 = ___jointedHand0;
		NullCheck(L_16);
		uint8_t L_17 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tE328C8BD991056668984D67A323E3143DDD5CD31_il2cpp_TypeInfo_var, L_16);
		G_B6_0 = L_15;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			G_B7_0 = L_15;
			goto IL_0075;
		}
	}
	{
		G_B8_0 = (-1.0f);
		G_B8_1 = G_B6_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
	}

IL_007a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		V_4 = L_18;
		// if (Vector3.Angle(palmPose.Up, handNormal) > flatHandThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = MixedRealityPose_get_Up_m76427D611ECA5E74B10816DFC242651A0E550F02((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&___palmPose1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_4;
		float L_21 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_19, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_flatHandThreshold_29();
		V_6 = (bool)((((float)L_21) > ((float)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// return false;
		V_7 = (bool)0;
		goto IL_00b2;
	}

IL_00a3:
	{
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		// return palmCameraAngle < facingCameraTrackingThreshold;
		float L_24 = ___palmCameraAngle2;
		float L_25 = __this->get_facingCameraTrackingThreshold_27();
		V_7 = (bool)((((float)L_24) < ((float)L_25))? 1 : 0);
		goto IL_00b2;
	}

IL_00b2:
	{
		// }
		bool L_26 = V_7;
		return L_26;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsUserGazeMeetingThresholdRequirements(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	float G_B11_0 = 0.0f;
	{
		// bool usedEyeGaze = InputRayUtils.TryGetRay(InputSourceType.Eyes, Handedness.Any, out gazeRay);
		bool L_0 = InputRayUtils_TryGetRay_mAE5D23538B2A5F8B9C838DDAEF60418BDD687A8C(5, 7, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		// if (usedEyeGaze || InputRayUtils.TryGetRay(InputSourceType.Head, Handedness.Any, out gazeRay))
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = InputRayUtils_TryGetRay_mAE5D23538B2A5F8B9C838DDAEF60418BDD687A8C(4, 7, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00b0;
		}
	}
	{
		// if (TryGenerateHandPlaneAndActivationPoint(jointedHand, out handPlane, out activationPoint) &&
		//     handPlane.Raycast(gazeRay, out distanceToHandPlane))
		RuntimeObject* L_4 = ___jointedHand0;
		bool L_5 = HandConstraintPalmUp_TryGenerateHandPlaneAndActivationPoint_m5CA7C2F8DD23FAD1B85131027471A5ABB41E0953(__this, L_4, (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_4), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6 = V_0;
		bool L_7 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_4), L_6, (float*)(&V_5), /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_7));
		goto IL_003c;
	}

IL_003b:
	{
		G_B7_0 = 0;
	}

IL_003c:
	{
		V_6 = (bool)G_B7_0;
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_00af;
		}
	}
	{
		// Vector3 gazePosOnPlane = gazeRay.origin + gazeRay.direction.normalized * distanceToHandPlane;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		V_11 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_11), /*hidden argument*/NULL);
		float L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_13, /*hidden argument*/NULL);
		V_7 = L_14;
		// Vector3 planePos = handPlane.ClosestPointOnPlane(gazePosOnPlane);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Plane_ClosestPointOnPlane_m5BD59F43459CAC4A3CEA9F763455C23E3162A4AE((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_4), L_15, /*hidden argument*/NULL);
		V_8 = L_16;
		// float gazePosDistToActivationPosition = (activationPoint - planePos).sqrMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_18, /*hidden argument*/NULL);
		V_11 = L_19;
		float L_20 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_11), /*hidden argument*/NULL);
		V_9 = L_20;
		// float gazeActivationThreshold = usedEyeGaze ? eyeGazeProximityThreshold : headGazeProximityThreshold;
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0091;
		}
	}
	{
		float L_22 = __this->get_headGazeProximityThreshold_34();
		G_B11_0 = L_22;
		goto IL_0097;
	}

IL_0091:
	{
		float L_23 = __this->get_eyeGazeProximityThreshold_33();
		G_B11_0 = L_23;
	}

IL_0097:
	{
		V_10 = G_B11_0;
		// gazeActivationAlreadyTriggered = (gazePosDistToActivationPosition < gazeActivationThreshold);
		float L_24 = V_9;
		float L_25 = V_10;
		__this->set_gazeActivationAlreadyTriggered_35((bool)((((float)L_24) < ((float)L_25))? 1 : 0));
		// return gazeActivationAlreadyTriggered;
		bool L_26 = __this->get_gazeActivationAlreadyTriggered_35();
		V_12 = L_26;
		goto IL_00b5;
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// return false;
		V_12 = (bool)0;
		goto IL_00b5;
	}

IL_00b5:
	{
		// }
		bool L_27 = V_12;
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::StartWorldLockReattachCheckCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_StartWorldLockReattachCheckCoroutine_mBB649348C665704EF289156B2BE0CED11E587C66 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(WorldLockedReattachCheck());
		RuntimeObject* L_0 = HandConstraintPalmUp_WorldLockedReattachCheck_m8E9D0741E717154590E55DB1074488E62FB1680A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::TryGenerateHandPlaneAndActivationPoint(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,UnityEngine.Plane&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_TryGenerateHandPlaneAndActivationPoint_m5CA7C2F8DD23FAD1B85131027471A5ABB41E0953 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___handPlane1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___activationPoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_TryGenerateHandPlaneAndActivationPoint_m5CA7C2F8DD23FAD1B85131027471A5ABB41E0953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.IndexKnuckle, out indexKnuckle) &&
		//     jointedHand.TryGetJoint(TrackedHandJoint.PinkyKnuckle, out pinkyKnuckle) &&
		//     jointedHand.TryGetJoint(TrackedHandJoint.Wrist, out wrist))
		RuntimeObject* L_0 = ___jointedHand0;
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_0, 8, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_0));
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_2 = ___jointedHand0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_2, ((int32_t)23), (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_1));
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_4 = ___jointedHand0;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_4, 1, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2));
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		// handPlane = new Plane(indexKnuckle.Position, pinkyKnuckle.Position, wrist.Position);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_7 = ___handPlane1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2), /*hidden argument*/NULL);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Plane__ctor_m231D58E7BD9DADE44EFD56F5B13677CF81ACD64C((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_7 = L_11;
		// if (TryGenerateActivationPoint(jointedHand, out generatedActivationPoint))
		RuntimeObject* L_12 = ___jointedHand0;
		bool L_13 = HandConstraintPalmUp_TryGenerateActivationPoint_mE9D1A30585F35D0EF63FBBEBEED9453145C111D8(__this, L_12, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// activationPoint = handPlane.ClosestPointOnPlane(generatedActivationPoint);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = ___activationPoint2;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_16 = ___handPlane1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Plane_ClosestPointOnPlane_m5BD59F43459CAC4A3CEA9F763455C23E3162A4AE((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_16, L_17, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_15 = L_18;
		// return true;
		V_6 = (bool)1;
		goto IL_0095;
	}

IL_006c:
	{
		// activationPoint = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___activationPoint2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19 = L_20;
		// return false;
		V_6 = (bool)0;
		goto IL_0095;
	}

IL_007d:
	{
		// handPlane = new Plane();
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_21 = ___handPlane1;
		il2cpp_codegen_initobj(L_21, sizeof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED ));
		// activationPoint = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_22 = ___activationPoint2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_22 = L_23;
		// return false;
		V_6 = (bool)0;
		goto IL_0095;
	}

IL_0095:
	{
		// }
		bool L_24 = V_6;
		return L_24;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::TryGenerateActivationPoint(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_TryGenerateActivationPoint_mE9D1A30585F35D0EF63FBBEBEED9453145C111D8 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, RuntimeObject* ___jointedHand0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___activationPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_TryGenerateActivationPoint_mE9D1A30585F35D0EF63FBBEBEED9453145C111D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B11_0 = 0;
	{
		// activationPoint = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___activationPoint1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0 = L_1;
		// switch (SafeZone)
		int32_t L_2 = HandConstraint_get_SafeZone_m4A9398DC62E3C6994C66CD0DA3FD1603AA4E392F_inline(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		int32_t L_3 = V_4;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_002d:
	{
		// referenceJoint1 = TrackedHandJoint.MiddleTip;
		V_0 = ((int32_t)16);
		// referenceJoint2 = TrackedHandJoint.RingTip;
		V_1 = ((int32_t)21);
		// break;
		goto IL_0069;
	}

IL_0035:
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.Wrist, out referenceJointPose1))
		RuntimeObject* L_4 = ___jointedHand0;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_4, 1, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2));
		V_5 = L_5;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// activationPoint = referenceJointPose1.Position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = ___activationPoint1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2), /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_7 = L_8;
		// return true;
		V_6 = (bool)1;
		goto IL_00b2;
	}

IL_0057:
	{
		// return false;
		V_6 = (bool)0;
		goto IL_00b2;
	}

IL_005d:
	{
		// referenceJoint1 = TrackedHandJoint.IndexKnuckle;
		V_0 = 8;
		// referenceJoint2 = TrackedHandJoint.ThumbProximalJoint;
		V_1 = 4;
		// break;
		goto IL_0069;
	}

IL_0063:
	{
		// referenceJoint1 = TrackedHandJoint.IndexKnuckle;
		V_0 = 8;
		// referenceJoint2 = TrackedHandJoint.ThumbProximalJoint;
		V_1 = 4;
		// break;
		goto IL_0069;
	}

IL_0069:
	{
		// if (!jointedHand.TryGetJoint(referenceJoint1, out referenceJointPose1) ||
		//     !jointedHand.TryGetJoint(referenceJoint2, out referenceJointPose2))
		RuntimeObject* L_9 = ___jointedHand0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_9, L_10, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2));
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_12 = ___jointedHand0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_12, L_13, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_3));
		G_B11_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B11_0 = 1;
	}

IL_0083:
	{
		V_7 = (bool)G_B11_0;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// return false;
		V_6 = (bool)0;
		goto IL_00b2;
	}

IL_008f:
	{
		// activationPoint = Vector3.Lerp(referenceJointPose1.Position, referenceJointPose2.Position, .5f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = ___activationPoint1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = MixedRealityPose_get_Position_mCFDE29B7E88F1892C82F53FC3E2A18D1E9CDBA3A((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_17, L_18, (0.5f), /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_16 = L_19;
		// return true;
		V_6 = (bool)1;
		goto IL_00b2;
	}

IL_00b2:
	{
		// }
		bool L_20 = V_6;
		return L_20;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::WorldLockedReattachCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandConstraintPalmUp_WorldLockedReattachCheck_m8E9D0741E717154590E55DB1074488E62FB1680A (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_WorldLockedReattachCheck_m8E9D0741E717154590E55DB1074488E62FB1680A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * L_0 = (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF *)il2cpp_codegen_object_new(U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF_il2cpp_TypeInfo_var);
		U3CWorldLockedReattachCheckU3Ed__42__ctor_m75FE4846C6CD8703CD7AC23F3EE6B1C8CB0A198F(L_0, 0, /*hidden argument*/NULL);
		U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp_OnEnable_mF4BAE1D1658B07E73258F61EDC9F04D1192BBDD2 (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		HandConstraint_OnEnable_m8346448348E99D6EF7BDDA3C598D397C3B6C1414(__this, /*hidden argument*/NULL);
		// gazeActivationAlreadyTriggered = false;
		__this->set_gazeActivationAlreadyTriggered_35((bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstraintPalmUp__ctor_m9A561D9D2D4E921366F32BDF21884683A8AE535B (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// private float facingCameraTrackingThreshold = 80.0f;
		__this->set_facingCameraTrackingThreshold_27((80.0f));
		// private bool requireFlatHand = false;
		__this->set_requireFlatHand_28((bool)0);
		// private float flatHandThreshold = 45.0f;
		__this->set_flatHandThreshold_29((45.0f));
		// private bool followHandUntilFacingCamera = false;
		__this->set_followHandUntilFacingCamera_30((bool)0);
		// private float followHandCameraFacingThresholdAngle = 60f;
		__this->set_followHandCameraFacingThresholdAngle_31((60.0f));
		// private bool useGazeActivation = false;
		__this->set_useGazeActivation_32((bool)0);
		// private float eyeGazeProximityThreshold = .01f;
		__this->set_eyeGazeProximityThreshold_33((0.01f));
		// private float headGazeProximityThreshold = .04f;
		__this->set_headGazeProximityThreshold_34((0.04f));
		// private bool gazeActivationAlreadyTriggered = false;
		__this->set_gazeActivationAlreadyTriggered_35((bool)0);
		HandConstraint__ctor_m6AAFBED936376D4CF758B1B5D6CFF4DBF5A45BDA(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__42__ctor_m75FE4846C6CD8703CD7AC23F3EE6B1C8CB0A198F (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__42_System_IDisposable_Dispose_m35044C11E328C57CF26B904A6EC5DA13F1FC13DB (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWorldLockedReattachCheckU3Ed__42_MoveNext_mC33D38612B3599FE300F332E8483A418F5D3DF10 (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldLockedReattachCheckU3Ed__42_MoveNext_mC33D38612B3599FE300F332E8483A418F5D3DF10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00ff;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_011a;
	}

IL_0028:
	{
		// var jointedHand = GetController(SolverHandler.CurrentTrackedHandedness) as IMixedRealityHand;
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)L_3)->get_SolverHandler_12();
		NullCheck(L_4);
		uint8_t L_5 = SolverHandler_get_CurrentTrackedHandedness_m390DE358BF7066A94F75950910C072758D5A0C65_inline(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = HandConstraint_GetController_mD259370430EB7DF0B4C4B88ED28E994BFDD283FA(L_5, /*hidden argument*/NULL);
		__this->set_U3CjointedHandU3E5__2_4(((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var)));
		// if (jointedHand != null)
		RuntimeObject* L_7 = __this->get_U3CjointedHandU3E5__2_4();
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ef;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.Palm, out palmPose))
		RuntimeObject* L_9 = __this->get_U3CjointedHandU3E5__2_4();
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * L_10 = __this->get_address_of_U3CpalmPoseU3E5__1_3();
		NullCheck(L_9);
		bool L_11 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t1B7F5A2F8A426F388B9B8AB8863DECF9A2C85DA0_il2cpp_TypeInfo_var, L_9, 2, (MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)L_10);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00ee;
		}
	}
	{
		// float palmCameraAngle = Vector3.Angle(palmPose.Up, CameraCache.Main.transform.forward);
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * L_13 = __this->get_address_of_U3CpalmPoseU3E5__1_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = MixedRealityPose_get_Up_m76427D611ECA5E74B10816DFC242651A0E550F02((MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 *)L_13, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_15 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_18 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_14, L_17, /*hidden argument*/NULL);
		__this->set_U3CpalmCameraAngleU3E5__3_5(L_18);
		// if (IsPalmMeetingThresholdRequirements(jointedHand, palmPose, palmCameraAngle) &&
		//     IsUserGazeMeetingThresholdRequirements(jointedHand))
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_19 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_20 = __this->get_U3CjointedHandU3E5__2_4();
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0  L_21 = __this->get_U3CpalmPoseU3E5__1_3();
		float L_22 = __this->get_U3CpalmCameraAngleU3E5__3_5();
		NullCheck(L_19);
		bool L_23 = HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_m522AFB32C304C08DA6088266F27D0CEEDB9B3C48(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_24 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_25 = __this->get_U3CjointedHandU3E5__2_4();
		NullCheck(L_24);
		bool L_26 = HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m3C829A527570001446011B6D8C142ACF20A5BE35(L_24, L_25, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_26));
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B13_0 = 0;
	}

IL_00c9:
	{
		V_3 = (bool)G_B13_0;
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_00ed;
		}
	}
	{
		// gazeActivationAlreadyTriggered = false;
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_28 = __this->get_U3CU3E4__this_2();
		NullCheck(L_28);
		L_28->set_gazeActivationAlreadyTriggered_35((bool)0);
		// SolverHandler.UpdateSolvers = true;
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_30 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)L_29)->get_SolverHandler_12();
		NullCheck(L_30);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_30, (bool)1, /*hidden argument*/NULL);
	}

IL_00ed:
	{
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ff:
	{
		__this->set_U3CU3E1__state_0((-1));
		MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 * L_31 = __this->get_address_of_U3CpalmPoseU3E5__1_3();
		il2cpp_codegen_initobj(L_31, sizeof(MixedRealityPose_t2DE3778479212DFF574AD14924DB9E7BA40BC9C0 ));
		__this->set_U3CjointedHandU3E5__2_4((RuntimeObject*)NULL);
	}

IL_011a:
	{
		// while (!SolverHandler.UpdateSolvers && useGazeActivation)
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_32 = __this->get_U3CU3E4__this_2();
		NullCheck(L_32);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_33 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)L_32)->get_SolverHandler_12();
		NullCheck(L_33);
		bool L_34 = SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978_inline(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0139;
		}
	}
	{
		HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		bool L_36 = L_35->get_useGazeActivation_32();
		G_B22_0 = ((int32_t)(L_36));
		goto IL_013a;
	}

IL_0139:
	{
		G_B22_0 = 0;
	}

IL_013a:
	{
		V_4 = (bool)G_B22_0;
		bool L_37 = V_4;
		if (L_37)
		{
			goto IL_0028;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldLockedReattachCheckU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCF5DFEA10223D8BC3FDD81FE4D13E6E3B774666 (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_Reset_mDD2CF1B9509E3654C93A39206B36E167D6F63958 (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_Reset_mDD2CF1B9509E3654C93A39206B36E167D6F63958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_Reset_mDD2CF1B9509E3654C93A39206B36E167D6F63958_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp_<WorldLockedReattachCheck>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldLockedReattachCheckU3Ed__42_System_Collections_IEnumerator_get_Current_mA5BB9FEAF9767B72DC285F14EBCEA15B7E2B9840 (U3CWorldLockedReattachCheckU3Ed__42_t8BF81001D6000C52C4A39995E767B0DCE225DEAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_PartwayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InBetween_get_PartwayOffset_m22EF90977CE8B914D0D475BC1DD988E261A8AECE (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return partwayOffset; }
		float L_0 = __this->get_partwayOffset_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return partwayOffset; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_m14CC63EAB737C5C22146CE04BD6C680198BB32E0 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_PartwayOffset_m14CC63EAB737C5C22146CE04BD6C680198BB32E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_partwayOffset_13(L_1);
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTrackedObjectType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InBetween_get_SecondTrackedObjectType_mD3FC55B44CAF932BC28C8E313808894FCDA610C3 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTrackedObjectType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_SecondTrackedObjectType_m3113B3FD6B3A1CBA2CF215E8500AE0D3D24544FB (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_TrackedObjectForSecondTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InBetween_get_TrackedObjectForSecondTransform_m392D4ADBF2004E6983656C7B267D37F224251892 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTrackedObjectType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_TrackedObjectForSecondTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_TrackedObjectForSecondTransform_m90D689096A598B8F1EA93DC60A9DC4A3722D0879 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTransformOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * InBetween_get_SecondTransformOverride_m75C3326F22CB11C974CE49E1DB1FE61A2CAC8A8C (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// get { return secondTransformOverride; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTransformOverride; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_set_SecondTransformOverride_m3971ABD63AA12C1FFF51284C93A7075C2D7741BE (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_SecondTransformOverride_m3971ABD63AA12C1FFF51284C93A7075C2D7741BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (secondTransformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// secondTransformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___value0;
		__this->set_secondTransformOverride_15(L_4);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_OnValidate_m868F77B30325C6416AA2CA9A6EBCFE48AEF64D93 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	{
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_Start_m7912483D7B9800C7E8D9711D7ED60470E5AACD18 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_Start_m7912483D7B9800C7E8D9711D7ED60470E5AACD18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A(__this, /*hidden argument*/NULL);
		// secondSolverHandler = gameObject.AddComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_1 = GameObject_AddComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m455A87CD3FC137A413BD066BD112541290F2E0D0(L_0, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m455A87CD3FC137A413BD066BD112541290F2E0D0_RuntimeMethod_var);
		__this->set_secondSolverHandler_16(L_1);
		// secondSolverHandler.UpdateSolvers = false;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_2 = __this->get_secondSolverHandler_16();
		NullCheck(L_2);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_2, (bool)0, /*hidden argument*/NULL);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_SolverUpdate_mD66E1D220078C13E93CBB71EAA5183BF8752836B (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_SolverUpdate_mD66E1D220078C13E93CBB71EAA5183BF8752836B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (SolverHandler != null && secondSolverHandler != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_2 = __this->get_secondSolverHandler_16();
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
			goto IL_006e;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null && secondSolverHandler.TransformTarget != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_5 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_8 = __this->get_secondSolverHandler_16();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B7_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// AdjustPositionForOffset(SolverHandler.TransformTarget, secondSolverHandler.TransformTarget);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_12 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_12, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_14 = __this->get_secondSolverHandler_16();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_14, /*hidden argument*/NULL);
		InBetween_AdjustPositionForOffset_m2A316947F7DE91CFD7F6E83604AADADBB5F13D22(__this, L_13, L_15, /*hidden argument*/NULL);
	}

IL_006d:
	{
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m2A316947F7DE91CFD7F6E83604AADADBB5F13D22 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_AdjustPositionForOffset_m2A316947F7DE91CFD7F6E83604AADADBB5F13D22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (targetTransform != null && secondTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___targetTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___secondTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// Vector3 centerline = targetTransform.position - secondTransform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___targetTransform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___secondTransform1;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// GoalPosition = secondTransform.position + (centerline * partwayOffset);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___secondTransform1;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		float L_13 = __this->get_partwayOffset_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_14, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_UpdateSecondSolverHandler_mACCBCCC4E48558D482069BD2A870811CD039743D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (secondSolverHandler != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// secondSolverHandler.TrackedTargetType = secondTrackedObjectType;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = __this->get_secondSolverHandler_16();
		int32_t L_4 = __this->get_secondTrackedObjectType_14();
		NullCheck(L_3);
		SolverHandler_set_TrackedTargetType_m01C5E049E90500E61BC6F12736763B03C4AC8294(L_3, L_4, /*hidden argument*/NULL);
		// if (secondTrackedObjectType == TrackedObjectType.CustomOverride && secondTransformOverride != null)
		int32_t L_5 = __this->get_secondTrackedObjectType_14();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_secondTransformOverride_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// secondSolverHandler.TransformOverride = secondTransformOverride;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_9 = __this->get_secondSolverHandler_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_secondTransformOverride_15();
		NullCheck(L_9);
		SolverHandler_set_TransformOverride_m646352419E76B01F8DCE16291664156C71A9AB32(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InBetween__ctor_mF604772E7A13981E594D0AA462CB44885310CE16 (InBetween_t8FA73C44D08F41D17058988A0BD5F0931A63BD65 * __this, const RuntimeMethod* method)
{
	{
		// private float partwayOffset = 0.5f;
		__this->set_partwayOffset_13((0.5f));
		// private TrackedObjectType secondTrackedObjectType = TrackedObjectType.Head;
		__this->set_secondTrackedObjectType_14(0);
		// private Transform secondTransformOverride = null;
		__this->set_secondTransformOverride_15((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m375F6219E731A88BA061091A84B6CFFD360A8A3E (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistance; }
		float L_0 = __this->get_resistance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Resistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Resistance_mEDA36489CAB1E4988CC1D58595DFD33B7C856C06 (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistance = value; }
		float L_0 = ___value0;
		__this->set_resistance_13(L_0);
		// set { resistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m6D8EA962D4EE5F1D8C2D0C1D7E5832C53E4BCEFF (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistanceVelocityPower; }
		float L_0 = __this->get_resistanceVelocityPower_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistanceVelocityPower; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_ResistanceVelocityPower(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_ResistanceVelocityPower_m14F9801C8F8D319B48622AE2D1E95D9EA1903399 (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistanceVelocityPower = value; }
		float L_0 = ___value0;
		__this->set_resistanceVelocityPower_14(L_0);
		// set { resistanceVelocityPower = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m138347E36DC629F3792EAFD0F3A7AE25D89F6F4B (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return accelerationRate; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_AccelerationRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_AccelerationRate_mB03031BFBAB3013C53BD91A7099523324807E35C (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { accelerationRate = value; }
		float L_0 = ___value0;
		__this->set_accelerationRate_15(L_0);
		// set { accelerationRate = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m5B7CA0443A61694AC72847D96B73D9AF07DA9EAC (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return springiness; }
		float L_0 = __this->get_springiness_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return springiness; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Springiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Springiness_m10FD35C5E8E13A8CFE6E7D7D33B990E3016C287D (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { springiness = value; }
		float L_0 = ___value0;
		__this->set_springiness_16(L_0);
		// set { springiness = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mF170066F49825EBA3D804F7658A2A681B1E0CF7D (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return snapZ; }
		bool L_0 = __this->get_snapZ_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return snapZ; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_SnapZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_SnapZ_m2133B6C1DC7DFCE4337290515A1F3B4419DECB72 (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { snapZ = value; }
		bool L_0 = ___value0;
		__this->set_snapZ_17(L_0);
		// set { snapZ = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mF7803C7EDB831D20D055F299C2504681E3EA30DB (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_mF7803C7EDB831D20D055F299C2504681E3EA30DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePosition => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_OnEnable_m1902004F7DB11351E99A53F91DF364BF9AC37484 (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_m1902004F7DB11351E99A53F91DF364BF9AC37484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_mEA5D74A740D42EE91D5614DCF07EB487A2E40F2C(__this, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_m0569901970554755CDC20170474CA46F8F0FCDCF (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_m0569901970554755CDC20170474CA46F8F0FCDCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	bool V_16 = false;
	float G_B10_0 = 0.0f;
	{
		// if (SnapZ)
		bool L_0 = Momentum_get_SnapZ_mF170066F49825EBA3D804F7658A2A681B1E0CF7D(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		// var referencePosition = ReferencePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Momentum_get_ReferencePosition_mF7803C7EDB831D20D055F299C2504681E3EA30DB(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		// float goalDepth = (SolverHandler.GoalPosition - referencePosition).magnitude;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		V_5 = L_7;
		// Vector3 currentDelta = transform.position - referencePosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		// float currentDeltaMagnitude = currentDelta.magnitude;
		float L_12 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_12;
		// if (!Mathf.Approximately(currentDeltaMagnitude, 0))
		float L_13 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_13, (0.0f), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		// Vector3 currentDeltaNorm = currentDelta / currentDeltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		float L_17 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		// transform.position += currentDeltaNorm * (goalDepth - currentDeltaMagnitude);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = L_19;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_10;
		float L_23 = V_5;
		float L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// Vector3 delta = SolverHandler.GoalPosition - transform.position;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_27 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline(L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// float deltaMagnitude = delta.magnitude;
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_32;
		// if (deltaMagnitude > 0.01f)
		float L_33 = V_1;
		V_11 = (bool)((((float)L_33) > ((float)(0.01f)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0107;
		}
	}
	{
		// Vector3 deltaNorm = delta / deltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		float L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_35, L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		// velocity += deltaNorm * (SolverHandler.DeltaTime * (AccelerationRate + Springiness * deltaMagnitude));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_12;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_40 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_40);
		float L_41 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_40, /*hidden argument*/NULL);
		float L_42 = Momentum_get_AccelerationRate_m138347E36DC629F3792EAFD0F3A7AE25D89F6F4B(__this, /*hidden argument*/NULL);
		float L_43 = Momentum_get_Springiness_m5B7CA0443A61694AC72847D96B73D9AF07DA9EAC(__this, /*hidden argument*/NULL);
		float L_44 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_45, /*hidden argument*/NULL);
		__this->set_velocity_18(L_46);
	}

IL_0107:
	{
		// float velocityMagnitude = velocity.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_47 = __this->get_address_of_velocity_18();
		float L_48 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// if (!Mathf.Approximately(velocityMagnitude, 0))
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_50 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_49, (0.0f), /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_017d;
		}
	}
	{
		// Vector3 velocityNormal = velocity / velocityMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = __this->get_velocity_18();
		float L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_52, L_53, /*hidden argument*/NULL);
		V_14 = L_54;
		// float powFactor = velocityMagnitude > 1f ? Mathf.Pow(velocityMagnitude, ResistanceVelocityPower) : velocityMagnitude;
		float L_55 = V_2;
		if ((((float)L_55) > ((float)(1.0f))))
		{
			goto IL_0141;
		}
	}
	{
		float L_56 = V_2;
		G_B10_0 = L_56;
		goto IL_014d;
	}

IL_0141:
	{
		float L_57 = V_2;
		float L_58 = Momentum_get_ResistanceVelocityPower_m6D8EA962D4EE5F1D8C2D0C1D7E5832C53E4BCEFF(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_59 = powf(L_57, L_58);
		G_B10_0 = L_59;
	}

IL_014d:
	{
		V_15 = G_B10_0;
		// velocity -= velocityNormal * (powFactor * Resistance * SolverHandler.DeltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = V_14;
		float L_62 = V_15;
		float L_63 = Momentum_get_Resistance_m375F6219E731A88BA061091A84B6CFFD360A8A3E(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_64 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_64);
		float L_65 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_61, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (float)L_65)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_60, L_66, /*hidden argument*/NULL);
		__this->set_velocity_18(L_67);
	}

IL_017d:
	{
		// if (velocity.sqrMagnitude < 0.001f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = __this->get_address_of_velocity_18();
		float L_69 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68, /*hidden argument*/NULL);
		V_16 = (bool)((((float)L_69) < ((float)(0.001f)))? 1 : 0);
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01a2;
		}
	}
	{
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_71);
	}

IL_01a2:
	{
		// transform.position += velocity * SolverHandler.DeltaTime;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = L_72;
		NullCheck(L_73);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_73, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = __this->get_velocity_18();
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_76 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_76);
		float L_77 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_75, L_77, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_73, L_79, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SnapTo_m23856D3B1F6A5E02727F30A9AEC7340C164163CA (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_m23856D3B1F6A5E02727F30A9AEC7340C164163CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.SnapTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_SnapTo_m0518FC680A1323194557B4F98A2BF64E6F3FE4CB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum__ctor_m80DB32422A4F70EFE92FBF7A913165A81DCD2B9D (Momentum_t95D0C2F939AFE5E79D89CE05A7E86AF7C9E31819 * __this, const RuntimeMethod* method)
{
	{
		// private float resistance = 0.99f;
		__this->set_resistance_13((0.99f));
		// private float resistanceVelocityPower = 1.5f;
		__this->set_resistanceVelocityPower_14((1.5f));
		// private float accelerationRate = 10f;
		__this->set_accelerationRate_15((10.0f));
		// private float springiness = 0;
		__this->set_springiness_16((0.0f));
		// private bool snapZ = true;
		__this->set_snapZ_17((bool)1);
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_m2EFA6A929F13721AB7BE6A3DB77BD83C1FE7C5D3 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return orientationType; }
		int32_t L_0 = __this->get_orientationType_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientationType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_m5E0356CBDBA32834F97DC34B5911995B950DEE68 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationType_13(L_0);
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_mE5DDA6CDEC5FD88C750B4AC6E0E133CCDFD07946 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_m314752E2DE0A5D6C2AB3C1B5C8DDF4368B8A6D53 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { localOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_14(L_0);
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m98139761A4205EC6A94114BE242A5221D4E66D01 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m499A64EC51C480779600620C871D22C16CD9F40A (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { worldOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_15(L_0);
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_mA0B6A30E371C58778F8EA83858949AFCE8F88965 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->get_useAngleStepping_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return useAngleStepping; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleStepping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m72C7319F2DEC009B26F778FD308D4D00025C67AB (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useAngleStepping = value; }
		bool L_0 = ___value0;
		__this->set_useAngleStepping_16(L_0);
		// set { useAngleStepping = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m2C19C3B7B8C7F3287554ACDCDFFC55DFE0ABF3D1 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->get_tetherAngleSteps_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return tetherAngleSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_m69675C758BD79B5A7C9CAA894AA396CEC7CE161F (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_m69675C758BD79B5A7C9CAA894AA396CEC7CE161F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tetherAngleSteps =  Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_17(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_mAF8F9D76CBAA627D2CAA56EA066F3CD1B104ED82 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_mAF8F9D76CBAA627D2CAA56EA066F3CD1B104ED82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_001b:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_7 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0065;
	}

IL_0055:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_11 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(targetRot) * LocalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_mE5DDA6CDEC5FD88C750B4AC6E0E133CCDFD07946(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_m98139761A4205EC6A94114BE242A5221D4E66D01(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_mE6E37E1B85EDCE9541CE0A5B232549ED285D2E17(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// GoalPosition = desiredPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_31, /*hidden argument*/NULL);
		// GoalRotation = desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		// if (!UseAngleStepping || SolverHandler.TransformTarget == null)
		bool L_0 = Orbital_get_UseAngleStepping_mA0B6A30E371C58778F8EA83858949AFCE8F88965(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_1 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return rotationToSnap;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___rotationToSnap0;
		V_4 = L_5;
		goto IL_007e;
	}

IL_0027:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_6 = __this->get_tetherAngleSteps_17();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_6)))));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_7 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		// float newAngle = stepAngle * numberOfSteps;
		float L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)L_15)))));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_17, L_18, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_mE6E37E1B85EDCE9541CE0A5B232549ED285D2E17 (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_mE6E37E1B85EDCE9541CE0A5B232549ED285D2E17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->get_orientationType_13();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_013c;
	}

IL_0031:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0060;
	}

IL_004b:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_6 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_0060:
	{
		V_2 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0159;
	}

IL_0077:
	{
		// desiredRot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_0159;
	}

IL_0088:
	{
		// desiredRot = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_0159;
	}

IL_009d:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_17 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d2;
	}

IL_00b7:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_21 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d2:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0159;
	}

IL_00d8:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(CameraCache.Main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_27 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_010c;
	}

IL_00f2:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_010c:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0159;
	}

IL_010f:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_37 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0129;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0139;
	}

IL_0129:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_41 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0139:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0159;
	}

IL_013c:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
		// break;
		goto IL_0159;
	}

IL_0159:
	{
		// if (UseAngleStepping)
		bool L_47 = Orbital_get_UseAngleStepping_mA0B6A30E371C58778F8EA83858949AFCE8F88965(__this, /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_016d;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Orbital_SnapToTetherAngleSteps_m75904DC78973DC5A1722518431E6BD022DE62D01(__this, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_016d:
	{
		// return desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_0;
		V_4 = L_51;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = V_4;
		return L_52;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital__ctor_m1D2EC09EF4D2DB078F9CB21EFE4AA557D0A9FD3B (Orbital_tC33AE175F5899FC548CC3529C8A0EFA16B4FD988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_m1D2EC09EF4D2DB078F9CB21EFE4AA557D0A9FD3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SolverOrientationType orientationType = SolverOrientationType.FollowTrackedObject;
		__this->set_orientationType_13(0);
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_14(L_0);
		// private Vector3 worldOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_15(L_1);
		// private bool useAngleStepping = false;
		__this->set_useAngleStepping_16((bool)0);
		// private int tetherAngleSteps = 6;
		__this->set_tetherAngleSteps_17(6);
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_mD4C3EDEC2DC57F7B63D9C283A2F865BE28492868 (Overlap_t27FD08FFD78CBE667472D71DE4AB05412E1A6FBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_mD4C3EDEC2DC57F7B63D9C283A2F865BE28492868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	{
		// var target = SolverHandler.TransformTarget;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// GoalPosition = target.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_6, /*hidden argument*/NULL);
		// GoalRotation = target.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck(L_7);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_7, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__ctor_m9B9A0C0B5B40097CC437CC52797E460B2CFF006F (Overlap_t27FD08FFD78CBE667472D71DE4AB05412E1A6FBE * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mA9D26314FC1F0FCE61188C8DCBF380DCECC8DF02 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => referenceDirection;
		int32_t L_0 = __this->get_referenceDirection_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m892E2E1F5316E1FEBDBB34416F242478BD1F614A (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => referenceDirection = value;
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m031BED03729FB3E21F113D14C091C645C4D02AD2 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => minDistance;
		float L_0 = __this->get_minDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m33149A9C9A0411864F692F3351B6CDBC9FC34F8C (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minDistance = value;
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m34E1D6FA63E54826ECCCC23BA308CD4C1BFE515F (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => maxDistance;
		float L_0 = __this->get_maxDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m6070D9F8C4B1ECFDE49B6DB4A538E425A145F3FD (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxDistance = value;
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m76096F1DB8452B1D9267B2FDDDA827CBC480D011 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => minViewDegrees;
		float L_0 = __this->get_minViewDegrees_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_mBAA594C387A4766521972916EF692128151044C6 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minViewDegrees = value;
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m80BBF5D44B69BC16EE75E5F3C0C149117E287DB4 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => maxViewDegrees;
		float L_0 = __this->get_maxViewDegrees_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m6EDE713B62098ED2CAC74CE6B743B45E5F37877E (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxViewDegrees = value;
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_m01B947972A21B35B77E51F98C178234001D5BE0E (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => aspectV;
		float L_0 = __this->get_aspectV_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_mEC8C2F6E9B558319FACD847C65846C5E3E0E93B6 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => aspectV = value;
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m96FE7B7A76580DC6A650D4BE41BE499BBCA5C632 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreAngleClamp;
		bool L_0 = __this->get_ignoreAngleClamp_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_m49B8E35DAA16C44A678128C688230FC42C20BB77 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreAngleClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_m8E4B50FE90D6D6BABCE8C8C5EA4545320A633B21 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreDistanceClamp;
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_mCAD57670E6ACFC42CD474F4867AA6BE889487267 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreDistanceClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m3EF82A03B4DE55EA88726F68C8B750D982EA3282 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m650C4C9CF29717C26BE9BACACB9C2DEDD9F41C35 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useFixedVerticalPosition = value;
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m4546A61D4000A985ADAABED1178A1DA454F6B282 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_mB26D81B1F83A1B2E45FADD8121EE6980F2B5372A (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => fixedVerticalPosition = value;
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m8DF2D2B96EC5596B77D47A7BF6982E18A7EFE834 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => orientToReferenceDirection;
		bool L_0 = __this->get_orientToReferenceDirection_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_m4E75B1F8B8DAAAA49F99229C8323A44DD445C3DE (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orientToReferenceDirection = value;
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_13();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_003f;
	}

IL_002f:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_7 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_003f:
	{
		V_0 = G_B4_0;
	}

IL_0041:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m0ADCD79BA6CAF0DBA49B007F6928D44D65F40380 (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_m0ADCD79BA6CAF0DBA49B007F6928D44D65F40380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mBBE7BE2A5C25181F6EF9221F3EBBB4430AB440CE(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_19();
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_3 = __this->get_ignoreDistanceClamp_20();
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003a;
	}

IL_002f:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_m0CF411EBA0F12BA140842529958A25CB0BA4F01A(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_003a:
	{
		goto IL_0048;
	}

IL_003d:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_mD9B16468029365B764FCF82C0CF21CF1E47BF8DA(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (orientToReferenceDirection)
		bool L_8 = __this->get_orientToReferenceDirection_23();
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0081;
	}

IL_006c:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0081:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_18 = __this->get_referenceDirection_13();
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_20 = (0.0f);
		V_7 = L_20;
		(&V_2)->set_z_2(L_20);
		float L_21 = V_7;
		(&V_2)->set_x_0(L_21);
	}

IL_00aa:
	{
		// if (UseFixedVerticalPosition)
		bool L_22 = RadialView_get_UseFixedVerticalPosition_m3EF82A03B4DE55EA88726F68C8B750D982EA3282_inline(__this, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		float L_26 = RadialView_get_FixedVerticalPosition_m4546A61D4000A985ADAABED1178A1DA454F6B282_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_00d1:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_27, /*hidden argument*/NULL);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_2;
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m0CF411EBA0F12BA140842529958A25CB0BA4F01A (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_m0CF411EBA0F12BA140842529958A25CB0BA4F01A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float elementDist = elementDelta.magnitude;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_7 = V_3;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_003a;
	}

IL_0033:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_9, L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
	}

IL_003a:
	{
		V_4 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_12 = V_3;
		float L_13 = __this->get_minDistance_14();
		float L_14 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// if (!clampedDistance.Equals(elementDist))
		float L_16 = V_3;
		bool L_17 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_5), L_16, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19 = L_24;
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mD9B16468029365B764FCF82C0CF21CF1E47BF8DA (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_mD9B16468029365B764FCF82C0CF21CF1E47BF8DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	float G_B6_0 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_m59D775EF538DCB305EA3D0FCD570B1F4DD175F44(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_m822134AB4780DE90EF5A8748A91EBB8CBA7B575D(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_m7930D18C844651718F3BBA9F4BEAF3F6D05C2154(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// float elementDist = elementDelta.magnitude;
		float L_8 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_9 = V_5;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_004d;
	}

IL_0044:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_4;
		float L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_6 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		float L_26 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_27 = __this->get_aspectV_18();
		float L_28 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_29 = sinf(((float)il2cpp_codegen_multiply((float)L_28, (float)(0.0174532924f))));
		float L_30 = fabsf(L_29);
		float L_31 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_27, (1.0f), L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_32, L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_35 = V_10;
		float L_36 = __this->get_minViewDegrees_16();
		float L_37 = V_9;
		float L_38 = __this->get_maxViewDegrees_17();
		float L_39 = V_9;
		float L_40 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, ((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		V_11 = L_40;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_41 = __this->get_ignoreDistanceClamp_20();
		if (L_41)
		{
			goto IL_00e8;
		}
	}
	{
		float L_42 = V_5;
		float L_43 = __this->get_minDistance_14();
		float L_44 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_42, L_43, L_44, /*hidden argument*/NULL);
		G_B6_0 = L_45;
		goto IL_00ea;
	}

IL_00e8:
	{
		float L_46 = V_5;
		G_B6_0 = L_46;
	}

IL_00ea:
	{
		V_12 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_47 = V_10;
		float L_48 = V_11;
		V_13 = (bool)((((int32_t)((((float)L_47) == ((float)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013c;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_50 = V_11;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_50, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_51 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_2;
		float L_53 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		float L_55 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_56 = cosf(L_55);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_54, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_7;
		float L_59 = V_14;
		float L_60 = sinf(L_59);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_58, L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_57, L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_53, L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_52, L_63, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_51 = L_64;
		goto IL_0165;
	}

IL_013c:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_65 = V_5;
		bool L_66 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_12), L_65, /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_0165;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_2;
		float L_70 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_70, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_72, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68 = L_73;
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_m1BBA0FA120C143770DCC551678D8EE8544ACE92B (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_13(1);
		// private float minDistance = 1f;
		__this->set_minDistance_14((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_15((2.0f));
		// private float minViewDegrees = 0f;
		__this->set_minViewDegrees_16((0.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_17((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_18((1.0f));
		// private bool ignoreAngleClamp = false;
		__this->set_ignoreAngleClamp_19((bool)0);
		// private bool ignoreDistanceClamp = false;
		__this->set_ignoreDistanceClamp_20((bool)0);
		// private bool useFixedVerticalPosition = false;
		__this->set_useFixedVerticalPosition_21((bool)0);
		// private float fixedVerticalPosition = -0.4f;
		__this->set_fixedVerticalPosition_22((-0.4f));
		// private bool orientToReferenceDirection = false;
		__this->set_orientToReferenceDirection_23((bool)0);
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_mB9DDA57D207891301C34B98A6CCF405A152F36A0 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_m455F982889F0590E1FF822FF5ABBA1F2A6681F62 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_mC917263D6E902B17949342BF401AD7C35DCFEEB7 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// get => moveLerpTime;
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_mB3CA685D9CA958B292B5E0FE4709902ACA13A842 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_mE28AE61B04E0FBDD17E9D45EF7E5C5FB0F188546 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m648C089163BE9BBC326EAEE68ABA8E2C54C40786 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_m2E346B7096F98798B1033F25F20A64A54A82C2F8 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_mF2AB15205CDB75434B60EDA9555CFB2F63C2BAB2 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_m8A9089AD6F21650DDAA757519CBDF75DE532CBCD (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// get => smoothing;
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m93DDC0161C448E12D61FE53A9D7BFB9BED99CED8 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_m61841992F5F387E654AECDCAD908AED04FEA127A_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_mDB5F5B39478017CAE701D482C7CA1D1564F5018F_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalRotation; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_m2D2A75CE0C280A4C6F3654E71A526C6146C047BC_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_mD226BDF8CDF3DF4D22742113703F205CC4B91C9C_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalScale; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mF5209DB2291D45A89518EE5B28B60A6E7AA8A83B (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mBBE7BE2A5C25181F6EF9221F3EBBB4430AB440CE (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m313B408176A863BAD6747B938B42D271069ACB2D (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalPosition = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m69E3C484B582C736702E12E3459EAC47DF648A1D (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m1E1733E567BD9566E9B3922745486866E19F1A94 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_mF5075FD1463EBB894409CC0F0CC17F3C7360FD62 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m2B2EF59838330F8A4E55D1008B3EC760DBF34F48 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalScale = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalScale_mF5209DB2291D45A89518EE5B28B60A6E7AA8A83B(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_mCBA52635660998D6B79823D6BA3DB07A045843BA (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_mCBA52635660998D6B79823D6BA3DB07A045843BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B9_0 = NULL;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B8_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B10_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = Component_GetComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m26AD98AA4510DAEC40229D04C6525707022691BD(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D_m26AD98AA4510DAEC40229D04C6525707022691BD_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_3);
	}

IL_001f:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_4 = __this->get_updateLinkedTransform_4();
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_5 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_8 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_8, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_005e:
	{
		// GoalScale = maintainScale ? transform.localScale : Vector3.one;
		bool L_10 = __this->get_maintainScale_8();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B10_0 = L_11;
		G_B10_1 = G_B8_0;
		goto IL_0079;
	}

IL_006e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_12, /*hidden argument*/NULL);
		G_B10_0 = L_13;
		G_B10_1 = G_B9_0;
	}

IL_0079:
	{
		NullCheck(G_B10_1);
		Solver_set_GoalScale_mF5209DB2291D45A89518EE5B28B60A6E7AA8A83B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_mEA5D74A740D42EE91D5614DCF07EB487A2E40F2C (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_mEA5D74A740D42EE91D5614DCF07EB487A2E40F2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_3, L_4, L_5);
	}

IL_002c:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_RegisterSolver_m5881BDAF414A1E7F39F1640E64F6B0D0521DC819(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDestroy_mA91DE1F414D6B6B4BA97917E9190624449AF66E2 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_mA91DE1F414D6B6B4BA97917E9190624449AF66E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_UnregisterSolver_mA2311CFE0CFBD386CACD01DB228154DADFDF3295(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m6EB8C7846429463B253385DFE569F067B7D8D3E9 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		G_B3_0 = ((((int32_t)((!(((float)L_4) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0057;
	}

IL_0049:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_m144B59C949B76A50EB9E9898D256807C9D6085A1(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m0518FC680A1323194557B4F98A2BF64E6F3FE4CB (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_m313B408176A863BAD6747B938B42D271069ACB2D(__this, L_3, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_m1E1733E567BD9566E9B3922745486866E19F1A94(__this, L_4, /*hidden argument*/NULL);
		// WorkingScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_m2B2EF59838330F8A4E55D1008B3EC760DBF34F48(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m35A85BF50173CF18C6B055A91A61D3D62D8040CD (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_1, /*hidden argument*/NULL);
		// GoalScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_mF5209DB2291D45A89518EE5B28B60A6E7AA8A83B(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_mFC9F1DA5E454C05CDDE47AF8850FA4C3AF209D8D (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_m313B408176A863BAD6747B938B42D271069ACB2D(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_m1E1733E567BD9566E9B3922745486866E19F1A94(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mC29746EBC720A9FF13EF63927A752875987ADE3F (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_m783CB2A01FFD12418B1A1799AB54F24D9C1DC51E (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m783CB2A01FFD12418B1A1799AB54F24D9C1DC51E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_m2A4848E4BEEC57C4F198FBFC6F09ABEFA6A16F44 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_10 = __this->get_SolverHandler_12();
		NullCheck(L_10);
		float L_11 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E(L_8, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_16 = __this->get_SolverHandler_12();
		NullCheck(L_16);
		float L_17 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490(L_14, L_15, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_22 = __this->get_SolverHandler_12();
		NullCheck(L_22);
		float L_23 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E(L_20, L_21, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		NullCheck(L_26);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_26, L_27, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = V_2;
		NullCheck(L_28);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_28, L_29, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		NullCheck(L_30);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_00b7:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_32, L_33, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_34, L_35, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m144B59C949B76A50EB9E9898D256807C9D6085A1 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m4EA9D269E7106B915E2266F85DF25362CC1AD839(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m373FBA345E09BDBD15591C9A841C724D95917425(__this, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_mB15006B4D0EF976D80BEA019D29A3B81D7099473(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4EA9D269E7106B915E2266F85DF25362CC1AD839 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B2_0 = NULL;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_mBBE7BE2A5C25181F6EF9221F3EBBB4430AB440CE(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_mF09F08B85BCEB64C43DCDEC91712D149A0A9B331(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m313B408176A863BAD6747B938B42D271069ACB2D(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m373FBA345E09BDBD15591C9A841C724D95917425 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B2_0 = NULL;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_m69E3C484B582C736702E12E3459EAC47DF648A1D(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m831DDA2CF7664BC8C76FBAB10B6E4B54189B53B3(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_mC1EE441F446E17175D335F175CB7DA39329B0490(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_m1E1733E567BD9566E9B3922745486866E19F1A94(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mB15006B4D0EF976D80BEA019D29A3B81D7099473 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B2_0 = NULL;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_mF5075FD1463EBB894409CC0F0CC17F3C7360FD62(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m4CD8E758BEDD8B0ED7E8A2230F7FB8D85D1D7367(__this, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m12AC4A0DEB6E4A899CD854FB3B36B4048A61FC1E(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_m2B2EF59838330F8A4E55D1008B3EC760DBF34F48(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351 (Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * __this, const RuntimeMethod* method)
{
	{
		// private bool updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private float scaleLerpTime = 0;
		__this->set_scaleLerpTime_7((0.0f));
		// private bool maintainScale = true;
		__this->set_maintainScale_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
		// private float lifetime = 0;
		__this->set_lifetime_10((0.0f));
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m01C5E049E90500E61BC6F12736763B03C4AC8294 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m558031AC6E76AA1B0B0E82DDAF68BBA10D40A35D(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_5 = ___value0;
		__this->set_trackedTargetType_4(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m456EB110CA3946CC75DE75CEB0A31FDF6E9A9F4B (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedHandness != value && IsValidHandedness(value))
		uint8_t L_0 = __this->get_trackedHandness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_m262F9036782D88AA6EA144DB15109B4A2E4898D1(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedHandness = value;
		uint8_t L_5 = ___value0;
		__this->set_trackedHandness_5(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m2E92554BFEB284727CD6D93D9B3EF4587E606E47 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_mEF0994BDFD7A8BBA64F40B409CB6C8660AB3D957 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_3 = ___value0;
		__this->set_trackedHandJoint_6(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m646352419E76B01F8DCE16291664156C71A9AB32 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_m646352419E76B01F8DCE16291664156C71A9AB32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (value != null && transformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// transformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___value0;
		__this->set_transformOverride_7(L_6);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m01A36727E627799ABC651B50DEE4B8FF24230DE2 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m703BA8EFF9A10FB4325714CD76F51E19700E272C (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_m703BA8EFF9A10FB4325714CD76F51E19700E272C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalOffset != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalOffset_8(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mF995DA1310451AB41F09D76A30733F723F2838C3 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m19EB9A59708EEA1140AB9A8BF57B3FE480B41288 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_m19EB9A59708EEA1140AB9A8BF57B3FE480B41288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalRotation != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalRotation_9(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mB1ED8DC71CF0A395FFCC0BD9BD383D926084D254 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_mB1ED8DC71CF0A395FFCC0BD9BD383D926084D254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * L_1 = List_1_AsReadOnly_m54F67B0D484AD0899C3C9DF83D615AA9E83D1647(L_0, /*hidden argument*/List_1_AsReadOnly_m54F67B0D484AD0899C3C9DF83D615AA9E83D1647_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m348FEA1934ACA6C4A5AB92C130533B22A9473EF5 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_m348FEA1934ACA6C4A5AB92C130533B22A9473EF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// solvers.Clear();
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_2 = __this->get_solvers_11();
		NullCheck(L_2);
		List_1_Clear_m382FDC72BB804BF1154933BDEADE125EAB54FC74(L_2, /*hidden argument*/List_1_Clear_m382FDC72BB804BF1154933BDEADE125EAB54FC74_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_3);
		List_1_AddRange_m35584E5341D8C0258780FCFB7018896EA46C8F23(L_3, L_4, /*hidden argument*/List_1_AddRange_m35584E5341D8C0258780FCFB7018896EA46C8F23_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m61841992F5F387E654AECDCAD908AED04FEA127A (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mDB5F5B39478017CAE701D482C7CA1D1564F5018F (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m2D2A75CE0C280A4C6F3654E71A526C6146C047BC (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_mD226BDF8CDF3DF4D22742113703F205CC4B91C9C (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  SolverHandler_get_AltScale_m0A60DA8B77606C3868E87DC943A1603F42E9272D (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m146DC120FA7DB5B0F5B8B195E8044A18B21C5358 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mFD25A298BB95498C1C4310C54AC4B10285F5DA64 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0030;
	}

IL_0025:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_trackingTarget_20();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0030:
	{
		V_1 = G_B5_0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m390DE358BF7066A94F75950910C072758D5A0C65 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_mE005B1C2A84CA33E771BFAC17CB6A30CD9E05D1D (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((value.IsLeft() || value.IsRight())
		//     && preferredTrackedHandedness != value)
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_mBF44868F4662A620ABB5A02915B9CEAA40233FF9(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_m74E725A996DB57EF446B5416ED46E7DC7C572BA1(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0011:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// preferredTrackedHandedness = value;
		uint8_t L_7 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_7);
	}

IL_002d:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->get_handJointService_23();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_m157BD67D3A89CD38DB0A6A09A304895FD715E1EE(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_m157BD67D3A89CD38DB0A6A09A304895FD715E1EE_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_mB823410FDB3B4264F62DBCEB7BC24531C53A0216 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_mB823410FDB3B4264F62DBCEB7BC24531C53A0216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95_inline(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_mEFF209F2352637A8F8CAA900CD8E93EB4F26309B((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m146DC120FA7DB5B0F5B8B195E8044A18B21C5358_inline(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_mFD25A298BB95498C1C4310C54AC4B10285F5DA64_inline(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// if (!IsValidHandedness(trackedHandness))
		uint8_t L_5 = __this->get_trackedHandness_5();
		bool L_6 = SolverHandler_IsValidHandedness_m262F9036782D88AA6EA144DB15109B4A2E4898D1(L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandness value. Defaulting to Handedness.Both");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE, /*hidden argument*/NULL);
		// TrackedHandness = Handedness.Both;
		SolverHandler_set_TrackedHandness_m456EB110CA3946CC75DE75CEB0A31FDF6E9A9F4B(__this, 3, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_8 = __this->get_trackedTargetType_4();
		bool L_9 = SolverHandler_IsValidTrackedObjectType_m558031AC6E76AA1B0B0E82DDAF68BBA10D40A35D(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.LogError("Using Obsolete SolverHandler.TrackedTargetType. Defaulting to type Head");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7, /*hidden argument*/NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_m01C5E049E90500E61BC6F12736763B03C4AC8294(__this, 0, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_m91AFDB92C2A6C47E972B41DB636C49D407494A33 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_mBB038610F5B0AD31A9E9ACA881FCC9A75354B678 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_lastUpdateTime_22();
		SolverHandler_set_DeltaTime_mFD25A298BB95498C1C4310C54AC4B10285F5DA64_inline(__this, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m9004F93BCA440AA2351AEBCF45ADF23A735B6A54 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m9004F93BCA440AA2351AEBCF45ADF23A735B6A54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// if (updateSolversList)
		bool L_0 = __this->get_updateSolversList_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// IEnumerable<Solver> inspectorOrderedSolvers = GetComponents<Solver>().Intersect(solvers);
		SolverU5BU5D_tF90C5E91BD722234FFCD87D2486DA2F70543149A* L_2 = Component_GetComponents_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m95D3DA607B4F8572D22EBB9CEBA9756505669DF1(__this, /*hidden argument*/Component_GetComponents_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m95D3DA607B4F8572D22EBB9CEBA9756505669DF1_RuntimeMethod_var);
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = Enumerable_Intersect_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m211D087C671701B56FA6CCEB748AF4A87A4A4ABF((RuntimeObject*)(RuntimeObject*)L_2, L_3, /*hidden argument*/Enumerable_Intersect_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m211D087C671701B56FA6CCEB748AF4A87A4A4ABF_RuntimeMethod_var);
		V_1 = L_4;
		// Solvers = inspectorOrderedSolvers.Union(Solvers).ToReadOnlyCollection();
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = SolverHandler_get_Solvers_mB1ED8DC71CF0A395FFCC0BD9BD383D926084D254(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Enumerable_Union_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m58919CFFC4B8E0C0D1B08F11EBA3228F7EAE6558(L_5, L_6, /*hidden argument*/Enumerable_Union_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m58919CFFC4B8E0C0D1B08F11EBA3228F7EAE6558_RuntimeMethod_var);
		ReadOnlyCollection_1_t81BC822A50B461F42B1B46D94E1EBD7A3E6073D9 * L_8 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m7B6A4FB0600C7D3701BC44F58190250B8CD733BB(L_7, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C_m7B6A4FB0600C7D3701BC44F58190250B8CD733BB_RuntimeMethod_var);
		SolverHandler_set_Solvers_m348FEA1934ACA6C4A5AB92C130533B22A9473EF5(__this, L_8, /*hidden argument*/NULL);
		// updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
	}

IL_003e:
	{
		// if (UpdateSolvers)
		bool L_9 = SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978_inline(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_m61841992F5F387E654AECDCAD908AED04FEA127A_inline(__this, L_12, /*hidden argument*/NULL);
		// GoalRotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_m2D2A75CE0C280A4C6F3654E71A526C6146C047BC_inline(__this, L_14, /*hidden argument*/NULL);
		// GoalScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95_inline(__this, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_3 = 0;
		goto IL_00be;
	}

IL_0086:
	{
		// Solver solver = solvers[i];
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_17 = __this->get_solvers_11();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_19 = List_1_get_Item_m8D016F17C5E3A4B810F5BE9D1EBED518F41D571A_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m8D016F17C5E3A4B810F5BE9D1EBED518F41D571A_RuntimeMethod_var);
		V_4 = L_19;
		// if (solver != null && solver.enabled)
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_22 = V_4;
		NullCheck(L_22);
		bool L_23 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B7_0 = 0;
	}

IL_00a9:
	{
		V_5 = (bool)G_B7_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_25 = V_4;
		NullCheck(L_25);
		Solver_SolverUpdateEntry_m6EB8C7846429463B253385DFE569F067B7D8D3E9(L_25, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_27 = V_3;
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_28 = __this->get_solvers_11();
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_m2D31D93EA08BC6AE15A1C36CDD955F2E0C41A806_inline(L_28, /*hidden argument*/List_1_get_Count_m2D31D93EA08BC6AE15A1C36CDD955F2E0C41A806_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0086;
		}
	}
	{
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mDC59D8A54DE27981CC00C810BD766E9DCB5E3632 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m5881BDAF414A1E7F39F1640E64F6B0D0521DC819 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_m5881BDAF414A1E7F39F1640E64F6B0D0521DC819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!solvers.Contains(solver))
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_0 = __this->get_solvers_11();
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_mF7CE5C524D8BBF55DBDF16D0905DDE14A2701C2A(L_0, L_1, /*hidden argument*/List_1_Contains_mF7CE5C524D8BBF55DBDF16D0905DDE14A2701C2A_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// solvers.Add(solver);
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_4 = __this->get_solvers_11();
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_5 = ___solver0;
		NullCheck(L_4);
		List_1_Add_m457BA0F54E13309C7EF4ED4A34F252959E6C487B(L_4, L_5, /*hidden argument*/List_1_Add_m457BA0F54E13309C7EF4ED4A34F252959E6C487B_RuntimeMethod_var);
		// updateSolversList = true;
		__this->set_updateSolversList_12((bool)1);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mA2311CFE0CFBD386CACD01DB228154DADFDF3295 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_mA2311CFE0CFBD386CACD01DB228154DADFDF3295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_0 = __this->get_solvers_11();
		Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m959E10B2C5B4E2F34A7D8766BAE64AA63066C528(L_0, L_1, /*hidden argument*/List_1_Remove_m959E10B2C5B4E2F34A7D8766BAE64AA63066C528_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_mC07291A73C76A3BA84FDDA9C8803C49C086057D8 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_mC07291A73C76A3BA84FDDA9C8803C49C086057D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		// trackingTarget = null;
		__this->set_trackingTarget_20((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_mD062765074A1CFC9FCDC5EC52AACEC20700B2A52 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_mD062765074A1CFC9FCDC5EC52AACEC20700B2A52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// controllerRay = null;
		__this->set_controllerRay_21((LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C *)NULL);
		// Transform target = null;
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// if (TrackedTargetType == TrackedObjectType.Head)
		int32_t L_0 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// target = CameraCache.Main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_mAAA0F0D4FB1C64120E7E88F796BA9E0E7547F2B6(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_01cd;
	}

IL_0030:
	{
		// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
		int32_t L_4 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00f5;
		}
	}
	{
		// if (TrackedHandness == Handedness.Both)
		uint8_t L_6 = SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54_inline(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00a5;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_8 = SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_8);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_9 = __this->get_currentTrackedHandedness_18();
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_10 = PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A(L_9, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A_RuntimeMethod_var);
		__this->set_controllerRay_21(L_10);
		// if (controllerRay == null)
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_11 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		uint8_t L_15 = HandednessExtensions_GetOppositeHandedness_m24D6C76BCFB756F5BF9602DA8FB125C4653473A9(L_14, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_15);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_16 = __this->get_currentTrackedHandedness_18();
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_17 = PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A(L_16, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A_RuntimeMethod_var);
		__this->set_controllerRay_21(L_17);
	}

IL_00a2:
	{
		goto IL_00c4;
	}

IL_00a5:
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_18 = SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_18);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_19 = __this->get_currentTrackedHandedness_18();
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_20 = PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A(L_19, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A_RuntimeMethod_var);
		__this->set_controllerRay_21(L_20);
	}

IL_00c4:
	{
		// if (controllerRay != null)
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_21 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		// target = controllerRay.transform;
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_24 = __this->get_controllerRay_21();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00ef;
	}

IL_00e6:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_00ef:
	{
		goto IL_01cd;
	}

IL_00f5:
	{
		// else if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_26 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)6))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_01b5;
		}
	}
	{
		// if (HandJointService != null)
		RuntimeObject* L_28 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_01b2;
		}
	}
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_30 = SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_30);
		// if (currentTrackedHandedness == Handedness.Both)
		uint8_t L_31 = __this->get_currentTrackedHandedness_18();
		V_8 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0199;
		}
	}
	{
		// if (HandJointService.IsHandTracked(PreferredTrackedHandedness))
		RuntimeObject* L_33 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		uint8_t L_34 = SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_35 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var, L_33, L_34);
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_015e;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_37 = SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_37);
		goto IL_0198;
	}

IL_015e:
	{
		// else if (HandJointService.IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
		RuntimeObject* L_38 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		uint8_t L_39 = SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline(__this, /*hidden argument*/NULL);
		uint8_t L_40 = HandednessExtensions_GetOppositeHandedness_m24D6C76BCFB756F5BF9602DA8FB125C4653473A9(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		bool L_41 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var, L_38, L_40);
		V_10 = L_41;
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_018f;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
		uint8_t L_43 = SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline(__this, /*hidden argument*/NULL);
		uint8_t L_44 = HandednessExtensions_GetOppositeHandedness_m24D6C76BCFB756F5BF9602DA8FB125C4653473A9(L_43, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_44);
		goto IL_0198;
	}

IL_018f:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_0198:
	{
	}

IL_0199:
	{
		// target = HandJointService.RequestJointTransform(this.TrackedHandJoint, currentTrackedHandedness);
		RuntimeObject* L_45 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		int32_t L_46 = SolverHandler_get_TrackedHandJoint_m2E92554BFEB284727CD6D93D9B3EF4587E606E47_inline(__this, /*hidden argument*/NULL);
		uint8_t L_47 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var, L_45, L_46, L_47);
		V_0 = L_48;
	}

IL_01b2:
	{
		goto IL_01cd;
	}

IL_01b5:
	{
		// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
		int32_t L_49 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_49) == ((int32_t)7))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_01cd;
		}
	}
	{
		// target = this.transformOverride;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_transformOverride_7();
		V_0 = L_51;
	}

IL_01cd:
	{
		// TrackTransform(target);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = V_0;
		SolverHandler_TrackTransform_mF7880ACE7791FB37EA04B0037135ECD9E7E339BF(__this, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mF7880ACE7791FB37EA04B0037135ECD9E7E339BF (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_mF7880ACE7791FB37EA04B0037135ECD9E7E339BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackingTarget != null || target == null) return;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (trackingTarget != null || target == null) return;
		goto IL_00c1;
	}

IL_0022:
	{
		// string name = string.Format("SolverHandler Target on {0} with offset {1}, {2}", target.gameObject.name, AdditionalOffset, AdditionalRotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___target0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SolverHandler_get_AdditionalOffset_m01A36727E627799ABC651B50DEE4B8FF24230DE2_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8;
		RuntimeObject * L_10 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SolverHandler_get_AdditionalRotation_mF995DA1310451AB41F09D76A30733F723F2838C3_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = L_11;
		RuntimeObject * L_13 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8604633F91A5364A570785AE4355317FF69CAA79, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// trackingTarget = new GameObject(name);
		String_t* L_15 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_16, L_15, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_16);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_trackingTarget_20();
		NullCheck(L_17);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_17, 1, /*hidden argument*/NULL);
		// trackingTarget.transform.parent = target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_trackingTarget_20();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = ___target0;
		NullCheck(L_19);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_19, L_20, /*hidden argument*/NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_trackingTarget_20();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SolverHandler_get_AdditionalOffset_m01A36727E627799ABC651B50DEE4B8FF24230DE2_inline(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_trackingTarget_20();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_22, L_27, /*hidden argument*/NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_trackingTarget_20();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = SolverHandler_get_AdditionalRotation_mF995DA1310451AB41F09D76A30733F723F2838C3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * SolverHandler_GetControllerRay_m7569F66C1C7F3D350AB70E248825ABAC88C2DBBF (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_m7569F66C1C7F3D350AB70E248825ABAC88C2DBBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * V_0 = NULL;
	{
		// return PointerUtils.GetPointer<LinePointer>(handedness);
		uint8_t L_0 = ___handedness0;
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_1 = PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C_m103A722B55C823001BDD99500B12012C9766650A_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_m5DA31BF42B438CDD7D9729D3B7CD616E753F744F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (trackingTarget == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00b8;
	}

IL_0019:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerRay == null || !controllerRay.IsTracked))
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0043;
		}
	}
	{
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_4 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		LinePointer_t7D2058101A404DF80034172CBF8216AED57EA20C * L_6 = __this->get_controllerRay_21();
		NullCheck(L_6);
		bool L_7 = ControllerPoseSynchronizer_get_IsTracked_mFB129D0DF4365BE473FC7A75132F11786FB0D6BC(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		G_B8_0 = G_B6_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B8_0 = 0;
	}

IL_0044:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00b8;
	}

IL_004d:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && !currentTrackedHandedness.IsNone())
		int32_t L_9 = SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_0066;
		}
	}
	{
		uint8_t L_10 = __this->get_currentTrackedHandedness_18();
		bool L_11 = HandednessExtensions_IsNone_m3819283C1B674A19E30E98C8E71DF2AB7CDBC25C(L_10, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B13_0 = 0;
	}

IL_0067:
	{
		V_3 = (bool)G_B13_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_00b4;
		}
	}
	{
		// bool trackingLeft = HandJointService.IsHandTracked(Handedness.Left);
		RuntimeObject* L_13 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var, L_13, 1);
		V_4 = L_14;
		// bool trackingRight = HandJointService.IsHandTracked(Handedness.Right);
		RuntimeObject* L_15 = SolverHandler_get_HandJointService_m9B653D160C40467DC65CE11AB51B7E2F07B84D62(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_16 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tE130C8E57EBC8B8C3DEE8B50FAA1C4B2E32E2DA9_il2cpp_TypeInfo_var, L_15, 2);
		V_5 = L_16;
		// return (currentTrackedHandedness.IsLeft() && !trackingLeft) ||
		//        (currentTrackedHandedness.IsRight() && !trackingRight);
		uint8_t L_17 = __this->get_currentTrackedHandedness_18();
		bool L_18 = HandednessExtensions_IsLeft_mBF44868F4662A620ABB5A02915B9CEAA40233FF9(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00b0;
		}
	}

IL_0099:
	{
		uint8_t L_20 = __this->get_currentTrackedHandedness_18();
		bool L_21 = HandednessExtensions_IsRight_m74E725A996DB57EF446B5416ED46E7DC7C572BA1(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ad;
		}
	}
	{
		bool L_22 = V_5;
		G_B19_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B19_0 = 0;
	}

IL_00ae:
	{
		G_B21_0 = G_B19_0;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B21_0 = 1;
	}

IL_00b1:
	{
		V_1 = (bool)G_B21_0;
		goto IL_00b8;
	}

IL_00b4:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00b8;
	}

IL_00b8:
	{
		// }
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m262F9036782D88AA6EA144DB15109B4A2E4898D1 (uint8_t ___hand0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return hand <= Handedness.Both;
		uint8_t L_0 = ___hand0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m558031AC6E76AA1B0B0E82DDAF68BBA10D40A35D (int32_t ___type0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___type0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m17A249CEC3587A17FDC6D24FD73235AD9E28410F (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m7C826D3AFCAF24C9B804EE498A9652B5C58C8A93 (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedTargetType != value)
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_3 = ___value0;
		__this->set_trackedTargetType_4(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m3A5EB1B08125E45C04CF98BEE5C9BA2DBE6BD4FA(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_mB9C62BE96AC027FD0E6C454BAAAC92EC5AE1E66D (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_mB9C62BE96AC027FD0E6C454BAAAC92EC5AE1E66D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TrackedObjectType trackedTargetType = TrackedObjectType.Head;
		__this->set_trackedTargetType_4(0);
		// private Handedness trackedHandness = Handedness.Both;
		__this->set_trackedHandness_5(3);
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_6(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_10((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 * L_0 = (List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62 *)il2cpp_codegen_object_new(List_1_tE99B477AEF09D7556B03FD6F84CAA8C343375F62_il2cpp_TypeInfo_var);
		List_1__ctor_mF20F4E0A946A50D6D829C9D8B9823C7A168690DB(L_0, /*hidden argument*/List_1__ctor_mF20F4E0A946A50D6D829C9D8B9823C7A168690DB_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		// private bool updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
		// protected Handedness currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->set_preferredTrackedHandedness_19(1);
		// private IMixedRealityHandJointService handJointService = null;
		__this->set_handJointService_23((RuntimeObject*)NULL);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_mF6A6492318D6D641FA029E28DE3F85FF024AC816 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m079A7A989074BF8669E451412E551340EB70A241 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_m4B3613BCBD294BD36431CABA071C456BBB4CEBB1 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_m66855574F1B02CD578F12C73B0C9B8ACD8659B57 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_mAEA3A81F658B5E2732F063C26EB90AA0D1B4842E (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => closestDistance;
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m03B1196A567FDBFD01B858D83E183BC6D5152B68 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => closestDistance = value;
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m7A5CFC98CD31D1DE316E7423DE13C5C437B0FEA0 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m65E449DB648D399D8EEA7BC2D6C057D090EC64A5 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_mC51AF606C70E23C6A933055DBA9819A7203455A9 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->get_surfaceRayOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m74869405B4854A1A8674B1E8B9F023C8BF75FC75 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m34CF53FB5EB54A15CC8072050E79C09919CA72BB (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_mF94DF8F234FE083FB9EC3BF0E7955441B5DD0920 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_mEF0BF29FA614CBD4E6C098C2BAFDCA50D4078B93 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m649E515243160E6685F8F97FB8C48A45417ADF6E (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m364AFD61DE9BEAD9755E69D9B8172C064DCCA5BD (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->get_orthographicBoxCast_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_m90E82CA0E0A3D1104FDC7C51575A56D3F8B53943 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_mD2187D13D02B1E067E1D2D7FB5901B27EFD3E3A8 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->get_maximumNormalVariance_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_mC3479F7F20134136FD6A8713872D04B620ED0398 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_mC7C9B05D44C0D9EBA4D32480BDE34CC644C62C58 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => sphereSize;
		float L_0 = __this->get_sphereSize_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_mB6D87C9C6D8D57A1390651EC1625750232FBDA1C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => sphereSize = value;
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m4A4882ED5E08C244065B2F718E485712C1787951 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->get_volumeCastSizeOverride_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m4011B32162ADF7435DD58C6892A8F4B7A0266481 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m9072C8F4F4C70332D152369169B0F56F616569D1 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_mC26A622010B0411B0C5936AA0E2247174C364ECB (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m06045B0DF1A977E7EFAF8FC06F5E67E3E9B87AB0 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m9E70F9F4B49685FF1E0CEAFEE70B06EB90BC1813 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mA55ADC3AE92C6CE7BB74AC60BDBFA00600F8CA92 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_m11B1429A3EFC7FF37B55C695234405AD8B6A4E74 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m409B2371EA644F976F0C64D2092D3BF1FD752ED2 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationBlend;
		float L_0 = __this->get_orientationBlend_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_mA58E5EE7DD658462CCDE04626DEC064F3655350E (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationBlend = value;
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m85823D16D53DCF579EACCE92190B2C75EA685AD7 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_m66C165204F567838C3655A84C59628D3F014705B (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m5752160BF8758DAF8E6D077E3845A4A9C8ECF883 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_m9D2AB6F354E0C7231C308FEE09521EDEDB72DC53 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m1F43AFE7C8FAF892090FA02DA543AB725E894B71 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_1 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m06045B0DF1A977E7EFAF8FC06F5E67E3E9B87AB0_inline(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0029:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_6 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_10 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_13 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0077:
	{
		// break;
		goto IL_0095;
	}

IL_0079:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// break;
		goto IL_0095;
	}

IL_0087:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_19 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// break;
		goto IL_0095;
	}

IL_0095:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		V_4 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_m2818A889990AC65D362BE0F35CAAA7F5B1095334 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_m2818A889990AC65D362BE0F35CAAA7F5B1095334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m06045B0DF1A977E7EFAF8FC06F5E67E3E9B87AB0_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_3 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_7 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_003d:
	{
		goto IL_005c;
	}

IL_0040:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		V_4 = L_14;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_4;
		return L_15;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_0010:
	{
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_2 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_3 = SolverHandler_get_AltScale_m0A60DA8B77606C3868E87DC943A1603F42E9272D_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m308A2967475B5A6244EB6F75090F2D9700C60AEF_inline((Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (KeepOrientationVertical)
		bool L_0 = SurfaceMagnetism_get_KeepOrientationVertical_m85823D16D53DCF579EACCE92190B2C75EA685AD7_inline(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// direction.y = 0;
		(&___direction0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&___surfaceNormal1)->set_y_3((0.0f));
	}

IL_0025:
	{
		// var trackedReferenceRotation = Quaternion.LookRotation(-direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (CurrentOrientationMode)
		int32_t L_10 = SurfaceMagnetism_get_CurrentOrientationMode_mA55ADC3AE92C6CE7BB74AC60BDBFA00600F8CA92_inline(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0083;
			}
			case 4:
			{
				goto IL_0094;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_006a:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_12 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = SolverHandler_get_GoalRotation_mDB5F5B39478017CAE701D482C7CA1D1564F5018F_inline(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_00ac;
	}

IL_0079:
	{
		// return trackedReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		V_4 = L_14;
		goto IL_00ac;
	}

IL_007e:
	{
		// return surfaceReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_1;
		V_4 = L_15;
		goto IL_00ac;
	}

IL_0083:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_1;
		float L_18 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		goto IL_00ac;
	}

IL_0094:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		goto IL_00ac;
	}

IL_00a3:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_4 = L_23;
		goto IL_00ac;
	}

IL_00ac:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_4;
		return L_24;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_mE169AAB3EA400F117B54230E661D128CC048BBAD (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_mE169AAB3EA400F117B54230E661D128CC048BBAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mBBE7BE2A5C25181F6EF9221F3EBBB4430AB440CE(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_m69E3C484B582C736702E12E3459EAC47DF648A1D(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_1, /*hidden argument*/NULL);
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_m4BE1991561A8E868236EA0E15ECCB35A4E1981F7(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 endpoint = RaycastEndPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_m032A856E02A6D71D784BDD8B3570EBB5B9FA1DD5(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_mE27C49037313B039029C1AB8093FE55FD8B4B371((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// if (currentRayStep.Direction == Vector3.zero)
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// return;
		goto IL_00ed;
	}

IL_0058:
	{
		// if (DebugEnabled)
		bool L_10 = SurfaceMagnetism_get_DebugEnabled_m5752160BF8758DAF8E6D077E3845A4A9C8ECF883_inline(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_12, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_14 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Terminus_mEE95F28FACFC1997E4753F7E60456AF18B50C475_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_14, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// switch (RaycastMode)
		int32_t L_17 = SurfaceMagnetism_get_RaycastMode_m34CF53FB5EB54A15CC8072050E79C09919CA72BB_inline(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00ed;
	}

IL_00a6:
	{
		// SimpleRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_m7456043639A20732E4CF56764B58490682D9EAA4(__this, (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_19, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00b5:
	{
		// BoxRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_20 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_m4884DA369E6E96ACDF2B8FB387BE40BDF0EC301C(__this, (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_20, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00c4:
	{
		// SphereRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_21 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_mC07909A28FBB25B74345B08E6E4550B5BF88807C(__this, (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_21, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00d3:
	{
		// Debug.LogError("Raycast mode set to SphereOverlap which is not valid for SurfaceMagnetism component. Disabling update solvers...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_22 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_22);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_22, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m7456043639A20732E4CF56764B58490682D9EAA4 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_m7456043639A20732E4CF56764B58490682D9EAA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_0 = ___rayStep0;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  L_1 = (*(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t972F1F899F22D7138D453F9EE6335BB2ABA1A516_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mF39FC246F1C6CA29DA541903CDC2148BB0052995(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// OnSurface = isHit;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline(__this, L_5, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// float length = hitDelta.magnitude;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		// if (length < closestDistance)
		float L_11 = V_3;
		float L_12 = __this->get_closestDistance_15();
		V_4 = (bool)((((float)L_11) < ((float)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_14, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_16 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_19, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_20, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if (isHit)
		bool L_21 = V_0;
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceRayOffset_17();
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_29 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_32, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A(__this, L_34, L_35, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mC07909A28FBB25B74345B08E6E4550B5BF88807C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_mC07909A28FBB25B74345B08E6E4550B5BF88807C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002d;
	}

IL_0027:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_2 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_6 = ___rayStep0;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  L_7 = (*(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t972F1F899F22D7138D453F9EE6335BB2ABA1A516_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_mE277C229C48319068DAFA67E972B70128676E340(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// float length = hitDelta.magnitude;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_17;
		// if (length < closestDistance)
		float L_18 = V_4;
		float L_19 = __this->get_closestDistance_15();
		V_5 = (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_21, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_23 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_27, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// if (isHit)
		bool L_28 = V_0;
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_31 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_surfaceRayOffset_17();
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_36 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_35, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_38, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_39, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_40 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A(__this, L_41, L_42, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m4884DA369E6E96ACDF2B8FB387BE40BDF0EC301C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m4884DA369E6E96ACDF2B8FB387BE40BDF0EC301C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	float V_15 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	int32_t G_B12_0 = 0;
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_003a;
	}

IL_001b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_mFD4C860E03612306E273763A83169C0B5EC3E115(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0066;
	}

IL_0056:
	{
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0066:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_24);
	}

IL_0094:
	{
		// Debug.Assert(boxCollider != null, $"Missing a box collider for Surface Magnetism on {gameObject}");
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_25 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_28 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_26, L_28, /*hidden argument*/NULL);
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_29 = __this->get_boxCollider_33();
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out positions, out normals, out hits))
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_31 = ___rayStep0;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  L_32 = (*(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_36 = V_2;
		float L_37 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_38 = __this->get_magneticSurfaces_13();
		int32_t L_39 = __this->get_boxRaysPerEdge_19();
		bool L_40 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t972F1F899F22D7138D453F9EE6335BB2ABA1A516_il2cpp_TypeInfo_var);
		bool L_41 = MixedRealityRaycaster_RaycastBoxPhysicsStep_mC36D102B66C6A28EDCA5FE822DBE01F76DA8447E(L_32, L_33, L_35, L_36, L_37, L_38, L_39, L_40, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		V_9 = L_41;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0277;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientationMode.None, out plane, out distance);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_43 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_43, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_45 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_45, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_47 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_48 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_50 = __this->get_boxCollider_33();
		NullCheck(L_50);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		float L_53 = __this->get_maximumNormalVariance_21();
		int32_t L_54 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_m5CCD7E3512700B9A9444A7284E6A36ED0129B3DB(__this, L_44, L_46, L_47, L_48, L_49, L_52, L_53, (bool)0, (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), (float*)(&V_11), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_12 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		bool L_56 = SurfaceMagnetism_IsNormalVertical_mAC6314CCB7CFD4B48CB59D2AC53F57B6EC011D02(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_016f;
		}
	}
	{
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_57 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_60 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_59, (0.0f), /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		goto IL_0170;
	}

IL_016f:
	{
		G_B12_0 = 0;
	}

IL_0170:
	{
		V_14 = (bool)G_B12_0;
		bool L_61 = V_14;
		if (!L_61)
		{
			goto IL_01ce;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_3;
		float L_63 = L_62.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_64), (0.0f), ((float)il2cpp_codegen_multiply((float)L_63, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_64, /*hidden argument*/NULL);
		V_7 = L_65;
		float L_66 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_15 = L_66;
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		float L_67 = V_15;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_68 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_68, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_70 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_69, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_67, L_73, /*hidden argument*/NULL);
		V_16 = L_74;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_75 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = ((-L_75));
	}

IL_01ce:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_3;
		float L_77 = L_76.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_78), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_77, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_78, /*hidden argument*/NULL);
		V_7 = L_79;
		float L_80 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_13 = L_80;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_81 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_81, /*hidden argument*/NULL);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_83 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_83, /*hidden argument*/NULL);
		float L_85 = __this->get_closestDistance_15();
		float L_86 = V_11;
		float L_87 = __this->get_surfaceRayOffset_17();
		float L_88 = V_13;
		float L_89 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_90 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_86, (float)L_87)), (float)L_88)), (float)L_89)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_84, L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_82, L_91, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		float L_94 = V_13;
		float L_95 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_93, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_94)), (float)L_95)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_92, L_96, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_97, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_98 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_98, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_101 = SurfaceMagnetism_CalculateMagnetismOrientation_m319B27C86BB4FF6CE1E9D6528791B188E232F63A(__this, L_99, L_100, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_101, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0281;
	}

IL_0277:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0281:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m5CCD7E3512700B9A9444A7284E6A36ED0129B3DB (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_m5CCD7E3512700B9A9444A7284E6A36ED0129B3DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	bool V_21 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_26;
	memset((&V_26), 0, sizeof(V_26));
	float V_27 = 0.0f;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	int32_t V_34 = 0;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_45;
	memset((&V_45), 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	float V_50 = 0.0f;
	bool V_51 = false;
	int32_t G_B19_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B45_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B64_0;
	memset((&G_B64_0), 0, sizeof(G_B64_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B63_0;
	memset((&G_B63_0), 0, sizeof(G_B63_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_1;
	memset((&G_B65_1), 0, sizeof(G_B65_1));
	int32_t G_B77_0 = 0;
	int32_t G_B81_0 = 0;
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		V_13 = L_2;
		bool L_3 = V_13;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_4;
	}

IL_0026:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_5 = ___closestDistance10;
		*((float*)L_5) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_6;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_14 = 0;
		goto IL_00af;
	}

IL_0045:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_7 = ___hits4;
		int32_t L_8 = V_14;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_15 = (bool)L_10;
		bool L_11 = V_15;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ___positions2;
		int32_t L_14 = V_14;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_12, L_18, /*hidden argument*/NULL);
		V_16 = L_19;
		// if (distance < closestDistance)
		float L_20 = V_16;
		float* L_21 = ___closestDistance10;
		float L_22 = *((float*)L_21);
		V_17 = (bool)((((float)L_20) < ((float)L_22))? 1 : 0);
		bool L_23 = V_17;
		if (!L_23)
		{
			goto IL_007f;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_24 = V_14;
		V_3 = L_24;
		// closestDistance = distance;
		float* L_25 = ___closestDistance10;
		float L_26 = V_16;
		*((float*)L_25) = (float)L_26;
	}

IL_007f:
	{
		// if (distance > farthestDistance)
		float L_27 = V_16;
		float L_28 = V_4;
		V_18 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_18;
		if (!L_29)
		{
			goto IL_0091;
		}
	}
	{
		// farthestDistance = distance;
		float L_30 = V_16;
		V_4 = L_30;
	}

IL_0091:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = ___normals3;
		int32_t L_33 = V_14;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		// ++numHits;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a8:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_38 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_39 = V_14;
		int32_t L_40 = V_0;
		V_19 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_19;
		if (L_41)
		{
			goto IL_0045;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = ___positions2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = L_45;
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
		int32_t L_47 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_46, (((float)((float)L_47))), /*hidden argument*/NULL);
		V_5 = L_48;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_20 = 0;
		goto IL_010d;
	}

IL_00da:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = ___hits4;
		int32_t L_50 = V_20;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (uint8_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_21 = (bool)L_52;
		bool L_53 = V_21;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_54 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_55 = ___normals3;
		int32_t L_56 = V_20;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_58, L_59, /*hidden argument*/NULL);
		V_22 = L_60;
		float L_61 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_54, (float)L_61));
	}

IL_0106:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_62 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_010d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_63 = V_20;
		int32_t L_64 = V_0;
		V_23 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_23;
		if (L_65)
		{
			goto IL_00da;
		}
	}
	{
		// variance /= numHits;
		float L_66 = V_7;
		int32_t L_67 = V_2;
		V_7 = ((float)((float)L_66/(float)(((float)((float)L_67)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_68 = V_7;
		float L_69 = ___maxNormalVariance6;
		if ((((float)L_68) > ((float)L_69)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_0;
		G_B19_0 = ((((float)(((float)((float)L_70)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)(0.25f)))))? 1 : 0);
		goto IL_0134;
	}

IL_0133:
	{
		G_B19_0 = 1;
	}

IL_0134:
	{
		V_24 = (bool)G_B19_0;
		bool L_72 = V_24;
		if (!L_72)
		{
			goto IL_0154;
		}
	}
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_73 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_74, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_77), L_75, L_76, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_73 = L_77;
		// return;
		goto IL_04ce;
	}

IL_0154:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_25 = 0;
		goto IL_01fc;
	}

IL_0170:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_78 = ___hits4;
		int32_t L_79 = V_25;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (uint8_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if (!L_81)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_82 = V_25;
		int32_t L_83 = V_3;
		G_B25_0 = ((((int32_t)L_82) == ((int32_t)L_83))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B25_0 = 1;
	}

IL_0180:
	{
		V_28 = (bool)G_B25_0;
		bool L_84 = V_28;
		if (!L_84)
		{
			goto IL_0189;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_0189:
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_85 = ___positions2;
		int32_t L_86 = V_25;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_88, L_89, /*hidden argument*/NULL);
		V_26 = L_90;
		// if (constrainVertical)
		bool L_91 = ___constrainVertical7;
		V_29 = L_91;
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_01cd;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_26)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_95 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_93, L_94, /*hidden argument*/NULL);
		V_30 = L_95;
		bool L_96 = V_30;
		if (!L_96)
		{
			goto IL_01cc;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_01cc:
	{
	}

IL_01cd:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_99 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_97, L_98, /*hidden argument*/NULL);
		V_27 = L_99;
		// if (angle < lowAngle)
		float L_100 = V_27;
		float L_101 = V_8;
		V_31 = (bool)((((float)L_100) < ((float)L_101))? 1 : 0);
		bool L_102 = V_31;
		if (!L_102)
		{
			goto IL_01f5;
		}
	}
	{
		// lowAngle = angle;
		float L_103 = V_27;
		V_8 = L_103;
		// lowIndex = hitIndex;
		int32_t L_104 = V_25;
		V_10 = L_104;
	}

IL_01f5:
	{
	}

IL_01f6:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_105 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_01fc:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_106 = V_25;
		int32_t L_107 = V_0;
		V_32 = (bool)((((int32_t)L_106) < ((int32_t)L_107))? 1 : 0);
		bool L_108 = V_32;
		if (L_108)
		{
			goto IL_0170;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_109 = ___constrainVertical7;
		if (L_109)
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_110 = V_10;
		G_B39_0 = ((((int32_t)((((int32_t)L_110) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B39_0 = 0;
	}

IL_0219:
	{
		V_33 = (bool)G_B39_0;
		bool L_111 = V_33;
		if (!L_111)
		{
			goto IL_0300;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_34 = 0;
		goto IL_02f1;
	}

IL_022b:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_112 = ___hits4;
		int32_t L_113 = V_34;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint8_t L_115 = (uint8_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		if (!L_115)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_116 = V_34;
		int32_t L_117 = V_3;
		if ((((int32_t)L_116) == ((int32_t)L_117)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_118 = V_34;
		int32_t L_119 = V_10;
		G_B45_0 = ((((int32_t)L_118) == ((int32_t)L_119))? 1 : 0);
		goto IL_0241;
	}

IL_0240:
	{
		G_B45_0 = 1;
	}

IL_0241:
	{
		V_37 = (bool)G_B45_0;
		bool L_120 = V_37;
		if (!L_120)
		{
			goto IL_024d;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_024d:
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_121 = ___positions2;
		int32_t L_122 = V_34;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_124, L_125, /*hidden argument*/NULL);
		V_22 = L_126;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_128 = ___positions2;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_131, L_132, /*hidden argument*/NULL);
		V_22 = L_133;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_135 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_127, L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_136 = fabsf(L_135);
		V_35 = L_136;
		// if (dot > MaxDot)
		float L_137 = V_35;
		V_38 = (bool)((((float)L_137) > ((float)(0.97f)))? 1 : 0);
		bool L_138 = V_38;
		if (!L_138)
		{
			goto IL_029b;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_029b:
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_140 = ___positions2;
		int32_t L_141 = V_10;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_143, L_144, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_146 = ___positions2;
		int32_t L_147 = V_34;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_149, L_150, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_145, L_151, /*hidden argument*/NULL);
		V_22 = L_152;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_154 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_139, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_155 = fabsf(L_154);
		V_36 = L_155;
		// if (nextAngle > highAngle)
		float L_156 = V_36;
		float L_157 = V_9;
		V_39 = (bool)((((float)L_156) > ((float)L_157))? 1 : 0);
		bool L_158 = V_39;
		if (!L_158)
		{
			goto IL_02ea;
		}
	}
	{
		// highAngle = nextAngle;
		float L_159 = V_36;
		V_9 = L_159;
		// highIndex = hitIndex;
		int32_t L_160 = V_34;
		V_11 = L_160;
	}

IL_02ea:
	{
	}

IL_02eb:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_161 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
	}

IL_02f1:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_162 = V_34;
		int32_t L_163 = V_0;
		V_40 = (bool)((((int32_t)L_162) < ((int32_t)L_163))? 1 : 0);
		bool L_164 = V_40;
		if (L_164)
		{
			goto IL_022b;
		}
	}
	{
	}

IL_0300:
	{
		// if (lowIndex != -1)
		int32_t L_165 = V_10;
		V_41 = (bool)((((int32_t)((((int32_t)L_165) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_166 = V_41;
		if (!L_166)
		{
			goto IL_0404;
		}
	}
	{
		// if (debugEnabled)
		bool L_167 = __this->get_debugEnabled_29();
		V_42 = L_167;
		bool L_168 = V_42;
		if (!L_168)
		{
			goto IL_0335;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_170 = ___positions2;
		int32_t L_171 = V_10;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_174 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_169, L_173, L_174, /*hidden argument*/NULL);
	}

IL_0335:
	{
		// if (highIndex != -1)
		int32_t L_175 = V_11;
		V_43 = (bool)((((int32_t)((((int32_t)L_175) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_176 = V_43;
		if (!L_176)
		{
			goto IL_0398;
		}
	}
	{
		// if (debugEnabled)
		bool L_177 = __this->get_debugEnabled_29();
		V_44 = L_177;
		bool L_178 = V_44;
		if (!L_178)
		{
			goto IL_0367;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_180 = ___positions2;
		int32_t L_181 = V_11;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_184 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_179, L_183, L_184, /*hidden argument*/NULL);
	}

IL_0367:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_185 = ___positions2;
		int32_t L_186 = V_10;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_188, L_189, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_191 = ___positions2;
		int32_t L_192 = V_11;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_195 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_194, L_195, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_190, L_196, /*hidden argument*/NULL);
		V_22 = L_197;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_198;
		goto IL_03dd;
	}

IL_0398:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_199 = ___positions2;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_202, L_203, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_204, L_205, /*hidden argument*/NULL);
		V_45 = L_206;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_207 = ___positions2;
		int32_t L_208 = V_10;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_211 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_212 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_210, L_211, /*hidden argument*/NULL);
		bool L_213 = ___constrainVertical7;
		G_B63_0 = L_212;
		if (L_213)
		{
			G_B64_0 = L_212;
			goto IL_03c7;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_45;
		G_B65_0 = L_214;
		G_B65_1 = G_B63_0;
		goto IL_03cc;
	}

IL_03c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_215 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B65_0 = L_215;
		G_B65_1 = G_B64_0;
	}

IL_03cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_216 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B65_1, G_B65_0, /*hidden argument*/NULL);
		V_22 = L_216;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_217 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_217;
	}

IL_03dd:
	{
		// if (debugEnabled)
		bool L_218 = __this->get_debugEnabled_29();
		V_46 = L_218;
		bool L_219 = V_46;
		if (!L_219)
		{
			goto IL_0401;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_221 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_222 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_223 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_221, L_222, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_224 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_220, L_223, L_224, /*hidden argument*/NULL);
	}

IL_0401:
	{
		goto IL_0413;
	}

IL_0404:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_225, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_226;
	}

IL_0413:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_227 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_228 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_229 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_227, L_228, /*hidden argument*/NULL);
		V_47 = (bool)((((float)L_229) > ((float)(0.0f)))? 1 : 0);
		bool L_230 = V_47;
		if (!L_230)
		{
			goto IL_0438;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_231 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_232 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_231, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_232;
	}

IL_0438:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_233 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_234 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_235 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_236;
		memset((&L_236), 0, sizeof(L_236));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_236), L_234, L_235, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_233 = L_236;
		// if (debugEnabled)
		bool L_237 = __this->get_debugEnabled_29();
		V_48 = L_237;
		bool L_238 = V_48;
		if (!L_238)
		{
			goto IL_0465;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_239 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_240 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_241 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_239, L_240, L_241, /*hidden argument*/NULL);
	}

IL_0465:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_242 = ___useClosestDistance8;
		if (L_242)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_243 = V_3;
		G_B77_0 = ((((int32_t)((((int32_t)L_243) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0473;
	}

IL_0472:
	{
		G_B77_0 = 0;
	}

IL_0473:
	{
		V_49 = (bool)G_B77_0;
		bool L_244 = V_49;
		if (!L_244)
		{
			goto IL_04ce;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_245 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_246 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_247 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_248;
		memset((&L_248), 0, sizeof(L_248));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_248), L_246, L_247, /*hidden argument*/NULL);
		bool L_249 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_245, L_248, (float*)(&V_50), /*hidden argument*/NULL);
		if (L_249)
		{
			goto IL_049d;
		}
	}
	{
		bool L_250 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_50), (0.0f), /*hidden argument*/NULL);
		G_B81_0 = ((((int32_t)L_250) == ((int32_t)0))? 1 : 0);
		goto IL_049e;
	}

IL_049d:
	{
		G_B81_0 = 1;
	}

IL_049e:
	{
		V_51 = (bool)G_B81_0;
		bool L_251 = V_51;
		if (!L_251)
		{
			goto IL_04c0;
		}
	}
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_252 = ___closestDistance10;
		float L_253 = V_50;
		float* L_254 = ___closestDistance10;
		float L_255 = *((float*)L_254);
		float L_256 = V_4;
		float L_257 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_258 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_253, L_255, ((float)il2cpp_codegen_add((float)L_256, (float)((float)il2cpp_codegen_multiply((float)L_257, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_252) = (float)L_258;
		goto IL_04cd;
	}

IL_04c0:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_04cd:
	{
	}

IL_04ce:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mAC6314CCB7CFD4B48CB59D2AC53F57B6EC011D02 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_mAC6314CCB7CFD4B48CB59D2AC53F57B6EC011D02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_m6A55B9F6FF2FCFE16CD1E71D7CD0C243A9E9765C (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_m3D645C6C0F0D103AE7CDA4B6FBA76D355FDC5397 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_m495ACB69AC405B3032B70B26507132EAE1E0AD7D (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return closestDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_mBB8061511FBC684CBD744AD4A0ECC6416805AC9B (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_mDA77224DA3DE4B027592AE8079DBD87F57B104C1 (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_mDA77224DA3DE4B027592AE8079DBD87F57B104C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_14((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_15((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_16((0.5f));
		// private float surfaceRayOffset = 0;
		__this->set_surfaceRayOffset_17((0.0f));
		// private SceneQueryType raycastMode = SceneQueryType.SimpleRaycast;
		__this->set_raycastMode_18(0);
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_19(3);
		// private bool orthographicBoxCast = false;
		__this->set_orthographicBoxCast_20((bool)0);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_21((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_22((1.0f));
		// private float volumeCastSizeOverride = 0;
		__this->set_volumeCastSizeOverride_23((0.0f));
		// private bool useLinkedAltScaleOverride = false;
		__this->set_useLinkedAltScaleOverride_24((bool)0);
		// private RaycastDirectionMode currentRaycastDirectionMode = RaycastDirectionMode.TrackedTargetForward;
		__this->set_currentRaycastDirectionMode_25(0);
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_26(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_27((0.65f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_28((bool)1);
		// private bool debugEnabled = false;
		__this->set_debugEnabled_29((bool)0);
		// private RayStep currentRayStep = new RayStep();
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_3 = __this->get_address_of_currentRayStep_32();
		il2cpp_codegen_initobj(L_3, sizeof(RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C ));
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mC4FF918739AEA89B3E8EE3517191D49611977C99 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_mDA3E4570BDFBCFB6A59E5136A2FCC24B6068A970 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => autoStart = value;
		bool L_0 = ___value0;
		__this->set_autoStart_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m547ED0E82B942C5B6A037B2A9BD095080827AA15 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_mC8F329DF852F3766358D153E989DF25CA3B2B5CA (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___value0;
		__this->set_defaultPlacementDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m2AD4E171698A409C490A8976AC308E71BBC93ED9 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_mE5C8CB8457BD361815C9C6BC0B059AED100DB57A (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m01B86CC0077C2E55EED7D467AD73BE5B209C7396 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mBDB32103FA9C3FF8ADBCD6B30DB678079C842250 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m8E7E470F404AC94D4D9C8ADE3B20781974E099DE (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m7498679B627B4318283E0DDF82F639D11C35B56A (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_m1F2F7684D787BA270C6BA5E04AFAE4BF73695484 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_mB3FC7F1B1B37C334024D25378FDCA4D11F27650E (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->get_rotateAccordingToSurface_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_m446D7293FB95022829C5BF21AA99AEDABA3A43FC (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___value0;
		__this->set_rotateAccordingToSurface_19(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_mCE35496D0352A60B7F53A68208E2E0BC0E5AFC46 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m1576F72C0FCA2CC7389FDE294FC366EA20CDD17D (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_mBC81B743ED61457EB1CB31E37C5E1A17A2ABCC3D (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_m4C156F538255970961FD00E603EB29262C610915 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_21(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m33E4A0F27D0ABDFE1EA8DAC8E004E09A11FECEB9 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_m0DCD7AAE72F54662FA0F52FEB1BF6EE136355885 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStarted_22(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_mAE8E77B4B82CC245FEDB13609BEEF7E3A60655A2 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_m5DA41136306C14CCFF05C7404F496A9D718C8A14 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStopped_23(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m20A938CA807044E7BC7FCF0A0EBED50D71F81FAF (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m014EF25F89B1324478310D974AF019781E62E4C9 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_m6C466C798C8F84C9F3AAF7F2C04AFA6BAC69AA9C (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_get_IsColliderPresent_m6C466C798C8F84C9F3AAF7F2C04AFA6BAC69AA9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// protected internal bool IsColliderPresent => gameObject != null ? gameObject.GetComponent<Collider>() != null : false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_2, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0022:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_mBB7B940012BBA6E49642827282A996E0B9B9615A (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_Start_mBB7B940012BBA6E49642827282A996E0B9B9615A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// base.Start();
		Solver_Start_m9DD8BA80872B3D0997A7566916440F9799E4493A(__this, /*hidden argument*/NULL);
		// Debug.Assert(IsColliderPresent, $"The game object {gameObject.name} does not have a collider attached, please attach a collider to use Tap to Place");
		bool L_0 = TapToPlace_get_IsColliderPresent_m6C466C798C8F84C9F3AAF7F2C04AFA6BAC69AA9C(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD33E0DFEC468C7B19CACF875ACED4277DD39E045, L_2, _stringLiteral787C1414705A5BB205FC61C22B67643D57F90A57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_0, L_3, /*hidden argument*/NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58(/*hidden argument*/NULL);
		// SurfaceNormalOffset = gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_5 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_4, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		NullCheck(L_5);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_6 = Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		TapToPlace_set_SurfaceNormalOffset_m8E7E470F404AC94D4D9C8ADE3B20781974E099DE_inline(__this, L_8, /*hidden argument*/NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_9 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9, /*hidden argument*/NULL);
		__this->set_ignoreRaycastLayer_25(L_9);
		// if (AutoStart)
		bool L_10 = TapToPlace_get_AutoStart_mC4FF918739AEA89B3E8EE3517191D49611977C99_inline(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060(__this, /*hidden argument*/NULL);
		goto IL_008c;
	}

IL_007d:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_12 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_mCBE905E33FDEB73741D685051610C9F1F7487927 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_OnDisable_mCBE905E33FDEB73741D685051610C9F1F7487927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_tAB30AF314323490DC19B42E9E12F67CFFE976BF3_m79769E68E6097FF6CCE376388DA9BA86F3A3D18A_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B3_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// if (!IsBeingPlaced)
		bool L_0 = TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		// GameObjectLayer = gameObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		TapToPlace_set_GameObjectLayer_m014EF25F89B1324478310D974AF019781E62E4C9_inline(__this, L_3, /*hidden argument*/NULL);
		// gameObject.layer = ignoreRaycastLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_ignoreRaycastLayer_25();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = true;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_6 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_6, (bool)1, /*hidden argument*/NULL);
		// IsBeingPlaced = true;
		TapToPlace_set_IsBeingPlaced_m01B86CC0077C2E55EED7D467AD73BE5B209C7396_inline(__this, (bool)1, /*hidden argument*/NULL);
		// OnPlacingStarted?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_7 = TapToPlace_get_OnPlacingStarted_m33E4A0F27D0ABDFE1EA8DAC8E004E09A11FECEB9_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0054:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B3_0, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
		RuntimeObject* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0065;
		}
	}
	{
		goto IL_006c;
	}

IL_0065:
	{
		NullCheck(G_B6_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_tAB30AF314323490DC19B42E9E12F67CFFE976BF3_m8C0154C5D993ED06B5D2DEBDC8E9016FD0452588_RuntimeMethod_var, G_B6_0, __this);
	}

IL_006c:
	{
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m62212B51D6ECAF2A5741BA9931962A5123411F65 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StopPlacement_m62212B51D6ECAF2A5741BA9931962A5123411F65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B3_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// if (IsBeingPlaced)
		bool L_0 = TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// gameObject.layer = GameObjectLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TapToPlace_get_GameObjectLayer_m20A938CA807044E7BC7FCF0A0EBED50D71F81FAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_2, L_3, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_4 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline(L_4, (bool)0, /*hidden argument*/NULL);
		// IsBeingPlaced = false;
		TapToPlace_set_IsBeingPlaced_m01B86CC0077C2E55EED7D467AD73BE5B209C7396_inline(__this, (bool)0, /*hidden argument*/NULL);
		// OnPlacingStopped?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_5 = TapToPlace_get_OnPlacingStopped_mAE8E77B4B82CC245FEDB13609BEEF7E3A60655A2_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_003f:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B3_0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA2DBA57F1E594300C810E84EDC2DF4EDBD58B6F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_mDECB23C7E4062E1903E48F5E40550D9EA24D29C1(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0050;
		}
	}
	{
		goto IL_0057;
	}

IL_0050:
	{
		NullCheck(G_B6_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_tAB30AF314323490DC19B42E9E12F67CFFE976BF3_m79769E68E6097FF6CCE376388DA9BA86F3A3D18A_RuntimeMethod_var, G_B6_0, __this);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_m744DB8B1F3C08493ED965C912A12A724E81E971A (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SolverUpdate_m744DB8B1F3C08493ED965C912A12A724E81E971A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// PerformRaycast();
		VirtActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast() */, __this);
		// SetPosition();
		VirtActionInvoker0::Invoke(19 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition() */, __this);
		// SetRotation();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation() */, __this);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_m4E79809C4623C5414DFD39972E3E66382FAFAC83 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_PerformRaycast_m4E79809C4623C5414DFD39972E3E66382FAFAC83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var transform = SolverHandler.TransformTarget;
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_0 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 origin = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Vector3 endpoint = transform.position + transform.forward;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// CurrentRay.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_9 = __this->get_address_of_CurrentRay_26();
		RayStep_UpdateRayStep_mE27C49037313B039029C1AB8093FE55FD8B4B371((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_9, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out CurrentHit);
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C  L_10 = __this->get_CurrentRay_26();
		float L_11 = TapToPlace_get_MaxRaycastDistance_m2AD4E171698A409C490A8976AC308E71BBC93ED9_inline(__this, /*hidden argument*/NULL);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_12 = TapToPlace_get_MagneticSurfaces_mCE35496D0352A60B7F53A68208E2E0BC0E5AFC46_inline(__this, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_13 = __this->get_address_of_CurrentHit_28();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t972F1F899F22D7138D453F9EE6335BB2ABA1A516_il2cpp_TypeInfo_var);
		bool L_14 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mF39FC246F1C6CA29DA541903CDC2148BB0052995(L_10, L_11, L_12, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_13, /*hidden argument*/NULL);
		__this->set_DidHitSurface_27(L_14);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_m2A07513E023C973533A752572645998F2F0556F1 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetPosition_m2A07513E023C973533A752572645998F2F0556F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (DidHitSurface)
		bool L_0 = __this->get_DidHitSurface_27();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_2 = __this->get_address_of_CurrentHit_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_2, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_3, /*hidden argument*/NULL);
		// AddOffset(CurrentHit.normal * SurfaceNormalOffset);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_4 = __this->get_address_of_CurrentHit_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_4, /*hidden argument*/NULL);
		float L_6 = TapToPlace_get_SurfaceNormalOffset_mBDB32103FA9C3FF8ADBCD6B30DB678079C842250_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_7);
		goto IL_0077;
	}

IL_003e:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_8 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * L_11 = ((Solver_t90904D191C2BBEE0E4043C30E6493BB8D5377C3C *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m3E1932AF88F9C115AC6B681B049866D2CE1F2361(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_12, /*hidden argument*/NULL);
		float L_14 = TapToPlace_get_DefaultPlacementDistance_m547ED0E82B942C5B6A037B2A9BD095080827AA15_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_13, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_15, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m56AC9676B69EF9DB2BFB28AC5F7CF15F2401F9CF(__this, L_16, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_mE8C7FD24810B474002C28077BC35CF102248B6F3 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetRotation_mE8C7FD24810B474002C28077BC35CF102248B6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * L_0 = __this->get_address_of_CurrentRay_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline((RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_2 = __this->get_address_of_CurrentHit_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4 = TapToPlace_get_KeepOrientationVertical_m7498679B627B4318283E0DDF82F639D11C35B56A_inline(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&V_1)->set_y_3((0.0f));
	}

IL_003d:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_6 = __this->get_DidHitSurface_27();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		bool L_7 = __this->get_rotateAccordingToSurface_19();
		G_B5_0 = ((int32_t)(L_7));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_3 = (bool)G_B5_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_12, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_006d:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_13, L_14, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m9C9213CFEFA227A8E395D441E81AC54A8515D8AD(__this, L_15, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDown_mB39AF83F881D2A35435D23C320A4B122A88A1419 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDragged_m5A913A189EEA70BDA095578533901A7FF05F125F (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerUp_mAB71E84FEAA38DF1BEDD2EDB814E0A8B72B07CE2 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerUp(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerClicked_m4290AD335AA651AD1E46DCBBC32BD7B874FD0D09 (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, MixedRealityPointerEventData_tCC4301DD4183C547A2CEE152E344ED2FDE096964 * ___eventData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if ((Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = __this->get_LastTimeClicked_29();
		float L_2 = __this->get_DoubleClickTimeout_30();
		V_0 = (bool)((((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) < ((float)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_001c:
	{
		// if (!IsBeingPlaced)
		bool L_4 = TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_mBBA6D05F9B797D2C6283BA9E349C43B175F80060(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0034:
	{
		// StopPlacement();
		TapToPlace_StopPlacement_m62212B51D6ECAF2A5741BA9931962A5123411F65(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// LastTimeClicked = Time.time;
		float L_6 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_LastTimeClicked_29(L_6);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_mB81D6746D5C3AE6FDC5A1BDCA89C2648F8BB690E (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace__ctor_mB81D6746D5C3AE6FDC5A1BDCA89C2648F8BB690E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool autoStart = false;
		__this->set_autoStart_13((bool)0);
		// private float defaultPlacementDistance = 1.5f;
		__this->set_defaultPlacementDistance_14((1.5f));
		// private float maxRaycastDistance = 20.0f;
		__this->set_maxRaycastDistance_15((20.0f));
		// private float surfaceNormalOffset = 0.0f;
		__this->set_surfaceNormalOffset_17((0.0f));
		// private bool keepOrientationVertical = false;
		__this->set_keepOrientationVertical_18((bool)0);
		// private bool rotateAccordingToSurface = false;
		__this->set_rotateAccordingToSurface_19((bool)0);
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_20(L_1);
		// private bool debugEnabled = true;
		__this->set_debugEnabled_21((bool)1);
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_3, /*hidden argument*/NULL);
		__this->set_onPlacingStarted_22(L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_4 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_4, /*hidden argument*/NULL);
		__this->set_onPlacingStopped_23(L_4);
		// protected float LastTimeClicked = 0;
		__this->set_LastTimeClicked_29((0.0f));
		// protected float DoubleClickTimeout = 0.5f;
		__this->set_DoubleClickTimeout_30((0.5f));
		Solver__ctor_m7E20064756DEC591CBBA854D673CE17BA4D22351(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_m09C380DE23CEFB2D84602527E8C8CD7DD0F01615 (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_m5295C3D4268B1D96085BC6CFA87366FF7EFA712E (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_m46A905BBFF0BD9D06EB09D7A25E7274006ECEDB1 (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_m419CE9AC858122E7284022689A5DFD9CE641FC7D (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_m419CE9AC858122E7284022689A5DFD9CE641FC7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_0016:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		goto IL_0073;
	}

IL_006a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
	}

IL_0073:
	{
		V_5 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_6;
		return L_29;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_mE5E7B2EDCD8EDE663F2884BBC04E8A99D4A6AE63 (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_mE5E7B2EDCD8EDE663F2884BBC04E8A99D4A6AE63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_4 = NULL;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (Centered)
		bool L_6 = __this->get_Centered_9();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_8/(int32_t)L_9))))), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		__this->set_offSet_12(L_18);
		goto IL_0095;
	}

IL_0088:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_19);
	}

IL_0095:
	{
		// for (int i = 0; i < childCount; i++)
		V_3 = 0;
		goto IL_00f2;
	}

IL_0099:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_23, L_34, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f2:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		V_5 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (L_38)
		{
			goto IL_0099;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_m52C7ED0434034F6BE0533EEC781DB7BB72BE2969 (TileGridObjectCollection_t842CA12C730D72657DEE9E4BE5A5D53947498DA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_m52C7ED0434034F6BE0533EEC781DB7BB72BE2969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		// protected bool Centered = false;
		__this->set_Centered_9((bool)0);
		// protected GridDivisions DepthCalculatedBy = GridDivisions.Rows;
		__this->set_DepthCalculatedBy_10(0);
		// protected bool OnlyInEditMode = false;
		__this->set_OnlyInEditMode_11((bool)0);
		// protected bool editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingCameraTrackingThreshold_m013269D80CB2EE84E08E40C4F906657A852F6170_inline (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, const RuntimeMethod* method)
{
	{
		// get => facingCameraTrackingThreshold;
		float L_0 = __this->get_facingCameraTrackingThreshold_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingCameraTrackingThreshold_m503991666228C3A279AF81BC34AE701F5B25CE48_inline (HandConstraintPalmUp_t72AB9C8BC8C48927DD2D9A44EAC546A4A58AC4E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => facingCameraTrackingThreshold = value;
		float L_0 = ___value0;
		__this->set_facingCameraTrackingThreshold_27(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraint_set_RotationBehavior_m4DFC626AF3FA66585581D6FA9B83ED04DD5720DC_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => rotationBehavior = value;
		int32_t L_0 = ___value0;
		__this->set_rotationBehavior_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandConstraint_set_OffsetBehavior_m036272D62181A51D75A2CC304EF83D4A9570BDEC_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => offsetBehavior = value;
		int32_t L_0 = ___value0;
		__this->set_offsetBehavior_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m3A03FF5441381424BE44746CB4CF5CAA49FD7978_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandConstraint_get_SafeZone_m4A9398DC62E3C6994C66CD0DA3FD1603AA4E392F_inline (HandConstraint_t53ADBBECC33BECC185365024B54ED1926EF8BB1E * __this, const RuntimeMethod* method)
{
	{
		// get => safeZone;
		int32_t L_0 = __this->get_safeZone_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m390DE358BF7066A94F75950910C072758D5A0C65_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m42ED6186F3266897ED65FDB9B1C8625148A2A8BE_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m6C7775ACC71BE3EF18D1BB4EBA0CBD328BB2CD1F_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m27EC106262803F2FBFD1B73E40819AB6CE9215F1_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m3EF82A03B4DE55EA88726F68C8B750D982EA3282_inline (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m4546A61D4000A985ADAABED1178A1DA454F6B282_inline (RadialView_t4437B22369AF69884D55CB2EB95722382DFD288B * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m61841992F5F387E654AECDCAD908AED04FEA127A_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mDB5F5B39478017CAE701D482C7CA1D1564F5018F_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m2D2A75CE0C280A4C6F3654E71A526C6146C047BC_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_mD226BDF8CDF3DF4D22742113703F205CC4B91C9C_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mB7CE23EBBDA892D520E2BBA52727E70D03D65B95_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m146DC120FA7DB5B0F5B8B195E8044A18B21C5358_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mFD25A298BB95498C1C4310C54AC4B10285F5DA64_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m7C2FF17FCA264DB085C32E5624C1D155007EBB0B_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m361E01B4C701D341299C3763A7BF95A5AE1CDE54_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m2E0A6108E8527580B4BB4A607C2B603723DCB387_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m2E92554BFEB284727CD6D93D9B3EF4587E606E47_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m01A36727E627799ABC651B50DEE4B8FF24230DE2_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mF995DA1310451AB41F09D76A30733F723F2838C3_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m06045B0DF1A977E7EFAF8FC06F5E67E3E9B87AB0_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  SolverHandler_get_AltScale_m0A60DA8B77606C3868E87DC943A1603F42E9272D_inline (SolverHandler_tE8AED90BD19FBA4E784484C4ADE07D08C0D2546D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m308A2967475B5A6244EB6F75090F2D9700C60AEF_inline (Vector3Smoothed_tF405EB9A22A00B61C2B768B87D2D8F1C0C86FF02 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m85823D16D53DCF579EACCE92190B2C75EA685AD7_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mA55ADC3AE92C6CE7BB74AC60BDBFA00600F8CA92_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_mA93D96CA69A384553563AA7C49D4BC1E5D9E10E0_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m5752160BF8758DAF8E6D077E3845A4A9C8ECF883_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m4D854C509B944E68325CB9ABCE58718A18C1222A_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_mEE95F28FACFC1997E4753F7E60456AF18B50C475_inline (RayStep_tEB58A83B43B7C3848D05F1A88AA0D8BE39FFCB7C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m34CF53FB5EB54A15CC8072050E79C09919CA72BB_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mBAC00E80FF4517EBE10A02728870E700BA76C451_inline (SurfaceMagnetism_tC07DE5419406EDB4048F07B0AFA5E61CF8DDAEA8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m8E7E470F404AC94D4D9C8ADE3B20781974E099DE_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mC4FF918739AEA89B3E8EE3517191D49611977C99_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_mBC6EDBE44ED7765C3E3F54061CFBC0B9C4FF8D5B_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m014EF25F89B1324478310D974AF019781E62E4C9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m01B86CC0077C2E55EED7D467AD73BE5B209C7396_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m33E4A0F27D0ABDFE1EA8DAC8E004E09A11FECEB9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m20A938CA807044E7BC7FCF0A0EBED50D71F81FAF_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_mAE8E77B4B82CC245FEDB13609BEEF7E3A60655A2_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m2AD4E171698A409C490A8976AC308E71BBC93ED9_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_mCE35496D0352A60B7F53A68208E2E0BC0E5AFC46_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mBDB32103FA9C3FF8ADBCD6B30DB678079C842250_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m547ED0E82B942C5B6A037B2A9BD095080827AA15_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m7498679B627B4318283E0DDF82F639D11C35B56A_inline (TapToPlace_t388683DE83EA889FEBB93AD404EF1CCAD766C151 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
