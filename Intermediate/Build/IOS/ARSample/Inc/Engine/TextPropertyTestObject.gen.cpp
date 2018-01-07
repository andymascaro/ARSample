// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tests/TextPropertyTestObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextPropertyTestObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject()
	{
	}
	UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextPropertyTestObject()
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
				{ "IncludePath", "Tests/TextPropertyTestObject.h" },
				{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransientText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_TransientText = { UE4CodeGen_Private::EPropertyClass::Text, "TransientText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, TransientText), METADATA_PARAMS(NewProp_TransientText_MetaData, ARRAY_COUNT(NewProp_TransientText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndefaultedText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_UndefaultedText = { UE4CodeGen_Private::EPropertyClass::Text, "UndefaultedText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, UndefaultedText), METADATA_PARAMS(NewProp_UndefaultedText_MetaData, ARRAY_COUNT(NewProp_UndefaultedText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultedText_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultedText = { UE4CodeGen_Private::EPropertyClass::Text, "DefaultedText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, DefaultedText), METADATA_PARAMS(NewProp_DefaultedText_MetaData, ARRAY_COUNT(NewProp_DefaultedText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransientText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndefaultedText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultedText,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextPropertyTestObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextPropertyTestObject::StaticClass,
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
	IMPLEMENT_CLASS(UTextPropertyTestObject, 680077190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextPropertyTestObject(Z_Construct_UClass_UTextPropertyTestObject, &UTextPropertyTestObject::StaticClass, TEXT("/Script/Engine"), TEXT("UTextPropertyTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextPropertyTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
