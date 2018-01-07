// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSection() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
// End Cross Module References
	static UEnum* EMovieSceneCompletionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneCompletionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneCompletionMode(EMovieSceneCompletionMode_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneCompletionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_CRC() { return 2145821528U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneCompletionMode"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneCompletionMode::KeepState", (int64)EMovieSceneCompletionMode::KeepState },
				{ "EMovieSceneCompletionMode::RestoreState", (int64)EMovieSceneCompletionMode::RestoreState },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Enumeration specifying how to handle state when this section is no longer evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneCompletionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneCompletionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneEasingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEasingSettings, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEasingSettings(FMovieSceneEasingSettings::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEasingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEasingSettings")),new UScriptStruct::TCppStructOps<FMovieSceneEasingSettings>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEasingSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseOutTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Manually override this section's ease-out time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ManualEaseOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseOutTime), METADATA_PARAMS(NewProp_ManualEaseOutTime_MetaData, ARRAY_COUNT(NewProp_ManualEaseOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseOut_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Whether to manually override this section's ease out time" },
			};
#endif
			auto NewProp_bManualEaseOut_SetBit = [](void* Obj){ ((FMovieSceneEasingSettings*)Obj)->bManualEaseOut = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualEaseOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneEasingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bManualEaseOut_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bManualEaseOut_MetaData, ARRAY_COUNT(NewProp_bManualEaseOut_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseOut_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseOut = { UE4CodeGen_Private::EPropertyClass::Interface, "EaseOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseOut), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(NewProp_EaseOut_MetaData, ARRAY_COUNT(NewProp_EaseOut_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseInTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Manually override this section's ease in time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseInTime = { UE4CodeGen_Private::EPropertyClass::Float, "ManualEaseInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseInTime), METADATA_PARAMS(NewProp_ManualEaseInTime_MetaData, ARRAY_COUNT(NewProp_ManualEaseInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseIn_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Whether to manually override this section's ease in time" },
			};
#endif
			auto NewProp_bManualEaseIn_SetBit = [](void* Obj){ ((FMovieSceneEasingSettings*)Obj)->bManualEaseIn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualEaseIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneEasingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bManualEaseIn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bManualEaseIn_MetaData, ARRAY_COUNT(NewProp_bManualEaseIn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseIn_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseIn = { UE4CodeGen_Private::EPropertyClass::Interface, "EaseIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseIn), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(NewProp_EaseIn_MetaData, ARRAY_COUNT(NewProp_EaseIn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseOutTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Automatically applied ease out time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "AutoEaseOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseOutTime), METADATA_PARAMS(NewProp_AutoEaseOutTime_MetaData, ARRAY_COUNT(NewProp_AutoEaseOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseInTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Automatically applied ease in time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseInTime = { UE4CodeGen_Private::EPropertyClass::Float, "AutoEaseInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseInTime), METADATA_PARAMS(NewProp_AutoEaseInTime_MetaData, ARRAY_COUNT(NewProp_AutoEaseInTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualEaseOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bManualEaseOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EaseOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualEaseInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bManualEaseIn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EaseIn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoEaseOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoEaseInTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEasingSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEasingSettings),
				alignof(FMovieSceneEasingSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC() { return 1655066522U; }
class UScriptStruct* FMovieSceneSectionEvalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionEvalOptions(FMovieSceneSectionEvalOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionEvalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSectionEvalOptions")),new UScriptStruct::TCppStructOps<FMovieSceneSectionEvalOptions>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionEvalOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[] = {
				{ "Category", "Section" },
				{ "DisplayName", "When Finished" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "When set to \"RestoreState\", this section will restore any animation back to its previous state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionEvalOptions, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(NewProp_CompletionMode_MetaData, ARRAY_COUNT(NewProp_CompletionMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEditCompletionMode_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			auto NewProp_bCanEditCompletionMode_SetBit = [](void* Obj){ ((FMovieSceneSectionEvalOptions*)Obj)->bCanEditCompletionMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEditCompletionMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEditCompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSectionEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanEditCompletionMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanEditCompletionMode_MetaData, ARRAY_COUNT(NewProp_bCanEditCompletionMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanEditCompletionMode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSectionEvalOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSectionEvalOptions),
				alignof(FMovieSceneSectionEvalOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC() { return 3768599183U; }
	void UMovieSceneSection::StaticRegisterNativesUMovieSceneSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister()
	{
		return UMovieSceneSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneSection.h" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Base class for movie scene sections" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, BlendType), Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollTime_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "The amount of time to continue 'postrolling' this section for after evaluation has ended." },
				{ "UIMin", "0" },
				{ "Units", "s" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostRollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PostRollTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PostRollTime), METADATA_PARAMS(NewProp_PostRollTime_MetaData, ARRAY_COUNT(NewProp_PostRollTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollTime_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "The amount of time to prepare this section for evaluation before it actually starts." },
				{ "UIMin", "0" },
				{ "Units", "s" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreRollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PreRollTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PreRollTime), METADATA_PARAMS(NewProp_PreRollTime_MetaData, ARRAY_COUNT(NewProp_PreRollTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInfinite_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Toggle to set this section to be infinite" },
			};
#endif
			auto NewProp_bIsInfinite_SetBit = [](void* Obj){ ((UMovieSceneSection*)Obj)->bIsInfinite = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInfinite = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInfinite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsInfinite_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsInfinite_MetaData, ARRAY_COUNT(NewProp_bIsInfinite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Toggle whether this section is locked/unlocked" },
			};
#endif
			auto NewProp_bIsLocked_SetBit = [](void* Obj){ ((UMovieSceneSection*)Obj)->bIsLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLocked_MetaData, ARRAY_COUNT(NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Toggle whether this section is active/inactive" },
			};
#endif
			auto NewProp_bIsActive_SetBit = [](void* Obj){ ((UMovieSceneSection*)Obj)->bIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsActive_MetaData, ARRAY_COUNT(NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "This section's priority over overlapping sections" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverlapPriority = { UE4CodeGen_Private::EPropertyClass::Int, "OverlapPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, OverlapPriority), METADATA_PARAMS(NewProp_OverlapPriority_MetaData, ARRAY_COUNT(NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "The row index that this section sits on" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RowIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, RowIndex), METADATA_PARAMS(NewProp_RowIndex_MetaData, ARRAY_COUNT(NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "The end time of the section" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, EndTime), METADATA_PARAMS(NewProp_EndTime_MetaData, ARRAY_COUNT(NewProp_EndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "The start time of the section" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easing_MetaData[] = {
				{ "Category", "Easing" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Easing = { UE4CodeGen_Private::EPropertyClass::Struct, "Easing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, Easing), Z_Construct_UScriptStruct_FMovieSceneEasingSettings, METADATA_PARAMS(NewProp_Easing_MetaData, ARRAY_COUNT(NewProp_Easing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[] = {
				{ "Category", "Section" },
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "EvalOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, METADATA_PARAMS(NewProp_EvalOptions_MetaData, ARRAY_COUNT(NewProp_EvalOptions_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostRollTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreRollTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsInfinite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Easing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvalOptions,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280081u,
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
	IMPLEMENT_CLASS(UMovieSceneSection, 3778190183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSection(Z_Construct_UClass_UMovieSceneSection, &UMovieSceneSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
