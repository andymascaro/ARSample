// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationOverLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleRotationOverLifetime::StaticRegisterNativesUParticleModuleRotationOverLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime_NoRegister()
	{
		return UParticleModuleRotationOverLifetime::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationOverLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Rotation/Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
				{ "ToolTip", "If true,  the particle rotation is multiplied by the value retrieved from RotationOverLife.\nIf false, the particle rotation is incremented by the value retrieved from RotationOverLife." },
			};
#endif
			auto NewProp_Scale_SetBit = [](void* Obj){ ((UParticleModuleRotationOverLifetime*)Obj)->Scale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Bool, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRotationOverLifetime), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Scale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOverLife_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h" },
				{ "ToolTip", "The rotation of the particle (1.0 = 360 degrees).\nThe value is retrieved using the RelativeTime of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRotationOverLifetime, RotationOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_RotationOverLife_MetaData, ARRAY_COUNT(NewProp_RotationOverLife_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationOverLife,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleRotationOverLifetime>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleRotationOverLifetime::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleRotationOverLifetime, 177093728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotationOverLifetime(Z_Construct_UClass_UParticleModuleRotationOverLifetime, &UParticleModuleRotationOverLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotationOverLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationOverLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
