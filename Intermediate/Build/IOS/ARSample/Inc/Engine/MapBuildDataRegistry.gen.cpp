// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MapBuildDataRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBuildDataRegistry() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightingBuildQuality();
// End Cross Module References
	void UMapBuildDataRegistry::StaticRegisterNativesUMapBuildDataRegistry()
	{
	}
	UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister()
	{
		return UMapBuildDataRegistry::StaticClass();
	}
	UClass* Z_Construct_UClass_UMapBuildDataRegistry()
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
				{ "IncludePath", "Engine/MapBuildDataRegistry.h" },
				{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelLightingQuality_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
				{ "ToolTip", "The lighting quality the level was last built with" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LevelLightingQuality = { UE4CodeGen_Private::EPropertyClass::Byte, "LevelLightingQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UMapBuildDataRegistry, LevelLightingQuality), Z_Construct_UEnum_Engine_ELightingBuildQuality, METADATA_PARAMS(NewProp_LevelLightingQuality_MetaData, ARRAY_COUNT(NewProp_LevelLightingQuality_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelLightingQuality,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMapBuildDataRegistry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMapBuildDataRegistry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMapBuildDataRegistry, 1400263015);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapBuildDataRegistry(Z_Construct_UClass_UMapBuildDataRegistry, &UMapBuildDataRegistry::StaticClass, TEXT("/Script/Engine"), TEXT("UMapBuildDataRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapBuildDataRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
