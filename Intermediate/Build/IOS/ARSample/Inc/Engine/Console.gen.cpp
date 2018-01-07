// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Console.h"
#include "Classes/Engine/GameViewportClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsole() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UConsole();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FAutoCompleteNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteNode, Z_Construct_UPackage__Script_Engine(), TEXT("AutoCompleteNode"), sizeof(FAutoCompleteNode), Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoCompleteNode(FAutoCompleteNode::StaticStruct, TEXT("/Script/Engine"), TEXT("AutoCompleteNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode
{
	FScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoCompleteNode")),new UScriptStruct::TCppStructOps<FAutoCompleteNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAutoCompleteNode;
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoCompleteNode"), sizeof(FAutoCompleteNode), Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "Node for storing an auto-complete tree based on each char in the command." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteListIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "Indices into AutoCompleteList for commands that match to this level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteListIndices = { UE4CodeGen_Private::EPropertyClass::Array, "AutoCompleteListIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutoCompleteNode, AutoCompleteListIndices), METADATA_PARAMS(NewProp_AutoCompleteListIndices_MetaData, ARRAY_COUNT(NewProp_AutoCompleteListIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoCompleteListIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "AutoCompleteListIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexChar_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "Char for node in the tree" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexChar = { UE4CodeGen_Private::EPropertyClass::Int, "IndexChar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutoCompleteNode, IndexChar), METADATA_PARAMS(NewProp_IndexChar_MetaData, ARRAY_COUNT(NewProp_IndexChar_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteListIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteListIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndexChar,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutoCompleteNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutoCompleteNode),
				alignof(FAutoCompleteNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC() { return 2841513613U; }
	void UConsole::StaticRegisterNativesUConsole()
	{
	}
	UClass* Z_Construct_UClass_UConsole_NoRegister()
	{
		return UConsole::StaticClass();
	}
	UClass* Z_Construct_UClass_UConsole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/Console.h" },
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "A basic command line console that accepts most commands." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryBuffer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "Holds the history buffer, order is old to new" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HistoryBuffer = { UE4CodeGen_Private::EPropertyClass::Array, "HistoryBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UConsole, HistoryBuffer), METADATA_PARAMS(NewProp_HistoryBuffer_MetaData, ARRAY_COUNT(NewProp_HistoryBuffer_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HistoryBuffer_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HistoryBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_White_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_White = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultTexture_White", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UConsole, DefaultTexture_White), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DefaultTexture_White_MetaData, ARRAY_COUNT(NewProp_DefaultTexture_White_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_Black_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_Black = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultTexture_Black", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UConsole, DefaultTexture_Black), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DefaultTexture_Black_MetaData, ARRAY_COUNT(NewProp_DefaultTexture_Black_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleTargetPlayer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Console.h" },
				{ "ToolTip", "The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsoleTargetPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "ConsoleTargetPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UConsole, ConsoleTargetPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(NewProp_ConsoleTargetPlayer_MetaData, ARRAY_COUNT(NewProp_ConsoleTargetPlayer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HistoryBuffer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HistoryBuffer_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTexture_White,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTexture_Black,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsoleTargetPlayer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UConsole>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UConsole::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Input",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsole, 2557520281);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsole(Z_Construct_UClass_UConsole, &UConsole::StaticClass, TEXT("/Script/Engine"), TEXT("UConsole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
