// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_OnCircle() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	static UEnum* EPointOnCircleSpacingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, Z_Construct_UPackage__Script_AIModule(), TEXT("EPointOnCircleSpacingMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointOnCircleSpacingMethod(EPointOnCircleSpacingMethod_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPointOnCircleSpacingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_CRC() { return 1758534291U; }
	UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointOnCircleSpacingMethod"), 0, Get_Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointOnCircleSpacingMethod::BySpaceBetween", (int64)EPointOnCircleSpacingMethod::BySpaceBetween },
				{ "EPointOnCircleSpacingMethod::ByNumberOfPoints", (int64)EPointOnCircleSpacingMethod::ByNumberOfPoints },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ByNumberOfPoints.ToolTip", "Use a fixed number of points" },
				{ "BySpaceBetween.ToolTip", "Use the SpaceBetween value to determine how far apart points should be." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointOnCircleSpacingMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointOnCircleSpacingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryGenerator_OnCircle::StaticRegisterNativesUEnvQueryGenerator_OnCircle()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister()
	{
		return UEnvQueryGenerator_OnCircle::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle()
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
				{ "DisplayName", "Points: Circle" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[] = {
				{ "Category", "Generator" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
			};
#endif
			auto NewProp_bDefineArc_SetBit = [](void* Obj){ ((UEnvQueryGenerator_OnCircle*)Obj)->bDefineArc = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefineArc = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefineArc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_OnCircle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefineArc_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefineArc_MetaData, ARRAY_COUNT(NewProp_bDefineArc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "horizontal trace for nearest obstacle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceData = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(NewProp_TraceData_MetaData, ARRAY_COUNT(NewProp_TraceData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleCenterZOffset_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "context offset" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleCenterZOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CircleCenterZOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenterZOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_CircleCenterZOffset_MetaData, ARRAY_COUNT(NewProp_CircleCenterZOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "ignore tracing into context actors when generating the circle" },
			};
#endif
			auto NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit = [](void* Obj){ ((UEnvQueryGenerator_OnCircle*)Obj)->bIgnoreAnyContextActorsWhenGeneratingCircle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreAnyContextActorsWhenGeneratingCircle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryGenerator_OnCircle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData, ARRAY_COUNT(NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CircleCenter = { UE4CodeGen_Private::EPropertyClass::Class, "CircleCenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenter), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CircleCenter_MetaData, ARRAY_COUNT(NewProp_CircleCenter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleRadians_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleRadians = { UE4CodeGen_Private::EPropertyClass::Float, "AngleRadians", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, AngleRadians), METADATA_PARAMS(NewProp_AngleRadians_MetaData, ARRAY_COUNT(NewProp_AngleRadians_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "If you generate items on a piece of circle you define angle of Arc cut here" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ArcAngle_MetaData, ARRAY_COUNT(NewProp_ArcAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[] = {
				{ "Category", "Generator" },
				{ "EditCondition", "bDefineArc" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "If you generate items on a piece of circle you define direction of Arc cut here" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(NewProp_ArcDirection_MetaData, ARRAY_COUNT(NewProp_ArcDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOnCircleSpacingMethod_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "how we are choosing where the points are in the circle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PointOnCircleSpacingMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "PointOnCircleSpacingMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod), Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, METADATA_PARAMS(NewProp_PointOnCircleSpacingMethod_MetaData, ARRAY_COUNT(NewProp_PointOnCircleSpacingMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PointOnCircleSpacingMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "this many items will be generated on a circle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumberOfPoints = { UE4CodeGen_Private::EPropertyClass::Struct, "NumberOfPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, NumberOfPoints), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(NewProp_NumberOfPoints_MetaData, ARRAY_COUNT(NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "items will be generated on a circle this much apart" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpaceBetween = { UE4CodeGen_Private::EPropertyClass::Struct, "SpaceBetween", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_SpaceBetween_MetaData, ARRAY_COUNT(NewProp_SpaceBetween_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
				{ "ToolTip", "max distance of path between point and context" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "CircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_CircleRadius_MetaData, ARRAY_COUNT(NewProp_CircleRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefineArc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CircleCenterZOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CircleCenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngleRadians,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArcAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArcDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointOnCircleSpacingMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointOnCircleSpacingMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpaceBetween,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CircleRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_OnCircle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_OnCircle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_OnCircle, 20506280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_OnCircle(Z_Construct_UClass_UEnvQueryGenerator_OnCircle, &UEnvQueryGenerator_OnCircle::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_OnCircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_OnCircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
