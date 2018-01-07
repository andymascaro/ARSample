// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionComponentMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComponentMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComponentMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionComponentMask::StaticRegisterNativesUMaterialExpressionComponentMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister()
	{
		return UMaterialExpressionComponentMask::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionComponentMask()
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
				{ "IncludePath", "Materials/MaterialExpressionComponentMask.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "Category", "MaterialExpressionComponentMask" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
			auto NewProp_A_SetBit = [](void* Obj){ ((UMaterialExpressionComponentMask*)Obj)->A = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Bool, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionComponentMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_A_SetBit)>::SetBit, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "Category", "MaterialExpressionComponentMask" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
			auto NewProp_B_SetBit = [](void* Obj){ ((UMaterialExpressionComponentMask*)Obj)->B = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Bool, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionComponentMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_B_SetBit)>::SetBit, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[] = {
				{ "Category", "MaterialExpressionComponentMask" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
			auto NewProp_G_SetBit = [](void* Obj){ ((UMaterialExpressionComponentMask*)Obj)->G = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_G = { UE4CodeGen_Private::EPropertyClass::Bool, "G", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionComponentMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_G_SetBit)>::SetBit, METADATA_PARAMS(NewProp_G_MetaData, ARRAY_COUNT(NewProp_G_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
				{ "Category", "MaterialExpressionComponentMask" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
			auto NewProp_R_SetBit = [](void* Obj){ ((UMaterialExpressionComponentMask*)Obj)->R = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_R = { UE4CodeGen_Private::EPropertyClass::Bool, "R", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionComponentMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_R_SetBit)>::SetBit, METADATA_PARAMS(NewProp_R_MetaData, ARRAY_COUNT(NewProp_R_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComponentMask, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_G,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_R,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionComponentMask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionComponentMask::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionComponentMask, 361188252);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionComponentMask(Z_Construct_UClass_UMaterialExpressionComponentMask, &UMaterialExpressionComponentMask::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionComponentMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComponentMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
