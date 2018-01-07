// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Navigation/NavFilter_AIControllerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavFilter_AIControllerDefault() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UNavFilter_AIControllerDefault::StaticRegisterNativesUNavFilter_AIControllerDefault()
	{
	}
	UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister()
	{
		return UNavFilter_AIControllerDefault::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Navigation/NavFilter_AIControllerDefault.h" },
				{ "ModuleRelativePath", "Classes/Navigation/NavFilter_AIControllerDefault.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavFilter_AIControllerDefault>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavFilter_AIControllerDefault::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UNavFilter_AIControllerDefault, 476467672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavFilter_AIControllerDefault(Z_Construct_UClass_UNavFilter_AIControllerDefault, &UNavFilter_AIControllerDefault::StaticClass, TEXT("/Script/AIModule"), TEXT("UNavFilter_AIControllerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavFilter_AIControllerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
