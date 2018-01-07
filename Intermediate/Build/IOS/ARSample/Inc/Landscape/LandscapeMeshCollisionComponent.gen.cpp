// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeMeshCollisionComponent.h"
#include "Classes/LandscapeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshCollisionComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULandscapeMeshCollisionComponent::StaticRegisterNativesULandscapeMeshCollisionComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister()
	{
		return ULandscapeMeshCollisionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "LandscapeMeshCollisionComponent.h" },
				{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
				{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeMeshCollisionComponent, MeshGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MeshGuid_MetaData, ARRAY_COUNT(NewProp_MeshGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeMeshCollisionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeMeshCollisionComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A00080u,
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
	IMPLEMENT_CLASS(ULandscapeMeshCollisionComponent, 1828101288);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMeshCollisionComponent(Z_Construct_UClass_ULandscapeMeshCollisionComponent, &ULandscapeMeshCollisionComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMeshCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshCollisionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
