// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextureRenderTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureRenderTarget::StaticRegisterNativesUTextureRenderTarget()
	{
	}
	UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister()
	{
		return UTextureRenderTarget::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextureRenderTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/TextureRenderTarget.h" },
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[] = {
				{ "Category", "TextureRenderTarget" },
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
				{ "ToolTip", "Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetGamma = { UE4CodeGen_Private::EPropertyClass::Float, "TargetGamma", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget, TargetGamma), METADATA_PARAMS(NewProp_TargetGamma_MetaData, ARRAY_COUNT(NewProp_TargetGamma_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetGamma,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextureRenderTarget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextureRenderTarget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(UTextureRenderTarget, 3973347115);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureRenderTarget(Z_Construct_UClass_UTextureRenderTarget, &UTextureRenderTarget::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureRenderTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
