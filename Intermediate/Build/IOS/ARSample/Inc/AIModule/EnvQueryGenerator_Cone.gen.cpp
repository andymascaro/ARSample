// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister()
	{
		return UEnvQueryGenerator_Cone::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Points: Cone" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "Whether to include CenterActors' locations when generating items.\n    Note that this option skips the MinAngledPointsDistance parameter." },
			};
#endif
			auto NewProp_bIncludeContextLocation_SetBit = [](void* Obj){ ((UEnvQueryGenerator_Cone*)Obj)->bIncludeContextLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeContextLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_Cone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeContextLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIncludeContextLocation_MetaData, ARRAY_COUNT(NewProp_bIncludeContextLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "The actor (or actors) that will generate a cone in their facing direction" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CenterActor = { UE4CodeGen_Private::EPropertyClass::Class, "CenterActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, CenterActor), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CenterActor_MetaData, ARRAY_COUNT(NewProp_CenterActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "Generation distance" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Struct, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, Range), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleStep_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "The step of the angle increase. Angle step must be >=1\nSmaller values generate less items" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngleStep = { UE4CodeGen_Private::EPropertyClass::Struct, "AngleStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AngleStep), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_AngleStep_MetaData, ARRAY_COUNT(NewProp_AngleStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDegrees_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "Maximum degrees of the generated cone" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDegrees = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, ConeDegrees), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ConeDegrees_MetaData, ARRAY_COUNT(NewProp_ConeDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignedPointsDistance_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
				{ "ToolTip", "Distance between each point of the same angle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlignedPointsDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "AlignedPointsDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AlignedPointsDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_AlignedPointsDistance_MetaData, ARRAY_COUNT(NewProp_AlignedPointsDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeContextLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngleStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlignedPointsDistance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_Cone>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_Cone::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_Cone, 464653485);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Cone(Z_Construct_UClass_UEnvQueryGenerator_Cone, &UEnvQueryGenerator_Cone::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_Cone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Cone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
