// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
// End Cross Module References
	static UEnum* EEQSNormalizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEQSNormalizationType, Z_Construct_UPackage__Script_AIModule(), TEXT("EEQSNormalizationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEQSNormalizationType(EEQSNormalizationType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEQSNormalizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEQSNormalizationType_CRC() { return 1353040872U; }
	UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEQSNormalizationType"), 0, Get_Z_Construct_UEnum_AIModule_EEQSNormalizationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEQSNormalizationType::Absolute", (int64)EEQSNormalizationType::Absolute },
				{ "EEQSNormalizationType::RelativeToScores", (int64)EEQSNormalizationType::RelativeToScores },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Use 0 as the base of normalization range." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "RelativeToScores.ToolTip", "Use lowest item score as the base of normalization range." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEQSNormalizationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEQSNormalizationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryTest::StaticRegisterNativesUEnvQueryTest()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister()
	{
		return UEnvQueryTest::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/EnvQueryTest.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkOnFloatValues_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "When set, test operates on float values (e.g. distance, with AtLeast, UpTo conditions),\notherwise it will accept bool values (e.g. visibility, with Equals condition)" },
			};
#endif
			auto NewProp_bWorkOnFloatValues_SetBit = [](void* Obj){ ((UEnvQueryTest*)Obj)->bWorkOnFloatValues = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkOnFloatValues = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorkOnFloatValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryTest), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWorkOnFloatValues_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWorkOnFloatValues_MetaData, ARRAY_COUNT(NewProp_bWorkOnFloatValues_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefineReferenceValue_MetaData[] = {
				{ "Category", "Score" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "When set to true enables usage of ReferenceValue. It's false by default" },
			};
#endif
			auto NewProp_bDefineReferenceValue_SetBit = [](void* Obj){ ((UEnvQueryTest*)Obj)->bDefineReferenceValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefineReferenceValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefineReferenceValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryTest), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefineReferenceValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefineReferenceValue_MetaData, ARRAY_COUNT(NewProp_bDefineReferenceValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceValue_MetaData[] = {
				{ "Category", "Score" },
				{ "EditCondition", "bDefineReferenceValue" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "When specified gets used to normalize test's results in such a way that the closer a value is to ReferenceValue\n    the higher normalized result it will produce. Value farthest from ReferenceValue will be normalized\n    to 0, and all the other values in between will get normalized linearly with the distance to ReferenceValue." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferenceValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ReferenceValue), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ReferenceValue_MetaData, ARRAY_COUNT(NewProp_ReferenceValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoringFactor_MetaData[] = {
				{ "Category", "Score" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "The weight (factor) by which to multiply the normalized score after the scoring equation is applied." },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoringFactor = { UE4CodeGen_Private::EPropertyClass::Struct, "ScoringFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoringFactor), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ScoringFactor_MetaData, ARRAY_COUNT(NewProp_ScoringFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMax_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Maximum value to use to normalize the raw test value before applying scoring formula." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreClampMax = { UE4CodeGen_Private::EPropertyClass::Struct, "ScoreClampMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ScoreClampMax_MetaData, ARRAY_COUNT(NewProp_ScoreClampMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMin_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Minimum value to use to normalize the raw test value before applying scoring formula." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreClampMin = { UE4CodeGen_Private::EPropertyClass::Struct, "ScoreClampMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ScoreClampMin_MetaData, ARRAY_COUNT(NewProp_ScoreClampMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizationType_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Specifies how to determine value span used to normalize scores" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NormalizationType = { UE4CodeGen_Private::EPropertyClass::Enum, "NormalizationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, NormalizationType), Z_Construct_UEnum_AIModule_EEQSNormalizationType, METADATA_PARAMS(NewProp_NormalizationType_MetaData, ARRAY_COUNT(NewProp_NormalizationType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalizationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxType_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "How should the upper bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the highest value found (tested), the upper threshold for filtering, or a separate specified normalization maximum?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMaxType = { UE4CodeGen_Private::EPropertyClass::Byte, "ClampMaxType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ClampMaxType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(NewProp_ClampMaxType_MetaData, ARRAY_COUNT(NewProp_ClampMaxType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMinType_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "How should the lower bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the lowest value found (tested), the lower threshold for filtering, or a separate specified normalization minimum?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMinType = { UE4CodeGen_Private::EPropertyClass::Byte, "ClampMinType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ClampMinType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(NewProp_ClampMinType_MetaData, ARRAY_COUNT(NewProp_ClampMinType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoringEquation_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "The shape of the curve equation to apply to the normalized score before multiplying by factor." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScoringEquation = { UE4CodeGen_Private::EPropertyClass::Byte, "ScoringEquation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoringEquation), Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, METADATA_PARAMS(NewProp_ScoringEquation_MetaData, ARRAY_COUNT(NewProp_ScoringEquation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValueMax_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatValueMax = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatValueMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, FloatValueMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_FloatValueMax_MetaData, ARRAY_COUNT(NewProp_FloatValueMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValueMin_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatValueMin = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatValueMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, FloatValueMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_FloatValueMin_MetaData, ARRAY_COUNT(NewProp_FloatValueMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Desired boolean value of the test for scoring to occur or filtering test to pass." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Struct, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, BoolValue), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_BoolValue_MetaData, ARRAY_COUNT(NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType = { UE4CodeGen_Private::EPropertyClass::Byte, "FilterType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, FilterType), Z_Construct_UEnum_AIModule_EEnvTestFilterType, METADATA_PARAMS(NewProp_FilterType_MetaData, ARRAY_COUNT(NewProp_FilterType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleContextScoreOp_MetaData[] = {
				{ "Category", "Score" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Determines scoring operator when context returns multiple items" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultipleContextScoreOp = { UE4CodeGen_Private::EPropertyClass::Byte, "MultipleContextScoreOp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, MultipleContextScoreOp), Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, METADATA_PARAMS(NewProp_MultipleContextScoreOp_MetaData, ARRAY_COUNT(NewProp_MultipleContextScoreOp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleContextFilterOp_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Determines filtering operator when context returns multiple items" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultipleContextFilterOp = { UE4CodeGen_Private::EPropertyClass::Byte, "MultipleContextFilterOp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, MultipleContextFilterOp), Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, METADATA_PARAMS(NewProp_MultipleContextFilterOp_MetaData, ARRAY_COUNT(NewProp_MultipleContextFilterOp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestComment_MetaData[] = {
				{ "Category", "Test" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\nespecially when there are multiple tests of the same type." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestComment = { UE4CodeGen_Private::EPropertyClass::Str, "TestComment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestComment), METADATA_PARAMS(NewProp_TestComment_MetaData, ARRAY_COUNT(NewProp_TestComment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPurpose_MetaData[] = {
				{ "Category", "Test" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "The purpose of this test.  Should it be used for filtering possible results, scoring them, or both?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestPurpose = { UE4CodeGen_Private::EPropertyClass::Byte, "TestPurpose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestPurpose), Z_Construct_UEnum_AIModule_EEnvTestPurpose, METADATA_PARAMS(NewProp_TestPurpose_MetaData, ARRAY_COUNT(NewProp_TestPurpose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestOrder_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "ToolTip", "Number of test as defined in data asset" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestOrder = { UE4CodeGen_Private::EPropertyClass::Int, "TestOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestOrder), METADATA_PARAMS(NewProp_TestOrder_MetaData, ARRAY_COUNT(NewProp_TestOrder_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWorkOnFloatValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefineReferenceValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoringFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoreClampMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoreClampMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalizationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalizationType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampMaxType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampMinType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoringEquation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValueMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValueMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MultipleContextScoreOp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MultipleContextFilterOp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestComment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestPurpose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestOrder,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
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
	IMPLEMENT_CLASS(UEnvQueryTest, 2130945172);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest(Z_Construct_UClass_UEnvQueryTest, &UEnvQueryTest::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
