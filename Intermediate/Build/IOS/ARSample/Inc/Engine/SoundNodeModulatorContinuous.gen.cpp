// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeModulatorContinuous.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulatorContinuous() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ModulationParamMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
// End Cross Module References
	static UEnum* ModulationParamMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ModulationParamMode, Z_Construct_UPackage__Script_Engine(), TEXT("ModulationParamMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ModulationParamMode(ModulationParamMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ModulationParamMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ModulationParamMode_CRC() { return 3980269710U; }
	UEnum* Z_Construct_UEnum_Engine_ModulationParamMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ModulationParamMode"), 0, Get_Z_Construct_UEnum_Engine_ModulationParamMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MPM_Normal", (int64)MPM_Normal },
				{ "MPM_Abs", (int64)MPM_Abs },
				{ "MPM_Direct", (int64)MPM_Direct },
				{ "MPM_MAX", (int64)MPM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "MPM_Abs.DisplayName", "Absolute" },
				{ "MPM_Abs.Tooltip", "Same as Normal except that the input value is treated as an absolute value" },
				{ "MPM_Direct.DisplayName", "Direct" },
				{ "MPM_Direct.Tooltip", "Use the input value directly without scaling or reference to Min or Max input or output values" },
				{ "MPM_Normal.DisplayName", "Normal" },
				{ "MPM_Normal.Tooltip", "Clamps input value to the range (MinInput, MaxInput) then maps to the range (MinOutput, MaxOutput)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ModulationParamMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ModulationParamMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FModulatorContinuousParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModulatorContinuousParams, Z_Construct_UPackage__Script_Engine(), TEXT("ModulatorContinuousParams"), sizeof(FModulatorContinuousParams), Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModulatorContinuousParams(FModulatorContinuousParams::StaticStruct, TEXT("/Script/Engine"), TEXT("ModulatorContinuousParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams
{
	FScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModulatorContinuousParams")),new UScriptStruct::TCppStructOps<FModulatorContinuousParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFModulatorContinuousParams;
	UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModulatorContinuousParams"), sizeof(FModulatorContinuousParams), Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModulatorContinuousParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamMode_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The mode with which to treat the input value" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ParamMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, ParamMode), Z_Construct_UEnum_Engine_ModulationParamMode, METADATA_PARAMS(NewProp_ParamMode_MetaData, ARRAY_COUNT(NewProp_ParamMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The maximum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOutput = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MaxOutput), METADATA_PARAMS(NewProp_MaxOutput_MetaData, ARRAY_COUNT(NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The minimum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOutput = { UE4CodeGen_Private::EPropertyClass::Float, "MinOutput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MinOutput), METADATA_PARAMS(NewProp_MinOutput_MetaData, ARRAY_COUNT(NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The maximum input value. Values will be clamped to the [MinInput, MaxInput] range." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInput = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MaxInput), METADATA_PARAMS(NewProp_MaxInput_MetaData, ARRAY_COUNT(NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The minimum input value. Values will be clamped to the [MinInput, MaxInput] range." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInput = { UE4CodeGen_Private::EPropertyClass::Float, "MinInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MinInput), METADATA_PARAMS(NewProp_MinInput_MetaData, ARRAY_COUNT(NewProp_MinInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The default value to be used if the parameter is not found." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Float, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, Default), METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "ModulatorContinousParameters" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "The name of the sound instance parameter that specifies the current value." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinOutput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ModulatorContinuousParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FModulatorContinuousParams),
				alignof(FModulatorContinuousParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC() { return 4276553063U; }
	void USoundNodeModulatorContinuous::StaticRegisterNativesUSoundNodeModulatorContinuous()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister()
	{
		return USoundNodeModulatorContinuous::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Continuous Modulator" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeModulatorContinuous.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
				{ "ToolTip", "Allows named parameter based manipulation of pitch and volume" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationParams_MetaData[] = {
				{ "Category", "ContinuousModulator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeModulationParams = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumeModulationParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulatorContinuous, VolumeModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(NewProp_VolumeModulationParams_MetaData, ARRAY_COUNT(NewProp_VolumeModulationParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationParams_MetaData[] = {
				{ "Category", "ContinuousModulator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchModulationParams = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchModulationParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulatorContinuous, PitchModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(NewProp_PitchModulationParams_MetaData, ARRAY_COUNT(NewProp_PitchModulationParams_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeModulationParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchModulationParams,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeModulatorContinuous>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeModulatorContinuous::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(USoundNodeModulatorContinuous, 1128285489);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeModulatorContinuous(Z_Construct_UClass_USoundNodeModulatorContinuous, &USoundNodeModulatorContinuous::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeModulatorContinuous"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulatorContinuous);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
