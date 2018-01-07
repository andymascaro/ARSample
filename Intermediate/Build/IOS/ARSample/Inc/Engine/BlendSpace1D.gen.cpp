// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/BlendSpace1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace1D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlendSpace1D::StaticRegisterNativesUBlendSpace1D()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister()
	{
		return UBlendSpace1D::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlendSpace1D()
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
				{ "IncludePath", "Animation/BlendSpace1D.h" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleAnimation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
				{ "ToolTip", "Drive animation speed by blend input position *" },
			};
#endif
			auto NewProp_bScaleAnimation_SetBit = [](void* Obj){ ((UBlendSpace1D*)Obj)->bScaleAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlendSpace1D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleAnimation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleAnimation_MetaData, ARRAY_COUNT(NewProp_bScaleAnimation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayEditorVertically_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
			};
#endif
			auto NewProp_bDisplayEditorVertically_SetBit = [](void* Obj){ ((UBlendSpace1D*)Obj)->bDisplayEditorVertically_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayEditorVertically = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayEditorVertically", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlendSpace1D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayEditorVertically_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayEditorVertically_MetaData, ARRAY_COUNT(NewProp_bDisplayEditorVertically_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleAnimation,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayEditorVertically,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlendSpace1D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlendSpace1D::StaticClass,
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
	IMPLEMENT_CLASS(UBlendSpace1D, 2697813449);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpace1D(Z_Construct_UClass_UBlendSpace1D, &UBlendSpace1D::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpace1D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace1D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
