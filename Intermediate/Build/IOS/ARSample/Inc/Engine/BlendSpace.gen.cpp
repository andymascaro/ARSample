// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/BlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis();
// End Cross Module References
	void UBlendSpace::StaticRegisterNativesUBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpace_NoRegister()
	{
		return UBlendSpace::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlendSpaceBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/BlendSpace.h" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
				{ "ToolTip", "Contains a grid of data points with weights from sample points in the space" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisToScaleAnimation_MetaData[] = {
				{ "Category", "InputInterpolation" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
				{ "ToolTip", "If you have input interpolation, which axis to drive animation speed (scale) - i.e. for locomotion animation, speed axis will drive animation speed (thus scale)*" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToScaleAnimation = { UE4CodeGen_Private::EPropertyClass::Byte, "AxisToScaleAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBlendSpace, AxisToScaleAnimation), Z_Construct_UEnum_Engine_EBlendSpaceAxis, METADATA_PARAMS(NewProp_AxisToScaleAnimation_MetaData, ARRAY_COUNT(NewProp_AxisToScaleAnimation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToScaleAnimation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlendSpace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlendSpace::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendSpace, 3744948578);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpace(Z_Construct_UClass_UBlendSpace, &UBlendSpace::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
