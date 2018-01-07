// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Rotation/ParticleModuleMeshRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotation::StaticRegisterNativesUParticleModuleMeshRotation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister()
	{
		return UParticleModuleMeshRotation::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation()
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
				{ "DisplayName", "Init Mesh Rotation" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Rotation/ParticleModuleMeshRotation.h" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritParent_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
				{ "ToolTip", "If true, apply the parents rotation as well." },
			};
#endif
			auto NewProp_bInheritParent_SetBit = [](void* Obj){ ((UParticleModuleMeshRotation*)Obj)->bInheritParent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleMeshRotation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritParent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritParent_MetaData, ARRAY_COUNT(NewProp_bInheritParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
				{ "ToolTip", "Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartRotation_MetaData, ARRAY_COUNT(NewProp_StartRotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRotation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleMeshRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleMeshRotation::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleMeshRotation, 1429452624);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotation(Z_Construct_UClass_UParticleModuleMeshRotation, &UParticleModuleMeshRotation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
