// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialParameterCollectionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMaterialParameterCollectionInstance::StaticRegisterNativesUMaterialParameterCollectionInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister()
	{
		return UMaterialParameterCollectionInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance()
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
				{ "HideCategories", "object" },
				{ "IncludePath", "Materials/MaterialParameterCollectionInstance.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
				{ "ToolTip", "Class that stores per-world instance parameter data for a given UMaterialParameterCollection resource.\nInstances of this class are always transient." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
				{ "ToolTip", "World that owns this instance." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMaterialParameterCollectionInstance, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
				{ "ToolTip", "Collection resource this instance is based off of." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMaterialParameterCollectionInstance, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(NewProp_Collection_MetaData, ARRAY_COUNT(NewProp_Collection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialParameterCollectionInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialParameterCollectionInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UMaterialParameterCollectionInstance, 3466296555);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollectionInstance(Z_Construct_UClass_UMaterialParameterCollectionInstance, &UMaterialParameterCollectionInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialParameterCollectionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
