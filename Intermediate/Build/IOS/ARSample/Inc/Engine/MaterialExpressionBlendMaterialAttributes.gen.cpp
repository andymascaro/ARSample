// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	static UEnum* EMaterialAttributeBlend_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAttributeBlend, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialAttributeBlend"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialAttributeBlend(EMaterialAttributeBlend_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialAttributeBlend"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialAttributeBlend_CRC() { return 2857489192U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialAttributeBlend"), 0, Get_Z_Construct_UEnum_Engine_EMaterialAttributeBlend_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaterialAttributeBlend::Blend", (int64)EMaterialAttributeBlend::Blend },
				{ "EMaterialAttributeBlend::UseA", (int64)EMaterialAttributeBlend::UseA },
				{ "EMaterialAttributeBlend::UseB", (int64)EMaterialAttributeBlend::UseB },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialAttributeBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMaterialAttributeBlend::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionBlendMaterialAttributes::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionBlendMaterialAttributes::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes()
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
				{ "IncludePath", "Materials/MaterialExpressionBlendMaterialAttributes.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeBlendType_MetaData[] = {
				{ "Category", "MaterialAttributes" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
				{ "ToolTip", "Optionally skip blending attributes of this type." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexAttributeBlendType = { UE4CodeGen_Private::EPropertyClass::Byte, "VertexAttributeBlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(NewProp_VertexAttributeBlendType_MetaData, ARRAY_COUNT(NewProp_VertexAttributeBlendType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelAttributeBlendType_MetaData[] = {
				{ "Category", "MaterialAttributes" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
				{ "ToolTip", "Optionally skip blending attributes of this type." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixelAttributeBlendType = { UE4CodeGen_Private::EPropertyClass::Byte, "PixelAttributeBlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(NewProp_PixelAttributeBlendType_MetaData, ARRAY_COUNT(NewProp_PixelAttributeBlendType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Struct, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexAttributeBlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelAttributeBlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionBlendMaterialAttributes::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionBlendMaterialAttributes, 2947723819);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBlendMaterialAttributes(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes, &UMaterialExpressionBlendMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBlendMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
