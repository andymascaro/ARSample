// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_SimpleGrid() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryGenerator_SimpleGrid::StaticRegisterNativesUEnvQueryGenerator_SimpleGrid()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister()
	{
		return UEnvQueryGenerator_SimpleGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Points: Grid" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
				{ "ToolTip", "Simple grid, generates points in 2D square around context" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateAround_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GenerateAround = { UE4CodeGen_Private::EPropertyClass::Class, "GenerateAround", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, GenerateAround), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GenerateAround_MetaData, ARRAY_COUNT(NewProp_GenerateAround_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
				{ "ToolTip", "generation density" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpaceBetween = { UE4CodeGen_Private::EPropertyClass::Struct, "SpaceBetween", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_SpaceBetween_MetaData, ARRAY_COUNT(NewProp_SpaceBetween_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
				{ "Category", "Generator" },
				{ "DisplayName", "GridHalfSize" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
				{ "ToolTip", "half of square's extent, like a radius" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize = { UE4CodeGen_Private::EPropertyClass::Struct, "GridSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, GridSize), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_GridSize_MetaData, ARRAY_COUNT(NewProp_GridSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GenerateAround,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpaceBetween,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_SimpleGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_SimpleGrid::StaticClass,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_SimpleGrid, 1086411494);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_SimpleGrid(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid, &UEnvQueryGenerator_SimpleGrid::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_SimpleGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_SimpleGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
