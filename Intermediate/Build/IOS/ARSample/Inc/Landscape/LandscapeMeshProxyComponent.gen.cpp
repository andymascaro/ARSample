// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeMeshProxyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULandscapeMeshProxyComponent::StaticRegisterNativesULandscapeMeshProxyComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister()
	{
		return ULandscapeMeshProxyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "LandscapeMeshProxyComponent.h" },
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyLOD_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
				{ "ToolTip", "LOD level proxy was generated for" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ProxyLOD = { UE4CodeGen_Private::EPropertyClass::Int8, "ProxyLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyLOD), METADATA_PARAMS(NewProp_ProxyLOD_MetaData, ARRAY_COUNT(NewProp_ProxyLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyComponentBases_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
				{ "ToolTip", "The components this proxy was generated for" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProxyComponentBases = { UE4CodeGen_Private::EPropertyClass::Array, "ProxyComponentBases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentBases), METADATA_PARAMS(NewProp_ProxyComponentBases_MetaData, ARRAY_COUNT(NewProp_ProxyComponentBases_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxyComponentBases_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProxyComponentBases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
				{ "ToolTip", "The landscape this proxy was generated for" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LandscapeGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(NewProp_LandscapeGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProxyLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProxyComponentBases,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProxyComponentBases_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeMeshProxyComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeMeshProxyComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A81080u,
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
	IMPLEMENT_CLASS(ULandscapeMeshProxyComponent, 891279140);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMeshProxyComponent(Z_Construct_UClass_ULandscapeMeshProxyComponent, &ULandscapeMeshProxyComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMeshProxyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshProxyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
