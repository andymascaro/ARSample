// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextureRenderTargetCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UTextureRenderTargetCube::StaticRegisterNativesUTextureRenderTargetCube()
	{
	}
	UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister()
	{
		return UTextureRenderTargetCube::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextureRenderTargetCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Texture" },
				{ "IncludePath", "Engine/TextureRenderTargetCube.h" },
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "TextureRenderTargetCube\n\nCube render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular cube texture resource." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "True to force linear gamma space for this render target" },
			};
#endif
			auto NewProp_bForceLinearGamma_SetBit = [](void* Obj){ ((UTextureRenderTargetCube*)Obj)->bForceLinearGamma = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceLinearGamma", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTargetCube), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceLinearGamma_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceLinearGamma_MetaData, ARRAY_COUNT(NewProp_bForceLinearGamma_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
				{ "Category", "TextureRenderTargetCube" },
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
			};
#endif
			auto NewProp_bHDR_SetBit = [](void* Obj){ ((UTextureRenderTargetCube*)Obj)->bHDR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bHDR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTargetCube), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHDR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHDR_MetaData, ARRAY_COUNT(NewProp_bHDR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "OverrideFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(NewProp_OverrideFormat_MetaData, ARRAY_COUNT(NewProp_OverrideFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "the color the texture is cleared to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ClearColor_MetaData, ARRAY_COUNT(NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "Category", "TextureRenderTargetCube" },
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
				{ "ToolTip", "The width of the texture." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTextureRenderTargetCube, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceLinearGamma,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHDR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextureRenderTargetCube>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextureRenderTargetCube::StaticClass,
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
	IMPLEMENT_CLASS(UTextureRenderTargetCube, 640823445);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureRenderTargetCube(Z_Construct_UClass_UTextureRenderTargetCube, &UTextureRenderTargetCube::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureRenderTargetCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
