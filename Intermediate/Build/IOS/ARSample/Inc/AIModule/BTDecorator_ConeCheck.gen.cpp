// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConeCheck() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_ConeCheck::StaticRegisterNativesUBTDecorator_ConeCheck()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister()
	{
		return UBTDecorator_ConeCheck::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck()
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
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ToolTip", "Cone check decorator node.\nA decorator node that bases its condition on a cone check, using Blackboard entries to form the parameters of the check." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Observed = { UE4CodeGen_Private::EPropertyClass::Struct, "Observed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_Observed_MetaData, ARRAY_COUNT(NewProp_Observed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDirection_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ToolTip", "\"None\" means \"use ConeOrigin's direction\"" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeDirection), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_ConeDirection_MetaData, ARRAY_COUNT(NewProp_ConeDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_ConeOrigin_MetaData, ARRAY_COUNT(NewProp_ConeOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[] = {
				{ "Category", "Decorator" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
				{ "ToolTip", "Angle between cone direction and code cone edge, or a half of the total cone angle" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle = { UE4CodeGen_Private::EPropertyClass::Float, "ConeHalfAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeHalfAngle), METADATA_PARAMS(NewProp_ConeHalfAngle_MetaData, ARRAY_COUNT(NewProp_ConeHalfAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Observed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeHalfAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_ConeCheck>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_ConeCheck::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_ConeCheck, 3798661064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ConeCheck(Z_Construct_UClass_UBTDecorator_ConeCheck, &UBTDecorator_ConeCheck::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ConeCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConeCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
