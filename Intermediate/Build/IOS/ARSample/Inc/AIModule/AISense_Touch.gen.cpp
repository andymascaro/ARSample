// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Touch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Touch() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAITouchEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITouchEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AITouchEvent"), sizeof(FAITouchEvent), Get_Z_Construct_UScriptStruct_FAITouchEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITouchEvent(FAITouchEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AITouchEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITouchEvent")),new UScriptStruct::TCppStructOps<FAITouchEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITouchEvent"), sizeof(FAITouchEvent), Get_Z_Construct_UScriptStruct_FAITouchEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITouchEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAITouchEvent, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_OtherActor_MetaData, ARRAY_COUNT(NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchReceiver_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchReceiver = { UE4CodeGen_Private::EPropertyClass::Object, "TouchReceiver", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAITouchEvent, TouchReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_TouchReceiver_MetaData, ARRAY_COUNT(NewProp_TouchReceiver_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TouchReceiver,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AITouchEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAITouchEvent),
				alignof(FAITouchEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_CRC() { return 117136288U; }
	void UAISense_Touch::StaticRegisterNativesUAISense_Touch()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Touch_NoRegister()
	{
		return UAISense_Touch::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Touch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Touch.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents = { UE4CodeGen_Private::EPropertyClass::Array, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Touch, RegisteredEvents), METADATA_PARAMS(NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(NewProp_RegisteredEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAITouchEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Touch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Touch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Touch, 436339845);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Touch(Z_Construct_UClass_UAISense_Touch, &UAISense_Touch::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Touch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Touch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
