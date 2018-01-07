// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Input/Events.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvents() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFocusCause();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent();
// End Cross Module References
	static UEnum* EFocusCause_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFocusCause, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFocusCause"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFocusCause(EFocusCause_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFocusCause"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFocusCause_CRC() { return 2112461946U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFocusCause()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFocusCause"), 0, Get_Z_Construct_UEnum_SlateCore_EFocusCause_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFocusCause::Mouse", (int64)EFocusCause::Mouse },
				{ "EFocusCause::Navigation", (int64)EFocusCause::Navigation },
				{ "EFocusCause::SetDirectly", (int64)EFocusCause::SetDirectly },
				{ "EFocusCause::Cleared", (int64)EFocusCause::Cleared },
				{ "EFocusCause::OtherWidgetLostFocus", (int64)EFocusCause::OtherWidgetLostFocus },
				{ "EFocusCause::WindowActivate", (int64)EFocusCause::WindowActivate },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cleared.ToolTip", "Focus was explicitly cleared via the escape key or other similar action." },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "Mouse.ToolTip", "Focus was changed because of a mouse action." },
				{ "Navigation.ToolTip", "Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ..." },
				{ "OtherWidgetLostFocus.ToolTip", "Focus was changed because another widget lost focus, and focus moved to a new widget." },
				{ "SetDirectly.ToolTip", "Focus was changed because someone asked the application to change it." },
				{ "ToolTip", "Context for focus change" },
				{ "WindowActivate.ToolTip", "Focus was set in response to the owning window being activated." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFocusCause",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFocusCause",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNavigationEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("NavigationEvent"), sizeof(FNavigationEvent), Get_Z_Construct_UScriptStruct_FNavigationEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationEvent(FNavigationEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("NavigationEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationEvent")),new UScriptStruct::TCppStructOps<FNavigationEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationEvent"), sizeof(FNavigationEvent), Get_Z_Construct_UScriptStruct_FNavigationEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FNavigationEvent describes a navigation action (Left, Right, Up, Down)\nIt is passed to event handlers dealing with navigation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FInputEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavigationEvent),
				alignof(FNavigationEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_CRC() { return 1914246573U; }
class UScriptStruct* FMotionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("MotionEvent"), sizeof(FMotionEvent), Get_Z_Construct_UScriptStruct_FMotionEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMotionEvent(FMotionEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("MotionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MotionEvent")),new UScriptStruct::TCppStructOps<FMotionEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MotionEvent"), sizeof(FMotionEvent), Get_Z_Construct_UScriptStruct_FMotionEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FMotionEvent describes a touch pad action (press, move, lift)\nIt is passed to event handlers dealing with touch input." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FInputEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MotionEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMotionEvent),
				alignof(FMotionEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_CRC() { return 3900118168U; }
class UScriptStruct* FPointerEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("PointerEvent"), sizeof(FPointerEvent), Get_Z_Construct_UScriptStruct_FPointerEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerEvent(FPointerEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("PointerEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointerEvent")),new UScriptStruct::TCppStructOps<FPointerEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerEvent"), sizeof(FPointerEvent), Get_Z_Construct_UScriptStruct_FPointerEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FPointerEvent describes a mouse or touch action (e.g. Press, Release, Move, etc).\nIt is passed to event handlers dealing with pointer-based input." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FInputEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PointerEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPointerEvent),
				alignof(FPointerEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_CRC() { return 885146442U; }
class UScriptStruct* FCharacterEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("CharacterEvent"), sizeof(FCharacterEvent), Get_Z_Construct_UScriptStruct_FCharacterEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterEvent(FCharacterEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CharacterEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterEvent")),new UScriptStruct::TCppStructOps<FCharacterEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterEvent"), sizeof(FCharacterEvent), Get_Z_Construct_UScriptStruct_FCharacterEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FCharacterEvent describes a keyboard action where the utf-16 code is given.  Used for OnKeyChar messages" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FInputEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CharacterEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCharacterEvent),
				alignof(FCharacterEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_CRC() { return 1688430352U; }
class UScriptStruct* FAnalogInputEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalogInputEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("AnalogInputEvent"), sizeof(FAnalogInputEvent), Get_Z_Construct_UScriptStruct_FAnalogInputEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnalogInputEvent(FAnalogInputEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("AnalogInputEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnalogInputEvent")),new UScriptStruct::TCppStructOps<FAnalogInputEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnalogInputEvent"), sizeof(FAnalogInputEvent), Get_Z_Construct_UScriptStruct_FAnalogInputEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FAnalogEvent describes a analog key value.\nIt is passed to event handlers dealing with analog keys." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalogInputEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FKeyEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnalogInputEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnalogInputEvent),
				alignof(FAnalogInputEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_CRC() { return 2033296954U; }
class UScriptStruct* FKeyEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("KeyEvent"), sizeof(FKeyEvent), Get_Z_Construct_UScriptStruct_FKeyEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyEvent(FKeyEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("KeyEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyEvent")),new UScriptStruct::TCppStructOps<FKeyEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyEvent"), sizeof(FKeyEvent), Get_Z_Construct_UScriptStruct_FKeyEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FKeyEvent describes a key action (keyboard/controller key/button pressed or released.)\nIt is passed to event handlers dealing with key input." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FInputEvent,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KeyEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKeyEvent),
				alignof(FKeyEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_CRC() { return 4239214342U; }
class UScriptStruct* FInputEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FInputEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("InputEvent"), sizeof(FInputEvent), Get_Z_Construct_UScriptStruct_FInputEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputEvent(FInputEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("InputEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFInputEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFInputEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputEvent")),new UScriptStruct::TCppStructOps<FInputEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFInputEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FInputEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputEvent"), sizeof(FInputEvent), Get_Z_Construct_UScriptStruct_FInputEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "Base class for all mouse and keyevents." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputEvent),
				alignof(FInputEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputEvent_CRC() { return 3089885597U; }
class UScriptStruct* FFocusEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocusEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("FocusEvent"), sizeof(FFocusEvent), Get_Z_Construct_UScriptStruct_FFocusEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFocusEvent(FFocusEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FocusEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FocusEvent")),new UScriptStruct::TCppStructOps<FFocusEvent>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FocusEvent"), sizeof(FFocusEvent), Get_Z_Construct_UScriptStruct_FFocusEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "ToolTip", "FFocusEvent is used when notifying widgets about keyboard focus changes\nIt is passed to event handlers dealing with keyboard focus" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocusEvent>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FocusEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFocusEvent),
				alignof(FFocusEvent),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_CRC() { return 2904780851U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
