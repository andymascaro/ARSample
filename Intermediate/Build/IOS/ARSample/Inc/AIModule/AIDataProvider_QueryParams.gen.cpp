// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/DataProviders/AIDataProvider_QueryParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister()
	{
		return UAIDataProvider_QueryParams::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Provider" },
				{ "DisplayName", "Query Params" },
				{ "IncludePath", "DataProviders/AIDataProvider_QueryParams.h" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
				{ "ToolTip", "AIDataProvider_QueryParams is used with environment queries\n\nIt allows defining simple parameters for running query,\nwhich are not tied to any specific pawn, but defined\nfor every query execution." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
			};
#endif
			auto NewProp_BoolValue_SetBit = [](void* Obj){ ((UAIDataProvider_QueryParams*)Obj)->BoolValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAIDataProvider_QueryParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BoolValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_BoolValue_MetaData, ARRAY_COUNT(NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, IntValue), METADATA_PARAMS(NewProp_IntValue_MetaData, ARRAY_COUNT(NewProp_IntValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, FloatValue), METADATA_PARAMS(NewProp_FloatValue_MetaData, ARRAY_COUNT(NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "Provider" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
				{ "ToolTip", "Arbitrary name this query parameter will be exposed as to outside world (like BT nodes)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIDataProvider_QueryParams>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIDataProvider_QueryParams::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00103080u,
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
	IMPLEMENT_CLASS(UAIDataProvider_QueryParams, 1715245187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider_QueryParams(Z_Construct_UClass_UAIDataProvider_QueryParams, &UAIDataProvider_QueryParams::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider_QueryParams"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_QueryParams);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
