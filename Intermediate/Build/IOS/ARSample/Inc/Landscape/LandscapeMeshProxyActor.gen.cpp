// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeMeshProxyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
// End Cross Module References
	void ALandscapeMeshProxyActor::StaticRegisterNativesALandscapeMeshProxyActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister()
	{
		return ALandscapeMeshProxyActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeMeshProxyActor.h" },
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMeshProxyComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "LandscapeMeshProxyActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMeshProxyComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LandscapeMeshProxyComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent), Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister, METADATA_PARAMS(NewProp_LandscapeMeshProxyComponent_MetaData, ARRAY_COUNT(NewProp_LandscapeMeshProxyComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeMeshProxyComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALandscapeMeshProxyActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALandscapeMeshProxyActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ALandscapeMeshProxyActor, 2776632370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeMeshProxyActor(Z_Construct_UClass_ALandscapeMeshProxyActor, &ALandscapeMeshProxyActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeMeshProxyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeMeshProxyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
