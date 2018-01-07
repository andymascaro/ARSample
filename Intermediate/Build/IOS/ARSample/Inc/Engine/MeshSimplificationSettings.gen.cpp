// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MeshSimplificationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings()
	{
	}
	UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister()
	{
		return UMeshSimplificationSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMeshSimplificationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Mesh Simplification" },
				{ "IncludePath", "Engine/MeshSimplificationSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshReductionModuleName_MetaData[] = {
				{ "Category", "General" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.MeshReductionModule" },
				{ "DisplayName", "Mesh Reduction Plugin" },
				{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
				{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MeshReductionModuleName = { UE4CodeGen_Private::EPropertyClass::Name, "MeshReductionModuleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UMeshSimplificationSettings, MeshReductionModuleName), METADATA_PARAMS(NewProp_MeshReductionModuleName_MetaData, ARRAY_COUNT(NewProp_MeshReductionModuleName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshReductionModuleName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMeshSimplificationSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMeshSimplificationSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSimplificationSettings, 3438029338);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSimplificationSettings(Z_Construct_UClass_UMeshSimplificationSettings, &UMeshSimplificationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshSimplificationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSimplificationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
