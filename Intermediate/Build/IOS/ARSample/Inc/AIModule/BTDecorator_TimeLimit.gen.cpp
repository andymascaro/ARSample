// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TimeLimit() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_TimeLimit::StaticRegisterNativesUBTDecorator_TimeLimit()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister()
	{
		return UBTDecorator_TimeLimit::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_TimeLimit()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
				{ "ToolTip", "Time Limit decorator node.\nA decorator node that bases its condition on whether a timer has exceeded a specified value. The timer is reset each time the node becomes relevant." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
				{ "ToolTip", "max allowed time for execution of underlying node" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit = { UE4CodeGen_Private::EPropertyClass::Float, "TimeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_TimeLimit, TimeLimit), METADATA_PARAMS(NewProp_TimeLimit_MetaData, ARRAY_COUNT(NewProp_TimeLimit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeLimit,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_TimeLimit>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_TimeLimit::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_TimeLimit, 695724824);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_TimeLimit(Z_Construct_UClass_UBTDecorator_TimeLimit, &UBTDecorator_TimeLimit::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_TimeLimit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TimeLimit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
