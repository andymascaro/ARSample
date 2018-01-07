// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/LightmappedSurfaceCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection()
	{
	}
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister()
	{
		return ULightmappedSurfaceCollection::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Lightmass/LightmappedSurfaceCollection.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[] = {
				{ "Category", "LightmappedSurfaceCollection" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
				{ "ToolTip", "An array of the surface indices grouped into a single static lighting mapping." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Surfaces = { UE4CodeGen_Private::EPropertyClass::Array, "Surfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightmappedSurfaceCollection, Surfaces), METADATA_PARAMS(NewProp_Surfaces_MetaData, ARRAY_COUNT(NewProp_Surfaces_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Surfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Surfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceModel_MetaData[] = {
				{ "Category", "LightmappedSurfaceCollection" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
				{ "ToolTip", "The UModel these surfaces come from." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceModel = { UE4CodeGen_Private::EPropertyClass::Object, "SourceModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightmappedSurfaceCollection, SourceModel), Z_Construct_UClass_UModel, METADATA_PARAMS(NewProp_SourceModel_MetaData, ARRAY_COUNT(NewProp_SourceModel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Surfaces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Surfaces_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceModel,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightmappedSurfaceCollection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightmappedSurfaceCollection::StaticClass,
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
	IMPLEMENT_CLASS(ULightmappedSurfaceCollection, 2307763200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmappedSurfaceCollection(Z_Construct_UClass_ULightmappedSurfaceCollection, &ULightmappedSurfaceCollection::StaticClass, TEXT("/Script/Engine"), TEXT("ULightmappedSurfaceCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmappedSurfaceCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
