// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationDataChunk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataChunk() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk()
	{
	}
	UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister()
	{
		return UNavigationDataChunk::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationDataChunk()
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
				{ "IncludePath", "AI/Navigation/NavigationDataChunk.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDataName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
				{ "ToolTip", "Name of NavigationData actor that owns this chunk" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NavigationDataName = { UE4CodeGen_Private::EPropertyClass::Name, "NavigationDataName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationDataChunk, NavigationDataName), METADATA_PARAMS(NewProp_NavigationDataName_MetaData, ARRAY_COUNT(NewProp_NavigationDataName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationDataName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationDataChunk>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationDataChunk::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UNavigationDataChunk, 960235091);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationDataChunk(Z_Construct_UClass_UNavigationDataChunk, &UNavigationDataChunk::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationDataChunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataChunk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
