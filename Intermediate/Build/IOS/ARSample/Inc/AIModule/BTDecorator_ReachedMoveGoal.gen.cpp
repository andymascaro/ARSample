// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ReachedMoveGoal() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ReachedMoveGoal::StaticRegisterNativesUBTDecorator_ReachedMoveGoal()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister()
	{
		return UBTDecorator_ReachedMoveGoal::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal()
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
				{ "DeprecatedNode", "" },
				{ "DeprecationMessage", "Please use IsAtLocation decorator instead." },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h" },
				{ "ToolTip", "Reached Move Goal decorator node.\nA decorator node that bases its condition on whether the AI controller's path following component returns that it has reached its goal." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_ReachedMoveGoal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_ReachedMoveGoal::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTDecorator_ReachedMoveGoal, 2649575830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ReachedMoveGoal(Z_Construct_UClass_UBTDecorator_ReachedMoveGoal, &UBTDecorator_ReachedMoveGoal::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ReachedMoveGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ReachedMoveGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
