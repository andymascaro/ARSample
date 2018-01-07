// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AIPerceptionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EAISenseNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAISenseNotifyType, Z_Construct_UPackage__Script_AIModule(), TEXT("EAISenseNotifyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAISenseNotifyType(EAISenseNotifyType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAISenseNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAISenseNotifyType_CRC() { return 2680613581U; }
	UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAISenseNotifyType"), 0, Get_Z_Construct_UEnum_AIModule_EAISenseNotifyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAISenseNotifyType::OnEveryPerception", (int64)EAISenseNotifyType::OnEveryPerception },
				{ "EAISenseNotifyType::OnPerceptionChange", (int64)EAISenseNotifyType::OnPerceptionChange },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
				{ "OnEveryPerception.ToolTip", "Continuous update whenever target is perceived." },
				{ "OnPerceptionChange.ToolTip", "From \"visible\" to \"not visible\" or vice versa." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAISenseNotifyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAISenseNotifyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAISenseAffiliationFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISenseAffiliationFilter, Z_Construct_UPackage__Script_AIModule(), TEXT("AISenseAffiliationFilter"), sizeof(FAISenseAffiliationFilter), Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISenseAffiliationFilter(FAISenseAffiliationFilter::StaticStruct, TEXT("/Script/AIModule"), TEXT("AISenseAffiliationFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter
{
	FScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISenseAffiliationFilter")),new UScriptStruct::TCppStructOps<FAISenseAffiliationFilter>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISenseAffiliationFilter"), sizeof(FAISenseAffiliationFilter), Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISenseAffiliationFilter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectFriendlies_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewProp_bDetectFriendlies_SetBit = [](void* Obj){ ((FAISenseAffiliationFilter*)Obj)->bDetectFriendlies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectFriendlies = { UE4CodeGen_Private::EPropertyClass::Bool, "bDetectFriendlies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAISenseAffiliationFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDetectFriendlies_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDetectFriendlies_MetaData, ARRAY_COUNT(NewProp_bDetectFriendlies_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectNeutrals_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewProp_bDetectNeutrals_SetBit = [](void* Obj){ ((FAISenseAffiliationFilter*)Obj)->bDetectNeutrals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectNeutrals = { UE4CodeGen_Private::EPropertyClass::Bool, "bDetectNeutrals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAISenseAffiliationFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDetectNeutrals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDetectNeutrals_MetaData, ARRAY_COUNT(NewProp_bDetectNeutrals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectEnemies_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewProp_bDetectEnemies_SetBit = [](void* Obj){ ((FAISenseAffiliationFilter*)Obj)->bDetectEnemies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectEnemies = { UE4CodeGen_Private::EPropertyClass::Bool, "bDetectEnemies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAISenseAffiliationFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDetectEnemies_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDetectEnemies_MetaData, ARRAY_COUNT(NewProp_bDetectEnemies_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDetectFriendlies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDetectNeutrals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDetectEnemies,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AISenseAffiliationFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAISenseAffiliationFilter),
				alignof(FAISenseAffiliationFilter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC() { return 3307823750U; }
class UScriptStruct* FAIStimulus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIStimulus, Z_Construct_UPackage__Script_AIModule(), TEXT("AIStimulus"), sizeof(FAIStimulus), Get_Z_Construct_UScriptStruct_FAIStimulus_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIStimulus(FAIStimulus::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIStimulus"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIStimulus
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIStimulus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIStimulus")),new UScriptStruct::TCppStructOps<FAIStimulus>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIStimulus;
	UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIStimulus"), sizeof(FAIStimulus), Get_Z_Construct_UScriptStruct_FAIStimulus_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIStimulus>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccessfullySensed_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			auto NewProp_bSuccessfullySensed_SetBit = [](void* Obj){ ((FAIStimulus*)Obj)->bSuccessfullySensed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessfullySensed = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccessfullySensed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAIStimulus), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuccessfullySensed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuccessfullySensed_MetaData, ARRAY_COUNT(NewProp_bSuccessfullySensed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverLocation_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReceiverLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ReceiverLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, ReceiverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ReceiverLocation_MetaData, ARRAY_COUNT(NewProp_ReceiverLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimulusLocation_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StimulusLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StimulusLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, StimulusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StimulusLocation_MetaData, ARRAY_COUNT(NewProp_StimulusLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Float, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, Strength), METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationAge_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpirationAge = { UE4CodeGen_Private::EPropertyClass::Float, "ExpirationAge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, ExpirationAge), METADATA_PARAMS(NewProp_ExpirationAge_MetaData, ARRAY_COUNT(NewProp_ExpirationAge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Age = { UE4CodeGen_Private::EPropertyClass::Float, "Age", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(FAIStimulus, Age), METADATA_PARAMS(NewProp_Age_MetaData, ARRAY_COUNT(NewProp_Age_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuccessfullySensed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceiverLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StimulusLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpirationAge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Age,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIStimulus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAIStimulus),
				alignof(FAIStimulus),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_CRC() { return 2367392031U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
