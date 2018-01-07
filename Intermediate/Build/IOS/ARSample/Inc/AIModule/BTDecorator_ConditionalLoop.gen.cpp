// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConditionalLoop() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ConditionalLoop::StaticRegisterNativesUBTDecorator_ConditionalLoop()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister()
	{
		return UBTDecorator_ConditionalLoop::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "FlowControl Condition" },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
				{ "ToolTip", "Conditional loop decorator node.\nA decorator node that loops execution as long as condition is satisfied." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_ConditionalLoop>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_ConditionalLoop::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_ConditionalLoop, 1160933692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ConditionalLoop(Z_Construct_UClass_UBTDecorator_ConditionalLoop, &UBTDecorator_ConditionalLoop::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ConditionalLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConditionalLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
