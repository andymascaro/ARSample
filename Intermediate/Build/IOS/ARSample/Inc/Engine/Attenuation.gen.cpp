// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Attenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttenuation() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationShape();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static UEnum* EAttenuationShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationShape, Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationShape"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttenuationShape(EAttenuationShape_StaticEnum, TEXT("/Script/Engine"), TEXT("EAttenuationShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAttenuationShape_CRC() { return 3110538505U; }
	UEnum* Z_Construct_UEnum_Engine_EAttenuationShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttenuationShape"), 0, Get_Z_Construct_UEnum_Engine_EAttenuationShape_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttenuationShape::Sphere", (int64)EAttenuationShape::Sphere },
				{ "EAttenuationShape::Capsule", (int64)EAttenuationShape::Capsule },
				{ "EAttenuationShape::Box", (int64)EAttenuationShape::Box },
				{ "EAttenuationShape::Cone", (int64)EAttenuationShape::Cone },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAttenuationShape",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAttenuationShape::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAttenuationDistanceModel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationDistanceModel, Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationDistanceModel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttenuationDistanceModel(EAttenuationDistanceModel_StaticEnum, TEXT("/Script/Engine"), TEXT("EAttenuationDistanceModel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAttenuationDistanceModel_CRC() { return 485396520U; }
	UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttenuationDistanceModel"), 0, Get_Z_Construct_UEnum_Engine_EAttenuationDistanceModel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttenuationDistanceModel::Linear", (int64)EAttenuationDistanceModel::Linear },
				{ "EAttenuationDistanceModel::Logarithmic", (int64)EAttenuationDistanceModel::Logarithmic },
				{ "EAttenuationDistanceModel::Inverse", (int64)EAttenuationDistanceModel::Inverse },
				{ "EAttenuationDistanceModel::LogReverse", (int64)EAttenuationDistanceModel::LogReverse },
				{ "EAttenuationDistanceModel::NaturalSound", (int64)EAttenuationDistanceModel::NaturalSound },
				{ "EAttenuationDistanceModel::Custom", (int64)EAttenuationDistanceModel::Custom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAttenuationDistanceModel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAttenuationDistanceModel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBaseAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BaseAttenuationSettings"), sizeof(FBaseAttenuationSettings), Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseAttenuationSettings(FBaseAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BaseAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseAttenuationSettings")),new UScriptStruct::TCppStructOps<FBaseAttenuationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseAttenuationSettings"), sizeof(FBaseAttenuationSettings), Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "* Base class for attenuation settings." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseAttenuationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffDistance_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The distance over which volume attenuation occurs." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FalloffDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FalloffDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, FalloffDistance), METADATA_PARAMS(NewProp_FalloffDistance_MetaData, ARRAY_COUNT(NewProp_FalloffDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOffset_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The distance back from the sound's origin to begin the cone when using the cone attenuation shape." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ConeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, ConeOffset), METADATA_PARAMS(NewProp_ConeOffset_MetaData, ARRAY_COUNT(NewProp_ConeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationShapeExtents_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n         Sphere  - X is Sphere Radius. Y and Z are unused\n         Capsule - X is Capsule Half Height, Y is Capsule Radius, Z is unused\n         Box     - X, Y, and Z are the Box's dimensions\n         Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationShapeExtents = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationShapeExtents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShapeExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AttenuationShapeExtents_MetaData, ARRAY_COUNT(NewProp_AttenuationShapeExtents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dBAttenuationAtMax_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ClampMax", "0" },
				{ "DisplayName", "dB Attenuation At Max" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The attenuation volume at maximum distance in decibels, used for natural attenuation method." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dBAttenuationAtMax = { UE4CodeGen_Private::EPropertyClass::Float, "dBAttenuationAtMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, dBAttenuationAtMax), METADATA_PARAMS(NewProp_dBAttenuationAtMax_MetaData, ARRAY_COUNT(NewProp_dBAttenuationAtMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationShape_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The shape of the non-custom attenuation method." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttenuationShape = { UE4CodeGen_Private::EPropertyClass::Byte, "AttenuationShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShape), Z_Construct_UEnum_Engine_EAttenuationShape, METADATA_PARAMS(NewProp_AttenuationShape_MetaData, ARRAY_COUNT(NewProp_AttenuationShape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttenuationCurve_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The custom volume attenuation curve to use." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAttenuationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomAttenuationCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, CustomAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_CustomAttenuationCurve_MetaData, ARRAY_COUNT(NewProp_CustomAttenuationCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceAlgorithm_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "DisplayName", "Attenuation Function" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "ToolTip", "The type of attenuation as a function of distance to use." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceAlgorithm = { UE4CodeGen_Private::EPropertyClass::Enum, "DistanceAlgorithm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBaseAttenuationSettings, DistanceAlgorithm), Z_Construct_UEnum_Engine_EAttenuationDistanceModel, METADATA_PARAMS(NewProp_DistanceAlgorithm_MetaData, ARRAY_COUNT(NewProp_DistanceAlgorithm_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceAlgorithm_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FalloffDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationShapeExtents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dBAttenuationAtMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomAttenuationCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceAlgorithm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceAlgorithm_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BaseAttenuationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBaseAttenuationSettings),
				alignof(FBaseAttenuationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_CRC() { return 4085232015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
