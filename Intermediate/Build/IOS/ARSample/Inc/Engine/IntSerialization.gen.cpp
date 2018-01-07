// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/IntSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntSerialization() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UIntSerialization::StaticRegisterNativesUIntSerialization()
	{
	}
	UClass* Z_Construct_UClass_UIntSerialization_NoRegister()
	{
		return UIntSerialization::StaticClass();
	}
	UClass* Z_Construct_UClass_UIntSerialization()
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
				{ "IncludePath", "Engine/IntSerialization.h" },
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt32Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SignedInt32Variable = { UE4CodeGen_Private::EPropertyClass::Int, "SignedInt32Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt32Variable), METADATA_PARAMS(NewProp_SignedInt32Variable_MetaData, ARRAY_COUNT(NewProp_SignedInt32Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt8Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
				{ "ToolTip", "Existing types" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnsignedInt8Variable = { UE4CodeGen_Private::EPropertyClass::Byte, "UnsignedInt8Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt8Variable), nullptr, METADATA_PARAMS(NewProp_UnsignedInt8Variable_MetaData, ARRAY_COUNT(NewProp_UnsignedInt8Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt64Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SignedInt64Variable = { UE4CodeGen_Private::EPropertyClass::Int64, "SignedInt64Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt64Variable), METADATA_PARAMS(NewProp_SignedInt64Variable_MetaData, ARRAY_COUNT(NewProp_SignedInt64Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt16Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt16PropertyParams NewProp_SignedInt16Variable = { UE4CodeGen_Private::EPropertyClass::Int16, "SignedInt16Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt16Variable), METADATA_PARAMS(NewProp_SignedInt16Variable_MetaData, ARRAY_COUNT(NewProp_SignedInt16Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt8Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_SignedInt8Variable = { UE4CodeGen_Private::EPropertyClass::Int8, "SignedInt8Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt8Variable), METADATA_PARAMS(NewProp_SignedInt8Variable_MetaData, ARRAY_COUNT(NewProp_SignedInt8Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt64Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_UnsignedInt64Variable = { UE4CodeGen_Private::EPropertyClass::UInt64, "UnsignedInt64Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt64Variable), METADATA_PARAMS(NewProp_UnsignedInt64Variable_MetaData, ARRAY_COUNT(NewProp_UnsignedInt64Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt32Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UnsignedInt32Variable = { UE4CodeGen_Private::EPropertyClass::UInt32, "UnsignedInt32Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt32Variable), METADATA_PARAMS(NewProp_UnsignedInt32Variable_MetaData, ARRAY_COUNT(NewProp_UnsignedInt32Variable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt16Variable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
				{ "ToolTip", "New types" },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_UnsignedInt16Variable = { UE4CodeGen_Private::EPropertyClass::UInt16, "UnsignedInt16Variable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt16Variable), METADATA_PARAMS(NewProp_UnsignedInt16Variable_MetaData, ARRAY_COUNT(NewProp_UnsignedInt16Variable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignedInt32Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsignedInt8Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignedInt64Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignedInt16Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignedInt8Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsignedInt64Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsignedInt32Variable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsignedInt16Variable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UIntSerialization>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UIntSerialization::StaticClass,
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
	IMPLEMENT_CLASS(UIntSerialization, 3015599297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIntSerialization(Z_Construct_UClass_UIntSerialization, &UIntSerialization::StaticClass, TEXT("/Script/Engine"), TEXT("UIntSerialization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntSerialization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
