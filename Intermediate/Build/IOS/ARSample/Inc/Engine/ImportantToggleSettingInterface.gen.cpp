// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ImportantToggleSettingInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportantToggleSettingInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UImportantToggleSettingInterface::StaticRegisterNativesUImportantToggleSettingInterface()
	{
	}
	UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister()
	{
		return UImportantToggleSettingInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UImportantToggleSettingInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Classes/Engine/ImportantToggleSettingInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IImportantToggleSettingInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UImportantToggleSettingInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
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
	IMPLEMENT_CLASS(UImportantToggleSettingInterface, 2358299929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportantToggleSettingInterface(Z_Construct_UClass_UImportantToggleSettingInterface, &UImportantToggleSettingInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UImportantToggleSettingInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportantToggleSettingInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
