// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MeshMergeCullingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMergeCullingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AMeshMergeCullingVolume::StaticRegisterNativesAMeshMergeCullingVolume()
	{
	}
	UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister()
	{
		return AMeshMergeCullingVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AMeshMergeCullingVolume()
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
				{ "DevelopmentStatus", "Experimental" },
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Engine/MeshMergeCullingVolume.h" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMergeCullingVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "A volume that can be added a level in order to remove triangles from source meshes before generating HLOD or merged meshes" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMeshMergeCullingVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMeshMergeCullingVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(AMeshMergeCullingVolume, 3490847009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshMergeCullingVolume(Z_Construct_UClass_AMeshMergeCullingVolume, &AMeshMergeCullingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AMeshMergeCullingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshMergeCullingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
