// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/IndexedCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
// End Cross Module References
class UScriptStruct* FIndexedCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedCurve, Z_Construct_UPackage__Script_Engine(), TEXT("IndexedCurve"), sizeof(FIndexedCurve), Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedCurve(FIndexedCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("IndexedCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIndexedCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFIndexedCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IndexedCurve")),new UScriptStruct::TCppStructOps<FIndexedCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFIndexedCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedCurve"), sizeof(FIndexedCurve), Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
				{ "ToolTip", "A curve base class which enables key handles to index lookups.\n\n@todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyHandlesToIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
				{ "ToolTip", "Map of which key handles go to which indices." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyHandlesToIndices = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyHandlesToIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FIndexedCurve, KeyHandlesToIndices), Z_Construct_UScriptStruct_FKeyHandleMap, METADATA_PARAMS(NewProp_KeyHandlesToIndices_MetaData, ARRAY_COUNT(NewProp_KeyHandlesToIndices_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyHandlesToIndices,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IndexedCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FIndexedCurve),
				alignof(FIndexedCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC() { return 1494434569U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
