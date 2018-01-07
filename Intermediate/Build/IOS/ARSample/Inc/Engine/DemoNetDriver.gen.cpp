// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DemoNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
// End Cross Module References
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRollbackNetStartupActorInfo(FRollbackNetStartupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("RollbackNetStartupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RollbackNetStartupActorInfo")),new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
				{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Object, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Archetype = { UE4CodeGen_Private::EPropertyClass::Object, "Archetype", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Archetype_MetaData, ARRAY_COUNT(NewProp_Archetype_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Archetype,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RollbackNetStartupActorInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRollbackNetStartupActorInfo),
				alignof(FRollbackNetStartupActorInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC() { return 48123895U; }
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameAndTime(FLevelNameAndTime::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelNameAndTime"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameAndTime")),new UScriptStruct::TCppStructOps<FLevelNameAndTime>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS = { UE4CodeGen_Private::EPropertyClass::UInt32, "LevelChangeTimeInMS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(NewProp_LevelChangeTimeInMS_MetaData, ARRAY_COUNT(NewProp_LevelChangeTimeInMS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(NewProp_LevelName_MetaData, ARRAY_COUNT(NewProp_LevelName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelChangeTimeInMS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelNameAndTime",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelNameAndTime),
				alignof(FLevelNameAndTime),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC() { return 2403498873U; }
	void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
	{
		return UDemoNetDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_UDemoNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNetDriver,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/DemoNetDriver.h" },
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
				{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalReplay_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
			};
#endif
			auto NewProp_bIsLocalReplay_SetBit = [](void* Obj){ ((UDemoNetDriver*)Obj)->bIsLocalReplay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalReplay = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocalReplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDemoNetDriver), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLocalReplay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLocalReplay_MetaData, ARRAY_COUNT(NewProp_bIsLocalReplay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
				{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame = { UE4CodeGen_Private::EPropertyClass::Float, "CheckpointSaveMaxMSPerFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004000, 1, nullptr, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(NewProp_CheckpointSaveMaxMSPerFrame_MetaData, ARRAY_COUNT(NewProp_CheckpointSaveMaxMSPerFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
				{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors = { UE4CodeGen_Private::EPropertyClass::Map, "RollbackNetStartupActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), METADATA_PARAMS(NewProp_RollbackNetStartupActors_MetaData, ARRAY_COUNT(NewProp_RollbackNetStartupActors_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "RollbackNetStartupActors_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "RollbackNetStartupActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLocalReplay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckpointSaveMaxMSPerFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollbackNetStartupActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollbackNetStartupActors_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollbackNetStartupActors_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDemoNetDriver::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
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
	IMPLEMENT_CLASS(UDemoNetDriver, 2544823651);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoNetDriver(Z_Construct_UClass_UDemoNetDriver, &UDemoNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
