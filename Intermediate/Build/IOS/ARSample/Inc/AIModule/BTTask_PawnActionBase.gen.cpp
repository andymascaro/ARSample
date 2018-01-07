// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PawnActionBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_PawnActionBase::StaticRegisterNativesUBTTask_PawnActionBase()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister()
	{
		return UBTTask_PawnActionBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_PawnActionBase()
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
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
				{ "ToolTip", "Base class for managing pawn actions\n\nTask will set itself as action observer before pushing it to AI Controller,\noverride OnActionEvent if you need any special event handling.\n\nPlease use result returned by PushAction for ExecuteTask function." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_PawnActionBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_PawnActionBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PawnActionBase, 763108964);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PawnActionBase(Z_Construct_UClass_UBTTask_PawnActionBase, &UBTTask_PawnActionBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PawnActionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PawnActionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
