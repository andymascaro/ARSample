// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkCustomInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavLinkCustomInterface::StaticRegisterNativesUNavLinkCustomInterface()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister()
	{
		return UNavLinkCustomInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkCustomInterface()
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
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<INavLinkCustomInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkCustomInterface::StaticClass,
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
	IMPLEMENT_CLASS(UNavLinkCustomInterface, 3054487837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkCustomInterface(Z_Construct_UClass_UNavLinkCustomInterface, &UNavLinkCustomInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkCustomInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
