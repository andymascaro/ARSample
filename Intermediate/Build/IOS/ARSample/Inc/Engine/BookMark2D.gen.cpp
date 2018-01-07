// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BookMark2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void UBookMark2D::StaticRegisterNativesUBookMark2D()
	{
	}
	UClass* Z_Construct_UClass_UBookMark2D_NoRegister()
	{
		return UBookMark2D::StaticClass();
	}
	UClass* Z_Construct_UClass_UBookMark2D()
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
				{ "IncludePath", "Engine/BookMark2D.h" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
				{ "ToolTip", "Simple class to store 2D camera information." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "BookMark2D" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
				{ "ToolTip", "Location of the camera" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBookMark2D, Location), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom2D_MetaData[] = {
				{ "Category", "BookMark2D" },
				{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
				{ "ToolTip", "Zoom of the camera" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zoom2D = { UE4CodeGen_Private::EPropertyClass::Float, "Zoom2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBookMark2D, Zoom2D), METADATA_PARAMS(NewProp_Zoom2D_MetaData, ARRAY_COUNT(NewProp_Zoom2D_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Zoom2D,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBookMark2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBookMark2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UBookMark2D, 356008816);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBookMark2D(Z_Construct_UClass_UBookMark2D, &UBookMark2D::StaticClass, TEXT("/Script/Engine"), TEXT("UBookMark2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
