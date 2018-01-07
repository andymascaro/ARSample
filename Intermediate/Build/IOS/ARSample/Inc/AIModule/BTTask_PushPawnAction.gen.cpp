// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PushPawnAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
// End Cross Module References
	void UBTTask_PushPawnAction::StaticRegisterNativesUBTTask_PushPawnAction()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister()
	{
		return UBTTask_PushPawnAction::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_PawnActionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
				{ "ToolTip", "Action task node.\nPush pawn action to controller." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "Category", "Action" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Object, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0022080000080009, 1, nullptr, STRUCT_OFFSET(UBTTask_PushPawnAction, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_PushPawnAction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_PushPawnAction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UBTTask_PushPawnAction, 1415060188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PushPawnAction(Z_Construct_UClass_UBTTask_PushPawnAction, &UBTTask_PushPawnAction::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PushPawnAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PushPawnAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
