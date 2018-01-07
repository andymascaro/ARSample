// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionConstant3Vector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant3Vector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionConstant3Vector::StaticRegisterNativesUMaterialExpressionConstant3Vector()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister()
	{
		return UMaterialExpressionConstant3Vector::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector()
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
				{ "IncludePath", "Materials/MaterialExpressionConstant3Vector.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
				{ "Category", "MaterialExpressionConstant3Vector" },
				{ "DontUpdateWhileEditing", "" },
				{ "HideAlphaChannel", "" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant = { UE4CodeGen_Private::EPropertyClass::Struct, "Constant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionConstant3Vector, Constant), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Constant_MetaData, ARRAY_COUNT(NewProp_Constant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constant,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionConstant3Vector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionConstant3Vector::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionConstant3Vector, 203809306);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionConstant3Vector(Z_Construct_UClass_UMaterialExpressionConstant3Vector, &UMaterialExpressionConstant3Vector::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionConstant3Vector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant3Vector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
