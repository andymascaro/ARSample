// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Loop() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_Loop::StaticRegisterNativesUBTDecorator_Loop()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister()
	{
		return UBTDecorator_Loop::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_Loop()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Loop.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
				{ "ToolTip", "Loop decorator node.\nA decorator node that bases its condition on whether its loop counter has been exceeded." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfiniteLoopTimeoutTime_MetaData[] = {
				{ "Category", "Decorator" },
				{ "EditCondition", "bInfiniteLoop" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
				{ "ToolTip", "timeout (when looping infinitely, when we finish a loop we will check whether we have spent this time looping, if we have we will stop looping). A negative value means loop forever." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfiniteLoopTimeoutTime = { UE4CodeGen_Private::EPropertyClass::Float, "InfiniteLoopTimeoutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Loop, InfiniteLoopTimeoutTime), METADATA_PARAMS(NewProp_InfiniteLoopTimeoutTime_MetaData, ARRAY_COUNT(NewProp_InfiniteLoopTimeoutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteLoop_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
				{ "ToolTip", "infinite loop" },
			};
#endif
			auto NewProp_bInfiniteLoop_SetBit = [](void* Obj){ ((UBTDecorator_Loop*)Obj)->bInfiniteLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bInfiniteLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTDecorator_Loop), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInfiniteLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInfiniteLoop_MetaData, ARRAY_COUNT(NewProp_bInfiniteLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[] = {
				{ "Category", "Decorator" },
				{ "EditCondition", "!bInfiniteLoop" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
				{ "ToolTip", "number of executions" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops = { UE4CodeGen_Private::EPropertyClass::Int, "NumLoops", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_Loop, NumLoops), METADATA_PARAMS(NewProp_NumLoops_MetaData, ARRAY_COUNT(NewProp_NumLoops_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfiniteLoopTimeoutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInfiniteLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumLoops,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_Loop>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_Loop::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_Loop, 3669981585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Loop(Z_Construct_UClass_UBTDecorator_Loop, &UBTDecorator_Loop::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_Loop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Loop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
