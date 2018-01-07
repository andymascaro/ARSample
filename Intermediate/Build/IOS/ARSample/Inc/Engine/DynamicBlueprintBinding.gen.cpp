// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DynamicBlueprintBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicBlueprintBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDynamicBlueprintBinding::StaticRegisterNativesUDynamicBlueprintBinding()
	{
	}
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister()
	{
		return UDynamicBlueprintBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding()
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
				{ "IncludePath", "Engine/DynamicBlueprintBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/DynamicBlueprintBinding.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDynamicBlueprintBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDynamicBlueprintBinding::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicBlueprintBinding, 3914542463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicBlueprintBinding(Z_Construct_UClass_UDynamicBlueprintBinding, &UDynamicBlueprintBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UDynamicBlueprintBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicBlueprintBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
