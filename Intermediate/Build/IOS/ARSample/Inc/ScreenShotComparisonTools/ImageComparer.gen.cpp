// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ImageComparer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageComparer() {}
// Cross Module References
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
// End Cross Module References
class UScriptStruct* FImageComparisonResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageComparisonResult(FImageComparisonResult::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageComparisonResult"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageComparisonResult")),new UScriptStruct::TCppStructOps<FImageComparisonResult>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult;
	UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageComparisonResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tolerance = { UE4CodeGen_Private::EPropertyClass::Struct, "Tolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, Tolerance), Z_Construct_UScriptStruct_FImageTolerance, METADATA_PARAMS(NewProp_Tolerance_MetaData, ARRAY_COUNT(NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Text, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ErrorMessage), METADATA_PARAMS(NewProp_ErrorMessage_MetaData, ARRAY_COUNT(NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "GlobalDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, GlobalDifference), METADATA_PARAMS(NewProp_GlobalDifference_MetaData, ARRAY_COUNT(NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "MaxLocalDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, MaxLocalDifference), METADATA_PARAMS(NewProp_MaxLocalDifference_MetaData, ARRAY_COUNT(NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportComparisonFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportComparisonFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportComparisonFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportComparisonFile), METADATA_PARAMS(NewProp_ReportComparisonFile_MetaData, ARRAY_COUNT(NewProp_ReportComparisonFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportIncomingFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportIncomingFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportIncomingFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportIncomingFile), METADATA_PARAMS(NewProp_ReportIncomingFile_MetaData, ARRAY_COUNT(NewProp_ReportIncomingFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportApprovedFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportApprovedFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportApprovedFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportApprovedFile), METADATA_PARAMS(NewProp_ReportApprovedFile_MetaData, ARRAY_COUNT(NewProp_ReportApprovedFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonFile = { UE4CodeGen_Private::EPropertyClass::Str, "ComparisonFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ComparisonFile), METADATA_PARAMS(NewProp_ComparisonFile_MetaData, ARRAY_COUNT(NewProp_ComparisonFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingFile = { UE4CodeGen_Private::EPropertyClass::Str, "IncomingFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, IncomingFile), METADATA_PARAMS(NewProp_IncomingFile_MetaData, ARRAY_COUNT(NewProp_IncomingFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApprovedFile_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApprovedFile = { UE4CodeGen_Private::EPropertyClass::Str, "ApprovedFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ApprovedFile), METADATA_PARAMS(NewProp_ApprovedFile_MetaData, ARRAY_COUNT(NewProp_ApprovedFile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLocalDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReportComparisonFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReportIncomingFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReportApprovedFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComparisonFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncomingFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApprovedFile,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ImageComparisonResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FImageComparisonResult),
				alignof(FImageComparisonResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC() { return 4268206455U; }
class UScriptStruct* FImageTolerance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageTolerance(FImageTolerance::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageTolerance"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageTolerance")),new UScriptStruct::TCppStructOps<FImageTolerance>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance;
	UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageTolerance>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumGlobalError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaximumGlobalError), METADATA_PARAMS(NewProp_MaximumGlobalError_MetaData, ARRAY_COUNT(NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumLocalError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaximumLocalError), METADATA_PARAMS(NewProp_MaximumLocalError_MetaData, ARRAY_COUNT(NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreColors_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			auto NewProp_IgnoreColors_SetBit = [](void* Obj){ ((FImageTolerance*)Obj)->IgnoreColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreColors = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageTolerance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IgnoreColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IgnoreColors_MetaData, ARRAY_COUNT(NewProp_IgnoreColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreAntiAliasing_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			auto NewProp_IgnoreAntiAliasing_SetBit = [](void* Obj){ ((FImageTolerance*)Obj)->IgnoreAntiAliasing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreAntiAliasing = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreAntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageTolerance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IgnoreAntiAliasing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IgnoreAntiAliasing_MetaData, ARRAY_COUNT(NewProp_IgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaxBrightness), nullptr, METADATA_PARAMS(NewProp_MaxBrightness_MetaData, ARRAY_COUNT(NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "MinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MinBrightness), nullptr, METADATA_PARAMS(NewProp_MinBrightness_MetaData, ARRAY_COUNT(NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Byte, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Alpha), nullptr, METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Byte, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Blue), nullptr, METADATA_PARAMS(NewProp_Blue_MetaData, ARRAY_COUNT(NewProp_Blue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green = { UE4CodeGen_Private::EPropertyClass::Byte, "Green", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Green), nullptr, METADATA_PARAMS(NewProp_Green_MetaData, ARRAY_COUNT(NewProp_Green_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[] = {
				{ "ModuleRelativePath", "Public/ImageComparer.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red = { UE4CodeGen_Private::EPropertyClass::Byte, "Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Red), nullptr, METADATA_PARAMS(NewProp_Red_MetaData, ARRAY_COUNT(NewProp_Red_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumGlobalError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumLocalError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreAntiAliasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Green,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Red,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ImageTolerance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FImageTolerance),
				alignof(FImageTolerance),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC() { return 4002517535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
