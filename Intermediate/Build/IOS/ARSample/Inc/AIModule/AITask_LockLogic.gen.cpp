// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/AITask_LockLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_LockLogic() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic()
	{
	}
	UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister()
	{
		return UAITask_LockLogic::StaticClass();
	}
	UClass* Z_Construct_UClass_UAITask_LockLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAITask,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/AITask_LockLogic.h" },
				{ "ModuleRelativePath", "Classes/Tasks/AITask_LockLogic.h" },
				{ "ToolTip", "Locks AI logic until removed by external trigger" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAITask_LockLogic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAITask_LockLogic::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask_LockLogic, 2477438983);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask_LockLogic(Z_Construct_UClass_UAITask_LockLogic, &UAITask_LockLogic::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask_LockLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_LockLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
