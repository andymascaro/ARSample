// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Blackboard() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
// End Cross Module References
	static UEnum* EBTBlackboardRestart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTBlackboardRestart, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTBlackboardRestart"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTBlackboardRestart(EBTBlackboardRestart_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTBlackboardRestart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTBlackboardRestart_CRC() { return 2627011300U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTBlackboardRestart"), 0, Get_Z_Construct_UEnum_AIModule_EBTBlackboardRestart_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTBlackboardRestart::ValueChange", (int64)EBTBlackboardRestart::ValueChange },
				{ "EBTBlackboardRestart::ResultChange", (int64)EBTBlackboardRestart::ResultChange },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ResultChange.DisplayName", "On Result Change" },
				{ "ResultChange.ToolTip", "Restart only when result of evaluated condition is changed" },
				{ "ToolTip", "Decorator for accessing blackboard values" },
				{ "ValueChange.DisplayName", "On Value Change" },
				{ "ValueChange.ToolTip", "Restart on every change of observed blackboard value" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTBlackboardRestart",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBTBlackboardRestart::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTDecorator_Blackboard::StaticRegisterNativesUBTDecorator_Blackboard()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister()
	{
		return UBTDecorator_Blackboard::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Condition" },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "Blackboard decorator node.\nA decorator node that bases its condition on a Blackboard key." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOperation_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Query" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextOperation = { UE4CodeGen_Private::EPropertyClass::Byte, "TextOperation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, TextOperation), Z_Construct_UEnum_AIModule_ETextKeyOperation, METADATA_PARAMS(NewProp_TextOperation_MetaData, ARRAY_COUNT(NewProp_TextOperation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArithmeticOperation_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Query" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArithmeticOperation = { UE4CodeGen_Private::EPropertyClass::Byte, "ArithmeticOperation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, ArithmeticOperation), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(NewProp_ArithmeticOperation_MetaData, ARRAY_COUNT(NewProp_ArithmeticOperation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicOperation_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Query" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BasicOperation = { UE4CodeGen_Private::EPropertyClass::Byte, "BasicOperation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, BasicOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(NewProp_BasicOperation_MetaData, ARRAY_COUNT(NewProp_BasicOperation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyObserver_MetaData[] = {
				{ "Category", "FlowControl" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "when observer can try to request abort?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyObserver = { UE4CodeGen_Private::EPropertyClass::Byte, "NotifyObserver", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, NotifyObserver), Z_Construct_UEnum_AIModule_EBTBlackboardRestart, METADATA_PARAMS(NewProp_NotifyObserver_MetaData, ARRAY_COUNT(NewProp_NotifyObserver_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "operation type" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType = { UE4CodeGen_Private::EPropertyClass::Byte, "OperationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, OperationType), nullptr, METADATA_PARAMS(NewProp_OperationType_MetaData, ARRAY_COUNT(NewProp_OperationType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "cached description" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedDescription = { UE4CodeGen_Private::EPropertyClass::Str, "CachedDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, CachedDescription), METADATA_PARAMS(NewProp_CachedDescription_MetaData, ARRAY_COUNT(NewProp_CachedDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Value" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "value for string operations" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, StringValue), METADATA_PARAMS(NewProp_StringValue_MetaData, ARRAY_COUNT(NewProp_StringValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Value" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "value for arithmetic operations" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, FloatValue), METADATA_PARAMS(NewProp_FloatValue_MetaData, ARRAY_COUNT(NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "DisplayName", "Key Value" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ToolTip", "value for arithmetic operations" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Blackboard, IntValue), METADATA_PARAMS(NewProp_IntValue_MetaData, ARRAY_COUNT(NewProp_IntValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextOperation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArithmeticOperation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasicOperation,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyObserver,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OperationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_Blackboard>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_Blackboard::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_Blackboard, 1668022672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Blackboard(Z_Construct_UClass_UBTDecorator_Blackboard, &UBTDecorator_Blackboard::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_Blackboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Blackboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
