// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextureLightProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLightProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureLightProfile::StaticRegisterNativesUTextureLightProfile()
	{
	}
	UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister()
	{
		return UTextureLightProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextureLightProfile()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object CompositeTexture Texture2D Object" },
				{ "IncludePath", "Engine/TextureLightProfile.h" },
				{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureMultiplier_MetaData[] = {
				{ "Category", "TextureLightProfile" },
				{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
				{ "ToolTip", "Multiplier to map texture value to result to integrate over the sphere to 1.0f" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TextureMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UTextureLightProfile, TextureMultiplier), METADATA_PARAMS(NewProp_TextureMultiplier_MetaData, ARRAY_COUNT(NewProp_TextureMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
				{ "Category", "TextureLightProfile" },
				{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
				{ "ToolTip", "Light brightness in Lumens, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness = { UE4CodeGen_Private::EPropertyClass::Float, "Brightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UTextureLightProfile, Brightness), METADATA_PARAMS(NewProp_Brightness_MetaData, ARRAY_COUNT(NewProp_Brightness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brightness,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextureLightProfile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextureLightProfile::StaticClass,
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
	IMPLEMENT_CLASS(UTextureLightProfile, 4285307279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureLightProfile(Z_Construct_UClass_UTextureLightProfile, &UTextureLightProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureLightProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLightProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
