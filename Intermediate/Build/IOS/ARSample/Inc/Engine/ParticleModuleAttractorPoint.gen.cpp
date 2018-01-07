// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleAttractorPoint::StaticRegisterNativesUParticleModuleAttractorPoint()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister()
	{
		return UParticleModuleAttractorPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Point Attractor" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the negative Z axis." },
			};
#endif
			auto NewProp_Negative_Z_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Negative_Z = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_Z = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_Z_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_Z_MetaData, ARRAY_COUNT(NewProp_Negative_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the negative Y axis." },
			};
#endif
			auto NewProp_Negative_Y_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Negative_Y = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_Y = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_Y_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_Y_MetaData, ARRAY_COUNT(NewProp_Negative_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the negative X axis." },
			};
#endif
			auto NewProp_Negative_X_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Negative_X = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Negative_X = { UE4CodeGen_Private::EPropertyClass::Bool, "Negative_X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Negative_X_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Negative_X_MetaData, ARRAY_COUNT(NewProp_Negative_X_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the positive Z axis." },
			};
#endif
			auto NewProp_Positive_Z_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Positive_Z = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_Z = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_Z_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_Z_MetaData, ARRAY_COUNT(NewProp_Positive_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the positive Y axis." },
			};
#endif
			auto NewProp_Positive_Y_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Positive_Y = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_Y = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_Y_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_Y_MetaData, ARRAY_COUNT(NewProp_Positive_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "Whether particles can move along the positive X axis." },
			};
#endif
			auto NewProp_Positive_X_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->Positive_X = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Positive_X = { UE4CodeGen_Private::EPropertyClass::Bool, "Positive_X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Positive_X_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Positive_X_MetaData, ARRAY_COUNT(NewProp_Positive_X_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpacePosition_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "If true, treat the position as world space.  So don't transform the the point to localspace." },
			};
#endif
			auto NewProp_bUseWorldSpacePosition_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->bUseWorldSpacePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpacePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseWorldSpacePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseWorldSpacePosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseWorldSpacePosition_MetaData, ARRAY_COUNT(NewProp_bUseWorldSpacePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideVelocity_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "If true, set the velocity." },
			};
#endif
			auto NewProp_bOverrideVelocity_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->bOverrideVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideVelocity_MetaData, ARRAY_COUNT(NewProp_bOverrideVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
			};
#endif
			auto NewProp_bAffectBaseVelocity_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->bAffectBaseVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectBaseVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectBaseVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectBaseVelocity_MetaData, ARRAY_COUNT(NewProp_bAffectBaseVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthByDistance_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "The strength curve is a function of distance or of time." },
			};
#endif
			auto NewProp_StrengthByDistance_SetBit = [](void* Obj){ ((UParticleModuleAttractorPoint*)Obj)->StrengthByDistance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StrengthByDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "StrengthByDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorPoint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StrengthByDistance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StrengthByDistance_MetaData, ARRAY_COUNT(NewProp_StrengthByDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "The strength of the point attractor." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Struct, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "The radial range of the attractor." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Struct, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
				{ "ToolTip", "The position of the point attractor from the source of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Negative_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Positive_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseWorldSpacePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectBaseVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthByDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAttractorPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAttractorPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleAttractorPoint, 964120845);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorPoint(Z_Construct_UClass_UParticleModuleAttractorPoint, &UParticleModuleAttractorPoint::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
