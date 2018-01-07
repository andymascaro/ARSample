// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DPICustomScalingRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPICustomScalingRule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDPICustomScalingRule::StaticRegisterNativesUDPICustomScalingRule()
	{
	}
	UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister()
	{
		return UDPICustomScalingRule::StaticClass();
	}
	UClass* Z_Construct_UClass_UDPICustomScalingRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/DPICustomScalingRule.h" },
				{ "ModuleRelativePath", "Classes/Engine/DPICustomScalingRule.h" },
				{ "ToolTip", "Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\nand setting this rule to be used in your project settings." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDPICustomScalingRule>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDPICustomScalingRule::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UDPICustomScalingRule, 2686034788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDPICustomScalingRule(Z_Construct_UClass_UDPICustomScalingRule, &UDPICustomScalingRule::StaticClass, TEXT("/Script/Engine"), TEXT("UDPICustomScalingRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDPICustomScalingRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
