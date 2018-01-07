// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSamplerType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void UMaterialExpressionTextureBase::StaticRegisterNativesUMaterialExpressionTextureBase()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister()
	{
		return UMaterialExpressionTextureBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureBase()
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
				{ "IncludePath", "Materials/MaterialExpressionTextureBase.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefaultMeshpaintTexture_MetaData[] = {
				{ "Category", "MaterialExpressionTextureBase" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
				{ "ToolTip", "Is default selected texture when using mesh paint mode texture painting" },
			};
#endif
			auto NewProp_IsDefaultMeshpaintTexture_SetBit = [](void* Obj){ ((UMaterialExpressionTextureBase*)Obj)->IsDefaultMeshpaintTexture = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefaultMeshpaintTexture = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDefaultMeshpaintTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDefaultMeshpaintTexture_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDefaultMeshpaintTexture_MetaData, ARRAY_COUNT(NewProp_IsDefaultMeshpaintTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[] = {
				{ "Category", "MaterialExpressionTextureBase" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerType = { UE4CodeGen_Private::EPropertyClass::Byte, "SamplerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureBase, SamplerType), Z_Construct_UEnum_Engine_EMaterialSamplerType, METADATA_PARAMS(NewProp_SamplerType_MetaData, ARRAY_COUNT(NewProp_SamplerType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "MaterialExpressionTextureBase" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureBase, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDefaultMeshpaintTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureBase, 3868115506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureBase(Z_Construct_UClass_UMaterialExpressionTextureBase, &UMaterialExpressionTextureBase::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
