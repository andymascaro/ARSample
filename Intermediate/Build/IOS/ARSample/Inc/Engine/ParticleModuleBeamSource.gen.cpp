// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Beam/ParticleModuleBeamSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
// End Cross Module References
	void UParticleModuleBeamSource::StaticRegisterNativesUParticleModuleBeamSource()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister()
	{
		return UParticleModuleBeamSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Source" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "Whether to lock the source to the life of the particle." },
			};
#endif
			auto NewProp_bLockSourceStength_SetBit = [](void* Obj){ ((UParticleModuleBeamSource*)Obj)->bLockSourceStength = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockSourceStength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockSourceStength_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockSourceStength_MetaData, ARRAY_COUNT(NewProp_bLockSourceStength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "The strength of the tangent from the source point for each beam." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceStrength = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SourceStrength_MetaData, ARRAY_COUNT(NewProp_SourceStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSourceTangent_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "Whether to lock the source to the life of the particle." },
			};
#endif
			auto NewProp_bLockSourceTangent_SetBit = [](void* Obj){ ((UParticleModuleBeamSource*)Obj)->bLockSourceTangent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSourceTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockSourceTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockSourceTangent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockSourceTangent_MetaData, ARRAY_COUNT(NewProp_bLockSourceTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTangent_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "The tangent for the source point for each beam." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_SourceTangent_MetaData, ARRAY_COUNT(NewProp_SourceTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTangentMethod_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "The method to use for the source tangent." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceTangentMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceTangentMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangentMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, METADATA_PARAMS(NewProp_SourceTangentMethod_MetaData, ARRAY_COUNT(NewProp_SourceTangentMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSource_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "Whether to lock the source to the life of the particle." },
			};
#endif
			auto NewProp_bLockSource_SetBit = [](void* Obj){ ((UParticleModuleBeamSource*)Obj)->bLockSource = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSource = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockSource_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockSource_MetaData, ARRAY_COUNT(NewProp_bLockSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "Default source-point to use." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Struct, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, Source), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSourceAbsolute_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "Whether to treat the as an absolute position in world space." },
			};
#endif
			auto NewProp_bSourceAbsolute_SetBit = [](void* Obj){ ((UParticleModuleBeamSource*)Obj)->bSourceAbsolute = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSourceAbsolute = { UE4CodeGen_Private::EPropertyClass::Bool, "bSourceAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSourceAbsolute_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSourceAbsolute_MetaData, ARRAY_COUNT(NewProp_bSourceAbsolute_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "The strength of the tangent from the source point for each beam." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, SourceName), METADATA_PARAMS(NewProp_SourceName_MetaData, ARRAY_COUNT(NewProp_SourceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
				{ "ToolTip", "The method flag." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamSource, SourceMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, METADATA_PARAMS(NewProp_SourceMethod_MetaData, ARRAY_COUNT(NewProp_SourceMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockSourceStength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockSourceTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceTangentMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSourceAbsolute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceMethod,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleBeamSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleBeamSource::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleBeamSource, 3056525007);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamSource(Z_Construct_UClass_UParticleModuleBeamSource, &UParticleModuleBeamSource::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
