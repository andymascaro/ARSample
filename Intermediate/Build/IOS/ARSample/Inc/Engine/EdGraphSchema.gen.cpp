// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EdGraph/EdGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECanCreateConnectionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("ECanCreateConnectionResponse"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECanCreateConnectionResponse(ECanCreateConnectionResponse_StaticEnum, TEXT("/Script/Engine"), TEXT("ECanCreateConnectionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_CRC() { return 917791173U; }
	UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECanCreateConnectionResponse"), 0, Get_Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CONNECT_RESPONSE_MAKE", (int64)CONNECT_RESPONSE_MAKE },
				{ "CONNECT_RESPONSE_DISALLOW", (int64)CONNECT_RESPONSE_DISALLOW },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_A", (int64)CONNECT_RESPONSE_BREAK_OTHERS_A },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_B", (int64)CONNECT_RESPONSE_BREAK_OTHERS_B },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_AB", (int64)CONNECT_RESPONSE_BREAK_OTHERS_AB },
				{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE", (int64)CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE },
				{ "CONNECT_RESPONSE_MAX", (int64)CONNECT_RESPONSE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CONNECT_RESPONSE_BREAK_OTHERS_A.ToolTip", "Break all existing connections on A and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_AB.ToolTip", "Break all existing connections on A and B, and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_B.ToolTip", "Break all existing connections on B and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_DISALLOW.ToolTip", "Cannot make this connection; display the message string as an error." },
				{ "CONNECT_RESPONSE_MAKE.ToolTip", "Make the connection; there are no issues (message string is displayed if not empty)." },
				{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE.ToolTip", "Make the connection via an intermediate cast node, or some other conversion node." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This is the type of response the graph editor should take when making a connection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECanCreateConnectionResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECanCreateConnectionResponse",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGraphType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphType, Z_Construct_UPackage__Script_Engine(), TEXT("EGraphType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphType(EGraphType_StaticEnum, TEXT("/Script/Engine"), TEXT("EGraphType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGraphType_CRC() { return 2821900517U; }
	UEnum* Z_Construct_UEnum_Engine_EGraphType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphType"), 0, Get_Z_Construct_UEnum_Engine_EGraphType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GT_Function", (int64)GT_Function },
				{ "GT_Ubergraph", (int64)GT_Ubergraph },
				{ "GT_Macro", (int64)GT_Macro },
				{ "GT_Animation", (int64)GT_Animation },
				{ "GT_StateMachine", (int64)GT_StateMachine },
				{ "GT_MAX", (int64)GT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "Distinguishes between different graph types. Graphs can have different properties; for example: functions have one entry point, ubergraphs can have multiples." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGraphType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EGraphType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEdGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction_NewNode"), sizeof(FEdGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_NewNode(FEdGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode;
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_NewNode"), sizeof(FEdGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "Action to add a node to the graph" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "Template of node we want to create" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "NodeTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_NodeTemplate_MetaData, ARRAY_COUNT(NewProp_NodeTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeTemplate,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FEdGraphSchemaAction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EdGraphSchemaAction_NewNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEdGraphSchemaAction_NewNode),
				alignof(FEdGraphSchemaAction_NewNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC() { return 2708630467U; }
class UScriptStruct* FEdGraphSchemaAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction"), sizeof(FEdGraphSchemaAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction(FEdGraphSchemaAction::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphSchemaAction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction;
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction"), sizeof(FEdGraphSchemaAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This structure represents a context dependent action, with sufficient information for the schema to perform it." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchText = { UE4CodeGen_Private::EPropertyClass::Str, "SearchText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SearchText), METADATA_PARAMS(NewProp_SearchText_MetaData, ARRAY_COUNT(NewProp_SearchText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchCategoryArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchCategoryArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchCategoryArray), METADATA_PARAMS(NewProp_LocalizedFullSearchCategoryArray_MetaData, ARRAY_COUNT(NewProp_LocalizedFullSearchCategoryArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchCategoryArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchKeywordsArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchKeywordsArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchKeywordsArray), METADATA_PARAMS(NewProp_LocalizedFullSearchKeywordsArray_MetaData, ARRAY_COUNT(NewProp_LocalizedFullSearchKeywordsArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchKeywordsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchTitlesArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchTitlesArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchTitlesArray), METADATA_PARAMS(NewProp_LocalizedFullSearchTitlesArray_MetaData, ARRAY_COUNT(NewProp_LocalizedFullSearchTitlesArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchTitlesArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedMenuDescriptionArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedMenuDescriptionArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedMenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedMenuDescriptionArray), METADATA_PARAMS(NewProp_LocalizedMenuDescriptionArray_MetaData, ARRAY_COUNT(NewProp_LocalizedMenuDescriptionArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedMenuDescriptionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedMenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchCategoryArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchCategoryArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchCategoryArray), METADATA_PARAMS(NewProp_FullSearchCategoryArray_MetaData, ARRAY_COUNT(NewProp_FullSearchCategoryArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchCategoryArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchKeywordsArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchKeywordsArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchKeywordsArray), METADATA_PARAMS(NewProp_FullSearchKeywordsArray_MetaData, ARRAY_COUNT(NewProp_FullSearchKeywordsArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchKeywordsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchTitlesArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchTitlesArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchTitlesArray), METADATA_PARAMS(NewProp_FullSearchTitlesArray_MetaData, ARRAY_COUNT(NewProp_FullSearchTitlesArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchTitlesArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDescriptionArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuDescriptionArray = { UE4CodeGen_Private::EPropertyClass::Array, "MenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescriptionArray), METADATA_PARAMS(NewProp_MenuDescriptionArray_MetaData, ARRAY_COUNT(NewProp_MenuDescriptionArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MenuDescriptionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "Section ID of the action list in which this action belongs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID = { UE4CodeGen_Private::EPropertyClass::Int, "SectionID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SectionID), METADATA_PARAMS(NewProp_SectionID_MetaData, ARRAY_COUNT(NewProp_SectionID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grouping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This is a priority number for overriding alphabetical order in the action list (higher value  == higher in the list)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grouping = { UE4CodeGen_Private::EPropertyClass::Int, "Grouping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Grouping), METADATA_PARAMS(NewProp_Grouping_MetaData, ARRAY_COUNT(NewProp_Grouping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This is just an arbitrary dump of extra text that search will match on, in addition to the description and tooltip, e.g., Add might have the keyword Math." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Keywords = { UE4CodeGen_Private::EPropertyClass::Text, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Keywords), METADATA_PARAMS(NewProp_Keywords_MetaData, ARRAY_COUNT(NewProp_Keywords_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This is the UI centric category the action fits in (e.g., Functions, Variables). Use this instead of the NodeType.NodeCategory because multiple NodeCategories might visually belong together." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category = { UE4CodeGen_Private::EPropertyClass::Text, "Category", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Category), METADATA_PARAMS(NewProp_Category_MetaData, ARRAY_COUNT(NewProp_Category_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "The tooltip text that should be displayed for this node in the creation menu." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_TooltipDescription = { UE4CodeGen_Private::EPropertyClass::Text, "TooltipDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, TooltipDescription), METADATA_PARAMS(NewProp_TooltipDescription_MetaData, ARRAY_COUNT(NewProp_TooltipDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "The menu text that should be displayed for this node in the creation menu." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuDescription = { UE4CodeGen_Private::EPropertyClass::Text, "MenuDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescription), METADATA_PARAMS(NewProp_MenuDescription_MetaData, ARRAY_COUNT(NewProp_MenuDescription_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchCategoryArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchCategoryArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchKeywordsArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchKeywordsArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchTitlesArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedFullSearchTitlesArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedMenuDescriptionArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedMenuDescriptionArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchCategoryArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchCategoryArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchKeywordsArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchKeywordsArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchTitlesArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullSearchTitlesArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDescriptionArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDescriptionArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grouping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keywords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Category,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TooltipDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDescription,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EdGraphSchemaAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEdGraphSchemaAction),
				alignof(FEdGraphSchemaAction),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC() { return 3508894641U; }
	void UEdGraphSchema::StaticRegisterNativesUEdGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister()
	{
		return UEdGraphSchema::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraphSchema()
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
				{ "IncludePath", "EdGraph/EdGraphSchema.h" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEdGraphSchema>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEdGraphSchema::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema, 2033438562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema(Z_Construct_UClass_UEdGraphSchema, &UEdGraphSchema::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
