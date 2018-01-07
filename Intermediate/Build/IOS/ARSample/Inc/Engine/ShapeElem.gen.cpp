// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/ShapeElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FKShapeElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKShapeElem, Z_Construct_UPackage__Script_Engine(), TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKShapeElem(FKShapeElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KShapeElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKShapeElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKShapeElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KShapeElem")),new UScriptStruct::TCppStructOps<FKShapeElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKShapeElem;
	UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
				{ "ToolTip", "Sphere shape used for collision" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKShapeElem>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KShapeElem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKShapeElem),
				alignof(FKShapeElem),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_CRC() { return 77662375U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
