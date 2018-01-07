// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_WaitBlackboardTime() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_WaitBlackboardTime::StaticRegisterNativesUBTTask_WaitBlackboardTime()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister()
	{
		return UBTTask_WaitBlackboardTime::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Wait" },
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
				{ "ToolTip", "Wait task node.\nWait for the time specified by a Blackboard key when executed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKey = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_WaitBlackboardTime, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKey_MetaData, ARRAY_COUNT(NewProp_BlackboardKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_WaitBlackboardTime>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_WaitBlackboardTime::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_WaitBlackboardTime, 465250965);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_WaitBlackboardTime(Z_Construct_UClass_UBTTask_WaitBlackboardTime, &UBTTask_WaitBlackboardTime::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_WaitBlackboardTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_WaitBlackboardTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
