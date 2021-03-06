// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseEvent_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
// End Cross Module References
	void UAISenseEvent_Hearing::StaticRegisterNativesUAISenseEvent_Hearing()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister()
	{
		return UAISenseEvent_Hearing::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseEvent_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Perception/AISenseEvent_Hearing.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event = { UE4CodeGen_Private::EPropertyClass::Struct, "Event", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UAISenseEvent_Hearing, Event), Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(NewProp_Event_MetaData, ARRAY_COUNT(NewProp_Event_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Event,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseEvent_Hearing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseEvent_Hearing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UAISenseEvent_Hearing, 1405856009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent_Hearing(Z_Construct_UClass_UAISenseEvent_Hearing, &UAISenseEvent_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseEvent_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
