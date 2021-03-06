// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveDirectlyToward() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MoveDirectlyToward::StaticRegisterNativesUBTTask_MoveDirectlyToward()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister()
	{
		return UBTTask_MoveDirectlyToward::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
				{ "ToolTip", "Move Directly Toward task node.\nMoves the AI pawn toward the specified Actor or Location (Vector) blackboard entry in a straight line, without regard to any navigation system. If you need the AI to navigate, use the \"Move To\" node instead." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatedDeprecatedProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
			};
#endif
			auto NewProp_bUpdatedDeprecatedProperties_SetBit = [](void* Obj){ ((UBTTask_MoveDirectlyToward*)Obj)->bUpdatedDeprecatedProperties = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatedDeprecatedProperties = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatedDeprecatedProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveDirectlyToward), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdatedDeprecatedProperties_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdatedDeprecatedProperties_MetaData, ARRAY_COUNT(NewProp_bUpdatedDeprecatedProperties_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectVectorGoalToNavigation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
			};
#endif
			auto NewProp_bProjectVectorGoalToNavigation_SetBit = [](void* Obj){ ((UBTTask_MoveDirectlyToward*)Obj)->bProjectVectorGoalToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectVectorGoalToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectVectorGoalToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveDirectlyToward), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectVectorGoalToNavigation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProjectVectorGoalToNavigation_MetaData, ARRAY_COUNT(NewProp_bProjectVectorGoalToNavigation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
			};
#endif
			auto NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit = [](void* Obj){ ((UBTTask_MoveDirectlyToward*)Obj)->bDisablePathUpdateOnGoalLocationChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablePathUpdateOnGoalLocationChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisablePathUpdateOnGoalLocationChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_MoveDirectlyToward), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData, ARRAY_COUNT(NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdatedDeprecatedProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectVectorGoalToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisablePathUpdateOnGoalLocationChange,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_MoveDirectlyToward>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_MoveDirectlyToward::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveDirectlyToward, 3972863868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveDirectlyToward(Z_Construct_UClass_UBTTask_MoveDirectlyToward, &UBTTask_MoveDirectlyToward::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_MoveDirectlyToward"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveDirectlyToward);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
