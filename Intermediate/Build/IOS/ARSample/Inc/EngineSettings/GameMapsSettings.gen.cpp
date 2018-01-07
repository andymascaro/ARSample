// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameMapsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMapsSettings() {}
// Cross Module References
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType();
	ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* EThreePlayerSplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("EThreePlayerSplitScreenType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThreePlayerSplitScreenType(EThreePlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("EThreePlayerSplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_CRC() { return 901859000U; }
	UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThreePlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThreePlayerSplitScreenType::FavorTop", (int64)EThreePlayerSplitScreenType::FavorTop },
				{ "EThreePlayerSplitScreenType::FavorBottom", (int64)EThreePlayerSplitScreenType::FavorBottom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Ways the screen can be split with three players." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EThreePlayerSplitScreenType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EThreePlayerSplitScreenType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETwoPlayerSplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("ETwoPlayerSplitScreenType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwoPlayerSplitScreenType(ETwoPlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("ETwoPlayerSplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_CRC() { return 3436488683U; }
	UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwoPlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETwoPlayerSplitScreenType::Horizontal", (int64)ETwoPlayerSplitScreenType::Horizontal },
				{ "ETwoPlayerSplitScreenType::Vertical", (int64)ETwoPlayerSplitScreenType::Vertical },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Ways the screen can be split with two players." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETwoPlayerSplitScreenType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETwoPlayerSplitScreenType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameModeName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeName, Z_Construct_UPackage__Script_EngineSettings(), TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeName(FGameModeName::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("GameModeName"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeName")),new UScriptStruct::TCppStructOps<FGameModeName>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName;
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Helper structure, used to associate GameModes with shortcut names." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "MetaClass", "GameModeBase" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "GameMode class to load" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameMode = { UE4CodeGen_Private::EPropertyClass::Struct, "GameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameModeName, GameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_GameMode_MetaData, ARRAY_COUNT(NewProp_GameMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "MetaClass", "GameModeBase" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Abbreviation/prefix that can be used as an alias for the class name" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameModeName, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameModeName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameModeName),
				alignof(FGameModeName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeName_CRC() { return 3437507425U; }
	void UGameMapsSettings::StaticRegisterNativesUGameMapsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister()
	{
		return UGameMapsSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameMapsSettings()
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
				{ "IncludePath", "GameMapsSettings.h" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeClassAliases_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "List of GameModes to load when game= is specified in the URL (e.g. \"DM\" could be an alias for \"MyProject.MyGameModeMP_DM\")" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModeClassAliases = { UE4CodeGen_Private::EPropertyClass::Array, "GameModeClassAliases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GameModeClassAliases), METADATA_PARAMS(NewProp_GameModeClassAliases_MetaData, ARRAY_COUNT(NewProp_GameModeClassAliases_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeClassAliases_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameModeClassAliases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeMapPrefixes_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Overrides the GameMode to use when loading a map that starts with a specific prefix" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModeMapPrefixes = { UE4CodeGen_Private::EPropertyClass::Array, "GameModeMapPrefixes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GameModeMapPrefixes), METADATA_PARAMS(NewProp_GameModeMapPrefixes_MetaData, ARRAY_COUNT(NewProp_GameModeMapPrefixes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeMapPrefixes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameModeMapPrefixes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultServerGameMode_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "MetaClass", "GameModeBase" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS)\nIf not set, the GlobalDefaultGameMode value will be used." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultServerGameMode = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalDefaultServerGameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultServerGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_GlobalDefaultServerGameMode_MetaData, ARRAY_COUNT(NewProp_GlobalDefaultServerGameMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultGameMode_MetaData[] = {
				{ "Category", "DefaultModes" },
				{ "DisplayName", "Default GameMode" },
				{ "MetaClass", "GameModeBase" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultGameMode = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalDefaultGameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000002004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_GlobalDefaultGameMode_MetaData, ARRAY_COUNT(NewProp_GlobalDefaultGameMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDefaultMap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "DefaultMaps" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The map that will be loaded by default when no other map is loaded (DEDICATED SERVER)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerDefaultMap = { UE4CodeGen_Private::EPropertyClass::Struct, "ServerDefaultMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, ServerDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_ServerDefaultMap_MetaData, ARRAY_COUNT(NewProp_ServerDefaultMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDefaultMap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "DefaultMaps" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The map that will be loaded by default when no other map is loaded." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameDefaultMap = { UE4CodeGen_Private::EPropertyClass::Struct, "GameDefaultMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GameDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_GameDefaultMap_MetaData, ARRAY_COUNT(NewProp_GameDefaultMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceClass_MetaData[] = {
				{ "Category", "GameInstance" },
				{ "MetaClass", "GameInstance" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The class to use when instantiating the transient GameInstance class" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameInstanceClass = { UE4CodeGen_Private::EPropertyClass::Struct, "GameInstanceClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, GameInstanceClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_GameInstanceClass_MetaData, ARRAY_COUNT(NewProp_GameInstanceClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetPlayerGamepadIds_MetaData[] = {
				{ "Category", "LocalMultiplayer" },
				{ "DisplayName", "Skip Assigning Gamepad to Player 1" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games.\nIn PIE sessions with multiple windows, this has the same effect as enabling \"Route 1st Gamepad to 2nd Client\"" },
			};
#endif
			auto NewProp_bOffsetPlayerGamepadIds_SetBit = [](void* Obj){ ((UGameMapsSettings*)Obj)->bOffsetPlayerGamepadIds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetPlayerGamepadIds = { UE4CodeGen_Private::EPropertyClass::Bool, "bOffsetPlayerGamepadIds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameMapsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOffsetPlayerGamepadIds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOffsetPlayerGamepadIds_MetaData, ARRAY_COUNT(NewProp_bOffsetPlayerGamepadIds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreePlayerSplitscreenLayout_MetaData[] = {
				{ "Category", "LocalMultiplayer" },
				{ "editcondition", "bUseSplitScreen" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The viewport layout to use if the screen should be split and there are three local players" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThreePlayerSplitscreenLayout = { UE4CodeGen_Private::EPropertyClass::Byte, "ThreePlayerSplitscreenLayout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, ThreePlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, METADATA_PARAMS(NewProp_ThreePlayerSplitscreenLayout_MetaData, ARRAY_COUNT(NewProp_ThreePlayerSplitscreenLayout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoPlayerSplitscreenLayout_MetaData[] = {
				{ "Category", "LocalMultiplayer" },
				{ "editcondition", "bUseSplitScreen" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The viewport layout to use if the screen should be split and there are two local players" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwoPlayerSplitscreenLayout = { UE4CodeGen_Private::EPropertyClass::Byte, "TwoPlayerSplitscreenLayout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, TwoPlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, METADATA_PARAMS(NewProp_TwoPlayerSplitscreenLayout_MetaData, ARRAY_COUNT(NewProp_TwoPlayerSplitscreenLayout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplitscreen_MetaData[] = {
				{ "Category", "LocalMultiplayer" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Whether the screen should be split or not when multiple local players are present" },
			};
#endif
			auto NewProp_bUseSplitscreen_SetBit = [](void* Obj){ ((UGameMapsSettings*)Obj)->bUseSplitscreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplitscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSplitscreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameMapsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSplitscreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSplitscreen_MetaData, ARRAY_COUNT(NewProp_bUseSplitscreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionMap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "DefaultMaps" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The map loaded when transition from one map to another." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionMap = { UE4CodeGen_Private::EPropertyClass::Struct, "TransitionMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, TransitionMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_TransitionMap_MetaData, ARRAY_COUNT(NewProp_TransitionMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalMapOptions_MetaData[] = {
				{ "Category", "DefaultMaps" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "The default options that will be appended to a map being loaded." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalMapOptions = { UE4CodeGen_Private::EPropertyClass::Str, "LocalMapOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, LocalMapOptions), METADATA_PARAMS(NewProp_LocalMapOptions_MetaData, ARRAY_COUNT(NewProp_LocalMapOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorStartupMap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "DefaultMaps" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "If set, this map will be loaded when the Editor starts up." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorStartupMap = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorStartupMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameMapsSettings, EditorStartupMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_EditorStartupMap_MetaData, ARRAY_COUNT(NewProp_EditorStartupMap_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeClassAliases,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeClassAliases_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeMapPrefixes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeMapPrefixes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalDefaultServerGameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalDefaultGameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerDefaultMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameDefaultMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameInstanceClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOffsetPlayerGamepadIds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThreePlayerSplitscreenLayout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwoPlayerSplitscreenLayout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSplitscreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalMapOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorStartupMap,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameMapsSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameMapsSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UGameMapsSettings, 2941305603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMapsSettings(Z_Construct_UClass_UGameMapsSettings, &UGameMapsSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameMapsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMapsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
