// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseConfig_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
// End Cross Module References
	void UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister()
	{
		return UAISenseConfig_Hearing::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "AI Hearing config" },
				{ "IncludePath", "Perception/AISenseConfig_Hearing.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation = { UE4CodeGen_Private::EPropertyClass::Struct, "DetectionByAffiliation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(NewProp_DetectionByAffiliation_MetaData, ARRAY_COUNT(NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLoSHearing_MetaData[] = {
				{ "Category", "Sense" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
				{ "ToolTip", "Warning: has significant runtime cost" },
			};
#endif
			auto NewProp_bUseLoSHearing_SetBit = [](void* Obj){ ((UAISenseConfig_Hearing*)Obj)->bUseLoSHearing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLoSHearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLoSHearing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAISenseConfig_Hearing), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLoSHearing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLoSHearing_MetaData, ARRAY_COUNT(NewProp_bUseLoSHearing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoSHearingRange_MetaData[] = {
				{ "Category", "Sense" },
				{ "EditCondition", "bUseLoSHearing" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoSHearingRange = { UE4CodeGen_Private::EPropertyClass::Float, "LoSHearingRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, LoSHearingRange), METADATA_PARAMS(NewProp_LoSHearingRange_MetaData, ARRAY_COUNT(NewProp_LoSHearingRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HearingRange = { UE4CodeGen_Private::EPropertyClass::Float, "HearingRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, HearingRange), METADATA_PARAMS(NewProp_HearingRange_MetaData, ARRAY_COUNT(NewProp_HearingRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation = { UE4CodeGen_Private::EPropertyClass::Class, "Implementation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, Implementation), Z_Construct_UClass_UAISense_Hearing_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Implementation_MetaData, ARRAY_COUNT(NewProp_Implementation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetectionByAffiliation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLoSHearing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoSHearingRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HearingRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Implementation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseConfig_Hearing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseConfig_Hearing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Hearing, 3628819109);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Hearing(Z_Construct_UClass_UAISenseConfig_Hearing, &UAISenseConfig_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
