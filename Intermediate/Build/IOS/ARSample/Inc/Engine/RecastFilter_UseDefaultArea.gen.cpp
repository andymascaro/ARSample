// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavFilters/RecastFilter_UseDefaultArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastFilter_UseDefaultArea() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void URecastFilter_UseDefaultArea::StaticRegisterNativesURecastFilter_UseDefaultArea()
	{
	}
	UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister()
	{
		return URecastFilter_UseDefaultArea::StaticClass();
	}
	UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavFilters/RecastFilter_UseDefaultArea.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavFilters/RecastFilter_UseDefaultArea.h" },
				{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URecastFilter_UseDefaultArea>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URecastFilter_UseDefaultArea::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(URecastFilter_UseDefaultArea, 1327144911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecastFilter_UseDefaultArea(Z_Construct_UClass_URecastFilter_UseDefaultArea, &URecastFilter_UseDefaultArea::StaticClass, TEXT("/Script/Engine"), TEXT("URecastFilter_UseDefaultArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecastFilter_UseDefaultArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
