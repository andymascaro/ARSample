// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/LightmassPrimitiveSettingsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
// End Cross Module References
	void ULightmassPrimitiveSettingsObject::StaticRegisterNativesULightmassPrimitiveSettingsObject()
	{
	}
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister()
	{
		return ULightmassPrimitiveSettingsObject::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Lightmass/LightmassPrimitiveSettingsObject.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Lightmass" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightmassPrimitiveSettingsObject, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightmassPrimitiveSettingsObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightmassPrimitiveSettingsObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00083080u,
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
	IMPLEMENT_CLASS(ULightmassPrimitiveSettingsObject, 364817019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmassPrimitiveSettingsObject(Z_Construct_UClass_ULightmassPrimitiveSettingsObject, &ULightmassPrimitiveSettingsObject::StaticClass, TEXT("/Script/Engine"), TEXT("ULightmassPrimitiveSettingsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPrimitiveSettingsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
