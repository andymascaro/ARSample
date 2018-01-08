// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Object() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Object_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Object();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlackboardKeyType_Object::StaticRegisterNativesUBlackboardKeyType_Object()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Object_NoRegister()
	{
		return UBlackboardKeyType_Object::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Object()
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
				{ "DisplayName", "Object" },
				{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Object.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Object.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[] = {
				{ "AllowAbstract", "1" },
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Object.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseClass = { UE4CodeGen_Private::EPropertyClass::Class, "BaseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Object, BaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BaseClass_MetaData, ARRAY_COUNT(NewProp_BaseClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlackboardKeyType_Object>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlackboardKeyType_Object::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00103080u,
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
	IMPLEMENT_CLASS(UBlackboardKeyType_Object, 1890034052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_Object(Z_Construct_UClass_UBlackboardKeyType_Object, &UBlackboardKeyType_Object::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
