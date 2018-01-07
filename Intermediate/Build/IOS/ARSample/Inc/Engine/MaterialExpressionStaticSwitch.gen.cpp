// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionStaticSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionStaticSwitch::StaticRegisterNativesUMaterialExpressionStaticSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitch_NoRegister()
	{
		return UMaterialExpressionStaticSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitch()
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
				{ "IncludePath", "Materials/MaterialExpressionStaticSwitch.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitch.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Ignored if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitch, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitch, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitch, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "MaterialExpressionStaticSwitch" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitch.h" },
				{ "OverridingInputProperty", "Value" },
			};
#endif
			auto NewProp_DefaultValue_SetBit = [](void* Obj){ ((UMaterialExpressionStaticSwitch*)Obj)->DefaultValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticSwitch), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionStaticSwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionStaticSwitch::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionStaticSwitch, 231875260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticSwitch(Z_Construct_UClass_UMaterialExpressionStaticSwitch, &UMaterialExpressionStaticSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
