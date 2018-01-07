// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeStreamingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeStreamingProxy() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
// End Cross Module References
	void ALandscapeStreamingProxy::StaticRegisterNativesALandscapeStreamingProxy()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister()
	{
		return ALandscapeStreamingProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Display Attachment Physics Debug LOD" },
				{ "IncludePath", "LandscapeStreamingProxy.h" },
				{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[] = {
				{ "Category", "LandscapeProxy" },
				{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor = { UE4CodeGen_Private::EPropertyClass::LazyObject, "LandscapeActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(NewProp_LandscapeActor_MetaData, ARRAY_COUNT(NewProp_LandscapeActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALandscapeStreamingProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALandscapeStreamingProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
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
	IMPLEMENT_CLASS(ALandscapeStreamingProxy, 2366380265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeStreamingProxy(Z_Construct_UClass_ALandscapeStreamingProxy, &ALandscapeStreamingProxy::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeStreamingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeStreamingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
