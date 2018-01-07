// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleSourceMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSourceMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSourceMovement::StaticRegisterNativesUParticleModuleSourceMovement()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister()
	{
		return UParticleModuleSourceMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Source Movement" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleSourceMovement.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMovementScale_MetaData[] = {
				{ "Category", "SourceMovement" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
				{ "ToolTip", "The scale factor to apply to the source movement before adding to the particle location.\nThe value is looked up using the particles RELATIVE time [0..1]." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceMovementScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceMovementScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSourceMovement, SourceMovementScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_SourceMovementScale_MetaData, ARRAY_COUNT(NewProp_SourceMovementScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceMovementScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSourceMovement>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSourceMovement::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSourceMovement, 934757369);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSourceMovement(Z_Construct_UClass_UParticleModuleSourceMovement, &UParticleModuleSourceMovement::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSourceMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSourceMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
