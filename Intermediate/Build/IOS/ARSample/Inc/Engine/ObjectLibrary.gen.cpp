// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ObjectLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UObjectLibrary::StaticRegisterNativesUObjectLibrary()
	{
	}
	UClass* Z_Construct_UClass_UObjectLibrary_NoRegister()
	{
		return UObjectLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UObjectLibrary()
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
				{ "IncludePath", "Engine/ObjectLibrary.h" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "Class that holds a library of Objects" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFullyLoaded_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "True if we've already fully loaded this library, can't do it twice" },
			};
#endif
			auto NewProp_bIsFullyLoaded_SetBit = [](void* Obj){ ((UObjectLibrary*)Obj)->bIsFullyLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFullyLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFullyLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFullyLoaded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFullyLoaded_MetaData, ARRAY_COUNT(NewProp_bIsFullyLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWeakReferences_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "If this library should use weak pointers" },
			};
#endif
			auto NewProp_bUseWeakReferences_SetBit = [](void* Obj){ ((UObjectLibrary*)Obj)->bUseWeakReferences = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWeakReferences = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseWeakReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseWeakReferences_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseWeakReferences_MetaData, ARRAY_COUNT(NewProp_bUseWeakReferences_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakObjects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "Weak pointers to objects" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeakObjects = { UE4CodeGen_Private::EPropertyClass::Array, "WeakObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000000, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, WeakObjects), METADATA_PARAMS(NewProp_WeakObjects_MetaData, ARRAY_COUNT(NewProp_WeakObjects_MetaData)) };
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjects_Inner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "WeakObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
				{ "Category", "ObjectLibrary" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "List of Objects in library" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects = { UE4CodeGen_Private::EPropertyClass::Array, "Objects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, Objects), METADATA_PARAMS(NewProp_Objects_MetaData, ARRAY_COUNT(NewProp_Objects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Objects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[] = {
				{ "Category", "ObjectLibrary" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "True if this library holds blueprint classes, false if it holds other objects" },
			};
#endif
			auto NewProp_bHasBlueprintClasses_SetBit = [](void* Obj){ ((UObjectLibrary*)Obj)->bHasBlueprintClasses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBlueprintClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBlueprintClasses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBlueprintClasses_MetaData, ARRAY_COUNT(NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBaseClass_MetaData[] = {
				{ "AllowAbstract", "" },
				{ "Category", "ObjectLibrary" },
				{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
				{ "ToolTip", "Class that Objects must be of. If ContainsBlueprints is true, this is the native class that the blueprints are instances of and not UClass" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectBaseClass = { UE4CodeGen_Private::EPropertyClass::Class, "ObjectBaseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, ObjectBaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ObjectBaseClass_MetaData, ARRAY_COUNT(NewProp_ObjectBaseClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFullyLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseWeakReferences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeakObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeakObjects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Objects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Objects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBlueprintClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBaseClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UObjectLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UObjectLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UObjectLibrary, 2841066635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectLibrary(Z_Construct_UClass_UObjectLibrary, &UObjectLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UObjectLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
