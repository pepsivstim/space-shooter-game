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

#include "il2cpp-class-internals.h"
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

// AsteroidMovement
struct AsteroidMovement_t1893369400;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Camera
struct Camera_t4157153871;
// BackgroundScroll
struct BackgroundScroll_t556428063;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// BoostBox
struct BoostBox_t1949306062;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// Enemy
struct Enemy_t1765729589;
// Player
struct Player_t3266647312;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// EnemyLaser
struct EnemyLaser_t2200729234;
// HealthBox
struct HealthBox_t1805416806;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// PlayerLaser
struct PlayerLaser_t2088916748;
// ReloadBox
struct ReloadBox_t858729640;
// SpawnPowerup
struct SpawnPowerup_t2362029034;
// Test
struct Test_t650638817;
// TimerHandling
struct TimerHandling_t732269483;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Void
struct Void_t1185182177;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t AsteroidMovement_Update_m2319465924_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const uint32_t BackgroundScroll_Update_m2418091040_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var;
extern String_t* _stringLiteral612197690;
extern const uint32_t BoostBox_Start_m2973899038_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t BoostBox_Update_m1888812066_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2261822918;
extern const uint32_t BoostBox_OnTriggerEnter2D_m1258653881_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var;
extern String_t* _stringLiteral1405601666;
extern String_t* _stringLiteral4191626386;
extern String_t* _stringLiteral481485872;
extern String_t* _stringLiteral4195563715;
extern const uint32_t Enemy_Start_m3612231678_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t Enemy_Update_m3583063749_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1644776407;
extern String_t* _stringLiteral3966945654;
extern const uint32_t Enemy_OnTriggerEnter2D_m1074951176_MetadataUsageId;
extern String_t* _stringLiteral650830492;
extern String_t* _stringLiteral2055235816;
extern const uint32_t EnemyLaser_Start_m995217891_MetadataUsageId;
extern const uint32_t EnemyLaser_Update_m93010033_MetadataUsageId;
extern String_t* _stringLiteral2065079264;
extern const uint32_t EnemyLaser_OnTriggerEnter2D_m549763278_MetadataUsageId;
extern const uint32_t HealthBox_Start_m3500558942_MetadataUsageId;
extern const uint32_t HealthBox_Update_m761653493_MetadataUsageId;
extern const uint32_t HealthBox_OnTriggerEnter2D_m936407010_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var;
extern String_t* _stringLiteral3476995607;
extern String_t* _stringLiteral3824146412;
extern String_t* _stringLiteral592044961;
extern String_t* _stringLiteral2741843698;
extern String_t* _stringLiteral4195432643;
extern String_t* _stringLiteral4195760323;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral3228161487;
extern String_t* _stringLiteral496717860;
extern const uint32_t Player_Update_m2111558832_MetadataUsageId;
extern String_t* _stringLiteral4185160750;
extern String_t* _stringLiteral1123751886;
extern const uint32_t Player_OnTriggerEnter2D_m1893340054_MetadataUsageId;
extern const uint32_t PlayerLaser_Update_m1447564680_MetadataUsageId;
extern String_t* _stringLiteral760905195;
extern const uint32_t PlayerLaser_OnTriggerEnter2D_m2142524542_MetadataUsageId;
extern const uint32_t ReloadBox_Start_m2273093971_MetadataUsageId;
extern const uint32_t ReloadBox_Update_m1983362334_MetadataUsageId;
extern String_t* _stringLiteral1523746986;
extern const uint32_t ReloadBox_OnTriggerEnter2D_m4159726909_MetadataUsageId;
extern const uint32_t SpawnPowerup_Update_m793725738_MetadataUsageId;
extern String_t* _stringLiteral1073816753;
extern const uint32_t TimerHandling_Start_m178792050_MetadataUsageId;

struct TouchU5BU5D_t1849554061;


