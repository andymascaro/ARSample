// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DemoPendingNetGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPendingNetGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDemoPendingNetGame::StaticRegisterNativesUDemoPendingNetGame()
	{
	}
	UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister()
	{
		return UDemoPendingNetGame::StaticClass();
	}
	UClass* Z_Construct_UClass_UDemoPendingNetGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPendingNetGame,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/DemoPendingNetGame.h" },
				{ "ModuleRelativePath", "Classes/Engine/DemoPendingNetGame.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDemoPendingNetGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDemoPendingNetGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoPendingNetGame, 2397037564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoPendingNetGame(Z_Construct_UClass_UDemoPendingNetGame, &UDemoPendingNetGame::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoPendingNetGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoPendingNetGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
