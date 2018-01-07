// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/WindDirectionalSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
// End Cross Module References
	void AWindDirectionalSource::StaticRegisterNativesAWindDirectionalSource()
	{
	}
	UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister()
	{
		return AWindDirectionalSource::StaticClass();
	}
	UClass* Z_Construct_UClass_AWindDirectionalSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Wind" },
				{ "HideCategories", "Input Movement Collision" },
				{ "IncludePath", "Engine/WindDirectionalSource.h" },
				{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Actor that provides a directional wind source. Only affects SpeedTree assets." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AWindDirectionalSource, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "WindDirectionalSource" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AWindDirectionalSource, Component), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWindDirectionalSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWindDirectionalSource::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AWindDirectionalSource, 2830160143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindDirectionalSource(Z_Construct_UClass_AWindDirectionalSource, &AWindDirectionalSource::StaticClass, TEXT("/Script/Engine"), TEXT("AWindDirectionalSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindDirectionalSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
