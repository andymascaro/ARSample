// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeInfoMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfoMap() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeInfoMap::StaticRegisterNativesULandscapeInfoMap()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister()
	{
		return ULandscapeInfoMap::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeInfoMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeInfoMap.h" },
				{ "ModuleRelativePath", "Classes/LandscapeInfoMap.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeInfoMap>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeInfoMap::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeInfoMap, 2924571968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeInfoMap(Z_Construct_UClass_ULandscapeInfoMap, &ULandscapeInfoMap::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeInfoMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfoMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
