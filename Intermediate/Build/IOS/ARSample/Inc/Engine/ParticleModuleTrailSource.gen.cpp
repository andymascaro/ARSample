// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Trail/ParticleModuleTrailSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailSource() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* ETrail2SourceMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrail2SourceMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ETrail2SourceMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrail2SourceMethod(ETrail2SourceMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrail2SourceMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrail2SourceMethod_CRC() { return 2820288772U; }
	UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrail2SourceMethod"), 0, Get_Z_Construct_UEnum_Engine_ETrail2SourceMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PET2SRCM_Default", (int64)PET2SRCM_Default },
				{ "PET2SRCM_Particle", (int64)PET2SRCM_Particle },
				{ "PET2SRCM_Actor", (int64)PET2SRCM_Actor },
				{ "PET2SRCM_MAX", (int64)PET2SRCM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "PET2SRCM_Actor.ToolTip", "Actor          - use the actor as the source.\n    The name of the actor should be set in SourceName." },
				{ "PET2SRCM_Default.ToolTip", "Default        - use the emitter position.\n    This is the fallback for when other modes can't be resolved." },
				{ "PET2SRCM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in SourceName." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrail2SourceMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETrail2SourceMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleTrailSource::StaticRegisterNativesUParticleModuleTrailSource()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister()
	{
		return UParticleModuleTrailSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTrailSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleTrailBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Source" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle." },
			};
#endif
			auto NewProp_bInheritRotation_SetBit = [](void* Obj){ ((UParticleModuleTrailSource*)Obj)->bInheritRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTrailSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritRotation_MetaData, ARRAY_COUNT(NewProp_bInheritRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "Particle selection method, when using the SourceMethod of Particle." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SelectionMethod), Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, METADATA_PARAMS(NewProp_SelectionMethod_MetaData, ARRAY_COUNT(NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetDefaults_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "Default offsets from the source(s).\nIf there are < SourceOffsetCount slots, the grabbing of values will simply wrap." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceOffsetDefaults = { UE4CodeGen_Private::EPropertyClass::Array, "SourceOffsetDefaults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetDefaults), METADATA_PARAMS(NewProp_SourceOffsetDefaults_MetaData, ARRAY_COUNT(NewProp_SourceOffsetDefaults_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceOffsetDefaults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceOffsetDefaults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetCount_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "SourceOffsetCount\nThe number of source offsets that can be expected to be found on the instance.\nThese must be named\n        TrailSourceOffset#" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceOffsetCount = { UE4CodeGen_Private::EPropertyClass::Int, "SourceOffsetCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetCount), METADATA_PARAMS(NewProp_SourceOffsetCount_MetaData, ARRAY_COUNT(NewProp_SourceOffsetCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "Whether to lock the source to the life of the particle." },
			};
#endif
			auto NewProp_bLockSourceStength_SetBit = [](void* Obj){ ((UParticleModuleTrailSource*)Obj)->bLockSourceStength = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockSourceStength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTrailSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockSourceStength_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockSourceStength_MetaData, ARRAY_COUNT(NewProp_bLockSourceStength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "The strength of the tangent from the source point for each Trail." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceStrength = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SourceStrength_MetaData, ARRAY_COUNT(NewProp_SourceStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "The name of the source - either the emitter or Actor." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceName), METADATA_PARAMS(NewProp_SourceName_MetaData, ARRAY_COUNT(NewProp_SourceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "ToolTip", "The source method for the trail." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceMethod), Z_Construct_UEnum_Engine_ETrail2SourceMethod, METADATA_PARAMS(NewProp_SourceMethod_MetaData, ARRAY_COUNT(NewProp_SourceMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceOffsetDefaults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceOffsetDefaults_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceOffsetCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockSourceStength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceMethod,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTrailSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTrailSource::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleTrailSource, 951136381);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTrailSource(Z_Construct_UClass_UParticleModuleTrailSource, &UParticleModuleTrailSource::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTrailSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
