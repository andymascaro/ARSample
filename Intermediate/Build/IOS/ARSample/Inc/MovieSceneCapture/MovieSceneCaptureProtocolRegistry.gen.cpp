// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneCaptureProtocolRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolRegistry() {}
// Cross Module References
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureProtocolID();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
class UScriptStruct* FCaptureProtocolID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCaptureProtocolID_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureProtocolID, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CaptureProtocolID"), sizeof(FCaptureProtocolID), Get_Z_Construct_UScriptStruct_FCaptureProtocolID_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCaptureProtocolID(FCaptureProtocolID::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CaptureProtocolID"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CaptureProtocolID")),new UScriptStruct::TCppStructOps<FCaptureProtocolID>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID;
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureProtocolID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCaptureProtocolID_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CaptureProtocolID"), sizeof(FCaptureProtocolID), Get_Z_Construct_UScriptStruct_FCaptureProtocolID_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolRegistry.h" },
				{ "ToolTip", "Structure used to uniquely identify a specific capture protocol" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureProtocolID>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "Category", "ID" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolRegistry.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Name, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCaptureProtocolID, Identifier), METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CaptureProtocolID",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCaptureProtocolID),
				alignof(FCaptureProtocolID),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCaptureProtocolID_CRC() { return 3919131687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
