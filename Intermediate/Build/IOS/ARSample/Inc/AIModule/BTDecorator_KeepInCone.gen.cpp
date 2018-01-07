// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_KeepInCone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_KeepInCone::StaticRegisterNativesUBTDecorator_KeepInCone()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister()
	{
		return UBTDecorator_KeepInCone::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_KeepInCone()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether the observed position is still inside a cone. The cone's direction is calculated when the node first becomes relevant." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsObserved_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "deprecated, set value of Observed on initialization" },
			};
#endif
			auto NewProp_bUseSelfAsObserved_SetBit = [](void* Obj){ ((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsObserved = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsObserved = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSelfAsObserved", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_KeepInCone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSelfAsObserved_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSelfAsObserved_MetaData, ARRAY_COUNT(NewProp_bUseSelfAsObserved_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsOrigin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "deprecated, set value of ConeOrigin on initialization" },
			};
#endif
			auto NewProp_bUseSelfAsOrigin_SetBit = [](void* Obj){ ((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsOrigin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsOrigin = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSelfAsOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_KeepInCone), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSelfAsOrigin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSelfAsOrigin_MetaData, ARRAY_COUNT(NewProp_bUseSelfAsOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Observed = { UE4CodeGen_Private::EPropertyClass::Struct, "Observed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Observed_MetaData, ARRAY_COUNT(NewProp_Observed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_ConeOrigin_MetaData, ARRAY_COUNT(NewProp_ConeOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
				{ "ToolTip", "max allowed time for execution of underlying node" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle = { UE4CodeGen_Private::EPropertyClass::Float, "ConeHalfAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeHalfAngle), METADATA_PARAMS(NewProp_ConeHalfAngle_MetaData, ARRAY_COUNT(NewProp_ConeHalfAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSelfAsObserved,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSelfAsOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Observed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeHalfAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_KeepInCone>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_KeepInCone::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_KeepInCone, 4035017261);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_KeepInCone(Z_Construct_UClass_UBTDecorator_KeepInCone, &UBTDecorator_KeepInCone::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_KeepInCone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_KeepInCone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
