// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelActorContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelActorContainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULevelActorContainer::StaticRegisterNativesULevelActorContainer()
	{
	}
	UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister()
	{
		return ULevelActorContainer::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelActorContainer()
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
				{ "IncludePath", "Engine/LevelActorContainer.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
				{ "ToolTip", "Root object for all level actors" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
				{ "ToolTip", "Array of actors in a level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ULevelActorContainer, Actors), METADATA_PARAMS(NewProp_Actors_MetaData, ARRAY_COUNT(NewProp_Actors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelActorContainer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelActorContainer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(ULevelActorContainer, 1573496107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelActorContainer(Z_Construct_UClass_ULevelActorContainer, &ULevelActorContainer::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelActorContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelActorContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
