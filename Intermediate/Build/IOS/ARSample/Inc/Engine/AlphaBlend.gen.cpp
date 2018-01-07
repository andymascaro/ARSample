// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AlphaBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlphaBlend() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EAlphaBlendOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaBlendOption, Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaBlendOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlphaBlendOption(EAlphaBlendOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EAlphaBlendOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAlphaBlendOption_CRC() { return 1359059861U; }
	UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlphaBlendOption"), 0, Get_Z_Construct_UEnum_Engine_EAlphaBlendOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAlphaBlendOption::Linear", (int64)EAlphaBlendOption::Linear },
				{ "EAlphaBlendOption::Cubic", (int64)EAlphaBlendOption::Cubic },
				{ "EAlphaBlendOption::HermiteCubic", (int64)EAlphaBlendOption::HermiteCubic },
				{ "EAlphaBlendOption::Sinusoidal", (int64)EAlphaBlendOption::Sinusoidal },
				{ "EAlphaBlendOption::QuadraticInOut", (int64)EAlphaBlendOption::QuadraticInOut },
				{ "EAlphaBlendOption::CubicInOut", (int64)EAlphaBlendOption::CubicInOut },
				{ "EAlphaBlendOption::QuarticInOut", (int64)EAlphaBlendOption::QuarticInOut },
				{ "EAlphaBlendOption::QuinticInOut", (int64)EAlphaBlendOption::QuinticInOut },
				{ "EAlphaBlendOption::CircularIn", (int64)EAlphaBlendOption::CircularIn },
				{ "EAlphaBlendOption::CircularOut", (int64)EAlphaBlendOption::CircularOut },
				{ "EAlphaBlendOption::CircularInOut", (int64)EAlphaBlendOption::CircularInOut },
				{ "EAlphaBlendOption::ExpIn", (int64)EAlphaBlendOption::ExpIn },
				{ "EAlphaBlendOption::ExpOut", (int64)EAlphaBlendOption::ExpOut },
				{ "EAlphaBlendOption::ExpInOut", (int64)EAlphaBlendOption::ExpInOut },
				{ "EAlphaBlendOption::Custom", (int64)EAlphaBlendOption::Custom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircularIn.ToolTip", "Circular-in interpolation" },
				{ "CircularInOut.ToolTip", "Circular in-out interpolation" },
				{ "CircularOut.ToolTip", "Circular-out interpolation" },
				{ "Cubic.ToolTip", "Cubic-in interpolation" },
				{ "CubicInOut.ToolTip", "Cubic in-out interpolation" },
				{ "Custom.ToolTip", "Custom interpolation, will use custom curve inside an FAlphaBlend or linear if none has been set" },
				{ "ExpIn.ToolTip", "Exponential-in interpolation" },
				{ "ExpInOut.ToolTip", "Exponential in-out interpolation" },
				{ "ExpOut.ToolTip", "Exponential-Out interpolation" },
				{ "HermiteCubic.ToolTip", "Hermite-Cubic" },
				{ "Linear.ToolTip", "Linear interpolation" },
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "QuadraticInOut.ToolTip", "Quadratic in-out interpolation" },
				{ "QuarticInOut.ToolTip", "Quartic in-out interpolation" },
				{ "QuinticInOut.ToolTip", "Quintic in-out interpolation" },
				{ "Sinusoidal.ToolTip", "Sinusoidal interpolation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAlphaBlendOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAlphaBlendOption",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAlphaBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlend, Z_Construct_UPackage__Script_Engine(), TEXT("AlphaBlend"), sizeof(FAlphaBlend), Get_Z_Construct_UScriptStruct_FAlphaBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlphaBlend(FAlphaBlend::StaticStruct, TEXT("/Script/Engine"), TEXT("AlphaBlend"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAlphaBlend
{
	FScriptStruct_Engine_StaticRegisterNativesFAlphaBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AlphaBlend")),new UScriptStruct::TCppStructOps<FAlphaBlend>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAlphaBlend;
	UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AlphaBlend"), sizeof(FAlphaBlend), Get_Z_Construct_UScriptStruct_FAlphaBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "ToolTip", "Alpha Blend class that supports different blend options as well as custom curves" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlphaBlend>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "ToolTip", "Blend Time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FAlphaBlend, BlendTime), METADATA_PARAMS(NewProp_BlendTime_MetaData, ARRAY_COUNT(NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FAlphaBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CustomCurve_MetaData, ARRAY_COUNT(NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FAlphaBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(NewProp_BlendOption_MetaData, ARRAY_COUNT(NewProp_BlendOption_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOption_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AlphaBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAlphaBlend),
				alignof(FAlphaBlend),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_CRC() { return 3877657863U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
