// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Float.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Float() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Float_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Float();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBlackboardKeyType_Float::StaticRegisterNativesUBlackboardKeyType_Float()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Float_NoRegister()
	{
		return UBlackboardKeyType_Float::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Float()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Blackboard" },
				{ "DisplayName", "Float" },
				{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Float.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Float.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlackboardKeyType_Float>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlackboardKeyType_Float::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00103080u,
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
	IMPLEMENT_CLASS(UBlackboardKeyType_Float, 994452802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_Float(Z_Construct_UClass_UBlackboardKeyType_Float, &UBlackboardKeyType_Float::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_Float"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Float);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
