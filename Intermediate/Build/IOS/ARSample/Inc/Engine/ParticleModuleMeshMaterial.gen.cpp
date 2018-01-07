// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Material/ParticleModuleMeshMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UParticleModuleMeshMaterial::StaticRegisterNativesUParticleModuleMeshMaterial()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister()
	{
		return UParticleModuleMeshMaterial::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleMaterialBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Mesh Material" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Material/ParticleModuleMeshMaterial.h" },
				{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterials_MetaData[] = {
				{ "Category", "MeshMaterials" },
				{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
				{ "ToolTip", "The array of materials to apply to the mesh particles." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "MeshMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshMaterial, MeshMaterials), METADATA_PARAMS(NewProp_MeshMaterials_MetaData, ARRAY_COUNT(NewProp_MeshMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MeshMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshMaterials_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleMeshMaterial>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleMeshMaterial::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UParticleModuleMeshMaterial, 1659646202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshMaterial(Z_Construct_UClass_UParticleModuleMeshMaterial, &UParticleModuleMeshMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
