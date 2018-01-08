// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Trace() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Trace();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
// End Cross Module References
	void UEnvQueryTest_Trace::StaticRegisterNativesUEnvQueryTest_Trace()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister()
	{
		return UEnvQueryTest_Trace::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Trace()
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
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ToolTip", "context: other end of trace test" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Class, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Trace, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextHeightOffset_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ToolTip", "Z offset from querier" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextHeightOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ContextHeightOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010048000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Trace, ContextHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ContextHeightOffset_MetaData, ARRAY_COUNT(NewProp_ContextHeightOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeightOffset_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ToolTip", "Z offset from item" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemHeightOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemHeightOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010048000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Trace, ItemHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ItemHeightOffset_MetaData, ARRAY_COUNT(NewProp_ItemHeightOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFromContext_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ToolTip", "trace direction" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceFromContext = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceFromContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Trace, TraceFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_TraceFromContext_MetaData, ARRAY_COUNT(NewProp_TraceFromContext_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
				{ "ToolTip", "trace data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceData = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Trace, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(NewProp_TraceData_MetaData, ARRAY_COUNT(NewProp_TraceData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContextHeightOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemHeightOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceFromContext,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Trace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Trace::StaticClass,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Trace, 1482322748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Trace(Z_Construct_UClass_UEnvQueryTest_Trace, &UEnvQueryTest_Trace::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Trace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Trace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
