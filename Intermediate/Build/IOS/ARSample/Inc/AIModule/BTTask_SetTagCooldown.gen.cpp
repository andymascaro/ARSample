// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetTagCooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_SetTagCooldown_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_SetTagCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTTask_SetTagCooldown::StaticRegisterNativesUBTTask_SetTagCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetTagCooldown_NoRegister()
	{
		return UBTTask_SetTagCooldown::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_SetTagCooldown()
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
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_SetTagCooldown.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h" },
				{ "ToolTip", "Cooldown task node.\nSets a cooldown tag value.  Use with cooldown tag decorators to prevent behavior tree execution." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
				{ "Category", "Cooldown" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h" },
				{ "ToolTip", "Value we will add or set to the Cooldown tag when this task runs." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_SetTagCooldown, CooldownDuration), METADATA_PARAMS(NewProp_CooldownDuration_MetaData, ARRAY_COUNT(NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h" },
				{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
			};
#endif
			auto NewProp_bAddToExistingDuration_SetBit = [](void* Obj){ ((UBTTask_SetTagCooldown*)Obj)->bAddToExistingDuration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToExistingDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTTask_SetTagCooldown), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAddToExistingDuration_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAddToExistingDuration_MetaData, ARRAY_COUNT(NewProp_bAddToExistingDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
				{ "Category", "Cooldown" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h" },
				{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_SetTagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(NewProp_CooldownTag_MetaData, ARRAY_COUNT(NewProp_CooldownTag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAddToExistingDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_SetTagCooldown>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_SetTagCooldown::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_SetTagCooldown, 1371726158);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetTagCooldown(Z_Construct_UClass_UBTTask_SetTagCooldown, &UBTTask_SetTagCooldown::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_SetTagCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetTagCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
