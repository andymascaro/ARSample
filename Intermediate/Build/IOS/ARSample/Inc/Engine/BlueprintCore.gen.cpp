// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BlueprintCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintCore::StaticRegisterNativesUBlueprintCore()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCore_NoRegister()
	{
		return UBlueprintCore::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintCore()
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
				{ "IncludePath", "Engine/BlueprintCore.h" },
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
				{ "ToolTip", "Blueprint Guid" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueprintGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, BlueprintGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_BlueprintGuid_MetaData, ARRAY_COUNT(NewProp_BlueprintGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
				{ "ToolTip", "BackCompat: Whether or not this blueprint's authoritative CDO data has been migrated from the SkeletonGeneratedClass CDO to the GeneratedClass CDO" },
			};
#endif
			auto NewProp_bLegacyGeneratedClassIsAuthoritative_SetBit = [](void* Obj){ ((UBlueprintCore*)Obj)->bLegacyGeneratedClassIsAuthoritative = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyGeneratedClassIsAuthoritative = { UE4CodeGen_Private::EPropertyClass::Bool, "bLegacyGeneratedClassIsAuthoritative", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprintCore), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLegacyGeneratedClassIsAuthoritative_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData, ARRAY_COUNT(NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
				{ "ToolTip", "BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load" },
			};
#endif
			auto NewProp_bLegacyNeedToPurgeSkelRefs_SetBit = [](void* Obj){ ((UBlueprintCore*)Obj)->bLegacyNeedToPurgeSkelRefs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyNeedToPurgeSkelRefs = { UE4CodeGen_Private::EPropertyClass::Bool, "bLegacyNeedToPurgeSkelRefs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprintCore), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLegacyNeedToPurgeSkelRefs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLegacyNeedToPurgeSkelRefs_MetaData, ARRAY_COUNT(NewProp_bLegacyNeedToPurgeSkelRefs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
				{ "ToolTip", "Pointer to the 'most recent' fully generated class" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedClass = { UE4CodeGen_Private::EPropertyClass::Class, "GeneratedClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000400000000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, GeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GeneratedClass_MetaData, ARRAY_COUNT(NewProp_GeneratedClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonGeneratedClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
				{ "ToolTip", "Pointer to the skeleton class; this is regenerated any time a member variable or function is added but\n      is usually incomplete (no code or hidden autogenerated variables are added to it)" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkeletonGeneratedClass = { UE4CodeGen_Private::EPropertyClass::Class, "SkeletonGeneratedClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000400002000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, SkeletonGeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SkeletonGeneratedClass_MetaData, ARRAY_COUNT(NewProp_SkeletonGeneratedClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLegacyGeneratedClassIsAuthoritative,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLegacyNeedToPurgeSkelRefs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonGeneratedClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintCore>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintCore::StaticClass,
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
	IMPLEMENT_CLASS(UBlueprintCore, 1931895704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCore(Z_Construct_UClass_UBlueprintCore, &UBlueprintCore::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
