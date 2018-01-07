// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorParticle() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EAttractorParticleSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAttractorParticleSelectionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttractorParticleSelectionMethod(EAttractorParticleSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAttractorParticleSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_CRC() { return 893918813U; }
	UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttractorParticleSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAPSM_Random", (int64)EAPSM_Random },
				{ "EAPSM_Sequential", (int64)EAPSM_Sequential },
				{ "EAPSM_MAX", (int64)EAPSM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EAPSM_Random.DisplayName", "Random" },
				{ "EAPSM_Sequential.DisplayName", "Sequential" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAttractorParticleSelectionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAttractorParticleSelectionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleAttractorParticle::StaticRegisterNativesUParticleModuleAttractorParticle()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister()
	{
		return UParticleModuleAttractorParticle::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorParticle()
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
				{ "DisplayName", "Particle Attractor" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSelIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastSelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LastSelIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, LastSelIndex), METADATA_PARAMS(NewProp_LastSelIndex_MetaData, ARRAY_COUNT(NewProp_LastSelIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceVel_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "Whether the particle should inherit the source veloctiy if it expires." },
			};
#endif
			auto NewProp_bInheritSourceVel_SetBit = [](void* Obj){ ((UParticleModuleAttractorParticle*)Obj)->bInheritSourceVel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceVel = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritSourceVel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorParticle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritSourceVel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritSourceVel_MetaData, ARRAY_COUNT(NewProp_bInheritSourceVel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenewSource_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "Whether the particle should grab a new particle if it's source expires." },
			};
#endif
			auto NewProp_bRenewSource_SetBit = [](void* Obj){ ((UParticleModuleAttractorParticle*)Obj)->bRenewSource = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenewSource = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenewSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorParticle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenewSource_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenewSource_MetaData, ARRAY_COUNT(NewProp_bRenewSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "The method to use when selecting an attractor target particle from the emitter.\nOne of the following:\nRandom          - Randomly select a particle from the source emitter.\nSequential  - Select a particle using a sequential order." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, SelectionMethod), Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, METADATA_PARAMS(NewProp_SelectionMethod_MetaData, ARRAY_COUNT(NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
			};
#endif
			auto NewProp_bAffectBaseVelocity_SetBit = [](void* Obj){ ((UParticleModuleAttractorParticle*)Obj)->bAffectBaseVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectBaseVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorParticle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectBaseVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectBaseVelocity_MetaData, ARRAY_COUNT(NewProp_bAffectBaseVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "The strength of the attraction (negative values repel).\nParticle-life relative if StrengthByDistance is false." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Struct, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrengthByDistance_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "The strength curve is a function of distance or of time." },
			};
#endif
			auto NewProp_bStrengthByDistance_SetBit = [](void* Obj){ ((UParticleModuleAttractorParticle*)Obj)->bStrengthByDistance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrengthByDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bStrengthByDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleAttractorParticle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStrengthByDistance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStrengthByDistance_MetaData, ARRAY_COUNT(NewProp_bStrengthByDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "The radial range of the attraction around the source particle.\nParticle-life relative." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Struct, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
				{ "Category", "Attractor" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
				{ "ToolTip", "The source emitter for attractors" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName = { UE4CodeGen_Private::EPropertyClass::Name, "EmitterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002000009, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, EmitterName), METADATA_PARAMS(NewProp_EmitterName_MetaData, ARRAY_COUNT(NewProp_EmitterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastSelIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritSourceVel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenewSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectBaseVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStrengthByDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAttractorParticle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAttractorParticle::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAttractorParticle, 2230871990);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorParticle(Z_Construct_UClass_UParticleModuleAttractorParticle, &UParticleModuleAttractorParticle::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorParticle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorParticle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
