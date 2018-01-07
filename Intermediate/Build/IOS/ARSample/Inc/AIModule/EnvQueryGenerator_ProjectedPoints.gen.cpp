// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
// End Cross Module References
	void UEnvQueryGenerator_ProjectedPoints::StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister()
	{
		return UEnvQueryGenerator_ProjectedPoints::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
				{ "ToolTip", "trace params" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectionData = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectionData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ProjectedPoints, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(NewProp_ProjectionData_MetaData, ARRAY_COUNT(NewProp_ProjectionData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_ProjectedPoints>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_ProjectedPoints::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_ProjectedPoints, 460006434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_ProjectedPoints(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints, &UEnvQueryGenerator_ProjectedPoints::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_ProjectedPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ProjectedPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
