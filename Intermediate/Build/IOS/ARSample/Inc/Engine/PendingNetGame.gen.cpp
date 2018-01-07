// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PendingNetGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingNetGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
// End Cross Module References
	void UPendingNetGame::StaticRegisterNativesUPendingNetGame()
	{
	}
	UClass* Z_Construct_UClass_UPendingNetGame_NoRegister()
	{
		return UPendingNetGame::StaticClass();
	}
	UClass* Z_Construct_UClass_UPendingNetGame()
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
				{ "IncludePath", "Engine/PendingNetGame.h" },
				{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
				{ "ToolTip", "Demo Net driver created for loading demos, but we need to go through pending net game\nTransferred to world on successful connection" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DemoNetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "DemoNetDriver", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPendingNetGame, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(NewProp_DemoNetDriver_MetaData, ARRAY_COUNT(NewProp_DemoNetDriver_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
				{ "ToolTip", "Net driver created for contacting the new server\nTransferred to world on successful connection" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "NetDriver", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPendingNetGame, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(NewProp_NetDriver_MetaData, ARRAY_COUNT(NewProp_NetDriver_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DemoNetDriver,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetDriver,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPendingNetGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPendingNetGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(UPendingNetGame, 1918556997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPendingNetGame(Z_Construct_UClass_UPendingNetGame, &UPendingNetGame::StaticClass, TEXT("/Script/Engine"), TEXT("UPendingNetGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPendingNetGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
