// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunBehaviorDynamic() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTTask_RunBehaviorDynamic::StaticRegisterNativesUBTTask_RunBehaviorDynamic()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister()
	{
		return UBTTask_RunBehaviorDynamic::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic()
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
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
				{ "ToolTip", "RunBehaviorDynamic task allows pushing subtrees on execution stack.\nSubtree asset can be assigned at runtime with SetDynamicSubtree function of BehaviorTreeComponent.\n\nDoes NOT support subtree's root level decorators!" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
				{ "ToolTip", "current subtree" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_BehaviorAsset_MetaData, ARRAY_COUNT(NewProp_BehaviorAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorAsset_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
				{ "ToolTip", "default behavior to run" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorAsset = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultBehaviorAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_DefaultBehaviorAsset_MetaData, ARRAY_COUNT(NewProp_DefaultBehaviorAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectionTag_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
				{ "ToolTip", "Gameplay tag that will identify this task for subtree injection" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectionTag = { UE4CodeGen_Private::EPropertyClass::Struct, "InjectionTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, InjectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(NewProp_InjectionTag_MetaData, ARRAY_COUNT(NewProp_InjectionTag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBehaviorAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InjectionTag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_RunBehaviorDynamic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_RunBehaviorDynamic::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_RunBehaviorDynamic, 29236666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RunBehaviorDynamic(Z_Construct_UClass_UBTTask_RunBehaviorDynamic, &UBTTask_RunBehaviorDynamic::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RunBehaviorDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunBehaviorDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