#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T337909235_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
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

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef ASTEROIDMOVEMENT_T1893369400_H
#define ASTEROIDMOVEMENT_T1893369400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsteroidMovement
struct  AsteroidMovement_t1893369400  : public MonoBehaviour_t3962482529
{
public:
	// System.Single AsteroidMovement::speed
	float ___speed_2;
	// System.Single AsteroidMovement::spawnOffset
	float ___spawnOffset_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(AsteroidMovement_t1893369400, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_spawnOffset_3() { return static_cast<int32_t>(offsetof(AsteroidMovement_t1893369400, ___spawnOffset_3)); }
	inline float get_spawnOffset_3() const { return ___spawnOffset_3; }
	inline float* get_address_of_spawnOffset_3() { return &___spawnOffset_3; }
	inline void set_spawnOffset_3(float value)
	{
		___spawnOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASTEROIDMOVEMENT_T1893369400_H
#ifndef SPAWNPOWERUP_T2362029034_H
#define SPAWNPOWERUP_T2362029034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnPowerup
struct  SpawnPowerup_t2362029034  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 SpawnPowerup::rarity1
	int32_t ___rarity1_2;
	// System.Int32 SpawnPowerup::rarity2
	int32_t ___rarity2_3;
	// System.Int32 SpawnPowerup::rarity3
	int32_t ___rarity3_4;
	// System.Int32 SpawnPowerup::enemy_rate
	int32_t ___enemy_rate_5;
	// UnityEngine.GameObject SpawnPowerup::powerup1
	GameObject_t1113636619 * ___powerup1_6;
	// UnityEngine.GameObject SpawnPowerup::powerup2
	GameObject_t1113636619 * ___powerup2_7;
	// UnityEngine.GameObject SpawnPowerup::powerup3
	GameObject_t1113636619 * ___powerup3_8;
	// UnityEngine.GameObject SpawnPowerup::enemy1
	GameObject_t1113636619 * ___enemy1_9;
	// UnityEngine.GameObject SpawnPowerup::enemy2
	GameObject_t1113636619 * ___enemy2_10;
	// UnityEngine.GameObject SpawnPowerup::enemy3
	GameObject_t1113636619 * ___enemy3_11;
	// UnityEngine.GameObject SpawnPowerup::enemy4
	GameObject_t1113636619 * ___enemy4_12;

public:
	inline static int32_t get_offset_of_rarity1_2() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___rarity1_2)); }
	inline int32_t get_rarity1_2() const { return ___rarity1_2; }
	inline int32_t* get_address_of_rarity1_2() { return &___rarity1_2; }
	inline void set_rarity1_2(int32_t value)
	{
		___rarity1_2 = value;
	}

	inline static int32_t get_offset_of_rarity2_3() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___rarity2_3)); }
	inline int32_t get_rarity2_3() const { return ___rarity2_3; }
	inline int32_t* get_address_of_rarity2_3() { return &___rarity2_3; }
	inline void set_rarity2_3(int32_t value)
	{
		___rarity2_3 = value;
	}

	inline static int32_t get_offset_of_rarity3_4() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___rarity3_4)); }
	inline int32_t get_rarity3_4() const { return ___rarity3_4; }
	inline int32_t* get_address_of_rarity3_4() { return &___rarity3_4; }
	inline void set_rarity3_4(int32_t value)
	{
		___rarity3_4 = value;
	}

	inline static int32_t get_offset_of_enemy_rate_5() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___enemy_rate_5)); }
	inline int32_t get_enemy_rate_5() const { return ___enemy_rate_5; }
	inline int32_t* get_address_of_enemy_rate_5() { return &___enemy_rate_5; }
	inline void set_enemy_rate_5(int32_t value)
	{
		___enemy_rate_5 = value;
	}

	inline static int32_t get_offset_of_powerup1_6() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___powerup1_6)); }
	inline GameObject_t1113636619 * get_powerup1_6() const { return ___powerup1_6; }
	inline GameObject_t1113636619 ** get_address_of_powerup1_6() { return &___powerup1_6; }
	inline void set_powerup1_6(GameObject_t1113636619 * value)
	{
		___powerup1_6 = value;
		Il2CppCodeGenWriteBarrier((&___powerup1_6), value);
	}

	inline static int32_t get_offset_of_powerup2_7() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___powerup2_7)); }
	inline GameObject_t1113636619 * get_powerup2_7() const { return ___powerup2_7; }
	inline GameObject_t1113636619 ** get_address_of_powerup2_7() { return &___powerup2_7; }
	inline void set_powerup2_7(GameObject_t1113636619 * value)
	{
		___powerup2_7 = value;
		Il2CppCodeGenWriteBarrier((&___powerup2_7), value);
	}

	inline static int32_t get_offset_of_powerup3_8() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___powerup3_8)); }
	inline GameObject_t1113636619 * get_powerup3_8() const { return ___powerup3_8; }
	inline GameObject_t1113636619 ** get_address_of_powerup3_8() { return &___powerup3_8; }
	inline void set_powerup3_8(GameObject_t1113636619 * value)
	{
		___powerup3_8 = value;
		Il2CppCodeGenWriteBarrier((&___powerup3_8), value);
	}

	inline static int32_t get_offset_of_enemy1_9() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___enemy1_9)); }
	inline GameObject_t1113636619 * get_enemy1_9() const { return ___enemy1_9; }
	inline GameObject_t1113636619 ** get_address_of_enemy1_9() { return &___enemy1_9; }
	inline void set_enemy1_9(GameObject_t1113636619 * value)
	{
		___enemy1_9 = value;
		Il2CppCodeGenWriteBarrier((&___enemy1_9), value);
	}

	inline static int32_t get_offset_of_enemy2_10() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___enemy2_10)); }
	inline GameObject_t1113636619 * get_enemy2_10() const { return ___enemy2_10; }
	inline GameObject_t1113636619 ** get_address_of_enemy2_10() { return &___enemy2_10; }
	inline void set_enemy2_10(GameObject_t1113636619 * value)
	{
		___enemy2_10 = value;
		Il2CppCodeGenWriteBarrier((&___enemy2_10), value);
	}

	inline static int32_t get_offset_of_enemy3_11() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___enemy3_11)); }
	inline GameObject_t1113636619 * get_enemy3_11() const { return ___enemy3_11; }
	inline GameObject_t1113636619 ** get_address_of_enemy3_11() { return &___enemy3_11; }
	inline void set_enemy3_11(GameObject_t1113636619 * value)
	{
		___enemy3_11 = value;
		Il2CppCodeGenWriteBarrier((&___enemy3_11), value);
	}

	inline static int32_t get_offset_of_enemy4_12() { return static_cast<int32_t>(offsetof(SpawnPowerup_t2362029034, ___enemy4_12)); }
	inline GameObject_t1113636619 * get_enemy4_12() const { return ___enemy4_12; }
	inline GameObject_t1113636619 ** get_address_of_enemy4_12() { return &___enemy4_12; }
	inline void set_enemy4_12(GameObject_t1113636619 * value)
	{
		___enemy4_12 = value;
		Il2CppCodeGenWriteBarrier((&___enemy4_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNPOWERUP_T2362029034_H
#ifndef TIMERHANDLING_T732269483_H
#define TIMERHANDLING_T732269483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerHandling
struct  TimerHandling_t732269483  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TimerHandling::timer
	float ___timer_2;
	// UnityEngine.UI.Text TimerHandling::time_number
	Text_t1901882714 * ___time_number_3;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(TimerHandling_t732269483, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_time_number_3() { return static_cast<int32_t>(offsetof(TimerHandling_t732269483, ___time_number_3)); }
	inline Text_t1901882714 * get_time_number_3() const { return ___time_number_3; }
	inline Text_t1901882714 ** get_address_of_time_number_3() { return &___time_number_3; }
	inline void set_time_number_3(Text_t1901882714 * value)
	{
		___time_number_3 = value;
		Il2CppCodeGenWriteBarrier((&___time_number_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERHANDLING_T732269483_H
#ifndef TEST_T650638817_H
#define TEST_T650638817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test
struct  Test_t650638817  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T650638817_H
#ifndef BACKGROUNDSCROLL_T556428063_H
#define BACKGROUNDSCROLL_T556428063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundScroll
struct  BackgroundScroll_t556428063  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BackgroundScroll::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BackgroundScroll_t556428063, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDSCROLL_T556428063_H
#ifndef RELOADBOX_T858729640_H
#define RELOADBOX_T858729640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReloadBox
struct  ReloadBox_t858729640  : public MonoBehaviour_t3962482529
{
public:
	// Player ReloadBox::player
	Player_t3266647312 * ___player_2;
	// UnityEngine.UI.Text ReloadBox::status_text
	Text_t1901882714 * ___status_text_3;
	// System.Single ReloadBox::speed
	float ___speed_4;
	// System.Single ReloadBox::reload_speed
	float ___reload_speed_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(ReloadBox_t858729640, ___player_2)); }
	inline Player_t3266647312 * get_player_2() const { return ___player_2; }
	inline Player_t3266647312 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t3266647312 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_status_text_3() { return static_cast<int32_t>(offsetof(ReloadBox_t858729640, ___status_text_3)); }
	inline Text_t1901882714 * get_status_text_3() const { return ___status_text_3; }
	inline Text_t1901882714 ** get_address_of_status_text_3() { return &___status_text_3; }
	inline void set_status_text_3(Text_t1901882714 * value)
	{
		___status_text_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_text_3), value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ReloadBox_t858729640, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_reload_speed_5() { return static_cast<int32_t>(offsetof(ReloadBox_t858729640, ___reload_speed_5)); }
	inline float get_reload_speed_5() const { return ___reload_speed_5; }
	inline float* get_address_of_reload_speed_5() { return &___reload_speed_5; }
	inline void set_reload_speed_5(float value)
	{
		___reload_speed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELOADBOX_T858729640_H
#ifndef PLAYERLASER_T2088916748_H
#define PLAYERLASER_T2088916748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerLaser
struct  PlayerLaser_t2088916748  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLASER_T2088916748_H
#ifndef HEALTHBOX_T1805416806_H
#define HEALTHBOX_T1805416806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthBox
struct  HealthBox_t1805416806  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Slider HealthBox::hp_bar
	Slider_t3903728902 * ___hp_bar_2;
	// UnityEngine.UI.Text HealthBox::hp_number
	Text_t1901882714 * ___hp_number_3;
	// System.Single HealthBox::speed
	float ___speed_4;
	// System.Int32 HealthBox::hp_add
	int32_t ___hp_add_5;

public:
	inline static int32_t get_offset_of_hp_bar_2() { return static_cast<int32_t>(offsetof(HealthBox_t1805416806, ___hp_bar_2)); }
	inline Slider_t3903728902 * get_hp_bar_2() const { return ___hp_bar_2; }
	inline Slider_t3903728902 ** get_address_of_hp_bar_2() { return &___hp_bar_2; }
	inline void set_hp_bar_2(Slider_t3903728902 * value)
	{
		___hp_bar_2 = value;
		Il2CppCodeGenWriteBarrier((&___hp_bar_2), value);
	}

	inline static int32_t get_offset_of_hp_number_3() { return static_cast<int32_t>(offsetof(HealthBox_t1805416806, ___hp_number_3)); }
	inline Text_t1901882714 * get_hp_number_3() const { return ___hp_number_3; }
	inline Text_t1901882714 ** get_address_of_hp_number_3() { return &___hp_number_3; }
	inline void set_hp_number_3(Text_t1901882714 * value)
	{
		___hp_number_3 = value;
		Il2CppCodeGenWriteBarrier((&___hp_number_3), value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(HealthBox_t1805416806, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_hp_add_5() { return static_cast<int32_t>(offsetof(HealthBox_t1805416806, ___hp_add_5)); }
	inline int32_t get_hp_add_5() const { return ___hp_add_5; }
	inline int32_t* get_address_of_hp_add_5() { return &___hp_add_5; }
	inline void set_hp_add_5(int32_t value)
	{
		___hp_add_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEALTHBOX_T1805416806_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Player::player_speed
	float ___player_speed_2;
	// System.Single Player::drag
	float ___drag_3;
	// System.Single Player::reload_time
	float ___reload_time_4;
	// System.Single Player::boost_add
	float ___boost_add_5;
	// System.Single Player::boost_expend
	float ___boost_expend_6;
	// System.Single Player::asteroid_damage
	float ___asteroid_damage_7;
	// System.Int32 Player::horizontal
	int32_t ___horizontal_8;
	// System.Int32 Player::fire
	int32_t ___fire_9;
	// System.Int32 Player::vertical
	int32_t ___vertical_10;
	// System.Int32 Player::sound_play
	int32_t ___sound_play_11;
	// System.Single Player::timer
	float ___timer_12;
	// System.Int32 Player::kill_count
	int32_t ___kill_count_13;
	// System.Int32 Player::reload_left
	int32_t ___reload_left_14;
	// UnityEngine.UI.Slider Player::hp_bar
	Slider_t3903728902 * ___hp_bar_15;
	// UnityEngine.UI.Slider Player::boost_bar
	Slider_t3903728902 * ___boost_bar_16;
	// UnityEngine.UI.Text Player::hp_number
	Text_t1901882714 * ___hp_number_17;
	// UnityEngine.SpriteRenderer Player::boost
	SpriteRenderer_t3235626157 * ___boost_18;
	// UnityEngine.SpriteRenderer Player::player
	SpriteRenderer_t3235626157 * ___player_19;
	// UnityEngine.UI.Slider Player::reload_bar
	Slider_t3903728902 * ___reload_bar_20;
	// UnityEngine.UI.Text Player::status_text
	Text_t1901882714 * ___status_text_21;
	// UnityEngine.UI.Text Player::game_over
	Text_t1901882714 * ___game_over_22;
	// UnityEngine.AudioSource Player::laser_sound
	AudioSource_t3935305588 * ___laser_sound_23;
	// UnityEngine.AudioSource Player::scrape_sound
	AudioSource_t3935305588 * ___scrape_sound_24;
	// UnityEngine.AudioSource Player::rocket_sound
	AudioSource_t3935305588 * ___rocket_sound_25;
	// UnityEngine.GameObject Player::laser_1
	GameObject_t1113636619 * ___laser_1_26;

public:
	inline static int32_t get_offset_of_player_speed_2() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___player_speed_2)); }
	inline float get_player_speed_2() const { return ___player_speed_2; }
	inline float* get_address_of_player_speed_2() { return &___player_speed_2; }
	inline void set_player_speed_2(float value)
	{
		___player_speed_2 = value;
	}

	inline static int32_t get_offset_of_drag_3() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___drag_3)); }
	inline float get_drag_3() const { return ___drag_3; }
	inline float* get_address_of_drag_3() { return &___drag_3; }
	inline void set_drag_3(float value)
	{
		___drag_3 = value;
	}

	inline static int32_t get_offset_of_reload_time_4() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___reload_time_4)); }
	inline float get_reload_time_4() const { return ___reload_time_4; }
	inline float* get_address_of_reload_time_4() { return &___reload_time_4; }
	inline void set_reload_time_4(float value)
	{
		___reload_time_4 = value;
	}

	inline static int32_t get_offset_of_boost_add_5() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boost_add_5)); }
	inline float get_boost_add_5() const { return ___boost_add_5; }
	inline float* get_address_of_boost_add_5() { return &___boost_add_5; }
	inline void set_boost_add_5(float value)
	{
		___boost_add_5 = value;
	}

	inline static int32_t get_offset_of_boost_expend_6() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boost_expend_6)); }
	inline float get_boost_expend_6() const { return ___boost_expend_6; }
	inline float* get_address_of_boost_expend_6() { return &___boost_expend_6; }
	inline void set_boost_expend_6(float value)
	{
		___boost_expend_6 = value;
	}

	inline static int32_t get_offset_of_asteroid_damage_7() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___asteroid_damage_7)); }
	inline float get_asteroid_damage_7() const { return ___asteroid_damage_7; }
	inline float* get_address_of_asteroid_damage_7() { return &___asteroid_damage_7; }
	inline void set_asteroid_damage_7(float value)
	{
		___asteroid_damage_7 = value;
	}

	inline static int32_t get_offset_of_horizontal_8() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___horizontal_8)); }
	inline int32_t get_horizontal_8() const { return ___horizontal_8; }
	inline int32_t* get_address_of_horizontal_8() { return &___horizontal_8; }
	inline void set_horizontal_8(int32_t value)
	{
		___horizontal_8 = value;
	}

	inline static int32_t get_offset_of_fire_9() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___fire_9)); }
	inline int32_t get_fire_9() const { return ___fire_9; }
	inline int32_t* get_address_of_fire_9() { return &___fire_9; }
	inline void set_fire_9(int32_t value)
	{
		___fire_9 = value;
	}

	inline static int32_t get_offset_of_vertical_10() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___vertical_10)); }
	inline int32_t get_vertical_10() const { return ___vertical_10; }
	inline int32_t* get_address_of_vertical_10() { return &___vertical_10; }
	inline void set_vertical_10(int32_t value)
	{
		___vertical_10 = value;
	}

	inline static int32_t get_offset_of_sound_play_11() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___sound_play_11)); }
	inline int32_t get_sound_play_11() const { return ___sound_play_11; }
	inline int32_t* get_address_of_sound_play_11() { return &___sound_play_11; }
	inline void set_sound_play_11(int32_t value)
	{
		___sound_play_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_kill_count_13() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___kill_count_13)); }
	inline int32_t get_kill_count_13() const { return ___kill_count_13; }
	inline int32_t* get_address_of_kill_count_13() { return &___kill_count_13; }
	inline void set_kill_count_13(int32_t value)
	{
		___kill_count_13 = value;
	}

	inline static int32_t get_offset_of_reload_left_14() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___reload_left_14)); }
	inline int32_t get_reload_left_14() const { return ___reload_left_14; }
	inline int32_t* get_address_of_reload_left_14() { return &___reload_left_14; }
	inline void set_reload_left_14(int32_t value)
	{
		___reload_left_14 = value;
	}

	inline static int32_t get_offset_of_hp_bar_15() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___hp_bar_15)); }
	inline Slider_t3903728902 * get_hp_bar_15() const { return ___hp_bar_15; }
	inline Slider_t3903728902 ** get_address_of_hp_bar_15() { return &___hp_bar_15; }
	inline void set_hp_bar_15(Slider_t3903728902 * value)
	{
		___hp_bar_15 = value;
		Il2CppCodeGenWriteBarrier((&___hp_bar_15), value);
	}

	inline static int32_t get_offset_of_boost_bar_16() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boost_bar_16)); }
	inline Slider_t3903728902 * get_boost_bar_16() const { return ___boost_bar_16; }
	inline Slider_t3903728902 ** get_address_of_boost_bar_16() { return &___boost_bar_16; }
	inline void set_boost_bar_16(Slider_t3903728902 * value)
	{
		___boost_bar_16 = value;
		Il2CppCodeGenWriteBarrier((&___boost_bar_16), value);
	}

	inline static int32_t get_offset_of_hp_number_17() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___hp_number_17)); }
	inline Text_t1901882714 * get_hp_number_17() const { return ___hp_number_17; }
	inline Text_t1901882714 ** get_address_of_hp_number_17() { return &___hp_number_17; }
	inline void set_hp_number_17(Text_t1901882714 * value)
	{
		___hp_number_17 = value;
		Il2CppCodeGenWriteBarrier((&___hp_number_17), value);
	}

	inline static int32_t get_offset_of_boost_18() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boost_18)); }
	inline SpriteRenderer_t3235626157 * get_boost_18() const { return ___boost_18; }
	inline SpriteRenderer_t3235626157 ** get_address_of_boost_18() { return &___boost_18; }
	inline void set_boost_18(SpriteRenderer_t3235626157 * value)
	{
		___boost_18 = value;
		Il2CppCodeGenWriteBarrier((&___boost_18), value);
	}

	inline static int32_t get_offset_of_player_19() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___player_19)); }
	inline SpriteRenderer_t3235626157 * get_player_19() const { return ___player_19; }
	inline SpriteRenderer_t3235626157 ** get_address_of_player_19() { return &___player_19; }
	inline void set_player_19(SpriteRenderer_t3235626157 * value)
	{
		___player_19 = value;
		Il2CppCodeGenWriteBarrier((&___player_19), value);
	}

	inline static int32_t get_offset_of_reload_bar_20() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___reload_bar_20)); }
	inline Slider_t3903728902 * get_reload_bar_20() const { return ___reload_bar_20; }
	inline Slider_t3903728902 ** get_address_of_reload_bar_20() { return &___reload_bar_20; }
	inline void set_reload_bar_20(Slider_t3903728902 * value)
	{
		___reload_bar_20 = value;
		Il2CppCodeGenWriteBarrier((&___reload_bar_20), value);
	}

	inline static int32_t get_offset_of_status_text_21() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___status_text_21)); }
	inline Text_t1901882714 * get_status_text_21() const { return ___status_text_21; }
	inline Text_t1901882714 ** get_address_of_status_text_21() { return &___status_text_21; }
	inline void set_status_text_21(Text_t1901882714 * value)
	{
		___status_text_21 = value;
		Il2CppCodeGenWriteBarrier((&___status_text_21), value);
	}

	inline static int32_t get_offset_of_game_over_22() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___game_over_22)); }
	inline Text_t1901882714 * get_game_over_22() const { return ___game_over_22; }
	inline Text_t1901882714 ** get_address_of_game_over_22() { return &___game_over_22; }
	inline void set_game_over_22(Text_t1901882714 * value)
	{
		___game_over_22 = value;
		Il2CppCodeGenWriteBarrier((&___game_over_22), value);
	}

	inline static int32_t get_offset_of_laser_sound_23() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___laser_sound_23)); }
	inline AudioSource_t3935305588 * get_laser_sound_23() const { return ___laser_sound_23; }
	inline AudioSource_t3935305588 ** get_address_of_laser_sound_23() { return &___laser_sound_23; }
	inline void set_laser_sound_23(AudioSource_t3935305588 * value)
	{
		___laser_sound_23 = value;
		Il2CppCodeGenWriteBarrier((&___laser_sound_23), value);
	}

	inline static int32_t get_offset_of_scrape_sound_24() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___scrape_sound_24)); }
	inline AudioSource_t3935305588 * get_scrape_sound_24() const { return ___scrape_sound_24; }
	inline AudioSource_t3935305588 ** get_address_of_scrape_sound_24() { return &___scrape_sound_24; }
	inline void set_scrape_sound_24(AudioSource_t3935305588 * value)
	{
		___scrape_sound_24 = value;
		Il2CppCodeGenWriteBarrier((&___scrape_sound_24), value);
	}

	inline static int32_t get_offset_of_rocket_sound_25() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___rocket_sound_25)); }
	inline AudioSource_t3935305588 * get_rocket_sound_25() const { return ___rocket_sound_25; }
	inline AudioSource_t3935305588 ** get_address_of_rocket_sound_25() { return &___rocket_sound_25; }
	inline void set_rocket_sound_25(AudioSource_t3935305588 * value)
	{
		___rocket_sound_25 = value;
		Il2CppCodeGenWriteBarrier((&___rocket_sound_25), value);
	}

	inline static int32_t get_offset_of_laser_1_26() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___laser_1_26)); }
	inline GameObject_t1113636619 * get_laser_1_26() const { return ___laser_1_26; }
	inline GameObject_t1113636619 ** get_address_of_laser_1_26() { return &___laser_1_26; }
	inline void set_laser_1_26(GameObject_t1113636619 * value)
	{
		___laser_1_26 = value;
		Il2CppCodeGenWriteBarrier((&___laser_1_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Enemy::speed
	float ___speed_2;
	// System.Int32 Enemy::health
	int32_t ___health_3;
	// System.Int32 Enemy::laser_rate
	int32_t ___laser_rate_4;
	// UnityEngine.UI.Text Enemy::kill_text
	Text_t1901882714 * ___kill_text_5;
	// Player Enemy::player
	Player_t3266647312 * ___player_6;
	// UnityEngine.GameObject Enemy::laser
	GameObject_t1113636619 * ___laser_7;
	// UnityEngine.AudioSource Enemy::death_sound
	AudioSource_t3935305588 * ___death_sound_8;
	// UnityEngine.AudioSource Enemy::laser_sound
	AudioSource_t3935305588 * ___laser_sound_9;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___health_3)); }
	inline int32_t get_health_3() const { return ___health_3; }
	inline int32_t* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(int32_t value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_laser_rate_4() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___laser_rate_4)); }
	inline int32_t get_laser_rate_4() const { return ___laser_rate_4; }
	inline int32_t* get_address_of_laser_rate_4() { return &___laser_rate_4; }
	inline void set_laser_rate_4(int32_t value)
	{
		___laser_rate_4 = value;
	}

	inline static int32_t get_offset_of_kill_text_5() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___kill_text_5)); }
	inline Text_t1901882714 * get_kill_text_5() const { return ___kill_text_5; }
	inline Text_t1901882714 ** get_address_of_kill_text_5() { return &___kill_text_5; }
	inline void set_kill_text_5(Text_t1901882714 * value)
	{
		___kill_text_5 = value;
		Il2CppCodeGenWriteBarrier((&___kill_text_5), value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___player_6)); }
	inline Player_t3266647312 * get_player_6() const { return ___player_6; }
	inline Player_t3266647312 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Player_t3266647312 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((&___player_6), value);
	}

	inline static int32_t get_offset_of_laser_7() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___laser_7)); }
	inline GameObject_t1113636619 * get_laser_7() const { return ___laser_7; }
	inline GameObject_t1113636619 ** get_address_of_laser_7() { return &___laser_7; }
	inline void set_laser_7(GameObject_t1113636619 * value)
	{
		___laser_7 = value;
		Il2CppCodeGenWriteBarrier((&___laser_7), value);
	}

	inline static int32_t get_offset_of_death_sound_8() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___death_sound_8)); }
	inline AudioSource_t3935305588 * get_death_sound_8() const { return ___death_sound_8; }
	inline AudioSource_t3935305588 ** get_address_of_death_sound_8() { return &___death_sound_8; }
	inline void set_death_sound_8(AudioSource_t3935305588 * value)
	{
		___death_sound_8 = value;
		Il2CppCodeGenWriteBarrier((&___death_sound_8), value);
	}

	inline static int32_t get_offset_of_laser_sound_9() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___laser_sound_9)); }
	inline AudioSource_t3935305588 * get_laser_sound_9() const { return ___laser_sound_9; }
	inline AudioSource_t3935305588 ** get_address_of_laser_sound_9() { return &___laser_sound_9; }
	inline void set_laser_sound_9(AudioSource_t3935305588 * value)
	{
		___laser_sound_9 = value;
		Il2CppCodeGenWriteBarrier((&___laser_sound_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
#ifndef BOOSTBOX_T1949306062_H
#define BOOSTBOX_T1949306062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoostBox
struct  BoostBox_t1949306062  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Slider BoostBox::boost_bar
	Slider_t3903728902 * ___boost_bar_2;
	// System.Single BoostBox::speed
	float ___speed_3;
	// System.Int32 BoostBox::boost_add
	int32_t ___boost_add_4;

public:
	inline static int32_t get_offset_of_boost_bar_2() { return static_cast<int32_t>(offsetof(BoostBox_t1949306062, ___boost_bar_2)); }
	inline Slider_t3903728902 * get_boost_bar_2() const { return ___boost_bar_2; }
	inline Slider_t3903728902 ** get_address_of_boost_bar_2() { return &___boost_bar_2; }
	inline void set_boost_bar_2(Slider_t3903728902 * value)
	{
		___boost_bar_2 = value;
		Il2CppCodeGenWriteBarrier((&___boost_bar_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BoostBox_t1949306062, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_boost_add_4() { return static_cast<int32_t>(offsetof(BoostBox_t1949306062, ___boost_add_4)); }
	inline int32_t get_boost_add_4() const { return ___boost_add_4; }
	inline int32_t* get_address_of_boost_add_4() { return &___boost_add_4; }
	inline void set_boost_add_4(int32_t value)
	{
		___boost_add_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOSTBOX_T1949306062_H
#ifndef ENEMYLASER_T2200729234_H
#define ENEMYLASER_T2200729234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyLaser
struct  EnemyLaser_t2200729234  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Slider EnemyLaser::hp_bar
	Slider_t3903728902 * ___hp_bar_2;
	// System.Int32 EnemyLaser::laser_damage
	int32_t ___laser_damage_3;
	// UnityEngine.UI.Text EnemyLaser::hp_number
	Text_t1901882714 * ___hp_number_4;

public:
	inline static int32_t get_offset_of_hp_bar_2() { return static_cast<int32_t>(offsetof(EnemyLaser_t2200729234, ___hp_bar_2)); }
	inline Slider_t3903728902 * get_hp_bar_2() const { return ___hp_bar_2; }
	inline Slider_t3903728902 ** get_address_of_hp_bar_2() { return &___hp_bar_2; }
	inline void set_hp_bar_2(Slider_t3903728902 * value)
	{
		___hp_bar_2 = value;
		Il2CppCodeGenWriteBarrier((&___hp_bar_2), value);
	}

	inline static int32_t get_offset_of_laser_damage_3() { return static_cast<int32_t>(offsetof(EnemyLaser_t2200729234, ___laser_damage_3)); }
	inline int32_t get_laser_damage_3() const { return ___laser_damage_3; }
	inline int32_t* get_address_of_laser_damage_3() { return &___laser_damage_3; }
	inline void set_laser_damage_3(int32_t value)
	{
		___laser_damage_3 = value;
	}

	inline static int32_t get_offset_of_hp_number_4() { return static_cast<int32_t>(offsetof(EnemyLaser_t2200729234, ___hp_number_4)); }
	inline Text_t1901882714 * get_hp_number_4() const { return ___hp_number_4; }
	inline Text_t1901882714 ** get_address_of_hp_number_4() { return &___hp_number_4; }
	inline void set_hp_number_4(Text_t1901882714 * value)
	{
		___hp_number_4 = value;
		Il2CppCodeGenWriteBarrier((&___hp_number_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYLASER_T2200729234_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_30;

public:
	inline static int32_t get_offset_of_m_FillRect_16() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_16)); }
	inline RectTransform_t3704657025 * get_m_FillRect_16() const { return ___m_FillRect_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_16() { return &___m_FillRect_16; }
	inline void set_m_FillRect_16(RectTransform_t3704657025 * value)
	{
		___m_FillRect_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_16), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_17() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_17)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_17() const { return ___m_HandleRect_17; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_17() { return &___m_HandleRect_17; }
	inline void set_m_HandleRect_17(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_17), value);
	}

	inline static int32_t get_offset_of_m_Direction_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_18)); }
	inline int32_t get_m_Direction_18() const { return ___m_Direction_18; }
	inline int32_t* get_address_of_m_Direction_18() { return &___m_Direction_18; }
	inline void set_m_Direction_18(int32_t value)
	{
		___m_Direction_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_19)); }
	inline float get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline float* get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(float value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_20)); }
	inline float get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline float* get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(float value)
	{
		___m_MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_21)); }
	inline bool get_m_WholeNumbers_21() const { return ___m_WholeNumbers_21; }
	inline bool* get_address_of_m_WholeNumbers_21() { return &___m_WholeNumbers_21; }
	inline void set_m_WholeNumbers_21(bool value)
	{
		___m_WholeNumbers_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_23)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_FillImage_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_24)); }
	inline Image_t2670269651 * get_m_FillImage_24() const { return ___m_FillImage_24; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_24() { return &___m_FillImage_24; }
	inline void set_m_FillImage_24(Image_t2670269651 * value)
	{
		___m_FillImage_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_24), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_25)); }
	inline Transform_t3600365921 * get_m_FillTransform_25() const { return ___m_FillTransform_25; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_25() { return &___m_FillTransform_25; }
	inline void set_m_FillTransform_25(Transform_t3600365921 * value)
	{
		___m_FillTransform_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_25), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_26)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_26() const { return ___m_FillContainerRect_26; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_26() { return &___m_FillContainerRect_26; }
	inline void set_m_FillContainerRect_26(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_26), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_27)); }
	inline Transform_t3600365921 * get_m_HandleTransform_27() const { return ___m_HandleTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_27() { return &___m_HandleTransform_27; }
	inline void set_m_HandleTransform_27(Transform_t3600365921 * value)
	{
		___m_HandleTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_27), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_28() const { return ___m_HandleContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_28() { return &___m_HandleContainerRect_28; }
	inline void set_m_HandleContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_Offset_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_29)); }
	inline Vector2_t2156229523  get_m_Offset_29() const { return ___m_Offset_29; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_29() { return &___m_Offset_29; }
	inline void set_m_Offset_29(Vector2_t2156229523  value)
	{
		___m_Offset_29 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_30)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_30() const { return ___m_Tracker_30; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_30() { return &___m_Tracker_30; }
	inline void set_m_Tracker_30(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m2452486895 (Material_t340375123 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t3903728902_m865256018(__this, method) ((  Slider_t3903728902 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Player>()
#define GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(__this, method) ((  Player_t3266647312 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(__this, method) ((  SpriteRenderer_t3235626157 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C"  TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C"  float Slider_get_maxValue_m414465787 (Slider_t3903728902 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Round(System.Double,System.Int32)
extern "C"  double Math_Round_m3279303474 (RuntimeObject * __this /* static, unused */, double p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AsteroidMovement::.ctor()
extern "C"  void AsteroidMovement__ctor_m3698065088 (AsteroidMovement_t1893369400 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((0.1f));
		__this->set_spawnOffset_3((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsteroidMovement::Start()
extern "C"  void AsteroidMovement_Start_m2343201076 (AsteroidMovement_t1893369400 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void AsteroidMovement::Update()
extern "C"  void AsteroidMovement_Update_m2319465924 (AsteroidMovement_t1893369400 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsteroidMovement_Update_m2319465924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = __this->get_speed_2();
		(&V_0)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_5)))/(float)(((float)((float)L_6)))));
		float L_7 = V_1;
		Camera_t4157153871 * L_8 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = Camera_get_orthographicSize_m3903216845(L_8, /*hidden argument*/NULL);
		V_2 = (((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)))));
		float L_10 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = Camera_get_orthographicSize_m3903216845(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)((float)il2cpp_codegen_subtract((float)((-L_12)), (float)(1.0f)))))))
		{
			goto IL_009c;
		}
	}
	{
		Camera_t4157153871 * L_13 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		float L_14 = Camera_get_orthographicSize_m3903216845(L_13, /*hidden argument*/NULL);
		Camera_t4157153871 * L_15 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16 = Camera_get_orthographicSize_m3903216845(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_spawnOffset_3();
		float L_18 = Random_Range_m2202990745(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_14, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		(&V_0)->set_y_1(L_18);
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_19)), L_20, /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_21);
	}

