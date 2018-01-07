// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ShadowMapTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapFlags();
// End Cross Module References
	void UShadowMapTexture2D::StaticRegisterNativesUShadowMapTexture2D()
	{
	}
	UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister()
	{
		return UShadowMapTexture2D::StaticClass();
	}
	UClass* Z_Construct_UClass_UShadowMapTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture2D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/ShadowMapTexture2D.h" },
				{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowmapFlags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
				{ "ToolTip", "Bit-field with shadowmap flags." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadowmapFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadowmapFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UShadowMapTexture2D, ShadowmapFlags), Z_Construct_UEnum_Engine_EShadowMapFlags, METADATA_PARAMS(NewProp_ShadowmapFlags_MetaData, ARRAY_COUNT(NewProp_ShadowmapFlags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowmapFlags,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UShadowMapTexture2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UShadowMapTexture2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UShadowMapTexture2D, 1981678165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowMapTexture2D(Z_Construct_UClass_UShadowMapTexture2D, &UShadowMapTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("UShadowMapTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowMapTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
