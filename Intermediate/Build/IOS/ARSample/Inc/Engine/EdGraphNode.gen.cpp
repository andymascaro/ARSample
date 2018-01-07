// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EdGraph/EdGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeTitleType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
// End Cross Module References
	static UEnum* ENodeEnabledState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeEnabledState, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeEnabledState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeEnabledState(ENodeEnabledState_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeEnabledState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeEnabledState_CRC() { return 2364073369U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeEnabledState"), 0, Get_Z_Construct_UEnum_Engine_ENodeEnabledState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeEnabledState::Enabled", (int64)ENodeEnabledState::Enabled },
				{ "ENodeEnabledState::Disabled", (int64)ENodeEnabledState::Disabled },
				{ "ENodeEnabledState::DevelopmentOnly", (int64)ENodeEnabledState::DevelopmentOnly },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DevelopmentOnly.ToolTip", "Node is enabled for development only." },
				{ "Disabled.ToolTip", "Node is disabled." },
				{ "Enabled.ToolTip", "Node is enabled." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum to indicate a node's enabled state." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENodeEnabledState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ENodeEnabledState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENodeAdvancedPins_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeAdvancedPins, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeAdvancedPins"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeAdvancedPins(ENodeAdvancedPins_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeAdvancedPins"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeAdvancedPins_CRC() { return 1629103115U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeAdvancedPins"), 0, Get_Z_Construct_UEnum_Engine_ENodeAdvancedPins_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeAdvancedPins::NoPins", (int64)ENodeAdvancedPins::NoPins },
				{ "ENodeAdvancedPins::Shown", (int64)ENodeAdvancedPins::Shown },
				{ "ENodeAdvancedPins::Hidden", (int64)ENodeAdvancedPins::Hidden },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.ToolTip", "There are some advanced pins, and they are hidden." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "NoPins.ToolTip", "No advanced pins." },
				{ "Shown.ToolTip", "There are some advanced pins, and they are shown." },
				{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and whether they are shown." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENodeAdvancedPins",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENodeAdvancedPins::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENodeTitleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeTitleType, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeTitleType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeTitleType(ENodeTitleType_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeTitleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeTitleType_CRC() { return 4270131690U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeTitleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeTitleType"), 0, Get_Z_Construct_UEnum_Engine_ENodeTitleType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeTitleType::FullTitle", (int64)ENodeTitleType::FullTitle },
				{ "ENodeTitleType::ListView", (int64)ENodeTitleType::ListView },
				{ "ENodeTitleType::EditableTitle", (int64)ENodeTitleType::EditableTitle },
				{ "ENodeTitleType::MenuTitle", (int64)ENodeTitleType::MenuTitle },
				{ "ENodeTitleType::MAX_TitleTypes", (int64)ENodeTitleType::MAX_TitleTypes },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EditableTitle.ToolTip", "Returns the editable title (which might not be a title at all)." },
				{ "FullTitle.ToolTip", "The full title, may be multiple lines." },
				{ "ListView.ToolTip", "More concise, single line title." },
				{ "MenuTitle.ToolTip", "Menu Title for context menus to be displayed in context menus referencing the node." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum to indicate what sort of title we want." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENodeTitleType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENodeTitleType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPinContainerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPinContainerType, Z_Construct_UPackage__Script_Engine(), TEXT("EPinContainerType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPinContainerType(EPinContainerType_StaticEnum, TEXT("/Script/Engine"), TEXT("EPinContainerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPinContainerType_CRC() { return 2931523099U; }
	UEnum* Z_Construct_UEnum_Engine_EPinContainerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPinContainerType"), 0, Get_Z_Construct_UEnum_Engine_EPinContainerType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPinContainerType::None", (int64)EPinContainerType::None },
				{ "EPinContainerType::Array", (int64)EPinContainerType::Array },
				{ "EPinContainerType::Set", (int64)EPinContainerType::Set },
				{ "EPinContainerType::Map", (int64)EPinContainerType::Map },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum used to define what container type a pin represents." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPinContainerType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPinContainerType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEdGraphPinDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEdGraphPinDirection, Z_Construct_UPackage__Script_Engine(), TEXT("EEdGraphPinDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEdGraphPinDirection(EEdGraphPinDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("EEdGraphPinDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEdGraphPinDirection_CRC() { return 3669667507U; }
	UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEdGraphPinDirection"), 0, Get_Z_Construct_UEnum_Engine_EEdGraphPinDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGPD_Input", (int64)EGPD_Input },
				{ "EGPD_Output", (int64)EGPD_Output },
				{ "EGPD_MAX", (int64)EGPD_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum used to define which way data flows into or out of this pin." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEdGraphPinDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EEdGraphPinDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEdGraphTerminalType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphTerminalType, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphTerminalType"), sizeof(FEdGraphTerminalType), Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphTerminalType(FEdGraphTerminalType::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphTerminalType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphTerminalType")),new UScriptStruct::TCppStructOps<FEdGraphTerminalType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType;
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphTerminalType"), sizeof(FEdGraphTerminalType), Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Struct used to define information for terminal types, e.g. types that can be contained\nby a container. Currently can represent strong/weak references to a type (only UObjects),\na structure, or a primitive. Support for \"Container of Containers\" is done by wrapping\na structure, rather than implicitly defining names for containers." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphTerminalType>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsWeakPointer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Whether or not this is a weak reference" },
			};
#endif
			auto NewProp_bTerminalIsWeakPointer_SetBit = [](void* Obj){ ((FEdGraphTerminalType*)Obj)->bTerminalIsWeakPointer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsWeakPointer = { UE4CodeGen_Private::EPropertyClass::Bool, "bTerminalIsWeakPointer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEdGraphTerminalType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTerminalIsWeakPointer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTerminalIsWeakPointer_MetaData, ARRAY_COUNT(NewProp_bTerminalIsWeakPointer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsConst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Whether or not this pin is a immutable const value" },
			};
#endif
			auto NewProp_bTerminalIsConst_SetBit = [](void* Obj){ ((FEdGraphTerminalType*)Obj)->bTerminalIsConst = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsConst = { UE4CodeGen_Private::EPropertyClass::Bool, "bTerminalIsConst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEdGraphTerminalType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTerminalIsConst_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTerminalIsConst_MetaData, ARRAY_COUNT(NewProp_bTerminalIsConst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategoryObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Sub-category object" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TerminalSubCategoryObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "TerminalSubCategoryObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_TerminalSubCategoryObject_MetaData, ARRAY_COUNT(NewProp_TerminalSubCategoryObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategory_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Sub-category" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TerminalSubCategory = { UE4CodeGen_Private::EPropertyClass::Str, "TerminalSubCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategory), METADATA_PARAMS(NewProp_TerminalSubCategory_MetaData, ARRAY_COUNT(NewProp_TerminalSubCategory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalCategory_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Category" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TerminalCategory = { UE4CodeGen_Private::EPropertyClass::Str, "TerminalCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphTerminalType, TerminalCategory), METADATA_PARAMS(NewProp_TerminalCategory_MetaData, ARRAY_COUNT(NewProp_TerminalCategory_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTerminalIsWeakPointer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTerminalIsConst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TerminalSubCategoryObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TerminalSubCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TerminalCategory,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EdGraphTerminalType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEdGraphTerminalType),
				alignof(FEdGraphTerminalType),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_CRC() { return 18513424U; }
	void UEdGraphNode::StaticRegisterNativesUEdGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphNode_NoRegister()
	{
		return UEdGraphNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraphNode()
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
				{ "IncludePath", "EdGraph/EdGraphNode.h" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "GUID to uniquely identify this node, to facilitate diffing versions of this graph" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "NodeGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_NodeGuid_MetaData, ARRAY_COUNT(NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Error/Warning description" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMsg", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, ErrorMsg), METADATA_PARAMS(NewProp_ErrorMsg_MetaData, ARRAY_COUNT(NewProp_ErrorMsg_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Flag to store node specific compile error/warning" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorType = { UE4CodeGen_Private::EPropertyClass::Int, "ErrorType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, ErrorType), METADATA_PARAMS(NewProp_ErrorType_MetaData, ARRAY_COUNT(NewProp_ErrorType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeComment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Comment string that is drawn on the node" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeComment = { UE4CodeGen_Private::EPropertyClass::Str, "NodeComment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodeComment), METADATA_PARAMS(NewProp_NodeComment_MetaData, ARRAY_COUNT(NewProp_NodeComment_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeUpgradeMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Note for a node that lingers until saved" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_NodeUpgradeMessage = { UE4CodeGen_Private::EPropertyClass::Text, "NodeUpgradeMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodeUpgradeMessage), METADATA_PARAMS(NewProp_NodeUpgradeMessage_MetaData, ARRAY_COUNT(NewProp_NodeUpgradeMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "If true, this node can be renamed in the editor" },
			};
#endif
			auto NewProp_bCanRenameNode_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bCanRenameNode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanRenameNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanRenameNode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanRenameNode_MetaData, ARRAY_COUNT(NewProp_bCanRenameNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleMakeVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Make comment bubble visible" },
			};
#endif
			auto NewProp_bCommentBubbleMakeVisible_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bCommentBubbleMakeVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleMakeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bCommentBubbleMakeVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCommentBubbleMakeVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCommentBubbleMakeVisible_MetaData, ARRAY_COUNT(NewProp_bCommentBubbleMakeVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Comment bubble visibility" },
			};
#endif
			auto NewProp_bCommentBubbleVisible_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bCommentBubbleVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bCommentBubbleVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCommentBubbleVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCommentBubbleVisible_MetaData, ARRAY_COUNT(NewProp_bCommentBubbleVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubblePinned_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Comment bubble pinned state" },
			};
#endif
			auto NewProp_bCommentBubblePinned_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bCommentBubblePinned = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubblePinned = { UE4CodeGen_Private::EPropertyClass::Bool, "bCommentBubblePinned", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCommentBubblePinned_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCommentBubblePinned_MetaData, ARRAY_COUNT(NewProp_bCommentBubblePinned_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCompilerMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Flag to check for compile error/warning" },
			};
#endif
			auto NewProp_bHasCompilerMessage_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bHasCompilerMessage = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCompilerMessage = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasCompilerMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasCompilerMessage_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasCompilerMessage_MetaData, ARRAY_COUNT(NewProp_bHasCompilerMessage_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanResizeNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "If true, this node can be resized and should be drawn with a resize handle" },
			};
#endif
			auto NewProp_bCanResizeNode_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bCanResizeNode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanResizeNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanResizeNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanResizeNode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanResizeNode_MetaData, ARRAY_COUNT(NewProp_bCanResizeNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNodeEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "(DEPRECATED) FALSE if the node is a disabled, which eliminates it from being compiled" },
			};
#endif
			auto NewProp_bIsNodeEnabled_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bIsNodeEnabled_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNodeEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNodeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsNodeEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsNodeEnabled_MetaData, ARRAY_COUNT(NewProp_bIsNodeEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserSetEnabledState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Indicates whether or not the user explicitly set the enabled state" },
			};
#endif
			auto NewProp_bUserSetEnabledState_SetBit = [](void* Obj){ ((UEdGraphNode*)Obj)->bUserSetEnabledState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserSetEnabledState = { UE4CodeGen_Private::EPropertyClass::Bool, "bUserSetEnabledState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUserSetEnabledState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUserSetEnabledState_MetaData, ARRAY_COUNT(NewProp_bUserSetEnabledState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Indicates in what state the node is enabled, which may eliminate it from being compiled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnabledState = { UE4CodeGen_Private::EPropertyClass::Enum, "EnabledState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, EnabledState), Z_Construct_UEnum_Engine_ENodeEnabledState, METADATA_PARAMS(NewProp_EnabledState_MetaData, ARRAY_COUNT(NewProp_EnabledState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnabledState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedPinDisplay_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and if they are shown" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdvancedPinDisplay = { UE4CodeGen_Private::EPropertyClass::Byte, "AdvancedPinDisplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, AdvancedPinDisplay), Z_Construct_UEnum_Engine_ENodeAdvancedPins, METADATA_PARAMS(NewProp_AdvancedPinDisplay_MetaData, ARRAY_COUNT(NewProp_AdvancedPinDisplay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Height of node in the editor; only used when the node can be resized" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeHeight = { UE4CodeGen_Private::EPropertyClass::Int, "NodeHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodeHeight), METADATA_PARAMS(NewProp_NodeHeight_MetaData, ARRAY_COUNT(NewProp_NodeHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Width of node in the editor; only used when the node can be resized" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeWidth = { UE4CodeGen_Private::EPropertyClass::Int, "NodeWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodeWidth), METADATA_PARAMS(NewProp_NodeWidth_MetaData, ARRAY_COUNT(NewProp_NodeWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePosY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Y position of node in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosY = { UE4CodeGen_Private::EPropertyClass::Int, "NodePosY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodePosY), METADATA_PARAMS(NewProp_NodePosY_MetaData, ARRAY_COUNT(NewProp_NodePosY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePosX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "X position of node in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosX = { UE4CodeGen_Private::EPropertyClass::Int, "NodePosX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, NodePosX), METADATA_PARAMS(NewProp_NodePosX_MetaData, ARRAY_COUNT(NewProp_NodePosX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPins_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "List of connector pins" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPins = { UE4CodeGen_Private::EPropertyClass::Array, "DeprecatedPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode, DeprecatedPins), METADATA_PARAMS(NewProp_DeprecatedPins_MetaData, ARRAY_COUNT(NewProp_DeprecatedPins_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPins_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DeprecatedPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMsg,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeComment,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeUpgradeMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanRenameNode,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCommentBubbleMakeVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCommentBubbleVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCommentBubblePinned,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasCompilerMessage,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanResizeNode,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsNodeEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUserSetEnabledState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnabledState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnabledState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdvancedPinDisplay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodePosY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodePosX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeprecatedPins,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeprecatedPins_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEdGraphNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEdGraphNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UEdGraphNode, 3582429972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphNode(Z_Construct_UClass_UEdGraphNode, &UEdGraphNode::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
