// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Blueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprint() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
// End Cross Module References
	static UEnum* EBlueprintNativizationFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintNativizationFlag"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintNativizationFlag(EBlueprintNativizationFlag_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintNativizationFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_CRC() { return 3344799929U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintNativizationFlag"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintNativizationFlag::Disabled", (int64)EBlueprintNativizationFlag::Disabled },
				{ "EBlueprintNativizationFlag::Dependency", (int64)EBlueprintNativizationFlag::Dependency },
				{ "EBlueprintNativizationFlag::ExplicitlyEnabled", (int64)EBlueprintNativizationFlag::ExplicitlyEnabled },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExplicitlyEnabled.ToolTip", "conditionally enabled (set from sub-class as a dependency)" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintNativizationFlag",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBlueprintNativizationFlag",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintCompileMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintCompileMode, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintCompileMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintCompileMode(EBlueprintCompileMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintCompileMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintCompileMode_CRC() { return 3690004212U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintCompileMode"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintCompileMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintCompileMode::Default", (int64)EBlueprintCompileMode::Default },
				{ "EBlueprintCompileMode::Development", (int64)EBlueprintCompileMode::Development },
				{ "EBlueprintCompileMode::FinalRelease", (int64)EBlueprintCompileMode::FinalRelease },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.DisplayName", "Use Default" },
				{ "Default.ToolTip", "Use the default setting." },
				{ "Development.ToolTip", "Always compile in development mode (even when cooking)." },
				{ "FinalRelease.ToolTip", "Always compile in final release mode." },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Compile modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintCompileMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBlueprintCompileMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintType, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintType(EBlueprintType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintType_CRC() { return 270063854U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintType"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BPTYPE_Normal", (int64)BPTYPE_Normal },
				{ "BPTYPE_Const", (int64)BPTYPE_Const },
				{ "BPTYPE_MacroLibrary", (int64)BPTYPE_MacroLibrary },
				{ "BPTYPE_Interface", (int64)BPTYPE_Interface },
				{ "BPTYPE_LevelScript", (int64)BPTYPE_LevelScript },
				{ "BPTYPE_FunctionLibrary", (int64)BPTYPE_FunctionLibrary },
				{ "BPTYPE_MAX", (int64)BPTYPE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BPTYPE_Const.DisplayName", "Const Blueprint Class" },
				{ "BPTYPE_Const.ToolTip", "Blueprint that is const during execution (no state graph and methods cannot modify member variables)." },
				{ "BPTYPE_FunctionLibrary.DisplayName", "Blueprint Function Library" },
				{ "BPTYPE_FunctionLibrary.ToolTip", "Blueprint that serves as a container for functions to be used in other blueprints." },
				{ "BPTYPE_Interface.DisplayName", "Blueprint Interface" },
				{ "BPTYPE_Interface.ToolTip", "Blueprint that serves as an interface to be implemented by other blueprints." },
				{ "BPTYPE_LevelScript.DisplayName", "Level Blueprint" },
				{ "BPTYPE_LevelScript.ToolTip", "Blueprint that handles level scripting." },
				{ "BPTYPE_MacroLibrary.DisplayName", "Blueprint Macro Library" },
				{ "BPTYPE_MacroLibrary.ToolTip", "Blueprint that serves as a container for macros to be used in other blueprints." },
				{ "BPTYPE_Normal.DisplayName", "Blueprint Class" },
				{ "BPTYPE_Normal.ToolTip", "Normal blueprint." },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Enumerates types of blueprints." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBlueprintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintStatus(EBlueprintStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintStatus_CRC() { return 3535493427U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintStatus"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BS_Unknown", (int64)BS_Unknown },
				{ "BS_Dirty", (int64)BS_Dirty },
				{ "BS_Error", (int64)BS_Error },
				{ "BS_UpToDate", (int64)BS_UpToDate },
				{ "BS_BeingCreated", (int64)BS_BeingCreated },
				{ "BS_UpToDateWithWarnings", (int64)BS_UpToDateWithWarnings },
				{ "BS_MAX", (int64)BS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BS_BeingCreated.ToolTip", "Blueprint is in the process of being created for the first time." },
				{ "BS_Dirty.ToolTip", "Blueprint has been modified but not recompiled." },
				{ "BS_Error.ToolTip", "Blueprint tried but failed to be compiled." },
				{ "BS_Unknown.ToolTip", "Blueprint is in an unknown state." },
				{ "BS_UpToDate.ToolTip", "Blueprint has been compiled since it was last modified." },
				{ "BS_UpToDateWithWarnings.ToolTip", "Blueprint has been compiled since it was last modified. There are warnings." },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Enumerates states a blueprint can be in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBlueprintStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEditedDocumentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditedDocumentInfo, Z_Construct_UPackage__Script_Engine(), TEXT("EditedDocumentInfo"), sizeof(FEditedDocumentInfo), Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditedDocumentInfo(FEditedDocumentInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("EditedDocumentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditedDocumentInfo")),new UScriptStruct::TCppStructOps<FEditedDocumentInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditedDocumentInfo"), sizeof(FEditedDocumentInfo), Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditedDocumentInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedZoomAmount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Saved zoom amount" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedZoomAmount = { UE4CodeGen_Private::EPropertyClass::Float, "SavedZoomAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEditedDocumentInfo, SavedZoomAmount), METADATA_PARAMS(NewProp_SavedZoomAmount_MetaData, ARRAY_COUNT(NewProp_SavedZoomAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedViewOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Saved view position" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedViewOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SavedViewOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEditedDocumentInfo, SavedViewOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SavedViewOffset_MetaData, ARRAY_COUNT(NewProp_SavedViewOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditedObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditedObject = { UE4CodeGen_Private::EPropertyClass::Object, "EditedObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEditedDocumentInfo, EditedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_EditedObject_MetaData, ARRAY_COUNT(NewProp_EditedObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedZoomAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedViewOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditedObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditedDocumentInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEditedDocumentInfo),
				alignof(FEditedDocumentInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC() { return 770511090U; }
class UScriptStruct* FBPInterfaceDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceDescription, Z_Construct_UPackage__Script_Engine(), TEXT("BPInterfaceDescription"), sizeof(FBPInterfaceDescription), Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPInterfaceDescription(FBPInterfaceDescription::StaticStruct, TEXT("/Script/Engine"), TEXT("BPInterfaceDescription"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription
{
	FScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPInterfaceDescription")),new UScriptStruct::TCppStructOps<FBPInterfaceDescription>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPInterfaceDescription"), sizeof(FBPInterfaceDescription), Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Struct containing information about what interfaces are implemented in this blueprint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPInterfaceDescription>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "References to the graphs associated with the required functions for this interface" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Graphs = { UE4CodeGen_Private::EPropertyClass::Array, "Graphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBPInterfaceDescription, Graphs), METADATA_PARAMS(NewProp_Graphs_MetaData, ARRAY_COUNT(NewProp_Graphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Graphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Reference to the interface class we're adding to this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interface = { UE4CodeGen_Private::EPropertyClass::Class, "Interface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FBPInterfaceDescription, Interface), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Interface_MetaData, ARRAY_COUNT(NewProp_Interface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Graphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Graphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPInterfaceDescription",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPInterfaceDescription),
				alignof(FBPInterfaceDescription),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC() { return 4008590593U; }
class UScriptStruct* FBPVariableDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableDescription, Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableDescription"), sizeof(FBPVariableDescription), Get_Z_Construct_UScriptStruct_FBPVariableDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVariableDescription(FBPVariableDescription::StaticStruct, TEXT("/Script/Engine"), TEXT("BPVariableDescription"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription
{
	FScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVariableDescription")),new UScriptStruct::TCppStructOps<FBPVariableDescription>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVariableDescription"), sizeof(FBPVariableDescription), Get_Z_Construct_UScriptStruct_FBPVariableDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Struct indicating a variable in the generated class" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableDescription>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Optional new default value stored as string" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Metadata information for this variable" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray = { UE4CodeGen_Private::EPropertyClass::Array, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, MetaDataArray), METADATA_PARAMS(NewProp_MetaDataArray_MetaData, ARRAY_COUNT(NewProp_MetaDataArray_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationCondition_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationCondition = { UE4CodeGen_Private::EPropertyClass::Byte, "ReplicationCondition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, ReplicationCondition), Z_Construct_UEnum_CoreUObject_ELifetimeCondition, METADATA_PARAMS(NewProp_ReplicationCondition_MetaData, ARRAY_COUNT(NewProp_ReplicationCondition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepNotifyFunc_MetaData[] = {
				{ "Category", "BPVariableRepNotify" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RepNotifyFunc = { UE4CodeGen_Private::EPropertyClass::Name, "RepNotifyFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, RepNotifyFunc), METADATA_PARAMS(NewProp_RepNotifyFunc_MetaData, ARRAY_COUNT(NewProp_RepNotifyFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyFlags_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Property flags for this variable - Changed from int32 to uint64" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_PropertyFlags = { UE4CodeGen_Private::EPropertyClass::UInt64, "PropertyFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, PropertyFlags), METADATA_PARAMS(NewProp_PropertyFlags_MetaData, ARRAY_COUNT(NewProp_PropertyFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Category this variable should be in" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category = { UE4CodeGen_Private::EPropertyClass::Text, "Category", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, Category), METADATA_PARAMS(NewProp_Category_MetaData, ARRAY_COUNT(NewProp_Category_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Friendly name of the variable" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, FriendlyName), METADATA_PARAMS(NewProp_FriendlyName_MetaData, ARRAY_COUNT(NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarType_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Type of the variable" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarType = { UE4CodeGen_Private::EPropertyClass::Struct, "VarType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, VarType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(NewProp_VarType_MetaData, ARRAY_COUNT(NewProp_VarType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "A Guid that will remain constant even if the VarName changes" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "VarGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, VarGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_VarGuid_MetaData, ARRAY_COUNT(NewProp_VarGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[] = {
				{ "Category", "BPVariableDescription" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Name of the variable" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_VarName = { UE4CodeGen_Private::EPropertyClass::Name, "VarName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableDescription, VarName), METADATA_PARAMS(NewProp_VarName_MetaData, ARRAY_COUNT(NewProp_VarName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationCondition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RepNotifyFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Category,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FriendlyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VarType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VarGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VarName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPVariableDescription",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPVariableDescription),
				alignof(FBPVariableDescription),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_CRC() { return 2834645439U; }
class UScriptStruct* FBPVariableMetaDataEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableMetaDataEntry"), sizeof(FBPVariableMetaDataEntry), Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVariableMetaDataEntry(FBPVariableMetaDataEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("BPVariableMetaDataEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVariableMetaDataEntry")),new UScriptStruct::TCppStructOps<FBPVariableMetaDataEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVariableMetaDataEntry"), sizeof(FBPVariableMetaDataEntry), Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "One metadata entry for a variable" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableMetaDataEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataValue_MetaData[] = {
				{ "Category", "BPVariableMetaDataEntry" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Name of metadata value" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataValue = { UE4CodeGen_Private::EPropertyClass::Str, "DataValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataValue), METADATA_PARAMS(NewProp_DataValue_MetaData, ARRAY_COUNT(NewProp_DataValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[] = {
				{ "Category", "BPVariableMetaDataEntry" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Name of metadata key" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataKey = { UE4CodeGen_Private::EPropertyClass::Name, "DataKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataKey), METADATA_PARAMS(NewProp_DataKey_MetaData, ARRAY_COUNT(NewProp_DataKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataKey,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPVariableMetaDataEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPVariableMetaDataEntry),
				alignof(FBPVariableMetaDataEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC() { return 4276457635U; }
class UScriptStruct* FBlueprintMacroCosmeticInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintMacroCosmeticInfo"), sizeof(FBlueprintMacroCosmeticInfo), Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintMacroCosmeticInfo(FBlueprintMacroCosmeticInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintMacroCosmeticInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintMacroCosmeticInfo")),new UScriptStruct::TCppStructOps<FBlueprintMacroCosmeticInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintMacroCosmeticInfo"), sizeof(FBlueprintMacroCosmeticInfo), Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Cached 'cosmetic' information about a macro graph (this is transient and is computed at load)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintMacroCosmeticInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintMacroCosmeticInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBlueprintMacroCosmeticInfo),
				alignof(FBlueprintMacroCosmeticInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC() { return 2054226037U; }
class UScriptStruct* FCompilerNativizationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompilerNativizationOptions, Z_Construct_UPackage__Script_Engine(), TEXT("CompilerNativizationOptions"), sizeof(FCompilerNativizationOptions), Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompilerNativizationOptions(FCompilerNativizationOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("CompilerNativizationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompilerNativizationOptions")),new UScriptStruct::TCppStructOps<FCompilerNativizationOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompilerNativizationOptions"), sizeof(FCompilerNativizationOptions), Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompilerNativizationOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedFolderPaths_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Excluded folders. It excludes only BPGCs, enums and structures are still converted." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedFolderPaths = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludedFolderPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedFolderPaths), METADATA_PARAMS(NewProp_ExcludedFolderPaths_MetaData, ARRAY_COUNT(NewProp_ExcludedFolderPaths_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedFolderPaths_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ExcludedFolderPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedAssets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Individually excluded assets" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_ExcludedAssets = { UE4CodeGen_Private::EPropertyClass::Set, "ExcludedAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedAssets), METADATA_PARAMS(NewProp_ExcludedAssets_MetaData, ARRAY_COUNT(NewProp_ExcludedAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludedAssets_ElementProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ExcludedAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedModules = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludedModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedModules), METADATA_PARAMS(NewProp_ExcludedModules_MetaData, ARRAY_COUNT(NewProp_ExcludedModules_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExcludedModules_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ExcludedModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientOnlyPlatform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			auto NewProp_ClientOnlyPlatform_SetBit = [](void* Obj){ ((FCompilerNativizationOptions*)Obj)->ClientOnlyPlatform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientOnlyPlatform = { UE4CodeGen_Private::EPropertyClass::Bool, "ClientOnlyPlatform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCompilerNativizationOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClientOnlyPlatform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClientOnlyPlatform_MetaData, ARRAY_COUNT(NewProp_ClientOnlyPlatform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerOnlyPlatform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			auto NewProp_ServerOnlyPlatform_SetBit = [](void* Obj){ ((FCompilerNativizationOptions*)Obj)->ServerOnlyPlatform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerOnlyPlatform = { UE4CodeGen_Private::EPropertyClass::Bool, "ServerOnlyPlatform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCompilerNativizationOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ServerOnlyPlatform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ServerOnlyPlatform_MetaData, ARRAY_COUNT(NewProp_ServerOnlyPlatform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformName = { UE4CodeGen_Private::EPropertyClass::Name, "PlatformName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompilerNativizationOptions, PlatformName), METADATA_PARAMS(NewProp_PlatformName_MetaData, ARRAY_COUNT(NewProp_PlatformName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedFolderPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedFolderPaths_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedAssets_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludedModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientOnlyPlatform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerOnlyPlatform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CompilerNativizationOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCompilerNativizationOptions),
				alignof(FCompilerNativizationOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC() { return 1163566231U; }
	void UBlueprint::StaticRegisterNativesUBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UBlueprint_NoRegister()
	{
		return UBlueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintCore,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/Blueprint.h" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Blueprints are special assets that provide an intuitive, node-based interface that can be used to create new types of Actors\nand script level events; giving designers and gameplay programmers the tools to quickly create and iterate gameplay from\nwithin Unreal Editor without ever needing to write a line of code." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNativize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Deprecated properties." },
			};
#endif
			auto NewProp_bNativize_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bNativize_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNativize = { UE4CodeGen_Private::EPropertyClass::Bool, "bNativize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNativize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNativize_MetaData, ARRAY_COUNT(NewProp_bNativize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "If this BP is just a duplicate created for a specific compilation, the reference to original GeneratedClass is needed" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_OriginalClass = { UE4CodeGen_Private::EPropertyClass::Class, "OriginalClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(UBlueprint, OriginalClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_OriginalClass_MetaData, ARRAY_COUNT(NewProp_OriginalClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledSignature_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledSignature = { UE4CodeGen_Private::EPropertyClass::UInt32, "CrcLastCompiledSignature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(UBlueprint, CrcLastCompiledSignature), METADATA_PARAMS(NewProp_CrcLastCompiledSignature_MetaData, ARRAY_COUNT(NewProp_CrcLastCompiledSignature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledCDO_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "CRC for CDO calculated right after the latest compilation used by Reinstancer to check if default values were changed" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledCDO = { UE4CodeGen_Private::EPropertyClass::UInt32, "CrcLastCompiledCDO", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(UBlueprint, CrcLastCompiledCDO), METADATA_PARAMS(NewProp_CrcLastCompiledCDO_MetaData, ARRAY_COUNT(NewProp_CrcLastCompiledCDO_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBeingCompiled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The blueprint is currently compiled" },
			};
#endif
			auto NewProp_bBeingCompiled_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bBeingCompiled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBeingCompiled = { UE4CodeGen_Private::EPropertyClass::Bool, "bBeingCompiled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBeingCompiled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBeingCompiled_MetaData, ARRAY_COUNT(NewProp_bBeingCompiled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UBlueprint, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldToNewComponentTemplateNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Maps old to new component template names" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_OldToNewComponentTemplateNames = { UE4CodeGen_Private::EPropertyClass::Map, "OldToNewComponentTemplateNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprint, OldToNewComponentTemplateNames), METADATA_PARAMS(NewProp_OldToNewComponentTemplateNames_MetaData, ARRAY_COUNT(NewProp_OldToNewComponentTemplateNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "OldToNewComponentTemplateNames_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_ValueProp = { UE4CodeGen_Private::EPropertyClass::Name, "OldToNewComponentTemplateNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplateNameIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Index map for component template names" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ComponentTemplateNameIndex = { UE4CodeGen_Private::EPropertyClass::Map, "ComponentTemplateNameIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, ComponentTemplateNameIndex), METADATA_PARAMS(NewProp_ComponentTemplateNameIndex_MetaData, ARRAY_COUNT(NewProp_ComponentTemplateNameIndex_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentTemplateNameIndex_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ComponentTemplateNameIndex_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentTemplateNameIndex_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentTemplateNameIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPinWatches_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPinWatches = { UE4CodeGen_Private::EPropertyClass::Array, "DeprecatedPinWatches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, DeprecatedPinWatches), METADATA_PARAMS(NewProp_DeprecatedPinWatches_MetaData, ARRAY_COUNT(NewProp_DeprecatedPinWatches_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPinWatches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DeprecatedPinWatches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchedPins_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WatchedPins = { UE4CodeGen_Private::EPropertyClass::Array, "WatchedPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, WatchedPins), METADATA_PARAMS(NewProp_WatchedPins_MetaData, ARRAY_COUNT(NewProp_WatchedPins_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WatchedPins_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WatchedPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Breakpoints_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Persistent debugging options" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Breakpoints = { UE4CodeGen_Private::EPropertyClass::Array, "Breakpoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, Breakpoints), METADATA_PARAMS(NewProp_Breakpoints_MetaData, ARRAY_COUNT(NewProp_Breakpoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Breakpoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Breakpoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UBreakpoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of documents that were being edited in this blueprint, so we can open them right away" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments = { UE4CodeGen_Private::EPropertyClass::Array, "LastEditedDocuments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, LastEditedDocuments), METADATA_PARAMS(NewProp_LastEditedDocuments_MetaData, ARRAY_COUNT(NewProp_LastEditedDocuments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LastEditedDocuments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintSystemVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The version of the blueprint system that was used to  create this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueprintSystemVersion = { UE4CodeGen_Private::EPropertyClass::Int, "BlueprintSystemVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, BlueprintSystemVersion), METADATA_PARAMS(NewProp_BlueprintSystemVersion_MetaData, ARRAY_COUNT(NewProp_BlueprintSystemVersion_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplementedInterfaces_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Array of info about the interfaces we implement in this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImplementedInterfaces = { UE4CodeGen_Private::EPropertyClass::Array, "ImplementedInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, ImplementedInterfaces), METADATA_PARAMS(NewProp_ImplementedInterfaces_MetaData, ARRAY_COUNT(NewProp_ImplementedInterfaces_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImplementedInterfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ImplementedInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPInterfaceDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySorting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Array of user sorted categories" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategorySorting = { UE4CodeGen_Private::EPropertyClass::Array, "CategorySorting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, CategorySorting), METADATA_PARAMS(NewProp_CategorySorting_MetaData, ARRAY_COUNT(NewProp_CategorySorting_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategorySorting_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CategorySorting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVariables_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Array of new variables to be added to generated class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewVariables = { UE4CodeGen_Private::EPropertyClass::Array, "NewVariables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, NewVariables), METADATA_PARAMS(NewProp_NewVariables_MetaData, ARRAY_COUNT(NewProp_NewVariables_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVariables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVariables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The current status of this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Byte, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprint, Status), Z_Construct_UEnum_Engine_EBlueprintStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The type of this blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintType = { UE4CodeGen_Private::EPropertyClass::Byte, "BlueprintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(NewProp_BlueprintType_MetaData, ARRAY_COUNT(NewProp_BlueprintType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler = { UE4CodeGen_Private::EPropertyClass::Object, "InheritableComponentHandler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(NewProp_InheritableComponentHandler_MetaData, ARRAY_COUNT(NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Array of templates for timelines that should be created" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Timelines = { UE4CodeGen_Private::EPropertyClass::Array, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, Timelines), METADATA_PARAMS(NewProp_Timelines_MetaData, ARRAY_COUNT(NewProp_Timelines_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Array of component template objects, used by AddComponent function" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UBlueprint, ComponentTemplates), METADATA_PARAMS(NewProp_ComponentTemplates_MetaData, ARRAY_COUNT(NewProp_ComponentTemplates_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDuplicatingReadOnly_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Flag indicating that a read only duplicate of this blueprint is being created, used to disable logic in ::PostDuplicate,\n\nThis flag needs to be copied on duplication (because it's the duplicated object that we're disabling on PostDuplicate),\nbut we don't *need* to serialize it for permanent objects.\n\nWithout setting this flag a blueprint will be marked dirty when it is duplicated and if saved while in this dirty\nstate you will not be able to open the blueprint. More specifically, UClass::Rename (called by DestroyGeneratedClass)\nsets a dirty flag on the package. Once saved the package will fail to open because some unnamed objects are present in\nthe pacakge.\n\nThis flag can be used to avoid the package being marked as dirty in the first place. Ideally PostDuplicateObject\nwould not rename classes that are still in use by the original object." },
			};
#endif
			auto NewProp_bDuplicatingReadOnly_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bDuplicatingReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDuplicatingReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bDuplicatingReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDuplicatingReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDuplicatingReadOnly_MetaData, ARRAY_COUNT(NewProp_bDuplicatingReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PRIVATE_CachedMacroInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Cached cosmetic information about macro graphs, use GetCosmeticInfoForMacro() to access" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_PRIVATE_CachedMacroInfo = { UE4CodeGen_Private::EPropertyClass::Map, "PRIVATE_CachedMacroInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprint, PRIVATE_CachedMacroInfo), METADATA_PARAMS(NewProp_PRIVATE_CachedMacroInfo_MetaData, ARRAY_COUNT(NewProp_PRIVATE_CachedMacroInfo_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "PRIVATE_CachedMacroInfo_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PRIVATE_CachedMacroInfo_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "PRIVATE_CachedMacroInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of functions actually compiled for this class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "EventGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(UBlueprint, EventGraphs), METADATA_PARAMS(NewProp_EventGraphs_MetaData, ARRAY_COUNT(NewProp_EventGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EventGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermediateGeneratedGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of functions actually compiled for this class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntermediateGeneratedGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "IntermediateGeneratedGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800202000, 1, nullptr, STRUCT_OFFSET(UBlueprint, IntermediateGeneratedGraphs), METADATA_PARAMS(NewProp_IntermediateGeneratedGraphs_MetaData, ARRAY_COUNT(NewProp_IntermediateGeneratedGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IntermediateGeneratedGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "IntermediateGeneratedGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of macros implemented for this class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MacroGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "MacroGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, MacroGraphs), METADATA_PARAMS(NewProp_MacroGraphs_MetaData, ARRAY_COUNT(NewProp_MacroGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MacroGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MacroGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateSignatureGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Graphs of signatures for delegates" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DelegateSignatureGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "DelegateSignatureGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, DelegateSignatureGraphs), METADATA_PARAMS(NewProp_DelegateSignatureGraphs_MetaData, ARRAY_COUNT(NewProp_DelegateSignatureGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DelegateSignatureGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DelegateSignatureGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of functions implemented for this class graphically" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "FunctionGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, FunctionGraphs), METADATA_PARAMS(NewProp_FunctionGraphs_MetaData, ARRAY_COUNT(NewProp_FunctionGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FunctionGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UbergraphPages_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Set of pages that combine into a single uber-graph" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UbergraphPages = { UE4CodeGen_Private::EPropertyClass::Array, "UbergraphPages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, UbergraphPages), METADATA_PARAMS(NewProp_UbergraphPages_MetaData, ARRAY_COUNT(NewProp_UbergraphPages_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UbergraphPages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UbergraphPages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "'Simple' construction script - graph of components to instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript = { UE4CodeGen_Private::EPropertyClass::Object, "SimpleConstructionScript", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(NewProp_SimpleConstructionScript_MetaData, ARRAY_COUNT(NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileMode_MetaData[] = {
				{ "Category", "ClassOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The mode that will be used when compiling this class." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompileMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CompileMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(UBlueprint, CompileMode), Z_Construct_UEnum_Engine_EBlueprintCompileMode, METADATA_PARAMS(NewProp_CompileMode_MetaData, ARRAY_COUNT(NewProp_CompileMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompileMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeprecate_MetaData[] = {
				{ "Category", "ClassOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Deprecates the Blueprint, marking the generated class with the CLASS_Deprecated flag" },
			};
#endif
			auto NewProp_bDeprecate_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bDeprecate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeprecate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDeprecate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDeprecate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDeprecate_MetaData, ARRAY_COUNT(NewProp_bDeprecate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Guid key for finding searchable data for Blueprint in the DDC" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, SearchGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SearchGuid_MetaData, ARRAY_COUNT(NewProp_SearchGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayCompilePIEWarning_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "TRUE to show a warning when attempting to start in PIE and there is a compiler error on this Blueprint" },
			};
#endif
			auto NewProp_bDisplayCompilePIEWarning_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bDisplayCompilePIEWarning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayCompilePIEWarning = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayCompilePIEWarning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayCompilePIEWarning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayCompilePIEWarning_MetaData, ARRAY_COUNT(NewProp_bDisplayCompilePIEWarning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativizationFlag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "When exclusive nativization is enabled, then this asset will be nativized. All super classes must be also nativized." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NativizationFlag = { UE4CodeGen_Private::EPropertyClass::Enum, "NativizationFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprint, NativizationFlag), Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, METADATA_PARAMS(NewProp_NativizationFlag_MetaData, ARRAY_COUNT(NewProp_NativizationFlag_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NativizationFlag_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideCategories_MetaData[] = {
				{ "Category", "BlueprintOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Additional HideCategories. These are added to HideCategories from parent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HideCategories = { UE4CodeGen_Private::EPropertyClass::Array, "HideCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UBlueprint, HideCategories), METADATA_PARAMS(NewProp_HideCategories_MetaData, ARRAY_COUNT(NewProp_HideCategories_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HideCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HideCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintCategory_MetaData[] = {
				{ "Category", "BlueprintOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "The category of the Blueprint, used to organize this Blueprint class when displayed in palette windows" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintCategory = { UE4CodeGen_Private::EPropertyClass::Str, "BlueprintCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UBlueprint, BlueprintCategory), METADATA_PARAMS(NewProp_BlueprintCategory_MetaData, ARRAY_COUNT(NewProp_BlueprintCategory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintDescription_MetaData[] = {
				{ "Category", "BlueprintOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "MultiLine", "TRUE" },
				{ "ToolTip", "shows up in the content browser when the blueprint is hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintDescription = { UE4CodeGen_Private::EPropertyClass::Str, "BlueprintDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UBlueprint, BlueprintDescription), METADATA_PARAMS(NewProp_BlueprintDescription_MetaData, ARRAY_COUNT(NewProp_BlueprintDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateAbstractClass_MetaData[] = {
				{ "Category", "ClassOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Whether or not this blueprint's class is a abstract class or not.  Should set CLASS_Abstract in the KismetCompiler." },
			};
#endif
			auto NewProp_bGenerateAbstractClass_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bGenerateAbstractClass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateAbstractClass = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateAbstractClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateAbstractClass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateAbstractClass_MetaData, ARRAY_COUNT(NewProp_bGenerateAbstractClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateConstClass_MetaData[] = {
				{ "Category", "ClassOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Whether or not this blueprint's class is a const class or not.  Should set CLASS_Const in the KismetCompiler." },
			};
#endif
			auto NewProp_bGenerateConstClass_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bGenerateConstClass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateConstClass = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateConstClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateConstClass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateConstClass_MetaData, ARRAY_COUNT(NewProp_bGenerateConstClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptInSequencer_MetaData[] = {
				{ "Category", "BlueprintOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor in sequencer" },
			};
#endif
			auto NewProp_bRunConstructionScriptInSequencer_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bRunConstructionScriptInSequencer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptInSequencer = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunConstructionScriptInSequencer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunConstructionScriptInSequencer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunConstructionScriptInSequencer_MetaData, ARRAY_COUNT(NewProp_bRunConstructionScriptInSequencer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptOnDrag_MetaData[] = {
				{ "Category", "BlueprintOptions" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor as you drag it in the editor, or only when the drag operation is complete" },
			};
#endif
			auto NewProp_bRunConstructionScriptOnDrag_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bRunConstructionScriptOnDrag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptOnDrag = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunConstructionScriptOnDrag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunConstructionScriptOnDrag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunConstructionScriptOnDrag_MetaData, ARRAY_COUNT(NewProp_bRunConstructionScriptOnDrag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQueuedForCompilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			auto NewProp_bQueuedForCompilation_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bQueuedForCompilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQueuedForCompilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bQueuedForCompilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bQueuedForCompilation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bQueuedForCompilation_MetaData, ARRAY_COUNT(NewProp_bQueuedForCompilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFullEditor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Whether to force opening the full (non data-only) editor for this blueprint." },
			};
#endif
			auto NewProp_bForceFullEditor_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bForceFullEditor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFullEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFullEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceFullEditor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceFullEditor_MetaData, ARRAY_COUNT(NewProp_bForceFullEditor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNewlyCreated_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Whether or not this blueprint is newly created, and hasn't been opened in an editor yet" },
			};
#endif
			auto NewProp_bIsNewlyCreated_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bIsNewlyCreated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNewlyCreated = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNewlyCreated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsNewlyCreated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsNewlyCreated_MetaData, ARRAY_COUNT(NewProp_bIsNewlyCreated_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRegeneratingOnLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "State flag to indicate whether or not the Blueprint is currently being regenerated on load" },
			};
#endif
			auto NewProp_bIsRegeneratingOnLoad_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bIsRegeneratingOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRegeneratingOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRegeneratingOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRegeneratingOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRegeneratingOnLoad_MetaData, ARRAY_COUNT(NewProp_bIsRegeneratingOnLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenRegenerated_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "When the class generated by this blueprint is loaded, it will be recompiled the first time.  After that initial recompile, subsequent loads will skip the regeneration step" },
			};
#endif
			auto NewProp_bHasBeenRegenerated_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bHasBeenRegenerated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenRegenerated = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBeenRegenerated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBeenRegenerated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBeenRegenerated_MetaData, ARRAY_COUNT(NewProp_bHasBeenRegenerated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PRIVATE_InnermostPreviousCDO_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PRIVATE_InnermostPreviousCDO = { UE4CodeGen_Private::EPropertyClass::Object, "PRIVATE_InnermostPreviousCDO", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UBlueprint, PRIVATE_InnermostPreviousCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_PRIVATE_InnermostPreviousCDO_MetaData, ARRAY_COUNT(NewProp_PRIVATE_InnermostPreviousCDO_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Pointer to the parent class that the generated class should derive from. This *can* be null under rare circumstances,\none such case can be created by creating a blueprint (A) based on another blueprint (B), shutting down the editor, and\ndeleting the parent blueprint." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass = { UE4CodeGen_Private::EPropertyClass::Class, "ParentClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014010000000000, 1, nullptr, STRUCT_OFFSET(UBlueprint, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ParentClass_MetaData, ARRAY_COUNT(NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecompileOnLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Whether or not this blueprint should recompile itself on load" },
			};
#endif
			auto NewProp_bRecompileOnLoad_SetBit = [](void* Obj){ ((UBlueprint*)Obj)->bRecompileOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecompileOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecompileOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecompileOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecompileOnLoad_MetaData, ARRAY_COUNT(NewProp_bRecompileOnLoad_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNativize,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrcLastCompiledSignature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrcLastCompiledCDO,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBeingCompiled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldToNewComponentTemplateNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldToNewComponentTemplateNames_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldToNewComponentTemplateNames_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplateNameIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplateNameIndex_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplateNameIndex_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeprecatedPinWatches,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeprecatedPinWatches_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WatchedPins,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WatchedPins_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Breakpoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Breakpoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastEditedDocuments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastEditedDocuments_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintSystemVersion,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImplementedInterfaces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImplementedInterfaces_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategorySorting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategorySorting_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVariables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVariables_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritableComponentHandler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timelines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timelines_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTemplates_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDuplicatingReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PRIVATE_CachedMacroInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PRIVATE_CachedMacroInfo_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventGraphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntermediateGeneratedGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntermediateGeneratedGraphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroGraphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelegateSignatureGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelegateSignatureGraphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionGraphs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UbergraphPages,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UbergraphPages_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleConstructionScript,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompileMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompileMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDeprecate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayCompilePIEWarning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NativizationFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NativizationFlag_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HideCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HideCategories_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateAbstractClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateConstClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunConstructionScriptInSequencer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunConstructionScriptOnDrag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bQueuedForCompilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceFullEditor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsNewlyCreated,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRegeneratingOnLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBeenRegenerated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PRIVATE_InnermostPreviousCDO,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecompileOnLoad,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprint, 295106192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprint(Z_Construct_UClass_UBlueprint, &UBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