IL_009c:
	{
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_m3387557959(L_22, L_24, /*hidden argument*/NULL);
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
// System.Void BackgroundScroll::.ctor()
extern "C"  void BackgroundScroll__ctor_m3762551928 (BackgroundScroll_t556428063 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackgroundScroll::Update()
extern "C"  void BackgroundScroll_Update_m2418091040 (BackgroundScroll_t556428063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundScroll_Update_m2418091040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_speed_2();
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_0), (0.0f), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), /*hidden argument*/NULL);
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t340375123 * L_3 = Renderer_get_material_m4171603682(L_2, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		NullCheck(L_3);
		Material_set_mainTextureOffset_m2452486895(L_3, L_4, /*hidden argument*/NULL);
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
// System.Void BoostBox::.ctor()
extern "C"  void BoostBox__ctor_m8813644 (BoostBox_t1949306062 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_3((0.1f));
		__this->set_boost_add_4(((int32_t)500));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostBox::Start()
extern "C"  void BoostBox_Start_m2973899038 (BoostBox_t1949306062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoostBox_Start_m2973899038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral612197690, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_t3903728902 * L_1 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_0, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_boost_bar_2(L_1);
		return;
	}
}
// System.Void BoostBox::Update()
extern "C"  void BoostBox_Update_m1888812066 (BoostBox_t1949306062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoostBox_Update_m1888812066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = __this->get_speed_3();
		(&V_0)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)(1.0f)))))))
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void BoostBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BoostBox_OnTriggerEnter2D_m1258653881 (BoostBox_t1949306062 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoostBox_OnTriggerEnter2D_m1258653881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Slider_t3903728902 * L_5 = __this->get_boost_bar_2();
		Slider_t3903728902 * L_6 = __this->get_boost_bar_2();
		NullCheck(L_6);
		float L_7 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		int32_t L_8 = __this->get_boost_add_4();
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_add((float)L_7, (float)(((float)((float)L_8))))));
	}

