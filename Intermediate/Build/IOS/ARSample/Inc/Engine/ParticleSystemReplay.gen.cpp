// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleSystemReplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemReplay() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FParticleSystemReplayFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemReplayFrame, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemReplayFrame"), sizeof(FParticleSystemReplayFrame), Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSystemReplayFrame(FParticleSystemReplayFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSystemReplayFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSystemReplayFrame")),new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemReplayFrame"), sizeof(FParticleSystemReplayFrame), Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
				{ "ToolTip", "A single frame within this replay" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleSystemReplayFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleSystemReplayFrame),
				alignof(FParticleSystemReplayFrame),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_CRC() { return 3048103556U; }
class UScriptStruct* FParticleEmitterReplayFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEmitterReplayFrame"), sizeof(FParticleEmitterReplayFrame), Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEmitterReplayFrame(FParticleEmitterReplayFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEmitterReplayFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleEmitterReplayFrame")),new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEmitterReplayFrame"), sizeof(FParticleEmitterReplayFrame), Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleEmitterReplayFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleEmitterReplayFrame),
				alignof(FParticleEmitterReplayFrame),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_CRC() { return 740819597U; }
	void UParticleSystemReplay::StaticRegisterNativesUParticleSystemReplay()
	{
	}
	UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister()
	{
		return UParticleSystemReplay::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleSystemReplay()
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
				{ "AutoExpandCategories", "ParticleSystemReplay" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Particles/ParticleSystemReplay.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[] = {
				{ "Category", "ParticleSystemReplay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
				{ "ToolTip", "Unique ID number for this replay clip" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber = { UE4CodeGen_Private::EPropertyClass::Int, "ClipIDNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202001, 1, nullptr, STRUCT_OFFSET(UParticleSystemReplay, ClipIDNumber), METADATA_PARAMS(NewProp_ClipIDNumber_MetaData, ARRAY_COUNT(NewProp_ClipIDNumber_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipIDNumber,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleSystemReplay>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleSystemReplay::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UParticleSystemReplay, 3103196674);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystemReplay(Z_Construct_UClass_UParticleSystemReplay, &UParticleSystemReplay::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSystemReplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemReplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
