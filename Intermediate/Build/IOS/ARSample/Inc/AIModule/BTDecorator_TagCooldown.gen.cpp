// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TagCooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTDecorator_TagCooldown::StaticRegisterNativesUBTDecorator_TagCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister()
	{
		return UBTDecorator_TagCooldown::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_TagCooldown()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a cooldown timer based on a gameplay tag has expired." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivatesCooldown_MetaData[] = {
				{ "Category", "Decorator" },
				{ "DisplayName", "Adds/Sets Cooldown on Deactivation" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ToolTip", "Whether or not we are adding/setting to the cooldown tag's value when the decorator deactivates." },
			};
#endif
			auto NewProp_bActivatesCooldown_SetBit = [](void* Obj){ ((UBTDecorator_TagCooldown*)Obj)->bActivatesCooldown = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivatesCooldown = { UE4CodeGen_Private::EPropertyClass::Bool, "bActivatesCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTDecorator_TagCooldown), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActivatesCooldown_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bActivatesCooldown_MetaData, ARRAY_COUNT(NewProp_bActivatesCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[] = {
				{ "Category", "Decorator" },
				{ "EditCondition", "bActivatesCooldown" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
			};
#endif
			auto NewProp_bAddToExistingDuration_SetBit = [](void* Obj){ ((UBTDecorator_TagCooldown*)Obj)->bAddToExistingDuration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToExistingDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTDecorator_TagCooldown), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAddToExistingDuration_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAddToExistingDuration_MetaData, ARRAY_COUNT(NewProp_bAddToExistingDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
				{ "Category", "Decorator" },
				{ "EditCondition", "bActivatesCooldown" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ToolTip", "Value we will add or set to the Cooldown tag when this node is deactivated." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownDuration), METADATA_PARAMS(NewProp_CooldownDuration_MetaData, ARRAY_COUNT(NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
				{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(NewProp_CooldownTag_MetaData, ARRAY_COUNT(NewProp_CooldownTag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActivatesCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAddToExistingDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_TagCooldown>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_TagCooldown::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_TagCooldown, 3660593221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_TagCooldown(Z_Construct_UClass_UBTDecorator_TagCooldown, &UBTDecorator_TagCooldown::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_TagCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TagCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
