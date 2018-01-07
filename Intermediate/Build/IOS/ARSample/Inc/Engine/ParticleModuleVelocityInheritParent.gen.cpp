// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityInheritParent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleVelocityInheritParent::StaticRegisterNativesUParticleModuleVelocityInheritParent()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister()
	{
		return UParticleModuleVelocityInheritParent::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Inherit Parent Velocity" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
				{ "ToolTip", "The scale to apply tot he parent velocity prior to adding it to the particle velocity during spawn.\nValue is retrieved using the EmitterTime of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocityInheritParent, Scale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVelocityInheritParent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVelocityInheritParent::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVelocityInheritParent, 247018255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityInheritParent(Z_Construct_UClass_UParticleModuleVelocityInheritParent, &UParticleModuleVelocityInheritParent::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityInheritParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityInheritParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