IL_0043:
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
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((0.005f));
		__this->set_health_3(5);
		__this->set_laser_rate_4(((int32_t)10));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m3612231678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1405601666, /*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t3266647312 * L_1 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		__this->set_player_6(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4191626386, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_kill_text_5(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral481485872, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_t3935305588 * L_5 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		__this->set_death_sound_8(L_5);
		GameObject_t1113636619 * L_6 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4195563715, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSource_t3935305588 * L_7 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_6, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		__this->set_laser_sound_9(L_7);
		return;
	}
}
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m3583063749 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_m3583063749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = __this->get_speed_2();
		(&V_0)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)(1.0f)))))))
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		int32_t L_12 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)1000), /*hidden argument*/NULL);
		int32_t L_13 = __this->get_laser_rate_4();
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_00a3;
		}
	}
	{
		GameObject_t1113636619 * L_14 = __this->get_laser_7();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t2301928331  L_18 = Transform_get_rotation_m3502953881(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_14, L_16, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		AudioSource_t3935305588 * L_19 = __this->get_laser_sound_9();
		NullCheck(L_19);
		AudioSource_Play_m48294159(L_19, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Enemy_OnTriggerEnter2D_m1074951176 (Enemy_t1765729589 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnTriggerEnter2D_m1074951176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral1644776407, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_4 = __this->get_health_3();
		__this->set_health_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = __this->get_health_3();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_7 = __this->get_death_sound_8();
		NullCheck(L_7);
		AudioSource_Play_m48294159(L_7, /*hidden argument*/NULL);
		Player_t3266647312 * L_8 = __this->get_player_6();
		Player_t3266647312 * L_9 = __this->get_player_6();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_kill_count_13();
		NullCheck(L_8);
		L_8->set_kill_count_13(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		Player_t3266647312 * L_11 = __this->get_player_6();
		NullCheck(L_11);
		int32_t* L_12 = L_11->get_address_of_kill_count_13();
		String_t* L_13 = Int32_ToString_m141394615((int32_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Text_t1901882714 * L_14 = __this->get_kill_text_5();
		Player_t3266647312 * L_15 = __this->get_player_6();
		NullCheck(L_15);
		int32_t* L_16 = L_15->get_address_of_kill_count_13();
		String_t* L_17 = Int32_ToString_m141394615((int32_t*)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3966945654, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_18);
	}

IL_00a8:
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
// System.Void EnemyLaser::.ctor()
extern "C"  void EnemyLaser__ctor_m3768072279 (EnemyLaser_t2200729234 * __this, const RuntimeMethod* method)
{
	{
		__this->set_laser_damage_3(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyLaser::Start()
extern "C"  void EnemyLaser_Start_m995217891 (EnemyLaser_t2200729234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyLaser_Start_m995217891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral650830492, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_t3903728902 * L_1 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_0, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_hp_bar_2(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2055235816, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_hp_number_4(L_3);
		return;
	}
}
// System.Void EnemyLaser::Update()
extern "C"  void EnemyLaser_Update_m93010033 (EnemyLaser_t2200729234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyLaser_Update_m93010033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_1(((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)(1.0f)))))))
		{
			goto IL_0064;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void EnemyLaser::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void EnemyLaser_OnTriggerEnter2D_m549763278 (EnemyLaser_t2200729234 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyLaser_OnTriggerEnter2D_m549763278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Slider_t3903728902 * L_5 = __this->get_hp_bar_2();
		Slider_t3903728902 * L_6 = __this->get_hp_bar_2();
		NullCheck(L_6);
		float L_7 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		int32_t L_8 = __this->get_laser_damage_3();
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract((float)L_7, (float)(((float)((float)L_8))))));
		Text_t1901882714 * L_9 = __this->get_hp_number_4();
		Slider_t3903728902 * L_10 = __this->get_hp_bar_2();
		NullCheck(L_10);
		float L_11 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_10);
		V_0 = L_11;
		String_t* L_12 = Single_ToString_m3947131094((float*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2065079264, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_13);
	}

IL_0071:
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
// System.Void HealthBox::.ctor()
extern "C"  void HealthBox__ctor_m4218093992 (HealthBox_t1805416806 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((0.1f));
		__this->set_hp_add_5(((int32_t)20));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthBox::Start()
extern "C"  void HealthBox_Start_m3500558942 (HealthBox_t1805416806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBox_Start_m3500558942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral650830492, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_t3903728902 * L_1 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_0, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_hp_bar_2(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2055235816, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_hp_number_3(L_3);
		return;
	}
}
// System.Void HealthBox::Update()
extern "C"  void HealthBox_Update_m761653493 (HealthBox_t1805416806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBox_Update_m761653493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = __this->get_speed_4();
		(&V_0)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)(1.0f)))))))
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void HealthBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void HealthBox_OnTriggerEnter2D_m936407010 (HealthBox_t1805416806 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBox_OnTriggerEnter2D_m936407010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Slider_t3903728902 * L_5 = __this->get_hp_bar_2();
		Slider_t3903728902 * L_6 = __this->get_hp_bar_2();
		NullCheck(L_6);
		float L_7 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		int32_t L_8 = __this->get_hp_add_5();
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_add((float)L_7, (float)(((float)((float)L_8))))));
		Text_t1901882714 * L_9 = __this->get_hp_number_3();
		Slider_t3903728902 * L_10 = __this->get_hp_bar_2();
		NullCheck(L_10);
		float L_11 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_10);
		V_0 = L_11;
		String_t* L_12 = Single_ToString_m3947131094((float*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2065079264, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_13);
	}

