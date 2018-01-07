// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/GameplayTask_SpawnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_SpawnActor() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_SpawnActor();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature()
	{
		struct _Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, "GameplayTaskSpawnActorDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGameplayTask_SpawnActor::StaticRegisterNativesUGameplayTask_SpawnActor()
	{
		UClass* Class = UGameplayTask_SpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", (Native)&UGameplayTask_SpawnActor::execBeginSpawningActor },
			{ "FinishSpawningActor", (Native)&UGameplayTask_SpawnActor::execFinishSpawningActor },
			{ "SpawnActor", (Native)&UGameplayTask_SpawnActor::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor()
	{
		struct GameplayTask_SpawnActor_eventBeginSpawningActor_Parms
		{
			UObject* WorldContextObject;
			AActor* SpawnedActor;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameplayTask_SpawnActor_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "GameplayTasks" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, "BeginSpawningActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor()
	{
		struct GameplayTask_SpawnActor_eventFinishSpawningActor_Parms
		{
			UObject* WorldContextObject;
			AActor* SpawnedActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventFinishSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "GameplayTasks" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, "FinishSpawningActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameplayTask_SpawnActor_eventFinishSpawningActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor()
	{
		struct GameplayTask_SpawnActor_eventSpawnActor_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			TSubclassOf<AActor>  Class;
			bool bSpawnOnlyOnAuthority;
			UGameplayTask_SpawnActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSpawnOnlyOnAuthority_SetBit = [](void* Obj){ ((GameplayTask_SpawnActor_eventSpawnActor_Parms*)Obj)->bSpawnOnlyOnAuthority = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnlyOnAuthority = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnOnlyOnAuthority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayTask_SpawnActor_eventSpawnActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSpawnOnlyOnAuthority_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Class, "Class", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "TaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSpawnOnlyOnAuthority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Class,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "TaskOwner, bSpawnOnlyOnAuthority" },
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "Category", "GameplayTasks" },
				{ "CPP_Default_bSpawnOnlyOnAuthority", "false" },
				{ "DefaultToSelf", "TaskOwner" },
				{ "DisplayName", "Spawn Actor for Gameplay Task" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
				{ "ToolTip", "Spawn new Actor on the network authority (server)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, "SpawnActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(GameplayTask_SpawnActor_eventSpawnActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister()
	{
		return UGameplayTask_SpawnActor::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTask_SpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTask,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor, "BeginSpawningActor" }, // 476853536
				{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor, "FinishSpawningActor" }, // 3807677507
				{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor, "SpawnActor" }, // 2170029004
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/GameplayTask_SpawnActor.h" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
				{ "ToolTip", "Convenience task for spawning actors (optionally limiting the spawning to the network authority). If not the net authority, we will not spawn\nand Success will not be called. The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking\nnetwork role before spawning.\n\nThough this task doesn't do much - games can implement similar tasks that carry out game specific rules. For example a 'SpawnProjectile'\ntask that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\nfiring position from a weapon attachment).\n\nLong term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the\nactor down to him. We could potentially also use this to do predictive actor spawning / reconciliation." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn = { UE4CodeGen_Private::EPropertyClass::Class, "ClassToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, ClassToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ClassToSpawn_MetaData, ARRAY_COUNT(NewProp_ClassToSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
				{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "DidNotSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, DidNotSpawn), Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(NewProp_DidNotSpawn_MetaData, ARRAY_COUNT(NewProp_DidNotSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Success", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, Success), Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(NewProp_Success_MetaData, ARRAY_COUNT(NewProp_Success_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassToSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DidNotSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Success,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTask_SpawnActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTask_SpawnActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask_SpawnActor, 3044457605);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_SpawnActor(Z_Construct_UClass_UGameplayTask_SpawnActor, &UGameplayTask_SpawnActor::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_SpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_SpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
