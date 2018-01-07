// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Size/ParticleModuleSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSize::StaticRegisterNativesUParticleModuleSize()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister()
	{
		return UParticleModuleSize::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Initial Size" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Size/ParticleModuleSize.h" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSize_MetaData[] = {
				{ "Category", "Size" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
				{ "ToolTip", "The initial size that should be used for a particle.\nThe value is retrieved using the EmitterTime during the spawn of a particle.\nIt is added to the Size and BaseSize fields of the spawning particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartSize = { UE4CodeGen_Private::EPropertyClass::Struct, "StartSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSize, StartSize), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartSize_MetaData, ARRAY_COUNT(NewProp_StartSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSize>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSize::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSize, 146656450);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSize(Z_Construct_UClass_UParticleModuleSize, &UParticleModuleSize::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
