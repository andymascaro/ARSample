// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreviousFrameSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPreviousFrameSwitch::StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister()
	{
		return UMaterialExpressionPreviousFrameSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionPreviousFrameSwitch.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFrame_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, PreviousFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_PreviousFrame_MetaData, ARRAY_COUNT(NewProp_PreviousFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFrame_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, CurrentFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_CurrentFrame_MetaData, ARRAY_COUNT(NewProp_CurrentFrame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentFrame,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPreviousFrameSwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPreviousFrameSwitch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionPreviousFrameSwitch, 3839540394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPreviousFrameSwitch(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch, &UMaterialExpressionPreviousFrameSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPreviousFrameSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreviousFrameSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
