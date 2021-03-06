// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvDirection();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIParamType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EEnvQueryTestClamping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTestClamping"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryTestClamping(EEnvQueryTestClamping_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryTestClamping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_CRC() { return 1149066424U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryTestClamping"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryTestClamping::None", (int64)EEnvQueryTestClamping::None },
				{ "EEnvQueryTestClamping::SpecifiedValue", (int64)EEnvQueryTestClamping::SpecifiedValue },
				{ "EEnvQueryTestClamping::FilterThreshold", (int64)EEnvQueryTestClamping::FilterThreshold },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FilterThreshold.ToolTip", "Clamp to test's filter threshold." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "SpecifiedValue.ToolTip", "Clamp to value specified in test." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryTestClamping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvQueryTestClamping::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvDirection, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvDirection(EEnvDirection_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvDirection_CRC() { return 3019010792U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvDirection"), 0, Get_Z_Construct_UEnum_AIModule_EEnvDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvDirection::TwoPoints", (int64)EEnvDirection::TwoPoints },
				{ "EEnvDirection::Rotation", (int64)EEnvDirection::Rotation },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "Rotation.ToolTip", "Context's rotation will be used as a direction." },
				{ "TwoPoints.DisplayName", "Two Points" },
				{ "TwoPoints.ToolTip", "Direction from location of one context to another." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvDirection::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvOverlapShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvOverlapShape"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvOverlapShape(EEnvOverlapShape_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvOverlapShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvOverlapShape_CRC() { return 1338839645U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvOverlapShape"), 0, Get_Z_Construct_UEnum_AIModule_EEnvOverlapShape_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvOverlapShape::Box", (int64)EEnvOverlapShape::Box },
				{ "EEnvOverlapShape::Sphere", (int64)EEnvOverlapShape::Sphere },
				{ "EEnvOverlapShape::Capsule", (int64)EEnvOverlapShape::Capsule },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvOverlapShape",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvOverlapShape::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTraceShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTraceShape, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTraceShape"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTraceShape(EEnvTraceShape_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTraceShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTraceShape_CRC() { return 2929254647U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTraceShape"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTraceShape_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTraceShape::Line", (int64)EEnvTraceShape::Line },
				{ "EEnvTraceShape::Box", (int64)EEnvTraceShape::Box },
				{ "EEnvTraceShape::Sphere", (int64)EEnvTraceShape::Sphere },
				{ "EEnvTraceShape::Capsule", (int64)EEnvTraceShape::Capsule },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTraceShape",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTraceShape::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvQueryTrace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTrace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryTrace(EEnvQueryTrace_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryTrace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryTrace_CRC() { return 3523684880U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryTrace"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryTrace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryTrace::None", (int64)EEnvQueryTrace::None },
				{ "EEnvQueryTrace::Navigation", (int64)EEnvQueryTrace::Navigation },
				{ "EEnvQueryTrace::Geometry", (int64)EEnvQueryTrace::Geometry },
				{ "EEnvQueryTrace::NavigationOverLedges", (int64)EEnvQueryTrace::NavigationOverLedges },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryTrace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvQueryTrace::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAIParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIParamType, Z_Construct_UPackage__Script_AIModule(), TEXT("EAIParamType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIParamType(EAIParamType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAIParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAIParamType_CRC() { return 3932319156U; }
	UEnum* Z_Construct_UEnum_AIModule_EAIParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIParamType"), 0, Get_Z_Construct_UEnum_AIModule_EAIParamType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIParamType::Float", (int64)EAIParamType::Float },
				{ "EAIParamType::Int", (int64)EAIParamType::Int },
				{ "EAIParamType::Bool", (int64)EAIParamType::Bool },
				{ "EAIParamType::MAX", (int64)EAIParamType::MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAIParamType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAIParamType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvQueryParam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryParam, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryParam"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryParam(EEnvQueryParam_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryParam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryParam_CRC() { return 2476427649U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryParam"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryParam_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryParam::Float", (int64)EEnvQueryParam::Float },
				{ "EEnvQueryParam::Int", (int64)EEnvQueryParam::Int },
				{ "EEnvQueryParam::Bool", (int64)EEnvQueryParam::Bool },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvQueryParam::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvQueryRunMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryRunMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryRunMode(EEnvQueryRunMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryRunMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryRunMode_CRC() { return 1056345520U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryRunMode"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryRunMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryRunMode::SingleResult", (int64)EEnvQueryRunMode::SingleResult },
				{ "EEnvQueryRunMode::RandomBest5Pct", (int64)EEnvQueryRunMode::RandomBest5Pct },
				{ "EEnvQueryRunMode::RandomBest25Pct", (int64)EEnvQueryRunMode::RandomBest25Pct },
				{ "EEnvQueryRunMode::AllMatching", (int64)EEnvQueryRunMode::AllMatching },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllMatching.Tooltip", "Get all items that match conditions" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "RandomBest25Pct.DisplayName", "Single Random Item from Best 25%" },
				{ "RandomBest25Pct.Tooltip", "Pick random item with score 75% .. 100% of max" },
				{ "RandomBest5Pct.DisplayName", "Single Random Item from Best 5%" },
				{ "RandomBest5Pct.Tooltip", "Pick random item with score 95% .. 100% of max" },
				{ "SingleResult.DisplayName", "Single Best Item" },
				{ "SingleResult.Tooltip", "Pick first item with the best score" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryRunMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvQueryRunMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvQueryStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryStatus, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryStatus(EEnvQueryStatus_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryStatus_CRC() { return 2616564995U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryStatus"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryStatus::Processing", (int64)EEnvQueryStatus::Processing },
				{ "EEnvQueryStatus::Success", (int64)EEnvQueryStatus::Success },
				{ "EEnvQueryStatus::Failed", (int64)EEnvQueryStatus::Failed },
				{ "EEnvQueryStatus::Aborted", (int64)EEnvQueryStatus::Aborted },
				{ "EEnvQueryStatus::OwnerLost", (int64)EEnvQueryStatus::OwnerLost },
				{ "EEnvQueryStatus::MissingParam", (int64)EEnvQueryStatus::MissingParam },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvQueryStatus::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestScoreOperator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreOperator"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestScoreOperator(EEnvTestScoreOperator_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestScoreOperator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_CRC() { return 4185425168U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestScoreOperator"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestScoreOperator::AverageScore", (int64)EEnvTestScoreOperator::AverageScore },
				{ "EEnvTestScoreOperator::MinScore", (int64)EEnvTestScoreOperator::MinScore },
				{ "EEnvTestScoreOperator::MaxScore", (int64)EEnvTestScoreOperator::MaxScore },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AverageScore.Tooltip", "Use average score from all contexts" },
				{ "MaxScore.Tooltip", "Use maximum score from all contexts" },
				{ "MinScore.Tooltip", "Use minimum score from all contexts" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestScoreOperator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestScoreOperator::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestFilterOperator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterOperator"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestFilterOperator(EEnvTestFilterOperator_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestFilterOperator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_CRC() { return 3609384416U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestFilterOperator"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestFilterOperator::AllPass", (int64)EEnvTestFilterOperator::AllPass },
				{ "EEnvTestFilterOperator::AnyPass", (int64)EEnvTestFilterOperator::AnyPass },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllPass.Tooltip", "All contexts must pass condition" },
				{ "AnyPass.Tooltip", "At least one context must pass condition" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestFilterOperator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestFilterOperator::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestCost_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestCost, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestCost"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestCost(EEnvTestCost_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestCost"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestCost_CRC() { return 1952944086U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestCost"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestCost_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestCost::Low", (int64)EEnvTestCost::Low },
				{ "EEnvTestCost::Medium", (int64)EEnvTestCost::Medium },
				{ "EEnvTestCost::High", (int64)EEnvTestCost::High },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.ToolTip", "Really expensive calls (e.g. visibility traces, pathfinding)." },
				{ "Low.ToolTip", "Reading data, math operations (e.g. distance)." },
				{ "Medium.ToolTip", "Processing data from multiple sources (e.g. fire tickets)." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestCost",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestCost::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestWeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestWeight, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestWeight"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestWeight(EEnvTestWeight_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestWeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestWeight_CRC() { return 692785319U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestWeight"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestWeight_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestWeight::None", (int64)EEnvTestWeight::None },
				{ "EEnvTestWeight::Square", (int64)EEnvTestWeight::Square },
				{ "EEnvTestWeight::Inverse", (int64)EEnvTestWeight::Inverse },
				{ "EEnvTestWeight::Unused", (int64)EEnvTestWeight::Unused },
				{ "EEnvTestWeight::Constant", (int64)EEnvTestWeight::Constant },
				{ "EEnvTestWeight::Skip", (int64)EEnvTestWeight::Skip },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "Skip.DisplayName", "Do not weight" },
				{ "Unused.Hidden", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestWeight",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestWeight::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestScoreEquation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreEquation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestScoreEquation(EEnvTestScoreEquation_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestScoreEquation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_CRC() { return 2371979417U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestScoreEquation"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestScoreEquation::Linear", (int64)EEnvTestScoreEquation::Linear },
				{ "EEnvTestScoreEquation::Square", (int64)EEnvTestScoreEquation::Square },
				{ "EEnvTestScoreEquation::InverseLinear", (int64)EEnvTestScoreEquation::InverseLinear },
				{ "EEnvTestScoreEquation::SquareRoot", (int64)EEnvTestScoreEquation::SquareRoot },
				{ "EEnvTestScoreEquation::Constant", (int64)EEnvTestScoreEquation::Constant },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestScoreEquation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestScoreEquation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterType, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestFilterType(EEnvTestFilterType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestFilterType_CRC() { return 476605301U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestFilterType"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestFilterType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestFilterType::Minimum", (int64)EEnvTestFilterType::Minimum },
				{ "EEnvTestFilterType::Maximum", (int64)EEnvTestFilterType::Maximum },
				{ "EEnvTestFilterType::Range", (int64)EEnvTestFilterType::Range },
				{ "EEnvTestFilterType::Match", (int64)EEnvTestFilterType::Match },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Match.ToolTip", "For Boolean tests." },
				{ "Maximum.ToolTip", "For numeric tests." },
				{ "Minimum.ToolTip", "For numeric tests." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "Range.ToolTip", "For numeric tests." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestFilterType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestFilterType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEnvTestPurpose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPurpose, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPurpose"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestPurpose(EEnvTestPurpose_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestPurpose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestPurpose_CRC() { return 1780160094U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestPurpose"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestPurpose_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestPurpose::Filter", (int64)EEnvTestPurpose::Filter },
				{ "EEnvTestPurpose::Score", (int64)EEnvTestPurpose::Score },
				{ "EEnvTestPurpose::FilterAndScore", (int64)EEnvTestPurpose::FilterAndScore },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Filter.DisplayName", "Filter Only" },
				{ "FilterAndScore.DisplayName", "Filter and Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "Score.DisplayName", "Score Only" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestPurpose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestPurpose::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEQSParametrizedQueryExecutionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, Z_Construct_UPackage__Script_AIModule(), TEXT("EQSParametrizedQueryExecutionRequest"), sizeof(FEQSParametrizedQueryExecutionRequest), Get_Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEQSParametrizedQueryExecutionRequest(FEQSParametrizedQueryExecutionRequest::StaticStruct, TEXT("/Script/AIModule"), TEXT("EQSParametrizedQueryExecutionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEQSParametrizedQueryExecutionRequest
{
	FScriptStruct_AIModule_StaticRegisterNativesFEQSParametrizedQueryExecutionRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EQSParametrizedQueryExecutionRequest")),new UScriptStruct::TCppStructOps<FEQSParametrizedQueryExecutionRequest>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEQSParametrizedQueryExecutionRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EQSParametrizedQueryExecutionRequest"), sizeof(FEQSParametrizedQueryExecutionRequest), Get_Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEQSParametrizedQueryExecutionRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBBKeyForQueryTemplate_MetaData[] = {
				{ "Category", "Node" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewProp_bUseBBKeyForQueryTemplate_SetBit = [](void* Obj){ ((FEQSParametrizedQueryExecutionRequest*)Obj)->bUseBBKeyForQueryTemplate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBBKeyForQueryTemplate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBBKeyForQueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEQSParametrizedQueryExecutionRequest), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBBKeyForQueryTemplate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBBKeyForQueryTemplate_MetaData, ARRAY_COUNT(NewProp_bUseBBKeyForQueryTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "determines which item will be stored (All = only first matching)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RunMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(NewProp_RunMode_MetaData, ARRAY_COUNT(NewProp_RunMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "EditCondition", "bUseBBKeyForQueryTemplate" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "blackboard key storing an EQS query template" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey = { UE4CodeGen_Private::EPropertyClass::Struct, "EQSQueryBlackboardKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_EQSQueryBlackboardKey_MetaData, ARRAY_COUNT(NewProp_EQSQueryBlackboardKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryConfig = { UE4CodeGen_Private::EPropertyClass::Array, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryConfig), METADATA_PARAMS(NewProp_QueryConfig_MetaData, ARRAY_COUNT(NewProp_QueryConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
				{ "Category", "Node" },
				{ "EditCondition", "!bUseBBKeyForQueryTemplate" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "QueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(NewProp_QueryTemplate_MetaData, ARRAY_COUNT(NewProp_QueryTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBBKeyForQueryTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQSQueryBlackboardKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTemplate,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EQSParametrizedQueryExecutionRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEQSParametrizedQueryExecutionRequest),
				alignof(FEQSParametrizedQueryExecutionRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_CRC() { return 3852766973U; }
class UScriptStruct* FAIDynamicParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDynamicParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDynamicParam, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDynamicParam"), sizeof(FAIDynamicParam), Get_Z_Construct_UScriptStruct_FAIDynamicParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDynamicParam(FAIDynamicParam::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDynamicParam"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDynamicParam
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDynamicParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDynamicParam")),new UScriptStruct::TCppStructOps<FAIDynamicParam>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDynamicParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDynamicParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDynamicParam"), sizeof(FAIDynamicParam), Get_Z_Construct_UScriptStruct_FAIDynamicParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDynamicParam>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBKey_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBKey = { UE4CodeGen_Private::EPropertyClass::Struct, "BBKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDynamicParam, BBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BBKey_MetaData, ARRAY_COUNT(NewProp_BBKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDynamicParam, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParamType = { UE4CodeGen_Private::EPropertyClass::Enum, "ParamType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAIDynamicParam, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(NewProp_ParamType_MetaData, ARRAY_COUNT(NewProp_ParamType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAIDynamicParam, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BBKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDynamicParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAIDynamicParam),
				alignof(FAIDynamicParam),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDynamicParam_CRC() { return 198669064U; }
class UScriptStruct* FEnvQueryResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvQueryResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryResult"), sizeof(FEnvQueryResult), Get_Z_Construct_UScriptStruct_FEnvQueryResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvQueryResult(FEnvQueryResult::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvQueryResult"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryResult
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvQueryResult")),new UScriptStruct::TCppStructOps<FEnvQueryResult>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvQueryResult;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvQueryResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvQueryResult"), sizeof(FEnvQueryResult), Get_Z_Construct_UScriptStruct_FEnvQueryResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "instance ID" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryID = { UE4CodeGen_Private::EPropertyClass::Int, "QueryID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FEnvQueryResult, QueryID), METADATA_PARAMS(NewProp_QueryID_MetaData, ARRAY_COUNT(NewProp_QueryID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "index of query option, that generated items" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FEnvQueryResult, OptionIndex), METADATA_PARAMS(NewProp_OptionIndex_MetaData, ARRAY_COUNT(NewProp_OptionIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "type of generated items" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000014, 1, nullptr, STRUCT_OFFSET(FEnvQueryResult, ItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ItemType_MetaData, ARRAY_COUNT(NewProp_ItemType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvQueryResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvQueryResult),
				alignof(FEnvQueryResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvQueryResult_CRC() { return 2067291556U; }
class UScriptStruct* FEnvOverlapData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvOverlapData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvOverlapData, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvOverlapData"), sizeof(FEnvOverlapData), Get_Z_Construct_UScriptStruct_FEnvOverlapData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvOverlapData(FEnvOverlapData::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvOverlapData"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvOverlapData
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvOverlapData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvOverlapData")),new UScriptStruct::TCppStructOps<FEnvOverlapData>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvOverlapData;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvOverlapData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvOverlapData"), sizeof(FEnvOverlapData), Get_Z_Construct_UScriptStruct_FEnvOverlapData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvOverlapData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlapComplex_MetaData[] = {
				{ "Category", "Overlap" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, overlap will run on complex collisions" },
			};
#endif
			auto NewProp_bOverlapComplex_SetBit = [](void* Obj){ ((FEnvOverlapData*)Obj)->bOverlapComplex = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlapComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverlapComplex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvOverlapData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverlapComplex_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverlapComplex_MetaData, ARRAY_COUNT(NewProp_bOverlapComplex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[] = {
				{ "Category", "Overlap" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, overlap will look only for blocking hits" },
			};
#endif
			auto NewProp_bOnlyBlockingHits_SetBit = [](void* Obj){ ((FEnvOverlapData*)Obj)->bOnlyBlockingHits = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyBlockingHits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvOverlapData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyBlockingHits_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyBlockingHits_MetaData, ARRAY_COUNT(NewProp_bOnlyBlockingHits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapShape_MetaData[] = {
				{ "Category", "Overlap" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape used for geometry overlap" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapShape = { UE4CodeGen_Private::EPropertyClass::Byte, "OverlapShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, OverlapShape), Z_Construct_UEnum_AIModule_EEnvOverlapShape, METADATA_PARAMS(NewProp_OverlapShape_MetaData, ARRAY_COUNT(NewProp_OverlapShape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[] = {
				{ "Category", "Overlap" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "geometry trace channel used for overlap" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OverlapChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OverlapChannel_MetaData, ARRAY_COUNT(NewProp_OverlapChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeOffset_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "Tooltip", "Offset from the item location at which to test the overlap.  For example, you may need to offset vertically to avoid overlaps with flat ground." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, ShapeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ShapeOffset_MetaData, ARRAY_COUNT(NewProp_ShapeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for overlap" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentZ = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentZ), METADATA_PARAMS(NewProp_ExtentZ_MetaData, ARRAY_COUNT(NewProp_ExtentZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for overlap" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentY = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentY), METADATA_PARAMS(NewProp_ExtentY_MetaData, ARRAY_COUNT(NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for overlap" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentX = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentX), METADATA_PARAMS(NewProp_ExtentX_MetaData, ARRAY_COUNT(NewProp_ExtentX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverlapComplex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyBlockingHits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentX,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvOverlapData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvOverlapData),
				alignof(FEnvOverlapData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvOverlapData_CRC() { return 3898498406U; }
class UScriptStruct* FEnvTraceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvTraceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvTraceData, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvTraceData"), sizeof(FEnvTraceData), Get_Z_Construct_UScriptStruct_FEnvTraceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvTraceData(FEnvTraceData::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvTraceData"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvTraceData
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvTraceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvTraceData")),new UScriptStruct::TCppStructOps<FEnvTraceData>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvTraceData;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvTraceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvTraceData"), sizeof(FEnvTraceData), Get_Z_Construct_UScriptStruct_FEnvTraceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvTraceData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanProjectDown_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, editor show height up/down properties for projection" },
			};
#endif
			auto NewProp_bCanProjectDown_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bCanProjectDown = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanProjectDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanProjectDown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanProjectDown_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanProjectDown_MetaData, ARRAY_COUNT(NewProp_bCanProjectDown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDisableTrace_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, editor will allow" },
			};
#endif
			auto NewProp_bCanDisableTrace_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bCanDisableTrace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDisableTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanDisableTrace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanDisableTrace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanDisableTrace_MetaData, ARRAY_COUNT(NewProp_bCanDisableTrace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnGeometry_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, editor will allow picking geometry trace" },
			};
#endif
			auto NewProp_bCanTraceOnGeometry_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bCanTraceOnGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanTraceOnGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanTraceOnGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanTraceOnGeometry_MetaData, ARRAY_COUNT(NewProp_bCanTraceOnGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnNavMesh_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, editor will allow picking navmesh trace" },
			};
#endif
			auto NewProp_bCanTraceOnNavMesh_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bCanTraceOnNavMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnNavMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanTraceOnNavMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanTraceOnNavMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanTraceOnNavMesh_MetaData, ARRAY_COUNT(NewProp_bCanTraceOnNavMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, trace will look only for blocking hits" },
			};
#endif
			auto NewProp_bOnlyBlockingHits_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bOnlyBlockingHits = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyBlockingHits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyBlockingHits_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyBlockingHits_MetaData, ARRAY_COUNT(NewProp_bOnlyBlockingHits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "if set, trace will run on complex collisions" },
			};
#endif
			auto NewProp_bTraceComplex_SetBit = [](void* Obj){ ((FEnvTraceData*)Obj)->bTraceComplex = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEnvTraceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceComplex_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTraceComplex_MetaData, ARRAY_COUNT(NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceMode_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape used for geometry tracing" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceMode), Z_Construct_UEnum_AIModule_EEnvQueryTrace, METADATA_PARAMS(NewProp_TraceMode_MetaData, ARRAY_COUNT(NewProp_TraceMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape used for geometry tracing" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceShape = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceShape), Z_Construct_UEnum_AIModule_EEnvTraceShape, METADATA_PARAMS(NewProp_TraceShape_MetaData, ARRAY_COUNT(NewProp_TraceShape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedChannel_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "geometry trace channel for serialization purposes" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializedChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "SerializedChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, SerializedChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_SerializedChannel_MetaData, ARRAY_COUNT(NewProp_SerializedChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "geometry trace channel" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(NewProp_TraceChannel_MetaData, ARRAY_COUNT(NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProjectionVerticalOffset_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "this value will be added to resulting location's Z axis. Can be useful when\n    projecting points to navigation since navmesh is just an approximation of level\n    geometry and items may end up being under collide-able geometry which would\n    for example falsify visibility tests." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProjectionVerticalOffset = { UE4CodeGen_Private::EPropertyClass::Float, "PostProjectionVerticalOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, PostProjectionVerticalOffset), METADATA_PARAMS(NewProp_PostProjectionVerticalOffset_MetaData, ARRAY_COUNT(NewProp_PostProjectionVerticalOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for trace" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentZ = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentZ), METADATA_PARAMS(NewProp_ExtentZ_MetaData, ARRAY_COUNT(NewProp_ExtentZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for trace" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentY = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentY), METADATA_PARAMS(NewProp_ExtentY_MetaData, ARRAY_COUNT(NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "shape parameter for trace" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtentX = { UE4CodeGen_Private::EPropertyClass::Float, "ExtentX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentX), METADATA_PARAMS(NewProp_ExtentX_MetaData, ARRAY_COUNT(NewProp_ExtentX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectUp_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "search height: above point" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectUp = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, ProjectUp), METADATA_PARAMS(NewProp_ProjectUp_MetaData, ARRAY_COUNT(NewProp_ProjectUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectDown_MetaData[] = {
				{ "Category", "Trace" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "search height: below point" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectDown = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectDown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, ProjectDown), METADATA_PARAMS(NewProp_ProjectDown_MetaData, ARRAY_COUNT(NewProp_ProjectDown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "navigation filter for tracing" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationFilter = { UE4CodeGen_Private::EPropertyClass::Class, "NavigationFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, NavigationFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NavigationFilter_MetaData, ARRAY_COUNT(NewProp_NavigationFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionNum_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "version number for updates" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionNum = { UE4CodeGen_Private::EPropertyClass::Int, "VersionNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEnvTraceData, VersionNum), METADATA_PARAMS(NewProp_VersionNum_MetaData, ARRAY_COUNT(NewProp_VersionNum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanProjectDown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanDisableTrace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanTraceOnGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanTraceOnNavMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyBlockingHits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceComplex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SerializedChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProjectionVerticalOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtentX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectDown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VersionNum,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvTraceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvTraceData),
				alignof(FEnvTraceData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvTraceData_CRC() { return 2048769291U; }
class UScriptStruct* FEnvDirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvDirection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvDirection, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvDirection"), sizeof(FEnvDirection), Get_Z_Construct_UScriptStruct_FEnvDirection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvDirection(FEnvDirection::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvDirection"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvDirection
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvDirection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvDirection")),new UScriptStruct::TCppStructOps<FEnvDirection>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvDirection;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvDirection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvDirection"), sizeof(FEnvDirection), Get_Z_Construct_UScriptStruct_FEnvDirection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvDirection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirMode_MetaData[] = {
				{ "Category", "Direction" },
				{ "DisplayName", "Mode" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "defines direction of second line used by test" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DirMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FEnvDirection, DirMode), Z_Construct_UEnum_AIModule_EEnvDirection, METADATA_PARAMS(NewProp_DirMode_MetaData, ARRAY_COUNT(NewProp_DirMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Direction" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "rotation: direction context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Class, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FEnvDirection, Rotation), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTo_MetaData[] = {
				{ "Category", "Direction" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "line: finish context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_LineTo = { UE4CodeGen_Private::EPropertyClass::Class, "LineTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FEnvDirection, LineTo), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_LineTo_MetaData, ARRAY_COUNT(NewProp_LineTo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineFrom_MetaData[] = {
				{ "Category", "Direction" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
				{ "ToolTip", "line: start context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_LineFrom = { UE4CodeGen_Private::EPropertyClass::Class, "LineFrom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FEnvDirection, LineFrom), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_LineFrom_MetaData, ARRAY_COUNT(NewProp_LineFrom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineFrom,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvDirection),
				alignof(FEnvDirection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvDirection_CRC() { return 605075967U; }
class UScriptStruct* FEnvNamedValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvNamedValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvNamedValue, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvNamedValue"), sizeof(FEnvNamedValue), Get_Z_Construct_UScriptStruct_FEnvNamedValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvNamedValue(FEnvNamedValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvNamedValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvNamedValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvNamedValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvNamedValue")),new UScriptStruct::TCppStructOps<FEnvNamedValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvNamedValue;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvNamedValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvNamedValue"), sizeof(FEnvNamedValue), Get_Z_Construct_UScriptStruct_FEnvNamedValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvNamedValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Param" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnvNamedValue, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
				{ "Category", "Param" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParamType = { UE4CodeGen_Private::EPropertyClass::Enum, "ParamType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnvNamedValue, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(NewProp_ParamType_MetaData, ARRAY_COUNT(NewProp_ParamType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "Param" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnvNamedValue, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvNamedValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvNamedValue),
				alignof(FEnvNamedValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvNamedValue_CRC() { return 2082482520U; }
	void UEnvQueryTypes::StaticRegisterNativesUEnvQueryTypes()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister()
	{
		return UEnvQueryTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/EnvQueryTypes.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTypes::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UEnvQueryTypes, 3481422839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTypes(Z_Construct_UClass_UEnvQueryTypes, &UEnvQueryTypes::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
