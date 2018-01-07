// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavMeshBoundsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
// End Cross Module References
	void ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume()
	{
	}
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister()
	{
		return ANavMeshBoundsVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "AI/Navigation/NavMeshBoundsVolume.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavMeshBoundsVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavMeshBoundsVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavMeshBoundsVolume, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(NewProp_SupportedAgents_MetaData, ARRAY_COUNT(NewProp_SupportedAgents_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAgents,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavMeshBoundsVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavMeshBoundsVolume::StaticClass,
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
	IMPLEMENT_CLASS(ANavMeshBoundsVolume, 2156670803);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavMeshBoundsVolume(Z_Construct_UClass_ANavMeshBoundsVolume, &ANavMeshBoundsVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ANavMeshBoundsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshBoundsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
