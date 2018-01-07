// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Binding/PropertyBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UPropertyBinding::StaticRegisterNativesUPropertyBinding()
	{
	}
	UClass* Z_Construct_UClass_UPropertyBinding_NoRegister()
	{
		return UPropertyBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UPropertyBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Binding/PropertyBinding.h" },
				{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationProperty_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
				{ "ToolTip", "Used to determine if a binding already exists on the object and if this binding can be safely removed." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DestinationProperty = { UE4CodeGen_Private::EPropertyClass::Name, "DestinationProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPropertyBinding, DestinationProperty), METADATA_PARAMS(NewProp_DestinationProperty_MetaData, ARRAY_COUNT(NewProp_DestinationProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
				{ "ToolTip", "The property path to trace to resolve this binding on the Source Object" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPropertyBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(NewProp_SourcePath_MetaData, ARRAY_COUNT(NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
				{ "ToolTip", "The source object to use as the initial container to resolve the Source Property Path on." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SourceObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UPropertyBinding, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_SourceObject_MetaData, ARRAY_COUNT(NewProp_SourceObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceObject,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPropertyBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPropertyBinding::StaticClass,
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
	IMPLEMENT_CLASS(UPropertyBinding, 3990919884);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyBinding(Z_Construct_UClass_UPropertyBinding, &UPropertyBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UPropertyBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
