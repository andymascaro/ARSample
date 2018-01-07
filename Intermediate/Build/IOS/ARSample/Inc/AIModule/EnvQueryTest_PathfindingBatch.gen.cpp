// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PathfindingBatch() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryTest_PathfindingBatch::StaticRegisterNativesUEnvQueryTest_PathfindingBatch()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister()
	{
		return UEnvQueryTest_PathfindingBatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest_Pathfinding,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
				{ "ToolTip", "multiplier for max distance between point and context" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "ScanRangeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010048000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ScanRangeMultiplier_MetaData, ARRAY_COUNT(NewProp_ScanRangeMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScanRangeMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_PathfindingBatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_PathfindingBatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_PathfindingBatch, 1891084098);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_PathfindingBatch(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch, &UEnvQueryTest_PathfindingBatch::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_PathfindingBatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_PathfindingBatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
