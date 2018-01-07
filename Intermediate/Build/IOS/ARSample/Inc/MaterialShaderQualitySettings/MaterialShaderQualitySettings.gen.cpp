// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/MaterialShaderQualitySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}
// Cross Module References
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
// End Cross Module References
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MaterialShaderQualitySettings.h" },
				{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
				{ "ToolTip", "UCLASS(config = Engine, defaultconfig)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSettingMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForwardSettingMap = { UE4CodeGen_Private::EPropertyClass::Map, "ForwardSettingMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialShaderQualitySettings, ForwardSettingMap), METADATA_PARAMS(NewProp_ForwardSettingMap_MetaData, ARRAY_COUNT(NewProp_ForwardSettingMap_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForwardSettingMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ForwardSettingMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardSettingMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "ForwardSettingMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardSettingMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardSettingMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardSettingMap_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialShaderQualitySettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialShaderQualitySettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UMaterialShaderQualitySettings, 3407812645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialShaderQualitySettings(Z_Construct_UClass_UMaterialShaderQualitySettings, &UMaterialShaderQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UMaterialShaderQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
