#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>
struct Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_t26A8D4F032C245BD2F2CED17FAE6AE06A1B2367F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct KeyCollection_t50695B1CDDEDFCC35C6FD62B5339E24627989EEB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>
struct KeyCollection_t62170518B68434DC707EAF269031B569E222F7A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_t6984AEE49F877533C37047EE896803B74621B49F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct ValueCollection_t1890085792BC5607B1E41B7F53E1BDF4A199D007;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>
struct ValueCollection_t477E17AD47DD69CA806CD8FEE6B54CAAC387F905;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7B72C4937AA028485C5554E9F9F9C90D3564BB7C;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>[]
struct EntryU5BU5D_t1721CB3E59B2472CF9CEEDEC75CFF6189B93C7B4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>[]
struct EntryU5BU5D_tF0FB8ABD0CEFA9298E9138861149AA4F35AC079F;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Excellcube.EasyTutorial.Utils.CompletionChecker
struct CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// Excellcube.EasyTutorial.Utils.TextLocalizer
struct TextLocalizer_t8AF55B17EB8891DB77D0AA607976E75B5E47D953;
// Excellcube.EasyTutorial.Utils.TouchBlockView
struct TouchBlockView_t7727F6C6D79BE7B74C0E357E1ABD176C02847FEE;
// Excellcube.EasyTutorial.Utils.TutorialEvent
struct TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB;
// Excellcube.EasyTutorial.Utils.TutorialPageGuide
struct TutorialPageGuide_tDEB292DCB3D1E4F28FFBE25798CD674EFBF6D3E5;
// Excellcube.EasyTutorial.Utils.TutorialSelectionTarget
struct TutorialSelectionTarget_tA7B86462E64AF9FBBCDF3DB374005284F4D8AB8A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived
struct EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA9CB9D1E17AB35254803697ECBAFF3696BD78CA4;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m696F75BC04B4AA7B3C43E7DCF972FD44DD3965C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC8BA5FE82E9663D4C4C55B85C545B12E0053B6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF5939A56B362958B3C09679107C8794D774B4F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m3353D0E6166E23EACA756F3F43C33B723BE8275C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m3E3379A4891194BF46E54403DFDEB69E96906882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB2285310B8D3CD8659ED2962C552D6078B2984F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m6473B166E6477F2453A36DED12CE057FECA220AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m333BC4FB557C9D4C6EAA092B231CAEC4C278FB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB1717D7E4ED3EA704004364DCAC711C533432362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0C629D40875D5758250A513ED18D341E057DB1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9333D3C9E5ABFCA2E619F5DBF480A9D87A6B77EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA38D2FBFAD963C5B4E18321717938AE63000CB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m05C43F8390BCC03152E8367BFABFBB4F5FA050ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7C12076299E0AA463B151BE1D9668670DFA8C571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m52D39C100999F98E866C4C92D7BB850224B9EAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6A40B154E4B4002C5A5A7262CB75E434F12237BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m44981B85C3109EA936AC230C91D1FB5E118FF271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB0A2179BC9D7D2B754427939E4736BF9BC70B423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t18EC8B7D3227F07DE74C0B49147B452E0ED278AD 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7B72C4937AA028485C5554E9F9F9C90D3564BB7C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t26A8D4F032C245BD2F2CED17FAE6AE06A1B2367F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6984AEE49F877533C37047EE896803B74621B49F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1721CB3E59B2472CF9CEEDEC75CFF6189B93C7B4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t50695B1CDDEDFCC35C6FD62B5339E24627989EEB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1890085792BC5607B1E41B7F53E1BDF4A199D007* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>
struct Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF0FB8ABD0CEFA9298E9138861149AA4F35AC079F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t62170518B68434DC707EAF269031B569E222F7A6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t477E17AD47DD69CA806CD8FEE6B54CAAC387F905* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
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

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Excellcube.EasyTutorial.Utils.CompletionChecker
struct CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744  : public RuntimeObject
{
	// System.Int32 Excellcube.EasyTutorial.Utils.CompletionChecker::m_CurrentTutorialIndex
	int32_t ___m_CurrentTutorialIndex_0;
	// System.Int32 Excellcube.EasyTutorial.Utils.CompletionChecker::m_TutorialPagesCount
	int32_t ___m_TutorialPagesCount_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Excellcube.EasyTutorial.Utils.TutorialEvent
struct TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>> Excellcube.EasyTutorial.Utils.TutorialEvent::m_EventMap
	Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* ___m_EventMap_1;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>> Excellcube.EasyTutorial.Utils.TutorialEvent::m_TargetMap
	Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* ___m_TargetMap_2;
};

