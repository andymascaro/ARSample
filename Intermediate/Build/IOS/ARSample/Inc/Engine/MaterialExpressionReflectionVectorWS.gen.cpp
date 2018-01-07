// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionReflectionVectorWS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionVectorWS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionReflectionVectorWS::StaticRegisterNativesUMaterialExpressionReflectionVectorWS()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister()
	{
		return UMaterialExpressionReflectionVectorWS::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS()
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
				{ "IncludePath", "Materials/MaterialExpressionReflectionVectorWS.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeCustomWorldNormal_MetaData[] = {
				{ "Category", "UMaterialExpressionReflectionVectorWS" },
				{ "DisplayName", "Normalize custom world normal" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
				{ "ToolTip", "(true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1" },
			};
#endif
			auto NewProp_bNormalizeCustomWorldNormal_SetBit = [](void* Obj){ ((UMaterialExpressionReflectionVectorWS*)Obj)->bNormalizeCustomWorldNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeCustomWorldNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalizeCustomWorldNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionReflectionVectorWS), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNormalizeCustomWorldNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNormalizeCustomWorldNormal_MetaData, ARRAY_COUNT(NewProp_bNormalizeCustomWorldNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWorldNormal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to Reflection Vector if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomWorldNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomWorldNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionReflectionVectorWS, CustomWorldNormal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_CustomWorldNormal_MetaData, ARRAY_COUNT(NewProp_CustomWorldNormal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNormalizeCustomWorldNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomWorldNormal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionReflectionVectorWS>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionReflectionVectorWS::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionReflectionVectorWS, 2463844790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionReflectionVectorWS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS, &UMaterialExpressionReflectionVectorWS::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionReflectionVectorWS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionVectorWS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
