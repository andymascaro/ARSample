// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameplayDebuggerCategoryReplicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYDEBUGGER_API UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent();
	GAMEPLAYDEBUGGER_API UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent();
	GAMEPLAYDEBUGGER_API UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled();
	GAMEPLAYDEBUGGER_API UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor();
	GAMEPLAYDEBUGGER_API UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
class UScriptStruct* FGameplayDebuggerDebugActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerDebugActor(FGameplayDebuggerDebugActor::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerDebugActor"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerDebugActor")),new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncCounter_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SyncCounter = { UE4CodeGen_Private::EPropertyClass::Int, "SyncCounter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, SyncCounter), METADATA_PARAMS(NewProp_SyncCounter_MetaData, ARRAY_COUNT(NewProp_SyncCounter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName = { UE4CodeGen_Private::EPropertyClass::Name, "ActorName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, ActorName), METADATA_PARAMS(NewProp_ActorName_MetaData, ARRAY_COUNT(NewProp_ActorName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerDebugActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Actor_MetaData, ARRAY_COUNT(NewProp_Actor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncCounter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayDebuggerDebugActor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayDebuggerDebugActor),
				alignof(FGameplayDebuggerDebugActor),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC() { return 3648118333U; }
class UScriptStruct* FGameplayDebuggerNetPack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerNetPack(FGameplayDebuggerNetPack::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerNetPack"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerNetPack")),new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayDebuggerNetPack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameplayDebuggerNetPack),
				alignof(FGameplayDebuggerNetPack),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC() { return 910059170U; }
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent = FName(TEXT("ServerSendCategoryInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent = FName(TEXT("ServerSendExtensionInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms Parms;
		Parms.ExtensionId=ExtensionId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled = FName(TEXT("ServerSetCategoryEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor = FName(TEXT("ServerSetDebugActor"));
	void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(AActor* Actor)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms Parms;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled),&Parms);
	}
	void AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator()
	{
		UClass* Class = AGameplayDebuggerCategoryReplicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerSendCategoryInputEvent", (Native)&AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent },
			{ "ServerSendExtensionInputEvent", (Native)&AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent },
			{ "ServerSetCategoryEnabled", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled },
			{ "ServerSetDebugActor", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetDebugActor },
			{ "ServerSetEnabled", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandlerId = { UE4CodeGen_Private::EPropertyClass::Int, "HandlerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId = { UE4CodeGen_Private::EPropertyClass::Int, "CategoryId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandlerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
				{ "ToolTip", "helper function for replicating input for category handlers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, "ServerSendCategoryInputEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandlerId = { UE4CodeGen_Private::EPropertyClass::Int, "HandlerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtensionId = { UE4CodeGen_Private::EPropertyClass::Int, "ExtensionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, ExtensionId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandlerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtensionId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
				{ "ToolTip", "helper function for replicating input for extension handlers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, "ServerSendExtensionInputEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId = { UE4CodeGen_Private::EPropertyClass::Int, "CategoryId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, "ServerSetCategoryEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, "ServerSetDebugActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, "ServerSetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, "ServerSendCategoryInputEvent" }, // 1852328635
				{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, "ServerSendExtensionInputEvent" }, // 1399843677
				{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, "ServerSetCategoryEnabled" }, // 2039040727
				{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor, "ServerSetDebugActor" }, // 1906932636
				{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled, "ServerSetEnabled" }, // 4286246192
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameplayDebuggerCategoryReplicator.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
				{ "NotBlueprintType", "true" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
				{ "ToolTip", "rendering component needs to attached to some actor, and this is as good as any" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderingComp = { UE4CodeGen_Private::EPropertyClass::Object, "RenderingComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, RenderingComp), Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister, METADATA_PARAMS(NewProp_RenderingComp_MetaData, ARRAY_COUNT(NewProp_RenderingComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugActor_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugActor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, DebugActor), Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, METADATA_PARAMS(NewProp_DebugActor_MetaData, ARRAY_COUNT(NewProp_DebugActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedData = { UE4CodeGen_Private::EPropertyClass::Struct, "ReplicatedData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, ReplicatedData), Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, METADATA_PARAMS(NewProp_ReplicatedData_MetaData, ARRAY_COUNT(NewProp_ReplicatedData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			auto NewProp_bIsEnabled_SetBit = [](void* Obj){ ((AGameplayDebuggerCategoryReplicator*)Obj)->bIsEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameplayDebuggerCategoryReplicator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEnabled_MetaData, ARRAY_COUNT(NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPC = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_OwnerPC_MetaData, ARRAY_COUNT(NewProp_OwnerPC_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderingComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerPC,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameplayDebuggerCategoryReplicator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameplayDebuggerCategoryReplicator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x04900288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGameplayDebuggerCategoryReplicator, 4094256226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerCategoryReplicator(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, &AGameplayDebuggerCategoryReplicator::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerCategoryReplicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerCategoryReplicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
