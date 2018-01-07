// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MakeNoise() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MakeNoise::StaticRegisterNativesUBTTask_MakeNoise()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister()
	{
		return UBTTask_MakeNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_MakeNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_MakeNoise.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
				{ "ToolTip", "Make Noise task node.\nA task node that calls MakeNoise() on this Pawn when executed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudnes_MetaData[] = {
				{ "Category", "Node" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
				{ "ToolTip", "Loudnes of generated noise" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudnes = { UE4CodeGen_Private::EPropertyClass::Float, "Loudnes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_MakeNoise, Loudnes), METADATA_PARAMS(NewProp_Loudnes_MetaData, ARRAY_COUNT(NewProp_Loudnes_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loudnes,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_MakeNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_MakeNoise::StaticClass,
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
	IMPLEMENT_CLASS(UBTTask_MakeNoise, 2599906124);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MakeNoise(Z_Construct_UClass_UBTTask_MakeNoise, &UBTTask_MakeNoise::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_MakeNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MakeNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
