// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameplayDebuggerPlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FGameplayDebuggerPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerPlayerData(FGameplayDebuggerPlayerData::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerPlayerData")),new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replicator_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replicator = { UE4CodeGen_Private::EPropertyClass::Object, "Replicator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Replicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(NewProp_Replicator_MetaData, ARRAY_COUNT(NewProp_Replicator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InputComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(NewProp_InputComponent_MetaData, ARRAY_COUNT(NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Controller), Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister, METADATA_PARAMS(NewProp_Controller_MetaData, ARRAY_COUNT(NewProp_Controller_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Replicator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayDebuggerPlayerData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FGameplayDebuggerPlayerData),
				alignof(FGameplayDebuggerPlayerData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC() { return 2759450701U; }
	void AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager()
	{
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayDebuggerPlayerManager.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
				{ "NotBlueprintType", "true" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingRegistrations_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingRegistrations = { UE4CodeGen_Private::EPropertyClass::Array, "PendingRegistrations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PendingRegistrations), METADATA_PARAMS(NewProp_PendingRegistrations_MetaData, ARRAY_COUNT(NewProp_PendingRegistrations_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingRegistrations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PendingRegistrations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerData = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000000, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PlayerData), METADATA_PARAMS(NewProp_PlayerData_MetaData, ARRAY_COUNT(NewProp_PlayerData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingRegistrations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingRegistrations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerData_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameplayDebuggerPlayerManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameplayDebuggerPlayerManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x04800288u,
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
	IMPLEMENT_CLASS(AGameplayDebuggerPlayerManager, 403618890);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerPlayerManager(Z_Construct_UClass_AGameplayDebuggerPlayerManager, &AGameplayDebuggerPlayerManager::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerPlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerPlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
