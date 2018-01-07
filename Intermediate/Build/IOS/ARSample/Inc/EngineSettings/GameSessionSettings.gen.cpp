// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameSessionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSessionSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameSessionSettings::StaticRegisterNativesUGameSessionSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister()
	{
		return UGameSessionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSessionSettings()
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
				{ "IncludePath", "GameSessionSettings.h" },
				{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[] = {
				{ "Category", "GameSessionSettings" },
				{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
				{ "ToolTip", "Is voice enabled always or via a push to talk key binding." },
			};
#endif
			auto NewProp_bRequiresPushToTalk_SetBit = [](void* Obj){ ((UGameSessionSettings*)Obj)->bRequiresPushToTalk = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequiresPushToTalk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGameSessionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequiresPushToTalk_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRequiresPushToTalk_MetaData, ARRAY_COUNT(NewProp_bRequiresPushToTalk_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
				{ "Category", "GameSessionSettings" },
				{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
				{ "ToolTip", "Maximum number of players allowed by this server." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameSessionSettings, MaxPlayers), METADATA_PARAMS(NewProp_MaxPlayers_MetaData, ARRAY_COUNT(NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[] = {
				{ "Category", "GameSessionSettings" },
				{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
				{ "ToolTip", "Maximum number of spectators allowed by this server." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectators = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSpectators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameSessionSettings, MaxSpectators), METADATA_PARAMS(NewProp_MaxSpectators_MetaData, ARRAY_COUNT(NewProp_MaxSpectators_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequiresPushToTalk,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpectators,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameSessionSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameSessionSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSessionSettings, 1203900177);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSessionSettings(Z_Construct_UClass_UGameSessionSettings, &UGameSessionSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameSessionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
