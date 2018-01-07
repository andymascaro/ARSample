// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Cooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Cooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_Cooldown::StaticRegisterNativesUBTDecorator_Cooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister()
	{
		return UBTDecorator_Cooldown::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_Cooldown()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
				{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a cooldown timer has expired." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
				{ "ToolTip", "max allowed time for execution of underlying node" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime = { UE4CodeGen_Private::EPropertyClass::Float, "CoolDownTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Cooldown, CoolDownTime), METADATA_PARAMS(NewProp_CoolDownTime_MetaData, ARRAY_COUNT(NewProp_CoolDownTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoolDownTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_Cooldown>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_Cooldown::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_Cooldown, 38812430);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Cooldown(Z_Construct_UClass_UBTDecorator_Cooldown, &UBTDecorator_Cooldown::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_Cooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Cooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
