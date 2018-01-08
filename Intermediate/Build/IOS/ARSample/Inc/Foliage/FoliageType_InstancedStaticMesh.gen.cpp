// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FoliageType_InstancedStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UFoliageType_InstancedStaticMesh::StaticRegisterNativesUFoliageType_InstancedStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister()
	{
		return UFoliageType_InstancedStaticMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFoliageType,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "FoliageType_InstancedStaticMesh.h" },
				{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
				{ "ToolTip", "The component class to use for foliage instances.\nYou can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass = { UE4CodeGen_Private::EPropertyClass::Class, "ComponentClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, ComponentClass), Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ComponentClass_MetaData, ARRAY_COUNT(NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
				{ "ToolTip", "Material overrides for foliage instances." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "OverrideMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, OverrideMaterials), METADATA_PARAMS(NewProp_OverrideMaterials_MetaData, ARRAY_COUNT(NewProp_OverrideMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideMaterials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFoliageType_InstancedStaticMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFoliageType_InstancedStaticMesh::StaticClass,
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
	IMPLEMENT_CLASS(UFoliageType_InstancedStaticMesh, 810321402);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType_InstancedStaticMesh(Z_Construct_UClass_UFoliageType_InstancedStaticMesh, &UFoliageType_InstancedStaticMesh::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageType_InstancedStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_InstancedStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
