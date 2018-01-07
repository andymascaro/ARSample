// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DebugCameraHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADebugCameraHUD::StaticRegisterNativesADebugCameraHUD()
	{
	}
	UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister()
	{
		return ADebugCameraHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ADebugCameraHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Engine/DebugCameraHUD.h" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "HUD that displays info for the DebugCameraController view." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADebugCameraHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADebugCameraHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0490028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugCameraHUD, 3467006372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugCameraHUD(Z_Construct_UClass_ADebugCameraHUD, &ADebugCameraHUD::StaticClass, TEXT("/Script/Engine"), TEXT("ADebugCameraHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
