// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_ForceSuccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ForceSuccess() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ForceSuccess::StaticRegisterNativesUBTDecorator_ForceSuccess()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister()
	{
		return UBTDecorator_ForceSuccess::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ForceSuccess.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ForceSuccess.h" },
				{ "ToolTip", "Change node result to Success\nuseful for creating optional branches in sequence\n\nForcing failed result was not implemented, because it doesn't make sense in both basic composites:\n- sequence = child nodes behind it will be never run\n- selector = would allow executing multiple nodes, turning it into a sequence..." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_ForceSuccess>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_ForceSuccess::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_ForceSuccess, 4044751968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ForceSuccess(Z_Construct_UClass_UBTDecorator_ForceSuccess, &UBTDecorator_ForceSuccess::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ForceSuccess"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ForceSuccess);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
