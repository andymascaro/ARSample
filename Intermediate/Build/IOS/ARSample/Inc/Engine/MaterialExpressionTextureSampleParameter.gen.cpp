// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureSampleParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameter::StaticRegisterNativesUMaterialExpressionTextureSampleParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSampleParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
				{ "ToolTip", "Controls where the this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "SortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, SortPriority), METADATA_PARAMS(NewProp_SortPriority_MetaData, ARRAY_COUNT(NewProp_SortPriority_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSampleParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
				{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Name, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, Group), METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSampleParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortPriority,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureSampleParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureSampleParameter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102081u,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureSampleParameter, 322134400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSampleParameter(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter, &UMaterialExpressionTextureSampleParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSampleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
