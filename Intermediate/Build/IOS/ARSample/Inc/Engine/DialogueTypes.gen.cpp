// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/DialogueTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
// End Cross Module References
	static UEnum* EGrammaticalNumber_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalNumber, Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalNumber"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrammaticalNumber(EGrammaticalNumber_StaticEnum, TEXT("/Script/Engine"), TEXT("EGrammaticalNumber"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGrammaticalNumber_CRC() { return 515305777U; }
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrammaticalNumber"), 0, Get_Z_Construct_UEnum_Engine_EGrammaticalNumber_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrammaticalNumber::Singular", (int64)EGrammaticalNumber::Singular },
				{ "EGrammaticalNumber::Plural", (int64)EGrammaticalNumber::Plural },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "Plural.DisplayName", "Plural" },
				{ "Singular.DisplayName", "Singular" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrammaticalNumber",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGrammaticalNumber::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGrammaticalGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalGender, Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalGender"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrammaticalGender(EGrammaticalGender_StaticEnum, TEXT("/Script/Engine"), TEXT("EGrammaticalGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGrammaticalGender_CRC() { return 3393533794U; }
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrammaticalGender"), 0, Get_Z_Construct_UEnum_Engine_EGrammaticalGender_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrammaticalGender::Neuter", (int64)EGrammaticalGender::Neuter },
				{ "EGrammaticalGender::Masculine", (int64)EGrammaticalGender::Masculine },
				{ "EGrammaticalGender::Feminine", (int64)EGrammaticalGender::Feminine },
				{ "EGrammaticalGender::Mixed", (int64)EGrammaticalGender::Mixed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Feminine.DisplayName", "Feminine" },
				{ "Masculine.DisplayName", "Masculine" },
				{ "Mixed.DisplayName", "Mixed" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "Neuter.DisplayName", "Neuter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrammaticalGender",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGrammaticalGender::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDialogueWaveParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueWaveParameter, Z_Construct_UPackage__Script_Engine(), TEXT("DialogueWaveParameter"), sizeof(FDialogueWaveParameter), Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueWaveParameter(FDialogueWaveParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("DialogueWaveParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueWaveParameter")),new UScriptStruct::TCppStructOps<FDialogueWaveParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueWaveParameter"), sizeof(FDialogueWaveParameter), Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueWaveParameter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "Category", "DialogueWaveParameter" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "ToolTip", "The context to use for the dialogue wave." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Struct, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDialogueWaveParameter, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[] = {
				{ "Category", "DialogueWaveParameter" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "ToolTip", "The dialogue wave to play." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWave = { UE4CodeGen_Private::EPropertyClass::Object, "DialogueWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDialogueWaveParameter, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(NewProp_DialogueWave_MetaData, ARRAY_COUNT(NewProp_DialogueWave_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueWave,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DialogueWaveParameter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDialogueWaveParameter),
				alignof(FDialogueWaveParameter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_CRC() { return 712019817U; }
class UScriptStruct* FDialogueContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContext, Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContext"), sizeof(FDialogueContext), Get_Z_Construct_UScriptStruct_FDialogueContext_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueContext(FDialogueContext::StaticStruct, TEXT("/Script/Engine"), TEXT("DialogueContext"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDialogueContext
{
	FScriptStruct_Engine_StaticRegisterNativesFDialogueContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueContext")),new UScriptStruct::TCppStructOps<FDialogueContext>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDialogueContext;
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueContext"), sizeof(FDialogueContext), Get_Z_Construct_UScriptStruct_FDialogueContext_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContext>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
				{ "Category", "DialogueContext" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "ToolTip", "The people being spoken to." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets = { UE4CodeGen_Private::EPropertyClass::Array, "Targets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueContext, Targets), METADATA_PARAMS(NewProp_Targets_MetaData, ARRAY_COUNT(NewProp_Targets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Targets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
				{ "Category", "DialogueContext" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "ToolTip", "The person speaking the dialogue." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Speaker = { UE4CodeGen_Private::EPropertyClass::Object, "Speaker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueContext, Speaker), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(NewProp_Speaker_MetaData, ARRAY_COUNT(NewProp_Speaker_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Targets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Targets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speaker,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DialogueContext",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDialogueContext),
				alignof(FDialogueContext),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_CRC() { return 3821267703U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