IL_0071:
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
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		__this->set_player_speed_2((10.0f));
		__this->set_drag_3((0.03f));
		__this->set_reload_time_4((0.5f));
		__this->set_boost_add_5((1.0f));
		__this->set_boost_expend_6((1.0f));
		__this->set_asteroid_damage_7((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral650830492, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_t3903728902 * L_1 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_0, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_hp_bar_15(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2055235816, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_hp_number_17(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3476995607, /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_t3235626157 * L_5 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		__this->set_boost_18(L_5);
		GameObject_t1113636619 * L_6 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral612197690, /*hidden argument*/NULL);
		NullCheck(L_6);
		Slider_t3903728902 * L_7 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_6, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_boost_bar_16(L_7);
		GameObject_t1113636619 * L_8 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1405601666, /*hidden argument*/NULL);
		NullCheck(L_8);
		SpriteRenderer_t3235626157 * L_9 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_8, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		__this->set_player_19(L_9);
		GameObject_t1113636619 * L_10 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3824146412, /*hidden argument*/NULL);
		NullCheck(L_10);
		Slider_t3903728902 * L_11 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		__this->set_reload_bar_20(L_11);
		GameObject_t1113636619 * L_12 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral592044961, /*hidden argument*/NULL);
		NullCheck(L_12);
		Text_t1901882714 * L_13 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_12, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_status_text_21(L_13);
		GameObject_t1113636619 * L_14 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2741843698, /*hidden argument*/NULL);
		NullCheck(L_14);
		Text_t1901882714 * L_15 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_14, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_game_over_22(L_15);
		GameObject_t1113636619 * L_16 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1405601666, /*hidden argument*/NULL);
		NullCheck(L_16);
		AudioSource_t3935305588 * L_17 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_16, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		__this->set_laser_sound_23(L_17);
		GameObject_t1113636619 * L_18 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4195432643, /*hidden argument*/NULL);
		NullCheck(L_18);
		AudioSource_t3935305588 * L_19 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_18, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		__this->set_scrape_sound_24(L_19);
		GameObject_t1113636619 * L_20 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4195760323, /*hidden argument*/NULL);
		NullCheck(L_20);
		AudioSource_t3935305588 * L_21 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_20, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		__this->set_rocket_sound_25(L_21);
		return;
	}
}
// System.Void Player::Update()
extern "C"  void Player_Update_m2111558832 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m2111558832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TouchU5BU5D_t1849554061* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_t2156229523  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2_t2156229523  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector2_t2156229523  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t2156229523  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_t2156229523  V_13;
	memset(&V_13, 0, sizeof(V_13));
	float V_14 = 0.0f;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)L_0)))/(float)(((float)((float)L_1)))));
		float L_2 = V_0;
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_4 = Camera_get_orthographicSize_m3903216845(L_3, /*hidden argument*/NULL);
		V_1 = (((float)((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_8 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_8;
		V_5 = 0;
		goto IL_0196;
	}

IL_003c:
	{
		TouchU5BU5D_t1849554061* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		V_3 = (*(Touch_t1921856868 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))));
		int32_t L_11 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0092;
		}
	}
	{
		Vector2_t2156229523  L_12 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = (&V_6)->get_x_0();
		if ((!(((float)L_13) > ((float)(325.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		Vector2_t2156229523  L_14 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = (&V_7)->get_y_1();
		if ((!(((float)L_15) > ((float)(300.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		__this->set_horizontal_8(1);
	}

IL_0092:
	{
		int32_t L_16 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00d9;
		}
	}
	{
		Vector2_t2156229523  L_17 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_8 = L_17;
		float L_18 = (&V_8)->get_x_0();
		if ((!(((float)L_18) < ((float)(325.0f)))))
		{
			goto IL_00d9;
		}
	}
	{
		Vector2_t2156229523  L_19 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_9 = L_19;
		float L_20 = (&V_9)->get_y_1();
		if ((!(((float)L_20) > ((float)(300.0f)))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_horizontal_8((-1));
	}

IL_00d9:
	{
		int32_t L_21 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0120;
		}
	}
	{
		Vector2_t2156229523  L_22 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_10 = L_22;
		float L_23 = (&V_10)->get_x_0();
		if ((!(((float)L_23) < ((float)(325.0f)))))
		{
			goto IL_0120;
		}
	}
	{
		Vector2_t2156229523  L_24 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_11 = L_24;
		float L_25 = (&V_11)->get_y_1();
		if ((!(((float)L_25) < ((float)(300.0f)))))
		{
			goto IL_0120;
		}
	}
	{
		__this->set_fire_9(1);
	}

IL_0120:
	{
		int32_t L_26 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0167;
		}
	}
	{
		Vector2_t2156229523  L_27 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_12 = L_27;
		float L_28 = (&V_12)->get_x_0();
		if ((!(((float)L_28) > ((float)(325.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		Vector2_t2156229523  L_29 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		V_13 = L_29;
		float L_30 = (&V_13)->get_y_1();
		if ((!(((float)L_30) < ((float)(300.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		__this->set_vertical_10(1);
	}

IL_0167:
	{
		int32_t L_31 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)3))))
		{
			goto IL_0190;
		}
	}
	{
		__this->set_horizontal_8(0);
		__this->set_fire_9(0);
		__this->set_vertical_10(0);
		__this->set_sound_play_11(0);
	}

IL_0190:
	{
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0196:
	{
		int32_t L_33 = V_5;
		TouchU5BU5D_t1849554061* L_34 = V_4;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		float L_35 = (&V_2)->get_x_0();
		int32_t L_36 = __this->get_horizontal_8();
		float L_37 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_38 = __this->get_player_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_39 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_40 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_41 = __this->get_player_speed_2();
		(&V_2)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_36))), (float)L_37)), (float)L_38)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), (float)L_41)))));
		int32_t L_42 = __this->get_vertical_10();
		if ((((int32_t)L_42) > ((int32_t)0)))
		{
			goto IL_0201;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_43 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		if ((!(((double)(((double)((double)L_43)))) > ((double)(0.5)))))
		{
			goto IL_02bd;
		}
	}

IL_0201:
	{
		Slider_t3903728902 * L_44 = __this->get_boost_bar_16();
		NullCheck(L_44);
		float L_45 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_44);
		if ((!(((float)L_45) > ((float)(0.0f)))))
		{
			goto IL_02bd;
		}
	}
	{
		Slider_t3903728902 * L_46 = __this->get_hp_bar_15();
		NullCheck(L_46);
		float L_47 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_46);
		if ((!(((float)L_47) > ((float)(0.0f)))))
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_48 = __this->get_sound_play_11();
		if (L_48)
		{
			goto IL_0241;
		}
	}
	{
		AudioSource_t3935305588 * L_49 = __this->get_rocket_sound_25();
		NullCheck(L_49);
		AudioSource_Play_m48294159(L_49, /*hidden argument*/NULL);
	}

IL_0241:
	{
		__this->set_sound_play_11(1);
		float L_50 = (&V_2)->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_51 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		float L_52 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_53 = __this->get_player_speed_2();
		int32_t L_54 = __this->get_vertical_10();
		float L_55 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_56 = __this->get_player_speed_2();
		(&V_2)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_50, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_51, (float)L_52)), (float)L_53))/(float)(2.0f))))), (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_54))), (float)L_55)), (float)L_56))/(float)(2.0f))))));
		SpriteRenderer_t3235626157 * L_57 = __this->get_boost_18();
		NullCheck(L_57);
		Renderer_set_enabled_m1727253150(L_57, (bool)1, /*hidden argument*/NULL);
		Slider_t3903728902 * L_58 = __this->get_boost_bar_16();
		Slider_t3903728902 * L_59 = __this->get_boost_bar_16();
		NullCheck(L_59);
		float L_60 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_59);
		float L_61 = __this->get_boost_expend_6();
		NullCheck(L_58);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_58, ((float)il2cpp_codegen_subtract((float)L_60, (float)L_61)));
		goto IL_031c;
	}

