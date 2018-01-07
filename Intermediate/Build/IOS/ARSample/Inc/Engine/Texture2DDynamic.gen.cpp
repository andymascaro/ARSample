// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Texture2DDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void UTexture2DDynamic::StaticRegisterNativesUTexture2DDynamic()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister()
	{
		return UTexture2DDynamic::StaticClass();
	}
	UClass* Z_Construct_UClass_UTexture2DDynamic()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/Texture2DDynamic.h" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
				{ "ToolTip", "The format of the texture." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Byte, "Format", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UTexture2DDynamic, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(NewProp_Format_MetaData, ARRAY_COUNT(NewProp_Format_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Format,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTexture2DDynamic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTexture2DDynamic::StaticClass,
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
	IMPLEMENT_CLASS(UTexture2DDynamic, 965617828);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DDynamic(Z_Construct_UClass_UTexture2DDynamic, &UTexture2DDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture2DDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
