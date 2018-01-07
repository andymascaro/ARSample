// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BlackboardBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_BlackboardBase::StaticRegisterNativesUBTTask_BlackboardBase()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister()
	{
		return UBTTask_BlackboardBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_BlackboardBase()
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
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKey = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_BlackboardBase, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKey_MetaData, ARRAY_COUNT(NewProp_BlackboardKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_BlackboardBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_BlackboardBase::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_BlackboardBase, 692133258);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_BlackboardBase(Z_Construct_UClass_UBTTask_BlackboardBase, &UBTTask_BlackboardBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_BlackboardBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BlackboardBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