IL_02bd:
	{
		Slider_t3903728902 * L_62 = __this->get_boost_bar_16();
		NullCheck(L_62);
		float L_63 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_62);
		if ((!(((float)L_63) <= ((float)(0.0f)))))
		{
			goto IL_02f3;
		}
	}
	{
		Slider_t3903728902 * L_64 = __this->get_boost_bar_16();
		NullCheck(L_64);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_64, (0.0f));
		SpriteRenderer_t3235626157 * L_65 = __this->get_boost_18();
		NullCheck(L_65);
		Renderer_set_enabled_m1727253150(L_65, (bool)0, /*hidden argument*/NULL);
		goto IL_031c;
	}

IL_02f3:
	{
		SpriteRenderer_t3235626157 * L_66 = __this->get_boost_18();
		NullCheck(L_66);
		Renderer_set_enabled_m1727253150(L_66, (bool)0, /*hidden argument*/NULL);
		Slider_t3903728902 * L_67 = __this->get_boost_bar_16();
		Slider_t3903728902 * L_68 = __this->get_boost_bar_16();
		NullCheck(L_68);
		float L_69 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_68);
		float L_70 = __this->get_boost_add_5();
		NullCheck(L_67);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_67, ((float)il2cpp_codegen_add((float)L_69, (float)L_70)));
	}

