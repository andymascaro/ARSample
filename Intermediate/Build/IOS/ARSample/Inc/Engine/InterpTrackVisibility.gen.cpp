// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVisibility() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static UEnum* EVisibilityTrackCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackCondition, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackCondition"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityTrackCondition(EVisibilityTrackCondition_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityTrackCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityTrackCondition_CRC() { return 2842655333U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityTrackCondition"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityTrackCondition_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVTC_Always", (int64)EVTC_Always },
				{ "EVTC_GoreEnabled", (int64)EVTC_GoreEnabled },
				{ "EVTC_GoreDisabled", (int64)EVTC_GoreDisabled },
				{ "EVTC_MAX", (int64)EVTC_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EVTC_Always.ToolTip", "Always play this event" },
				{ "EVTC_GoreDisabled.ToolTip", "Only play this event when extreme content (gore) is disabled" },
				{ "EVTC_GoreEnabled.ToolTip", "Only play this event when extreme content (gore) is enabled" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Required condition for firing this event" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVisibilityTrackCondition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVisibilityTrackCondition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVisibilityTrackAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackAction, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackAction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityTrackAction(EVisibilityTrackAction_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityTrackAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityTrackAction_CRC() { return 3255503586U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityTrackAction"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityTrackAction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVTA_Hide", (int64)EVTA_Hide },
				{ "EVTA_Show", (int64)EVTA_Show },
				{ "EVTA_Toggle", (int64)EVTA_Toggle },
				{ "EVTA_MAX", (int64)EVTA_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EVTA_Hide.ToolTip", "Hides the object" },
				{ "EVTA_Show.ToolTip", "Shows the object" },
				{ "EVTA_Toggle.ToolTip", "Toggles visibility of the object" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Visibility track actions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVisibilityTrackAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVisibilityTrackAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVisibilityTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisibilityTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("VisibilityTrackKey"), sizeof(FVisibilityTrackKey), Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVisibilityTrackKey(FVisibilityTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("VisibilityTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VisibilityTrackKey")),new UScriptStruct::TCppStructOps<FVisibilityTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVisibilityTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VisibilityTrackKey"), sizeof(FVisibilityTrackKey), Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Information for one toggle in the track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisibilityTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCondition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Condition that must be satisfied for this key event to fire" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveCondition = { UE4CodeGen_Private::EPropertyClass::Byte, "ActiveCondition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVisibilityTrackKey, ActiveCondition), Z_Construct_UEnum_Engine_EVisibilityTrackCondition, METADATA_PARAMS(NewProp_ActiveCondition_MetaData, ARRAY_COUNT(NewProp_ActiveCondition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "Category", "VisibilityTrackKey" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Byte, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVisibilityTrackKey, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVisibilityTrackKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveCondition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VisibilityTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVisibilityTrackKey),
				alignof(FVisibilityTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVisibilityTrackKey_CRC() { return 1553273744U; }
	void UInterpTrackVisibility::StaticRegisterNativesUInterpTrackVisibility()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister()
	{
		return UInterpTrackVisibility::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackVisibility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Visibility Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackVisibility.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
				{ "Category", "InterpTrackVisibility" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
			};
#endif
			auto NewProp_bFireEventsWhenJumpingForwards_SetBit = [](void* Obj){ ((UInterpTrackVisibility*)Obj)->bFireEventsWhenJumpingForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenJumpingForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackVisibility), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenJumpingForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenJumpingForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[] = {
				{ "Category", "InterpTrackVisibility" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
			};
#endif
			auto NewProp_bFireEventsWhenBackwards_SetBit = [](void* Obj){ ((UInterpTrackVisibility*)Obj)->bFireEventsWhenBackwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackVisibility), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenBackwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[] = {
				{ "Category", "InterpTrackVisibility" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
			};
#endif
			auto NewProp_bFireEventsWhenForwards_SetBit = [](void* Obj){ ((UInterpTrackVisibility*)Obj)->bFireEventsWhenForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackVisibility), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
				{ "ToolTip", "Array of events to fire off." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibilityTrack = { UE4CodeGen_Private::EPropertyClass::Array, "VisibilityTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackVisibility, VisibilityTrack), METADATA_PARAMS(NewProp_VisibilityTrack_MetaData, ARRAY_COUNT(NewProp_VisibilityTrack_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilityTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VisibilityTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVisibilityTrackKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenJumpingForwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenBackwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenForwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibilityTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibilityTrack_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackVisibility>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackVisibility::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackVisibility, 479602046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVisibility(Z_Construct_UClass_UInterpTrackVisibility, &UInterpTrackVisibility::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVisibility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
