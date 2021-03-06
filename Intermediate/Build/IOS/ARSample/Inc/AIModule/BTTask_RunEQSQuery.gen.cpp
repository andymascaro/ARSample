// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunEQSQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
// End Cross Module References
	void UBTTask_RunEQSQuery::StaticRegisterNativesUBTTask_RunEQSQuery()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister()
	{
		return UBTTask_RunEQSQuery::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ToolTip", "Run Environment Query System Query task node.\nRuns the specified environment query when executed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "EQSRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(NewProp_EQSRequest_MetaData, ARRAY_COUNT(NewProp_EQSRequest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBBKey_MetaData[] = {
				{ "Category", "Node" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
			};
#endif
			auto NewProp_bUseBBKey_SetBit = [](void* Obj){ ((UBTTask_RunEQSQuery*)Obj)->bUseBBKey = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBBKey = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBBKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTTask_RunEQSQuery), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBBKey_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBBKey_MetaData, ARRAY_COUNT(NewProp_bUseBBKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "EQSQueryBlackboardKey_DEPRECATED" },
				{ "EditCondition", "bUseBBKey" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ToolTip", "blackboard key storing an EQS query template" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey = { UE4CodeGen_Private::EPropertyClass::Struct, "EQSQueryBlackboardKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_EQSQueryBlackboardKey_MetaData, ARRAY_COUNT(NewProp_EQSQueryBlackboardKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[] = {
				{ "Category", "Node" },
				{ "DisplayName", "RunMode_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ToolTip", "determines which item will be stored (All = only first matching)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RunMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(NewProp_RunMode_MetaData, ARRAY_COUNT(NewProp_RunMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[] = {
				{ "Category", "Node" },
				{ "DisplayName", "QueryConfig_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryConfig = { UE4CodeGen_Private::EPropertyClass::Array, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryConfig), METADATA_PARAMS(NewProp_QueryConfig_MetaData, ARRAY_COUNT(NewProp_QueryConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
				{ "Category", "Node" },
				{ "DisplayName", "QueryParams_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ToolTip", "optional parameters for query" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryParams = { UE4CodeGen_Private::EPropertyClass::Array, "QueryParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryParams), METADATA_PARAMS(NewProp_QueryParams_MetaData, ARRAY_COUNT(NewProp_QueryParams_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
				{ "Category", "Node" },
				{ "DisplayName", "QueryTemplate_DEPRECATED" },
				{ "EditCondition", "!bUseBBKey" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
				{ "ToolTip", "query to run" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "QueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(NewProp_QueryTemplate_MetaData, ARRAY_COUNT(NewProp_QueryTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQSRequest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBBKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQSQueryBlackboardKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryParams_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_RunEQSQuery>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_RunEQSQuery::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_RunEQSQuery, 2372297583);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RunEQSQuery(Z_Construct_UClass_UBTTask_RunEQSQuery, &UBTTask_RunEQSQuery::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RunEQSQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunEQSQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
