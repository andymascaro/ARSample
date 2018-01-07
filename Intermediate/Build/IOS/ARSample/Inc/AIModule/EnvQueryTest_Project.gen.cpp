// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Project() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
// End Cross Module References
	void UEnvQueryTest_Project::StaticRegisterNativesUEnvQueryTest_Project()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister()
	{
		return UEnvQueryTest_Project::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Project()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
				{ "ToolTip", "Projects points on navigation or geometry, will modify value of projected items.\nWorks only on item type: point" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[] = {
				{ "Category", "Test" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
				{ "ToolTip", "trace params" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectionData = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectionData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Project, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(NewProp_ProjectionData_MetaData, ARRAY_COUNT(NewProp_ProjectionData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Project>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Project::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Project, 3130337908);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Project(Z_Construct_UClass_UEnvQueryTest_Project, &UEnvQueryTest_Project::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Project"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Project);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
