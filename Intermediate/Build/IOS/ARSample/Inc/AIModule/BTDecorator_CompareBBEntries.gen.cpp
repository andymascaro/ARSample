// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CompareBBEntries() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	static UEnum* EBlackBoardEntryComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, Z_Construct_UPackage__Script_AIModule(), TEXT("EBlackBoardEntryComparison"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlackBoardEntryComparison(EBlackBoardEntryComparison_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBlackBoardEntryComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_CRC() { return 452954184U; }
	UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlackBoardEntryComparison"), 0, Get_Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlackBoardEntryComparison::Equal", (int64)EBlackBoardEntryComparison::Equal },
				{ "EBlackBoardEntryComparison::NotEqual", (int64)EBlackBoardEntryComparison::NotEqual },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.DisplayName", "Is Equal To" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlackBoardEntryComparison",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBlackBoardEntryComparison::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTDecorator_CompareBBEntries::StaticRegisterNativesUBTDecorator_CompareBBEntries()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister()
	{
		return UBTDecorator_CompareBBEntries::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Condition" },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "ToolTip", "Blackboard comparison decorator node.\nA decorator node that bases its condition on a comparison between two Blackboard keys." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKeyB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKeyB_MetaData, ARRAY_COUNT(NewProp_BlackboardKeyB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKeyA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKeyA_MetaData, ARRAY_COUNT(NewProp_BlackboardKeyA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "ToolTip", "operation type" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator = { UE4CodeGen_Private::EPropertyClass::Byte, "Operator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, Operator), Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, METADATA_PARAMS(NewProp_Operator_MetaData, ARRAY_COUNT(NewProp_Operator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKeyB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKeyA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Operator,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_CompareBBEntries>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_CompareBBEntries::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_CompareBBEntries, 1732156592);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CompareBBEntries(Z_Construct_UClass_UBTDecorator_CompareBBEntries, &UBTDecorator_CompareBBEntries::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_CompareBBEntries"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CompareBBEntries);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
