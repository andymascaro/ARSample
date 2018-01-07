// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService::StaticRegisterNativesUBTService()
	{
	}
	UClass* Z_Construct_UClass_UBTService_NoRegister()
	{
		return UBTService::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTAuxiliaryNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/BTService.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
				{ "ToolTip", "Behavior Tree service nodes is designed to perform \"background\" tasks that update AI's knowledge.\n\nServices are being executed when underlying branch of behavior tree becomes active,\nbut unlike tasks they don't return any results and can't directly affect execution flow.\n\nUsually they perform periodical checks (see TickNode) and often store results in blackboard.\nIf any decorator node below requires results of check beforehand, use OnSearchStart function.\nKeep in mind that any checks performed there have to be instantaneous!\n\nOther typical use case is creating a marker when specific branch is being executed\n(see OnBecomeRelevant, OnCeaseRelevant), by setting a flag in blackboard.\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n- OnBecomeRelevant (from UBTAuxiliaryNode)\n- OnCeaseRelevant (from UBTAuxiliaryNode)\n- TickNode (from UBTAuxiliaryNode)\n- OnSearchStart\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestartTimerOnEachActivation_MetaData[] = {
				{ "Category", "Service" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
				{ "ToolTip", "if set, next tick time will be always reset to service's interval when node is activated" },
			};
#endif
			auto NewProp_bRestartTimerOnEachActivation_SetBit = [](void* Obj){ ((UBTService*)Obj)->bRestartTimerOnEachActivation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestartTimerOnEachActivation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRestartTimerOnEachActivation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTService), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRestartTimerOnEachActivation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRestartTimerOnEachActivation_MetaData, ARRAY_COUNT(NewProp_bRestartTimerOnEachActivation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallTickOnSearchStart_MetaData[] = {
				{ "Category", "Service" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
				{ "ToolTip", "call Tick event when task search enters this node (SearchStart will be called as well)" },
			};
#endif
			auto NewProp_bCallTickOnSearchStart_SetBit = [](void* Obj){ ((UBTService*)Obj)->bCallTickOnSearchStart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallTickOnSearchStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallTickOnSearchStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTService), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCallTickOnSearchStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCallTickOnSearchStart_MetaData, ARRAY_COUNT(NewProp_bCallTickOnSearchStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[] = {
				{ "Category", "Service" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
				{ "ToolTip", "adds random range to service's Interval" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation = { UE4CodeGen_Private::EPropertyClass::Float, "RandomDeviation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTService, RandomDeviation), METADATA_PARAMS(NewProp_RandomDeviation_MetaData, ARRAY_COUNT(NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
				{ "Category", "Service" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
				{ "ToolTip", "defines time span between subsequent ticks of the service" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval = { UE4CodeGen_Private::EPropertyClass::Float, "Interval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTService, Interval), METADATA_PARAMS(NewProp_Interval_MetaData, ARRAY_COUNT(NewProp_Interval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRestartTimerOnEachActivation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCallTickOnSearchStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomDeviation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTService>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTService::StaticClass,
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
	IMPLEMENT_CLASS(UBTService, 3205210167);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService(Z_Construct_UClass_UBTService, &UBTService::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
