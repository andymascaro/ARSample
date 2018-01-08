// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PathingGrid() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
// End Cross Module References
	void UEnvQueryGenerator_PathingGrid::StaticRegisterNativesUEnvQueryGenerator_PathingGrid()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister()
	{
		return UEnvQueryGenerator_PathingGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Points: Pathing Grid" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
				{ "ToolTip", "Navigation grid, generates points on navmesh\nwith paths to/from context no further than given limit" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
				{ "ToolTip", "multiplier for max distance between point and context" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "ScanRangeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010048000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ScanRangeMultiplier_MetaData, ARRAY_COUNT(NewProp_ScanRangeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
				{ "ToolTip", "navigation filter to use in pathfinding" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationFilter = { UE4CodeGen_Private::EPropertyClass::Class, "NavigationFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, NavigationFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NavigationFilter_MetaData, ARRAY_COUNT(NewProp_NavigationFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToItem_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
				{ "ToolTip", "pathfinding direction" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathToItem = { UE4CodeGen_Private::EPropertyClass::Struct, "PathToItem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, PathToItem), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_PathToItem_MetaData, ARRAY_COUNT(NewProp_PathToItem_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScanRangeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathToItem,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_PathingGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_PathingGrid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_PathingGrid, 2554697740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_PathingGrid(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid, &UEnvQueryGenerator_PathingGrid::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_PathingGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PathingGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
