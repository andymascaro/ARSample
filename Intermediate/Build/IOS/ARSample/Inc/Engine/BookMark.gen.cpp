// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BookMark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UBookMark::StaticRegisterNativesUBookMark()
	{
	}
	UClass* Z_Construct_UClass_UBookMark_NoRegister()
	{
		return UBookMark::StaticClass();
	}
	UClass* Z_Construct_UClass_UBookMark()
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
				{ "IncludePath", "Engine/BookMark.h" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
				{ "ToolTip", "A camera position the current level." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenLevels_MetaData[] = {
				{ "Category", "BookMark" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
				{ "ToolTip", "Array of levels that are hidden" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenLevels = { UE4CodeGen_Private::EPropertyClass::Array, "HiddenLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBookMark, HiddenLevels), METADATA_PARAMS(NewProp_HiddenLevels_MetaData, ARRAY_COUNT(NewProp_HiddenLevels_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HiddenLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HiddenLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "BookMark" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
				{ "ToolTip", "Camera rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBookMark, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "BookMark" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
				{ "ToolTip", "Camera position" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBookMark, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenLevels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBookMark>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBookMark::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UBookMark, 4104324247);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBookMark(Z_Construct_UClass_UBookMark, &UBookMark::StaticClass, TEXT("/Script/Engine"), TEXT("UBookMark"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
