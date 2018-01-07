// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackEvent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
class UScriptStruct* FEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("EventTrackKey"), sizeof(FEventTrackKey), Get_Z_Construct_UScriptStruct_FEventTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventTrackKey(FEventTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("EventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEventTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventTrackKey")),new UScriptStruct::TCppStructOps<FEventTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEventTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventTrackKey"), sizeof(FEventTrackKey), Get_Z_Construct_UScriptStruct_FEventTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "Information for one event in the track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "Category", "EventTrackKey" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEventTrackKey, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEventTrackKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EventTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEventTrackKey),
				alignof(FEventTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_CRC() { return 1144918177U; }
	void UInterpTrackEvent::StaticRegisterNativesUInterpTrackEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister()
	{
		return UInterpTrackEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackEvent()
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
				{ "DisplayName", "Event Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackEvent.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEventName_MetaData[] = {
				{ "Category", "InterpTrackEvent" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "If checked each key's event name is the exact name of the custom event function in level script that will be called" },
			};
#endif
			auto NewProp_bUseCustomEventName_SetBit = [](void* Obj){ ((UInterpTrackEvent*)Obj)->bUseCustomEventName = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEventName = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomEventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomEventName_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomEventName_MetaData, ARRAY_COUNT(NewProp_bUseCustomEventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
				{ "Category", "InterpTrackEvent" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
			};
#endif
			auto NewProp_bFireEventsWhenJumpingForwards_SetBit = [](void* Obj){ ((UInterpTrackEvent*)Obj)->bFireEventsWhenJumpingForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenJumpingForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenJumpingForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenJumpingForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[] = {
				{ "Category", "InterpTrackEvent" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
			};
#endif
			auto NewProp_bFireEventsWhenBackwards_SetBit = [](void* Obj){ ((UInterpTrackEvent*)Obj)->bFireEventsWhenBackwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenBackwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[] = {
				{ "Category", "InterpTrackEvent" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
			};
#endif
			auto NewProp_bFireEventsWhenForwards_SetBit = [](void* Obj){ ((UInterpTrackEvent*)Obj)->bFireEventsWhenForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
				{ "ToolTip", "Array of events to fire off." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTrack = { UE4CodeGen_Private::EPropertyClass::Array, "EventTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackEvent, EventTrack), METADATA_PARAMS(NewProp_EventTrack_MetaData, ARRAY_COUNT(NewProp_EventTrack_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventTrackKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomEventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenJumpingForwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenBackwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenForwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventTrack_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackEvent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackEvent::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackEvent, 474905098);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackEvent(Z_Construct_UClass_UInterpTrackEvent, &UInterpTrackEvent::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
