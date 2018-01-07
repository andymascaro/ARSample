// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_NativeEnum() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UBlackboardKeyType_NativeEnum::StaticRegisterNativesUBlackboardKeyType_NativeEnum()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum_NoRegister()
	{
		return UBlackboardKeyType_NativeEnum::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_NativeEnum()
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
				{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
				{ "ToolTip", "DEPRECATED, please use UBlackboardKeyType_Enum instead" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnumType = { UE4CodeGen_Private::EPropertyClass::Object, "EnumType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_NativeEnum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_EnumType_MetaData, ARRAY_COUNT(NewProp_EnumType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnumName = { UE4CodeGen_Private::EPropertyClass::Str, "EnumName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_NativeEnum, EnumName), METADATA_PARAMS(NewProp_EnumName_MetaData, ARRAY_COUNT(NewProp_EnumName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlackboardKeyType_NativeEnum>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlackboardKeyType_NativeEnum::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x04103080u,
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
	IMPLEMENT_CLASS(UBlackboardKeyType_NativeEnum, 2824950901);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_NativeEnum(Z_Construct_UClass_UBlackboardKeyType_NativeEnum, &UBlackboardKeyType_NativeEnum::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_NativeEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_NativeEnum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