IL_031c:
	{
		float L_71 = (&V_2)->get_y_1();
		float L_72 = __this->get_drag_3();
		(&V_2)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_71, (float)L_72))))));
		float L_73 = __this->get_timer_12();
		float L_74 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_12(((float)il2cpp_codegen_add((float)L_73, (float)L_74)));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_75 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		if ((!(((float)L_75) > ((float)(0.0f)))))
		{
			goto IL_03d0;
		}
	}
	{
		float L_76 = __this->get_timer_12();
		float L_77 = __this->get_reload_time_4();
		if ((!(((float)L_76) > ((float)L_77))))
		{
			goto IL_03d0;
		}
	}
	{
		Slider_t3903728902 * L_78 = __this->get_hp_bar_15();
		NullCheck(L_78);
		float L_79 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_78);
		if ((!(((float)L_79) > ((float)(0.0f)))))
		{
			goto IL_03d0;
		}
	}
	{
		Slider_t3903728902 * L_80 = __this->get_reload_bar_20();
		NullCheck(L_80);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_80, (0.0f));
		GameObject_t1113636619 * L_81 = __this->get_laser_1_26();
		SpriteRenderer_t3235626157 * L_82 = __this->get_player_19();
		NullCheck(L_82);
		Transform_t3600365921 * L_83 = Component_get_transform_m3162698980(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector3_t3722313464  L_84 = Transform_get_position_m36019626(L_83, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_85 = __this->get_player_19();
		NullCheck(L_85);
		Transform_t3600365921 * L_86 = Component_get_transform_m3162698980(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Quaternion_t2301928331  L_87 = Transform_get_rotation_m3502953881(L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_81, L_84, L_87, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		__this->set_timer_12((0.0f));
		AudioSource_t3935305588 * L_88 = __this->get_laser_sound_23();
		NullCheck(L_88);
		AudioSource_Play_m48294159(L_88, /*hidden argument*/NULL);
	}

IL_03d0:
	{
		Slider_t3903728902 * L_89 = __this->get_reload_bar_20();
		Slider_t3903728902 * L_90 = __this->get_reload_bar_20();
		NullCheck(L_90);
		float L_91 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_90);
		Slider_t3903728902 * L_92 = __this->get_reload_bar_20();
		NullCheck(L_92);
		float L_93 = Slider_get_maxValue_m414465787(L_92, /*hidden argument*/NULL);
		float L_94 = __this->get_reload_time_4();
		NullCheck(L_89);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_89, ((float)il2cpp_codegen_add((float)L_91, (float)((float)((float)((float)((float)L_93/(float)(30.0f)))/(float)L_94)))));
		float L_95 = (&V_2)->get_x_0();
		float L_96 = V_1;
		if ((!(((float)L_95) > ((float)L_96))))
		{
			goto IL_0414;
		}
	}
	{
		float L_97 = V_1;
		(&V_2)->set_x_0(L_97);
	}

IL_0414:
	{
		float L_98 = (&V_2)->get_x_0();
		float L_99 = V_1;
		if ((!(((float)L_98) < ((float)((-L_99))))))
		{
			goto IL_042b;
		}
	}
	{
		float L_100 = V_1;
		(&V_2)->set_x_0(((-L_100)));
	}

IL_042b:
	{
		float L_101 = (&V_2)->get_y_1();
		Camera_t4157153871 * L_102 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_102);
		float L_103 = Camera_get_orthographicSize_m3903216845(L_102, /*hidden argument*/NULL);
		if ((!(((float)L_101) > ((float)L_103))))
		{
			goto IL_0452;
		}
	}
	{
		Camera_t4157153871 * L_104 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_104);
		float L_105 = Camera_get_orthographicSize_m3903216845(L_104, /*hidden argument*/NULL);
		(&V_2)->set_y_1(L_105);
	}

IL_0452:
	{
		float L_106 = (&V_2)->get_y_1();
		Camera_t4157153871 * L_107 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_107);
		float L_108 = Camera_get_orthographicSize_m3903216845(L_107, /*hidden argument*/NULL);
		if ((!(((float)L_106) < ((float)((-L_108))))))
		{
			goto IL_04b4;
		}
	}
	{
		Slider_t3903728902 * L_109 = __this->get_hp_bar_15();
		Slider_t3903728902 * L_110 = __this->get_hp_bar_15();
		NullCheck(L_110);
		float L_111 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_110);
		NullCheck(L_109);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_109, ((float)il2cpp_codegen_subtract((float)L_111, (float)(1.0f))));
		Text_t1901882714 * L_112 = __this->get_hp_number_17();
		Slider_t3903728902 * L_113 = __this->get_hp_bar_15();
		NullCheck(L_113);
		float L_114 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_113);
		V_14 = L_114;
		String_t* L_115 = Single_ToString_m3947131094((float*)(&V_14), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_116 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2065079264, L_115, /*hidden argument*/NULL);
		NullCheck(L_112);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_112, L_116);
	}

IL_04b4:
	{
		Transform_t3600365921 * L_117 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_118 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_119 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_118, /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_set_position_m3387557959(L_117, L_119, /*hidden argument*/NULL);
		Slider_t3903728902 * L_120 = __this->get_hp_bar_15();
		NullCheck(L_120);
		float L_121 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_120);
		if ((!(((float)L_121) == ((float)(0.0f)))))
		{
			goto IL_04ea;
		}
	}
	{
		Text_t1901882714 * L_122 = __this->get_game_over_22();
		NullCheck(L_122);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_122, _stringLiteral496717860);
	}

