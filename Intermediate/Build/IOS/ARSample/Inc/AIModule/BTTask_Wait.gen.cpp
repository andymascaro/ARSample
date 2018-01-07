// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Wait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_Wait::StaticRegisterNativesUBTTask_Wait()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister()
	{
		return UBTTask_Wait::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_Wait.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
				{ "ToolTip", "Wait task node.\nWait for the specified time when executed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[] = {
				{ "Category", "Wait" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
				{ "ToolTip", "allows adding random time to wait time" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation = { UE4CodeGen_Private::EPropertyClass::Float, "RandomDeviation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_Wait, RandomDeviation), METADATA_PARAMS(NewProp_RandomDeviation_MetaData, ARRAY_COUNT(NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[] = {
				{ "Category", "Wait" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
				{ "ToolTip", "wait time in seconds" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime = { UE4CodeGen_Private::EPropertyClass::Float, "WaitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_Wait, WaitTime), METADATA_PARAMS(NewProp_WaitTime_MetaData, ARRAY_COUNT(NewProp_WaitTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomDeviation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaitTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_Wait>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_Wait::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_Wait, 4076828431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Wait(Z_Construct_UClass_UBTTask_Wait, &UBTTask_Wait::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
