// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BehaviorTreeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EBTFlowAbortMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTFlowAbortMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTFlowAbortMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTFlowAbortMode(EBTFlowAbortMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTFlowAbortMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTFlowAbortMode_CRC() { return 1394851456U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTFlowAbortMode"), 0, Get_Z_Construct_UEnum_AIModule_EBTFlowAbortMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTFlowAbortMode::None", (int64)EBTFlowAbortMode::None },
				{ "EBTFlowAbortMode::LowerPriority", (int64)EBTFlowAbortMode::LowerPriority },
				{ "EBTFlowAbortMode::Self", (int64)EBTFlowAbortMode::Self },
				{ "EBTFlowAbortMode::Both", (int64)EBTFlowAbortMode::Both },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.DisplayName", "Both" },
				{ "LowerPriority.DisplayName", "Lower Priority" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "None.DisplayName", "Nothing" },
				{ "Self.DisplayName", "Self" },
				{ "ToolTip", "keep in sync with DescribeFlowAbortMode()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTFlowAbortMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBTFlowAbortMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBTNodeResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTNodeResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTNodeResult(EBTNodeResult_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTNodeResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTNodeResult_CRC() { return 223377018U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTNodeResult"), 0, Get_Z_Construct_UEnum_AIModule_EBTNodeResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTNodeResult::Succeeded", (int64)EBTNodeResult::Succeeded },
				{ "EBTNodeResult::Failed", (int64)EBTNodeResult::Failed },
				{ "EBTNodeResult::Aborted", (int64)EBTNodeResult::Aborted },
				{ "EBTNodeResult::InProgress", (int64)EBTNodeResult::InProgress },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.ToolTip", "finished as failure" },
				{ "BlueprintType", "true" },
				{ "Failed.ToolTip", "finished as success" },
				{ "InProgress.ToolTip", "finished aborting = failure" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "keep in sync with DescribeNodeResult()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTNodeResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBTNodeResult::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBlackboardKeySelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardKeySelector, Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardKeySelector"), sizeof(FBlackboardKeySelector), Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlackboardKeySelector(FBlackboardKeySelector::StaticStruct, TEXT("/Script/AIModule"), TEXT("BlackboardKeySelector"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector
{
	FScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlackboardKeySelector")),new UScriptStruct::TCppStructOps<FBlackboardKeySelector>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector;
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlackboardKeySelector"), sizeof(FBlackboardKeySelector), Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "helper struct for defining types of allowed blackboard entries\n(e.g. only entries holding points and objects derived form actor class)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardKeySelector>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoneIsAllowedValue_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "Tooltip", "" },
			};
#endif
			auto NewProp_bNoneIsAllowedValue_SetBit = [](void* Obj){ ((FBlackboardKeySelector*)Obj)->bNoneIsAllowedValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoneIsAllowedValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoneIsAllowedValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlackboardKeySelector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoneIsAllowedValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoneIsAllowedValue_MetaData, ARRAY_COUNT(NewProp_bNoneIsAllowedValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyID_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "ID of selected key" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedKeyID = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectedKeyID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002805, 1, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyID), nullptr, METADATA_PARAMS(NewProp_SelectedKeyID_MetaData, ARRAY_COUNT(NewProp_SelectedKeyID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyType_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "class of selected key" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SelectedKeyType = { UE4CodeGen_Private::EPropertyClass::Class, "SelectedKeyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000002805, 1, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SelectedKeyType_MetaData, ARRAY_COUNT(NewProp_SelectedKeyType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyName_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "name of selected key" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedKeyName = { UE4CodeGen_Private::EPropertyClass::Name, "SelectedKeyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyName), METADATA_PARAMS(NewProp_SelectedKeyName_MetaData, ARRAY_COUNT(NewProp_SelectedKeyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "array of allowed types with additional properties (e.g. uobject's base class)\nEditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData()" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedTypes = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, AllowedTypes), METADATA_PARAMS(NewProp_AllowedTypes_MetaData, ARRAY_COUNT(NewProp_AllowedTypes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllowedTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoneIsAllowedValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedKeyID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedKeyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedKeyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTypes_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlackboardKeySelector",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBlackboardKeySelector),
				alignof(FBlackboardKeySelector),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_CRC() { return 3708630965U; }
	void UBehaviorTreeTypes::StaticRegisterNativesUBehaviorTreeTypes()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister()
	{
		return UBehaviorTreeTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UBehaviorTreeTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/BehaviorTreeTypes.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBehaviorTreeTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBehaviorTreeTypes::StaticClass,
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
	IMPLEMENT_CLASS(UBehaviorTreeTypes, 2700034938);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeTypes(Z_Construct_UClass_UBehaviorTreeTypes, &UBehaviorTreeTypes::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTreeTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
