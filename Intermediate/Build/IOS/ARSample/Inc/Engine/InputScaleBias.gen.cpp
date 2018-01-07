// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/InputScaleBias.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputScaleBias() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FInputScaleBias::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias, Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputScaleBias(FInputScaleBias::StaticStruct, TEXT("/Script/Engine"), TEXT("InputScaleBias"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias
{
	FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputScaleBias")),new UScriptStruct::TCppStructOps<FInputScaleBias>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputScaleBias;
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
				{ "ToolTip", "Input scaling struct" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBias>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias = { UE4CodeGen_Private::EPropertyClass::Float, "Bias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBias, Bias), METADATA_PARAMS(NewProp_Bias_MetaData, ARRAY_COUNT(NewProp_Bias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBias, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputScaleBias",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FInputScaleBias),
				alignof(FInputScaleBias),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC() { return 269869538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