IL_04ea:
	{
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerEnter2D_m1893340054 (Player_t3266647312 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_m1893340054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral4185160750, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		Slider_t3903728902 * L_4 = __this->get_hp_bar_15();
		Slider_t3903728902 * L_5 = __this->get_hp_bar_15();
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		float L_7 = __this->get_asteroid_damage_7();
		NullCheck(L_4);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		Text_t1901882714 * L_8 = __this->get_hp_number_17();
		Slider_t3903728902 * L_9 = __this->get_hp_bar_15();
		NullCheck(L_9);
		float L_10 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		V_0 = L_10;
		String_t* L_11 = Single_ToString_m3947131094((float*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2065079264, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		int32_t L_13 = __this->get_reload_left_14();
		__this->set_reload_left_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		AudioSource_t3935305588 * L_14 = __this->get_scrape_sound_24();
		NullCheck(L_14);
		AudioSource_Play_m48294159(L_14, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_reload_left_14();
		if (L_15)
		{
			goto IL_00a4;
		}
	}
	{
		Text_t1901882714 * L_16 = __this->get_status_text_21();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral1123751886);
		__this->set_reload_time_4((0.5f));
	}

IL_00a4:
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
// System.Void PlayerLaser::.ctor()
extern "C"  void PlayerLaser__ctor_m4224066926 (PlayerLaser_t2088916748 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerLaser::Start()
extern "C"  void PlayerLaser_Start_m651707440 (PlayerLaser_t2088916748 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlayerLaser::Update()
extern "C"  void PlayerLaser_Update_m1447564680 (PlayerLaser_t2088916748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerLaser_Update_m1447564680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_y_1(((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f)))))))
		{
			goto IL_0063;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void PlayerLaser::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerLaser_OnTriggerEnter2D_m2142524542 (PlayerLaser_t2088916748 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerLaser_OnTriggerEnter2D_m2142524542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral760905195, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0025:
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
// System.Void ReloadBox::.ctor()
extern "C"  void ReloadBox__ctor_m783113811 (ReloadBox_t858729640 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((0.1f));
		__this->set_reload_speed_5((0.25f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ReloadBox::Start()
extern "C"  void ReloadBox_Start_m2273093971 (ReloadBox_t858729640 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReloadBox_Start_m2273093971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1405601666, /*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t3266647312 * L_1 = GameObject_GetComponent_TisPlayer_t3266647312_m4068145281(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t3266647312_m4068145281_RuntimeMethod_var);
		__this->set_player_2(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral592044961, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_status_text_3(L_3);
		return;
	}
}
// System.Void ReloadBox::Update()
extern "C"  void ReloadBox_Update_m1983362334 (ReloadBox_t858729640 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReloadBox_Update_m1983362334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = __this->get_speed_4();
		(&V_0)->set_y_1((((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_0;
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)(1.0f)))))))
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void ReloadBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void ReloadBox_OnTriggerEnter2D_m4159726909 (ReloadBox_t858729640 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReloadBox_OnTriggerEnter2D_m4159726909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Player_t3266647312 * L_5 = __this->get_player_2();
		float L_6 = __this->get_reload_speed_5();
		NullCheck(L_5);
		L_5->set_reload_time_4(L_6);
		Text_t1901882714 * L_7 = __this->get_status_text_3();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral1523746986);
		Player_t3266647312 * L_8 = __this->get_player_2();
		NullCheck(L_8);
		L_8->set_reload_left_14(5);
	}

IL_0052:
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
// System.Void SpawnPowerup::.ctor()
extern "C"  void SpawnPowerup__ctor_m3195576932 (SpawnPowerup_t2362029034 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rarity1_2(((int32_t)10000));
		__this->set_rarity2_3(((int32_t)10000));
		__this->set_rarity3_4(((int32_t)10000));
		__this->set_enemy_rate_5(1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnPowerup::Start()
extern "C"  void SpawnPowerup_Start_m1456182062 (SpawnPowerup_t2362029034 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SpawnPowerup::Update()
extern "C"  void SpawnPowerup_Update_m793725738 (SpawnPowerup_t2362029034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnPowerup_Update_m793725738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)L_0)))/(float)(((float)((float)L_1)))));
		float L_2 = V_0;
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_4 = Camera_get_orthographicSize_m3903216845(L_3, /*hidden argument*/NULL);
		V_1 = (((float)((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)))));
		int32_t L_5 = __this->get_rarity1_2();
		int32_t L_6 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_7)), L_8, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_2), L_9, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_powerup1_6();
		Vector2_t2156229523  L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_10, L_12, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_15 = __this->get_rarity2_3();
		int32_t L_16 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) > ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		float L_17 = V_1;
		float L_18 = V_1;
		float L_19 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_17)), L_18, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_3), L_19, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_powerup2_7();
		Vector2_t2156229523  L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Quaternion_t2301928331  L_24 = Transform_get_rotation_m3502953881(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_20, L_22, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_00a2:
	{
		int32_t L_25 = __this->get_rarity3_4();
		int32_t L_26 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) > ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		float L_27 = V_1;
		float L_28 = V_1;
		float L_29 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_27)), L_28, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_4), L_29, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_30 = __this->get_powerup3_8();
		Vector2_t2156229523  L_31 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Quaternion_t2301928331  L_34 = Transform_get_rotation_m3502953881(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_30, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_00e6:
	{
		int32_t L_35 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)10000), /*hidden argument*/NULL);
		int32_t L_36 = __this->get_enemy_rate_5();
		if ((((int32_t)L_35) > ((int32_t)L_36)))
		{
			goto IL_012e;
		}
	}
	{
		float L_37 = V_1;
		float L_38 = V_1;
		float L_39 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_37)), L_38, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_5), L_39, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_40 = __this->get_enemy1_9();
		Vector2_t2156229523  L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		Transform_t3600365921 * L_43 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		Quaternion_t2301928331  L_44 = Transform_get_rotation_m3502953881(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_40, L_42, L_44, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_012e:
	{
		int32_t L_45 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)10000), /*hidden argument*/NULL);
		int32_t L_46 = __this->get_enemy_rate_5();
		if ((((int32_t)L_45) > ((int32_t)L_46)))
		{
			goto IL_0176;
		}
	}
	{
		float L_47 = V_1;
		float L_48 = V_1;
		float L_49 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_47)), L_48, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_6), L_49, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_50 = __this->get_enemy2_10();
		Vector2_t2156229523  L_51 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_52 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		Transform_t3600365921 * L_53 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Quaternion_t2301928331  L_54 = Transform_get_rotation_m3502953881(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_50, L_52, L_54, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_0176:
	{
		int32_t L_55 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)10000), /*hidden argument*/NULL);
		int32_t L_56 = __this->get_enemy_rate_5();
		if ((((int32_t)L_55) > ((int32_t)L_56)))
		{
			goto IL_01be;
		}
	}
	{
		float L_57 = V_1;
		float L_58 = V_1;
		float L_59 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_57)), L_58, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_7), L_59, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_60 = __this->get_enemy3_11();
		Vector2_t2156229523  L_61 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_62 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		Transform_t3600365921 * L_63 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		Quaternion_t2301928331  L_64 = Transform_get_rotation_m3502953881(L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_60, L_62, L_64, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_01be:
	{
		int32_t L_65 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)10000), /*hidden argument*/NULL);
		int32_t L_66 = __this->get_enemy_rate_5();
		if ((((int32_t)L_65) > ((int32_t)L_66)))
		{
			goto IL_0206;
		}
	}
	{
		float L_67 = V_1;
		float L_68 = V_1;
		float L_69 = Random_Range_m2202990745(NULL /*static, unused*/, ((-L_67)), L_68, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_8), L_69, (8.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_70 = __this->get_enemy4_12();
		Vector2_t2156229523  L_71 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_72 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		Transform_t3600365921 * L_73 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Quaternion_t2301928331  L_74 = Transform_get_rotation_m3502953881(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_70, L_72, L_74, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_0206:
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
// System.Void Test::.ctor()
extern "C"  void Test__ctor_m1854393510 (Test_t650638817 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Test::Start()
extern "C"  void Test_Start_m2130910232 (Test_t650638817 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Test::Update()
extern "C"  void Test_Update_m782915918 (Test_t650638817 * __this, const RuntimeMethod* method)
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
// System.Void TimerHandling::.ctor()
extern "C"  void TimerHandling__ctor_m2968327020 (TimerHandling_t732269483 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerHandling::Start()
extern "C"  void TimerHandling_Start_m178792050 (TimerHandling_t732269483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerHandling_Start_m178792050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1073816753, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t1901882714 * L_1 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_time_number_3(L_1);
		return;
	}
}
// System.Void TimerHandling::Update()
extern "C"  void TimerHandling_Update_m3292289817 (TimerHandling_t732269483 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_timer_2();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_2 = Math_Round_m3279303474(NULL /*static, unused*/, (((double)((double)((float)il2cpp_codegen_add((float)L_0, (float)L_1))))), 2, /*hidden argument*/NULL);
		__this->set_timer_2((((float)((float)L_2))));
		Text_t1901882714 * L_3 = __this->get_time_number_3();
		float* L_4 = __this->get_address_of_timer_2();
		String_t* L_5 = Single_ToString_m3947131094((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
