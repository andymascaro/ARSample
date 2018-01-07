// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/ConsoleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleSettings() {}
// Cross Module References
	ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteCommand, Z_Construct_UPackage__Script_EngineSettings(), TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoCompleteCommand(FAutoCompleteCommand::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("AutoCompleteCommand"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoCompleteCommand")),new UScriptStruct::TCppStructOps<FAutoCompleteCommand>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand;
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Structure for auto-complete commands and their descriptions." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteCommand>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
				{ "Category", "Command" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc = { UE4CodeGen_Private::EPropertyClass::Str, "Desc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FAutoCompleteCommand, Desc), METADATA_PARAMS(NewProp_Desc_MetaData, ARRAY_COUNT(NewProp_Desc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
				{ "Category", "Command" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command = { UE4CodeGen_Private::EPropertyClass::Str, "Command", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FAutoCompleteCommand, Command), METADATA_PARAMS(NewProp_Command_MetaData, ARRAY_COUNT(NewProp_Command_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Desc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Command,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutoCompleteCommand",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutoCompleteCommand),
				alignof(FAutoCompleteCommand),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC() { return 387168322U; }
	void UConsoleSettings::StaticRegisterNativesUConsoleSettings()
	{
	}
	UClass* Z_Construct_UClass_UConsoleSettings_NoRegister()
	{
		return UConsoleSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UConsoleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ConsoleSettings.h" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Implements the settings for the UConsole class." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteFadedColor_MetaData[] = {
				{ "Category", "Colors" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "The autocomplete color used for command descriptions and read-only CVars." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteFadedColor = { UE4CodeGen_Private::EPropertyClass::Struct, "AutoCompleteFadedColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteFadedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_AutoCompleteFadedColor_MetaData, ARRAY_COUNT(NewProp_AutoCompleteFadedColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCVarColor_MetaData[] = {
				{ "Category", "Colors" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "The autocomplete color used for mutable CVars." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCVarColor = { UE4CodeGen_Private::EPropertyClass::Struct, "AutoCompleteCVarColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCVarColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_AutoCompleteCVarColor_MetaData, ARRAY_COUNT(NewProp_AutoCompleteCVarColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCommandColor_MetaData[] = {
				{ "Category", "Colors" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "The autocomplete color used for executable commands." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCommandColor = { UE4CodeGen_Private::EPropertyClass::Struct, "AutoCompleteCommandColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCommandColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_AutoCompleteCommandColor_MetaData, ARRAY_COUNT(NewProp_AutoCompleteCommandColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[] = {
				{ "Category", "Colors" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "The color used for the previously typed commands history." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HistoryColor = { UE4CodeGen_Private::EPropertyClass::Struct, "HistoryColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, HistoryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_HistoryColor_MetaData, ARRAY_COUNT(NewProp_HistoryColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputColor_MetaData[] = {
				{ "Category", "Colors" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "The color used for text input." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InputColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, InputColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_InputColor_MetaData, ARRAY_COUNT(NewProp_InputColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrderTopToBottom_MetaData[] = {
				{ "Category", "AutoComplete" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering" },
			};
#endif
			auto NewProp_bOrderTopToBottom_SetBit = [](void* Obj){ ((UConsoleSettings*)Obj)->bOrderTopToBottom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrderTopToBottom = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrderTopToBottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UConsoleSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOrderTopToBottom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOrderTopToBottom_MetaData, ARRAY_COUNT(NewProp_bOrderTopToBottom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundOpacityPercentage_MetaData[] = {
				{ "Category", "Colors" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Amount of transparency of the console background." },
				{ "UIMax", "100" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackgroundOpacityPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "BackgroundOpacityPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, BackgroundOpacityPercentage), METADATA_PARAMS(NewProp_BackgroundOpacityPercentage_MetaData, ARRAY_COUNT(NewProp_BackgroundOpacityPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteMapPaths_MetaData[] = {
				{ "Category", "AutoComplete" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteMapPaths = { UE4CodeGen_Private::EPropertyClass::Array, "AutoCompleteMapPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteMapPaths), METADATA_PARAMS(NewProp_AutoCompleteMapPaths_MetaData, ARRAY_COUNT(NewProp_AutoCompleteMapPaths_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutoCompleteMapPaths_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AutoCompleteMapPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualAutoCompleteList_MetaData[] = {
				{ "Category", "AutoComplete" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Manual list of auto-complete commands and info specified in BaseInput.ini" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManualAutoCompleteList = { UE4CodeGen_Private::EPropertyClass::Array, "ManualAutoCompleteList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, ManualAutoCompleteList), METADATA_PARAMS(NewProp_ManualAutoCompleteList_MetaData, ARRAY_COUNT(NewProp_ManualAutoCompleteList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualAutoCompleteList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ManualAutoCompleteList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutoCompleteCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScrollbackSize_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
				{ "ToolTip", "Visible Console stuff" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScrollbackSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxScrollbackSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UConsoleSettings, MaxScrollbackSize), METADATA_PARAMS(NewProp_MaxScrollbackSize_MetaData, ARRAY_COUNT(NewProp_MaxScrollbackSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteFadedColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteCVarColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteCommandColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HistoryColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOrderTopToBottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundOpacityPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteMapPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoCompleteMapPaths_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualAutoCompleteList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualAutoCompleteList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScrollbackSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UConsoleSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UConsoleSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UConsoleSettings, 1760654458);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleSettings(Z_Construct_UClass_UConsoleSettings, &UConsoleSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UConsoleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
