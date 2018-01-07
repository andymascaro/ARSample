// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ObjectReferencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UObjectReferencer::StaticRegisterNativesUObjectReferencer()
	{
	}
	UClass* Z_Construct_UClass_UObjectReferencer_NoRegister()
	{
		return UObjectReferencer::StaticClass();
	}
	UClass* Z_Construct_UClass_UObjectReferencer()
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
				{ "IncludePath", "Engine/ObjectReferencer.h" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[] = {
				{ "Category", "ObjectReferencer" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
				{ "ToolTip", "Array of objects being referenced." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "ReferencedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UObjectReferencer, ReferencedObjects), METADATA_PARAMS(NewProp_ReferencedObjects_MetaData, ARRAY_COUNT(NewProp_ReferencedObjects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReferencedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedObjects_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UObjectReferencer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UObjectReferencer::StaticClass,
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
	IMPLEMENT_CLASS(UObjectReferencer, 1390231846);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectReferencer(Z_Construct_UClass_UObjectReferencer, &UObjectReferencer::StaticClass, TEXT("/Script/Engine"), TEXT("UObjectReferencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReferencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif