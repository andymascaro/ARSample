// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/SaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USaveGame::StaticRegisterNativesUSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USaveGame_NoRegister()
	{
		return USaveGame::StaticClass();
	}
	UClass* Z_Construct_UClass_USaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameFramework/SaveGame.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
				{ "ToolTip", "This class acts as a base class for a save game object that can be used to save state about the game.\nWhen you create your own save game subclass, you would add member variables for the information that you want to save.\nThen when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\nTo load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USaveGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USaveGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(USaveGame, 1589346702);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGame(Z_Construct_UClass_USaveGame, &USaveGame::StaticClass, TEXT("/Script/Engine"), TEXT("USaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
