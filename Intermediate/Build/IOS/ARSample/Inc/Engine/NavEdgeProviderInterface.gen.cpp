// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavEdgeProviderInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavEdgeProviderInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavEdgeProviderInterface::StaticRegisterNativesUNavEdgeProviderInterface()
	{
	}
	UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister()
	{
		return UNavEdgeProviderInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavEdgeProviderInterface()
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
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavEdgeProviderInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<INavEdgeProviderInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavEdgeProviderInterface::StaticClass,
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
	IMPLEMENT_CLASS(UNavEdgeProviderInterface, 1694906925);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavEdgeProviderInterface(Z_Construct_UClass_UNavEdgeProviderInterface, &UNavEdgeProviderInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNavEdgeProviderInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavEdgeProviderInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
