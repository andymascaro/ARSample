// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GameplayTaskBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_GameplayTaskBase::StaticRegisterNativesUBTTask_GameplayTaskBase()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister()
	{
		return UBTTask_GameplayTaskBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase()
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
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
				{ "ToolTip", "Base class for managing gameplay tasks\nSince AITask doesn't have any kind of success/failed results, default implemenation will only return EBTNode::Succeeded\n\nIn your ExecuteTask:\n- use NewBTAITask() helper to create task\n- initialize task with values if needed\n- use StartGameplayTask() helper to execute and get node result" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForGameplayTask_MetaData[] = {
				{ "Category", "Task" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
				{ "ToolTip", "if set, behavior tree task will wait until gameplay tasks finishes" },
			};
#endif
			auto NewProp_bWaitForGameplayTask_SetBit = [](void* Obj){ ((UBTTask_GameplayTaskBase*)Obj)->bWaitForGameplayTask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForGameplayTask = { UE4CodeGen_Private::EPropertyClass::Bool, "bWaitForGameplayTask", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_GameplayTaskBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWaitForGameplayTask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWaitForGameplayTask_MetaData, ARRAY_COUNT(NewProp_bWaitForGameplayTask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWaitForGameplayTask,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_GameplayTaskBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_GameplayTaskBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UBTTask_GameplayTaskBase, 1149024161);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_GameplayTaskBase(Z_Construct_UClass_UBTTask_GameplayTaskBase, &UBTTask_GameplayTaskBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_GameplayTaskBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GameplayTaskBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
