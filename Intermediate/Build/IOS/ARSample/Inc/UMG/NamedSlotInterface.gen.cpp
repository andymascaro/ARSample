// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/NamedSlotInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlotInterface() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlotInterface::StaticRegisterNativesUNamedSlotInterface()
	{
	}
	UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister()
	{
		return UNamedSlotInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UNamedSlotInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Public/Components/NamedSlotInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<INamedSlotInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNamedSlotInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(UNamedSlotInterface, 1930936388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNamedSlotInterface(Z_Construct_UClass_UNamedSlotInterface, &UNamedSlotInterface::StaticClass, TEXT("/Script/UMG"), TEXT("UNamedSlotInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlotInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
