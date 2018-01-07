// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameplayDebuggerLocalController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
// End Cross Module References
	void UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayDebuggerLocalController.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
				{ "NotBlueprintType", "true" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugActorCandidate_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugActorCandidate = { UE4CodeGen_Private::EPropertyClass::Object, "DebugActorCandidate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, DebugActorCandidate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_DebugActorCandidate_MetaData, ARRAY_COUNT(NewProp_DebugActorCandidate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerManager_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerManager = { UE4CodeGen_Private::EPropertyClass::Object, "CachedPlayerManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedPlayerManager), Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister, METADATA_PARAMS(NewProp_CachedPlayerManager_MetaData, ARRAY_COUNT(NewProp_CachedPlayerManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedReplicator_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedReplicator = { UE4CodeGen_Private::EPropertyClass::Object, "CachedReplicator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedReplicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(NewProp_CachedReplicator_MetaData, ARRAY_COUNT(NewProp_CachedReplicator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugActorCandidate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedPlayerManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedReplicator,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayDebuggerLocalController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayDebuggerLocalController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x04000088u,
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
	IMPLEMENT_CLASS(UGameplayDebuggerLocalController, 2758922864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerLocalController(Z_Construct_UClass_UGameplayDebuggerLocalController, &UGameplayDebuggerLocalController::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerLocalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerLocalController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
