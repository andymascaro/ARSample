// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/DefaultPhysicsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADefaultPhysicsVolume::StaticRegisterNativesADefaultPhysicsVolume()
	{
	}
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister()
	{
		return ADefaultPhysicsVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "GameFramework/DefaultPhysicsVolume.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPhysicsVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n\n@see APhysicsVolume" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADefaultPhysicsVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADefaultPhysicsVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
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
	IMPLEMENT_CLASS(ADefaultPhysicsVolume, 640525550);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultPhysicsVolume(Z_Construct_UClass_ADefaultPhysicsVolume, &ADefaultPhysicsVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ADefaultPhysicsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPhysicsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
