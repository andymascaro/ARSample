// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/GameEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	void UGameEngine::StaticRegisterNativesUGameEngine()
	{
	}
	UClass* Z_Construct_UClass_UGameEngine_NoRegister()
	{
		return UGameEngine::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEngine,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/GameEngine.h" },
				{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
				{ "ToolTip", "Engine that manages core systems that enable a game." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GameInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UGameEngine, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(NewProp_GameInstance_MetaData, ARRAY_COUNT(NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerFlushLogInterval_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
				{ "ToolTip", "Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerFlushLogInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ServerFlushLogInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UGameEngine, ServerFlushLogInterval), METADATA_PARAMS(NewProp_ServerFlushLogInterval_MetaData, ARRAY_COUNT(NewProp_ServerFlushLogInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
				{ "ToolTip", "Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UGameEngine, MaxDeltaTime), METADATA_PARAMS(NewProp_MaxDeltaTime_MetaData, ARRAY_COUNT(NewProp_MaxDeltaTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerFlushLogInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDeltaTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameEngine>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameEngine::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Eu,
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
	IMPLEMENT_CLASS(UGameEngine, 386062355);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameEngine(Z_Construct_UClass_UGameEngine, &UGameEngine::StaticClass, TEXT("/Script/Engine"), TEXT("UGameEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
