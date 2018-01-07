// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BehaviorTreeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
// End Cross Module References
	void UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent()
	{
		UClass* Class = UBehaviorTreeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCooldownTagDuration", (Native)&UBehaviorTreeComponent::execAddCooldownTagDuration },
			{ "GetTagCooldownEndTime", (Native)&UBehaviorTreeComponent::execGetTagCooldownEndTime },
			{ "SetDynamicSubtree", (Native)&UBehaviorTreeComponent::execSetDynamicSubtree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration()
	{
		struct BehaviorTreeComponent_eventAddCooldownTagDuration_Parms
		{
			FGameplayTag CooldownTag;
			float CooldownDuration;
			bool bAddToExistingDuration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAddToExistingDuration_SetBit = [](void* Obj){ ((BehaviorTreeComponent_eventAddCooldownTagDuration_Parms*)Obj)->bAddToExistingDuration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToExistingDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAddToExistingDuration_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAddToExistingDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Logic" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
				{ "ToolTip", "add to the cooldown tag's duration" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, "AddCooldownTagDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime()
	{
		struct BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms
		{
			FGameplayTag CooldownTag;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Logic" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
				{ "ToolTip", "@return the cooldown tag end time, 0.0f if CooldownTag is not found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, "GetTagCooldownEndTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree()
	{
		struct BehaviorTreeComponent_eventSetDynamicSubtree_Parms
		{
			FGameplayTag InjectTag;
			UBehaviorTree* BehaviorAsset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectTag = { UE4CodeGen_Private::EPropertyClass::Struct, "InjectTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InjectTag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Logic" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
				{ "ToolTip", "assign subtree to RunBehaviorDynamic task specified by tag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, "SetDynamicSubtree", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BehaviorTreeComponent_eventSetDynamicSubtree_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister()
	{
		return UBehaviorTreeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBehaviorTreeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBrainComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration, "AddCooldownTagDuration" }, // 1815575830
				{ &Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime, "GetTagCooldownEndTime" }, // 1400069176
				{ &Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree, "SetDynamicSubtree" }, // 2635163480
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/BehaviorTreeComponent.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
				{ "ToolTip", "instanced nodes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeInstances = { UE4CodeGen_Private::EPropertyClass::Array, "NodeInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBehaviorTreeComponent, NodeInstances), METADATA_PARAMS(NewProp_NodeInstances_MetaData, ARRAY_COUNT(NewProp_NodeInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeInstances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBehaviorTreeComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBehaviorTreeComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UBehaviorTreeComponent, 138679887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeComponent(Z_Construct_UClass_UBehaviorTreeComponent, &UBehaviorTreeComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTreeComponent"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
