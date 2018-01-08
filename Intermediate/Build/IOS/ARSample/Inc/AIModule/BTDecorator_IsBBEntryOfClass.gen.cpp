// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsBBEntryOfClass() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBTDecorator_IsBBEntryOfClass::StaticRegisterNativesUBTDecorator_IsBBEntryOfClass()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister()
	{
		return UBTDecorator_IsBBEntryOfClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Condition" },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TestClass = { UE4CodeGen_Private::EPropertyClass::Class, "TestClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_IsBBEntryOfClass, TestClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_TestClass_MetaData, ARRAY_COUNT(NewProp_TestClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_IsBBEntryOfClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_IsBBEntryOfClass::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_IsBBEntryOfClass, 3142505788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsBBEntryOfClass(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass, &UBTDecorator_IsBBEntryOfClass::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_IsBBEntryOfClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsBBEntryOfClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
