// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseConfig_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Sight() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
// End Cross Module References
	void UAISenseConfig_Sight::StaticRegisterNativesUAISenseConfig_Sight()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister()
	{
		return UAISenseConfig_Sight::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Sight()
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
				{ "DisplayName", "AI Sight config" },
				{ "IncludePath", "Perception/AISenseConfig_Sight.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
				{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation = { UE4CodeGen_Private::EPropertyClass::Float, "AutoSuccessRangeFromLastSeenLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData, ARRAY_COUNT(NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation = { UE4CodeGen_Private::EPropertyClass::Struct, "DetectionByAffiliation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(NewProp_DetectionByAffiliation_MetaData, ARRAY_COUNT(NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMax", "180.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
				{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n    The value represents the angle measured in relation to the forward vector, not the whole range." },
				{ "UIMax", "180.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "PeripheralVisionAngleDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, PeripheralVisionAngleDegrees), METADATA_PARAMS(NewProp_PeripheralVisionAngleDegrees_MetaData, ARRAY_COUNT(NewProp_PeripheralVisionAngleDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
				{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LoseSightRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, LoseSightRadius), METADATA_PARAMS(NewProp_LoseSightRadius_MetaData, ARRAY_COUNT(NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
				{ "ToolTip", "Maximum sight distance to notice a target." },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SightRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, SightRadius), METADATA_PARAMS(NewProp_SightRadius_MetaData, ARRAY_COUNT(NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation = { UE4CodeGen_Private::EPropertyClass::Class, "Implementation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, Implementation), Z_Construct_UClass_UAISense_Sight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Implementation_MetaData, ARRAY_COUNT(NewProp_Implementation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoSuccessRangeFromLastSeenLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetectionByAffiliation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeripheralVisionAngleDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoseSightRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Implementation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseConfig_Sight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseConfig_Sight::StaticClass,
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
	IMPLEMENT_CLASS(UAISenseConfig_Sight, 1489231655);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Sight(Z_Construct_UClass_UAISenseConfig_Sight, &UAISenseConfig_Sight::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