struct TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_StaticFields
{
	// Excellcube.EasyTutorial.Utils.TutorialEvent Excellcube.EasyTutorial.Utils.TutorialEvent::sInstance
	TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* ___sInstance_0;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.String>>
struct Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>
struct Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived
struct EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Excellcube.EasyTutorial.Utils.TextLocalizer
struct TextLocalizer_t8AF55B17EB8891DB77D0AA607976E75B5E47D953  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Excellcube.EasyTutorial.Utils.TouchBlockView
struct TouchBlockView_t7727F6C6D79BE7B74C0E357E1ABD176C02847FEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Excellcube.EasyTutorial.Utils.TutorialPageGuide
struct TutorialPageGuide_tDEB292DCB3D1E4F28FFBE25798CD674EFBF6D3E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Excellcube.EasyTutorial.Utils.TutorialSelectionTarget
struct TutorialSelectionTarget_tA7B86462E64AF9FBBCDF3DB374005284F4D8AB8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Excellcube.EasyTutorial.Utils.TutorialSelectionTarget::m_Key
	String_t* ___m_Key_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent__ctor_m8B8FF8A930016EBE20823580C837B968595DA369 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::.ctor()
inline void Dictionary_2__ctor_m9333D3C9E5ABFCA2E619F5DBF480A9D87A6B77EA (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF5939A56B362958B3C09679107C8794D774B4F35 (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, String_t* ___key0, Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, String_t*, Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::get_Item(TKey)
inline Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5 (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB2285310B8D3CD8659ED2962C552D6078B2984F8 (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::Add(TKey,TValue)
inline void Dictionary_2_Add_m696F75BC04B4AA7B3C43E7DCF972FD44DD3965C9 (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* __this, RuntimeObject* ___key0, EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, RuntimeObject*, EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC8BA5FE82E9663D4C4C55B85C545B12E0053B6D8 (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, RuntimeObject* ___key0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, RuntimeObject*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::get_Item(TKey)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1 (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::GetEnumerator()
inline Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419 (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B (*) (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::Dispose()
inline void Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03 (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::get_Current()
inline KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_inline (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE (*) (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::get_Value()
inline EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* KeyValuePair_2_get_Value_m44981B85C3109EA936AC230C91D1FB5E118FF271_inline (KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE* __this, const RuntimeMethod* method)
{
	return ((  EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* (*) (KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_inline (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::MoveNext()
inline bool Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199 (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::Remove(TKey)
inline bool Dictionary_2_Remove_m333BC4FB557C9D4C6EAA092B231CAEC4C278FB77 (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::Clear()
inline void Dictionary_2_Clear_m3353D0E6166E23EACA756F3F43C33B723BE8275C (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::Clear()
inline void Dictionary_2_Clear_m3E3379A4891194BF46E54403DFDEB69E96906882 (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m6A40B154E4B4002C5A5A7262CB75E434F12237BE_inline (KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::Remove(TKey)
inline bool Dictionary_2_Remove_mB1717D7E4ED3EA704004364DCAC711C533432362 (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84 Dictionary_2_GetEnumerator_m6473B166E6477F2453A36DED12CE057FECA220AF (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84 (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m05C43F8390BCC03152E8367BFABFBB4F5FA050ED (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 Enumerator_get_Current_m52D39C100999F98E866C4C92D7BB850224B9EAB0_inline (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 (*) (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.String>>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_inline (KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* KeyValuePair_2_get_Value_mB0A2179BC9D7D2B754427939E4736BF9BC70B423_inline (KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::Unlisten(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_Unlisten_m248E780030B9D2AAEC071CD0D81A57E3DD7FF6D6 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, String_t* ___eventId0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m7C12076299E0AA463B151BE1D9668670DFA8C571 (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived>>::.ctor()
inline void Dictionary_2__ctor_mA38D2FBFAD963C5B4E18321717938AE63000CB13 (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m0C629D40875D5758250A513ED18D341E057DB1A8 (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Int32 Excellcube.EasyTutorial.Utils.CompletionChecker::get_CurrentTutorialIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompletionChecker_get_CurrentTutorialIndex_mF9B81D8AED28D325E156692DD4E081A09212E527 (CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744* __this, const RuntimeMethod* method) 
{
	{
		// public  int CurrentTutorialIndex => m_CurrentTutorialIndex;
		int32_t L_0 = __this->___m_CurrentTutorialIndex_0;
		return L_0;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.CompletionChecker::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionChecker_Initialize_m410A45477D161073C7C207387941051C061C65F7 (CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744* __this, int32_t ___tutorialPagesCount0, const RuntimeMethod* method) 
{
	{
		// m_TutorialPagesCount = tutorialPagesCount;
		int32_t L_0 = ___tutorialPagesCount0;
		__this->___m_TutorialPagesCount_1 = L_0;
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.CompletionChecker::FindLastIncompletedTutorialIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionChecker_FindLastIncompletedTutorialIndex_m52EC32B530C295054A59839E3593F26EE52653A6 (CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.CompletionChecker::Complete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionChecker_Complete_m4219C02B11D3CA1A53D4E19CDE64E77E8A432B56 (CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.CompletionChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionChecker__ctor_m334D2AB88E1FFDF25BE7289B97A0295EDC0E7353 (CompletionChecker_t8B1A4F356C4468715D5EC9AC9E0EC37290EB6744* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Excellcube.EasyTutorial.Utils.TextLocalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextLocalizer__ctor_m89DA719FA6C3F25CDCE58EA571B33470DA41E29E (TextLocalizer_t8AF55B17EB8891DB77D0AA607976E75B5E47D953* __this, const RuntimeMethod* method) 
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
// System.Void Excellcube.EasyTutorial.Utils.TouchBlockView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchBlockView__ctor_m47316E66C6E04A0CA9760545565D902401F7FA00 (TouchBlockView_t7727F6C6D79BE7B74C0E357E1ABD176C02847FEE* __this, const RuntimeMethod* method) 
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
// Excellcube.EasyTutorial.Utils.TutorialEvent Excellcube.EasyTutorial.Utils.TutorialEvent::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* TutorialEvent_get_Instance_mA54E6E603DACAB49DA5C0D5DEBD4B60A7687DC29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(sInstance == null) {
		TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* L_0 = ((TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_StaticFields*)il2cpp_codegen_static_fields_for(TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var))->___sInstance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// sInstance = new TutorialEvent();
		TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* L_1 = (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB*)il2cpp_codegen_object_new(TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TutorialEvent__ctor_m8B8FF8A930016EBE20823580C837B968595DA369(L_1, NULL);
		((TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_StaticFields*)il2cpp_codegen_static_fields_for(TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var))->___sInstance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_StaticFields*)il2cpp_codegen_static_fields_for(TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var))->___sInstance_0), (void*)L_1);
	}

IL_0011:
	{
		// return sInstance;
		TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* L_2 = ((TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_StaticFields*)il2cpp_codegen_static_fields_for(TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB_il2cpp_TypeInfo_var))->___sInstance_0;
		return L_2;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::set_Instance(Excellcube.EasyTutorial.Utils.TutorialEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_set_Instance_m5DF071D6B6EB83C8F3388918A737486748BEDF76 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* ___value0, const RuntimeMethod* method) 
{
	{
		// private set {}
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::Listen(System.String,System.Object,Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_Listen_m1F6CB78EF4CC7B51256AFD3725D0C688E5CCCFA5 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, String_t* ___eventId0, RuntimeObject* ___target1, EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m696F75BC04B4AA7B3C43E7DCF972FD44DD3965C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC8BA5FE82E9663D4C4C55B85C545B12E0053B6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF5939A56B362958B3C09679107C8794D774B4F35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB2285310B8D3CD8659ED2962C552D6078B2984F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9333D3C9E5ABFCA2E619F5DBF480A9D87A6B77EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* V_0 = NULL;
	{
		// if(!m_EventMap.ContainsKey(eventId)) {
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = __this->___m_EventMap_1;
		String_t* L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E(L_0, L_1, Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// m_EventMap.Add(eventId, new Dictionary<object, EventReceived>());
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_3 = __this->___m_EventMap_1;
		String_t* L_4 = ___eventId0;
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_5 = (Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87*)il2cpp_codegen_object_new(Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m9333D3C9E5ABFCA2E619F5DBF480A9D87A6B77EA(L_5, Dictionary_2__ctor_m9333D3C9E5ABFCA2E619F5DBF480A9D87A6B77EA_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mF5939A56B362958B3C09679107C8794D774B4F35(L_3, L_4, L_5, Dictionary_2_Add_mF5939A56B362958B3C09679107C8794D774B4F35_RuntimeMethod_var);
	}

IL_001f:
	{
		// var map = m_EventMap[eventId];
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_6 = __this->___m_EventMap_1;
		String_t* L_7 = ___eventId0;
		NullCheck(L_6);
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_8;
		L_8 = Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5(L_6, L_7, Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		V_0 = L_8;
		// if(!map.ContainsKey(target)) {
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_9 = V_0;
		RuntimeObject* L_10 = ___target1;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_mB2285310B8D3CD8659ED2962C552D6078B2984F8(L_9, L_10, Dictionary_2_ContainsKey_mB2285310B8D3CD8659ED2962C552D6078B2984F8_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		// map.Add(target, callback);
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_12 = V_0;
		RuntimeObject* L_13 = ___target1;
		EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* L_14 = ___callback2;
		NullCheck(L_12);
		Dictionary_2_Add_m696F75BC04B4AA7B3C43E7DCF972FD44DD3965C9(L_12, L_13, L_14, Dictionary_2_Add_m696F75BC04B4AA7B3C43E7DCF972FD44DD3965C9_RuntimeMethod_var);
		// if(!m_TargetMap.ContainsKey(target)) {
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_15 = __this->___m_TargetMap_2;
		RuntimeObject* L_16 = ___target1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA(L_15, L_16, Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_005c;
		}
	}
	{
		// m_TargetMap.Add(target, new List<string>());
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_18 = __this->___m_TargetMap_2;
		RuntimeObject* L_19 = ___target1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_20, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		NullCheck(L_18);
		Dictionary_2_Add_mC8BA5FE82E9663D4C4C55B85C545B12E0053B6D8(L_18, L_19, L_20, Dictionary_2_Add_mC8BA5FE82E9663D4C4C55B85C545B12E0053B6D8_RuntimeMethod_var);
	}

IL_005c:
	{
		// m_TargetMap[target].Add(eventId);
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_21 = __this->___m_TargetMap_2;
		RuntimeObject* L_22 = ___target1;
		NullCheck(L_21);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23;
		L_23 = Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1(L_21, L_22, Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
		String_t* L_24 = ___eventId0;
		NullCheck(L_23);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_23, L_24, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::Broadcast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_Broadcast_m8593D805CF76E266A7EFF73E279E666ABB4219AF (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, String_t* ___eventId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m44981B85C3109EA936AC230C91D1FB5E118FF271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(m_EventMap.ContainsKey(eventId)) {
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = __this->___m_EventMap_1;
		String_t* L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E(L_0, L_1, Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// Dictionary<object, EventReceived> map = m_EventMap[eventId];
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_3 = __this->___m_EventMap_1;
		String_t* L_4 = ___eventId0;
		NullCheck(L_3);
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_5;
		L_5 = Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5(L_3, L_4, Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		// foreach(KeyValuePair<object, EventReceived> p in map) {
		NullCheck(L_5);
		Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B L_6;
		L_6 = Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419(L_5, Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03((&V_0), Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0022_1:
			{
				// foreach(KeyValuePair<object, EventReceived> p in map) {
				KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE L_7;
				L_7 = Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_inline((&V_0), Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_RuntimeMethod_var);
				V_1 = L_7;
				// p.Value();
				EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* L_8;
				L_8 = KeyValuePair_2_get_Value_m44981B85C3109EA936AC230C91D1FB5E118FF271_inline((&V_1), KeyValuePair_2_get_Value_m44981B85C3109EA936AC230C91D1FB5E118FF271_RuntimeMethod_var);
				NullCheck(L_8);
				EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_inline(L_8, NULL);
			}

IL_0036_1:
			{
				// foreach(KeyValuePair<object, EventReceived> p in map) {
				bool L_9;
				L_9 = Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199((&V_0), Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::Unlisten(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_Unlisten_m248E780030B9D2AAEC071CD0D81A57E3DD7FF6D6 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, String_t* ___eventId0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m333BC4FB557C9D4C6EAA092B231CAEC4C278FB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CB9D1E17AB35254803697ECBAFF3696BD78CA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EventMap.ContainsKey(eventId))
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = __this->___m_EventMap_1;
		String_t* L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E(L_0, L_1, Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// m_EventMap[eventId].Remove(target);
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_3 = __this->___m_EventMap_1;
		String_t* L_4 = ___eventId0;
		NullCheck(L_3);
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_5;
		L_5 = Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5(L_3, L_4, Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		RuntimeObject* L_6 = ___target1;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_m333BC4FB557C9D4C6EAA092B231CAEC4C278FB77(L_5, L_6, Dictionary_2_Remove_m333BC4FB557C9D4C6EAA092B231CAEC4C278FB77_RuntimeMethod_var);
		// if (m_TargetMap.ContainsKey(target))
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_8 = __this->___m_TargetMap_2;
		RuntimeObject* L_9 = ___target1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA(L_8, L_9, Dictionary_2_ContainsKey_m492886F15644C9F366BF674DA588E2943FE1C7AA_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// m_TargetMap[target].Remove(eventId);
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_11 = __this->___m_TargetMap_2;
		RuntimeObject* L_12 = ___target1;
		NullCheck(L_11);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13;
		L_13 = Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1(L_11, L_12, Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
		String_t* L_14 = ___eventId0;
		NullCheck(L_13);
		bool L_15;
		L_15 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_13, L_14, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		return;
	}

IL_0043:
	{
		// Debug.LogWarningFormat("TutorialEvent doesn't have a key {0}", eventId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		String_t* L_18 = ___eventId0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralA9CB9D1E17AB35254803697ECBAFF3696BD78CA4, L_17, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::UnlistenAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_UnlistenAll_mDABDDC1A9C45D40DB1134431098157A1D12D6BA2 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m3353D0E6166E23EACA756F3F43C33B723BE8275C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m3E3379A4891194BF46E54403DFDEB69E96906882_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_EventMap.Clear();
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = __this->___m_EventMap_1;
		NullCheck(L_0);
		Dictionary_2_Clear_m3353D0E6166E23EACA756F3F43C33B723BE8275C(L_0, Dictionary_2_Clear_m3353D0E6166E23EACA756F3F43C33B723BE8275C_RuntimeMethod_var);
		// m_TargetMap.Clear();
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_1 = __this->___m_TargetMap_2;
		NullCheck(L_1);
		Dictionary_2_Clear_m3E3379A4891194BF46E54403DFDEB69E96906882(L_1, Dictionary_2_Clear_m3E3379A4891194BF46E54403DFDEB69E96906882_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::UnlistenAll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_UnlistenAll_mCF10C71B1626B2319E48047BCFEA09BE23580FB3 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, String_t* ___eventId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mB1717D7E4ED3EA704004364DCAC711C533432362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6A40B154E4B4002C5A5A7262CB75E434F12237BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_EventMap.ContainsKey(eventId))
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = __this->___m_EventMap_1;
		String_t* L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E(L_0, L_1, Dictionary_2_ContainsKey_mD2590B8881850C2040C0C8F708F2AA8FABFE597E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// Dictionary<object, EventReceived> eventMap = m_EventMap[eventId];
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_3 = __this->___m_EventMap_1;
		String_t* L_4 = ___eventId0;
		NullCheck(L_3);
		Dictionary_2_t692196BED784899127A2F243A0ACAF38BB886A87* L_5;
		L_5 = Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5(L_3, L_4, Dictionary_2_get_Item_mB416DC41A5AC5CD63225FA40F0F08C46904F1AF5_RuntimeMethod_var);
		// foreach (var elem in eventMap)
		NullCheck(L_5);
		Enumerator_t1224DAB0DD41E2FC856D9B6D1AE4047803E89A8B L_6;
		L_6 = Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419(L_5, Dictionary_2_GetEnumerator_m64C1AC2B0830891C0113AD6FBF3099C3D6898419_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03((&V_0), Enumerator_Dispose_mD9B8A4C75CE8F525A4364DB05CAC5D90FCE40A03_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0022_1:
			{
				// foreach (var elem in eventMap)
				KeyValuePair_2_t11D1AC0008DF77065A51B85E5E2602B9A82150FE L_7;
				L_7 = Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_inline((&V_0), Enumerator_get_Current_mF659F718D7D25DED728235FA85CEB3CBDF5D6027_RuntimeMethod_var);
				V_1 = L_7;
				// m_TargetMap[elem.Key].Remove(eventId);
				Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_8 = __this->___m_TargetMap_2;
				RuntimeObject* L_9;
				L_9 = KeyValuePair_2_get_Key_m6A40B154E4B4002C5A5A7262CB75E434F12237BE_inline((&V_1), KeyValuePair_2_get_Key_m6A40B154E4B4002C5A5A7262CB75E434F12237BE_RuntimeMethod_var);
				NullCheck(L_8);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
				L_10 = Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1(L_8, L_9, Dictionary_2_get_Item_m67C81222D84BA9EC671CBF35D11AEFB039A02FB1_RuntimeMethod_var);
				String_t* L_11 = ___eventId0;
				NullCheck(L_10);
				bool L_12;
				L_12 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_10, L_11, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
			}

IL_0043_1:
			{
				// foreach (var elem in eventMap)
				bool L_13;
				L_13 = Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199((&V_0), Enumerator_MoveNext_m18946D3844BF1E5EBEF652C7E8502021D468E199_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// m_EventMap.Remove(eventId);
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_14 = __this->___m_EventMap_1;
		String_t* L_15 = ___eventId0;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_Remove_mB1717D7E4ED3EA704004364DCAC711C533432362(L_14, L_15, Dictionary_2_Remove_mB1717D7E4ED3EA704004364DCAC711C533432362_RuntimeMethod_var);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::UnlistenAll(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent_UnlistenAll_mDA1EBE1B744D5A2D2B7A2FA6F6855233474E3BD6 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m6473B166E6477F2453A36DED12CE057FECA220AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05C43F8390BCC03152E8367BFABFBB4F5FA050ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7C12076299E0AA463B151BE1D9668670DFA8C571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m52D39C100999F98E866C4C92D7BB850224B9EAB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB0A2179BC9D7D2B754427939E4736BF9BC70B423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// foreach(KeyValuePair<object, List<string>> p in m_TargetMap) {
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_0 = __this->___m_TargetMap_2;
		NullCheck(L_0);
		Enumerator_tE842D3EE3B1653800B90251A0645CE4D2F834E84 L_1;
		L_1 = Dictionary_2_GetEnumerator_m6473B166E6477F2453A36DED12CE057FECA220AF(L_0, Dictionary_2_GetEnumerator_m6473B166E6477F2453A36DED12CE057FECA220AF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05C43F8390BCC03152E8367BFABFBB4F5FA050ED((&V_0), Enumerator_Dispose_m05C43F8390BCC03152E8367BFABFBB4F5FA050ED_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_000e_1:
			{
				// foreach(KeyValuePair<object, List<string>> p in m_TargetMap) {
				KeyValuePair_2_tE0E9B5A7EEB3E74135F41BB6AC5D32B397A2F052 L_2;
				L_2 = Enumerator_get_Current_m52D39C100999F98E866C4C92D7BB850224B9EAB0_inline((&V_0), Enumerator_get_Current_m52D39C100999F98E866C4C92D7BB850224B9EAB0_RuntimeMethod_var);
				V_1 = L_2;
				// if(p.Key.Equals(target)) {
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_inline((&V_1), KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_RuntimeMethod_var);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___target0;
				NullCheck(L_3);
				bool L_5;
				L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
				if (!L_5)
				{
					goto IL_0054_1;
				}
			}
			{
				// List<string> eventIds = p.Value;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
				L_6 = KeyValuePair_2_get_Value_mB0A2179BC9D7D2B754427939E4736BF9BC70B423_inline((&V_1), KeyValuePair_2_get_Value_mB0A2179BC9D7D2B754427939E4736BF9BC70B423_RuntimeMethod_var);
				// foreach(string eventId in eventIds.ToArray()) {
				NullCheck(L_6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
				L_7 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_6, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				V_2 = L_7;
				V_3 = 0;
				goto IL_004e_1;
			}

IL_0036_1:
			{
				// foreach(string eventId in eventIds.ToArray()) {
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
				int32_t L_9 = V_3;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_4 = L_11;
				// Unlisten(eventId, p.Key);
				String_t* L_12 = V_4;
				RuntimeObject* L_13;
				L_13 = KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_inline((&V_1), KeyValuePair_2_get_Key_mA36AC2BC3414565CC318E30D030B22F8CCFC1568_RuntimeMethod_var);
				TutorialEvent_Unlisten_m248E780030B9D2AAEC071CD0D81A57E3DD7FF6D6(__this, L_12, L_13, NULL);
				int32_t L_14 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_004e_1:
			{
				// foreach(string eventId in eventIds.ToArray()) {
				int32_t L_15 = V_3;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_2;
				NullCheck(L_16);
				if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
				{
					goto IL_0036_1;
				}
			}

IL_0054_1:
			{
				// foreach(KeyValuePair<object, List<string>> p in m_TargetMap) {
				bool L_17;
				L_17 = Enumerator_MoveNext_m7C12076299E0AA463B151BE1D9668670DFA8C571((&V_0), Enumerator_MoveNext_m7C12076299E0AA463B151BE1D9668670DFA8C571_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialEvent__ctor_m8B8FF8A930016EBE20823580C837B968595DA369 (TutorialEvent_t9668AAEE80E09013CB82185B6D0FB03FA0F58CCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0C629D40875D5758250A513ED18D341E057DB1A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA38D2FBFAD963C5B4E18321717938AE63000CB13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, Dictionary<object, EventReceived>> m_EventMap
		//     = new Dictionary<string, Dictionary<object, EventReceived>>();
		Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682* L_0 = (Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682*)il2cpp_codegen_object_new(Dictionary_2_t8390D4775E21A5CCFE4EEAD7C988DA510E817682_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA38D2FBFAD963C5B4E18321717938AE63000CB13(L_0, Dictionary_2__ctor_mA38D2FBFAD963C5B4E18321717938AE63000CB13_RuntimeMethod_var);
		__this->___m_EventMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventMap_1), (void*)L_0);
		// private Dictionary<object, List<string>> m_TargetMap
		//     = new Dictionary<object, List<string>>();
		Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4* L_1 = (Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4*)il2cpp_codegen_object_new(Dictionary_2_tC78AC5D7E34E2203DDA4CF8A82BEAB67974A80B4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m0C629D40875D5758250A513ED18D341E057DB1A8(L_1, Dictionary_2__ctor_m0C629D40875D5758250A513ED18D341E057DB1A8_RuntimeMethod_var);
		__this->___m_TargetMap_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetMap_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_Multicast(EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* currentDelegate = reinterpret_cast<EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_OpenInst(EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_OpenStatic(EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventReceived__ctor_mD1177EF4748A291DA1DDAE1D8206BB3ADB536820 (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_Multicast;
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2 (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventReceived_BeginInvoke_mA717FC28457A71B93ECA37DB3D305556532F754B (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialEvent/EventReceived::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventReceived_EndInvoke_mCD0BDBC7BAB6663AFB0BC869DB49423CD827C282 (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Excellcube.EasyTutorial.Utils.TutorialPageGuide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialPageGuide__ctor_mF99B9019EA1F8B98EDEA0D94558ED57400336366 (TutorialPageGuide_tDEB292DCB3D1E4F28FFBE25798CD674EFBF6D3E5* __this, const RuntimeMethod* method) 
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
// System.String Excellcube.EasyTutorial.Utils.TutorialSelectionTarget::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TutorialSelectionTarget_get_Key_mE41B6005D8FFC35BE903054BC81858A1706FBB8D (TutorialSelectionTarget_tA7B86462E64AF9FBBCDF3DB374005284F4D8AB8A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Key;
		String_t* L_0 = __this->___m_Key_4;
		return L_0;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialSelectionTarget::set_Key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialSelectionTarget_set_Key_m3FD83D68A71AA499B431B1A1DB58097B0E5D8134 (TutorialSelectionTarget_tA7B86462E64AF9FBBCDF3DB374005284F4D8AB8A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Key = value;
		String_t* L_0 = ___value0;
		__this->___m_Key_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_4), (void*)L_0);
		return;
	}
}
// System.Void Excellcube.EasyTutorial.Utils.TutorialSelectionTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialSelectionTarget__ctor_m06B861675DE97F345089B4974FAED3B1BE5EC243 (TutorialSelectionTarget_tA7B86462E64AF9FBBCDF3DB374005284F4D8AB8A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventReceived_Invoke_m38148C2C53B98E0C44813F734DCF9C42FF6FFDA2_inline (EventReceived_tF3ABD11F537DEE700D64E3AF3D0E70AE87BCD9CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
