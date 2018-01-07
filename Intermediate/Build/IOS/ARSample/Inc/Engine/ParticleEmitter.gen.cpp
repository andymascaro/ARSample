// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleEmitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEmitter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EEmitterRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterRenderMode, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterRenderMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterRenderMode(EEmitterRenderMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterRenderMode_CRC() { return 3165002570U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterRenderMode"), 0, Get_Z_Construct_UEnum_Engine_EEmitterRenderMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERM_Normal", (int64)ERM_Normal },
				{ "ERM_Point", (int64)ERM_Point },
				{ "ERM_Cross", (int64)ERM_Cross },
				{ "ERM_LightsOnly", (int64)ERM_LightsOnly },
				{ "ERM_None", (int64)ERM_None },
				{ "ERM_MAX", (int64)ERM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ERM_Cross.DisplayName", "Cross" },
				{ "ERM_LightsOnly.DisplayName", "Lights Only" },
				{ "ERM_None.DisplayName", "None" },
				{ "ERM_Normal.DisplayName", "Normal" },
				{ "ERM_Point.DisplayName", "Point" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Cascade-related" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEmitterRenderMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EEmitterRenderMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleSubUVInterpMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSubUVInterpMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSubUVInterpMethod(EParticleSubUVInterpMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSubUVInterpMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_CRC() { return 159704195U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSubUVInterpMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSUVIM_None", (int64)PSUVIM_None },
				{ "PSUVIM_Linear", (int64)PSUVIM_Linear },
				{ "PSUVIM_Linear_Blend", (int64)PSUVIM_Linear_Blend },
				{ "PSUVIM_Random", (int64)PSUVIM_Random },
				{ "PSUVIM_Random_Blend", (int64)PSUVIM_Random_Blend },
				{ "PSUVIM_MAX", (int64)PSUVIM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "PSUVIM_Linear.DisplayName", "Linear" },
				{ "PSUVIM_Linear_Blend.DisplayName", "Linear Blend" },
				{ "PSUVIM_None.DisplayName", "None" },
				{ "PSUVIM_Random.DisplayName", "Random" },
				{ "PSUVIM_Random_Blend.DisplayName", "Random Blend" },
				{ "ToolTip", "SubUV-related" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSubUVInterpMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSubUVInterpMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleBurstMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleBurstMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleBurstMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleBurstMethod(EParticleBurstMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleBurstMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleBurstMethod_CRC() { return 3139360045U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleBurstMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleBurstMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPBM_Instant", (int64)EPBM_Instant },
				{ "EPBM_Interpolated", (int64)EPBM_Interpolated },
				{ "EPBM_MAX", (int64)EPBM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPBM_Instant.DisplayName", "Instant" },
				{ "EPBM_Interpolated.DisplayName", "Interpolated" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Burst emissions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleBurstMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleBurstMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FParticleBurst::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleBurst, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleBurst"), sizeof(FParticleBurst), Get_Z_Construct_UScriptStruct_FParticleBurst_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleBurst(FParticleBurst::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleBurst"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleBurst
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleBurst()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleBurst")),new UScriptStruct::TCppStructOps<FParticleBurst>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleBurst;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleBurst"), sizeof(FParticleBurst), Get_Z_Construct_UScriptStruct_FParticleBurst_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleBurst>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "ParticleBurst" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "The time at which to burst them (0..1: emitter lifetime)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleBurst, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountLow_MetaData[] = {
				{ "Category", "ParticleBurst" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "If >= 0, use as a range [CountLow..Count]" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountLow = { UE4CodeGen_Private::EPropertyClass::Int, "CountLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleBurst, CountLow), METADATA_PARAMS(NewProp_CountLow_MetaData, ARRAY_COUNT(NewProp_CountLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
				{ "Category", "ParticleBurst" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "The number of particles to burst" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count = { UE4CodeGen_Private::EPropertyClass::Int, "Count", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleBurst, Count), METADATA_PARAMS(NewProp_Count_MetaData, ARRAY_COUNT(NewProp_Count_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CountLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Count,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleBurst",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleBurst),
				alignof(FParticleBurst),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_CRC() { return 3581099496U; }
	void UParticleEmitter::StaticRegisterNativesUParticleEmitter()
	{
	}
	UClass* Z_Construct_UClass_UParticleEmitter_NoRegister()
	{
		return UParticleEmitter::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleEmitter()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Particles/ParticleEmitter.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceLevel_MetaData[] = {
				{ "Category", "Significance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "The significance level required of this emitter's owner for this emitter to be active." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignificanceLevel = { UE4CodeGen_Private::EPropertyClass::Enum, "SignificanceLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, SignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(NewProp_SignificanceLevel_MetaData, ARRAY_COUNT(NewProp_SignificanceLevel_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignificanceLevel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenInsignficant_MetaData[] = {
				{ "Category", "Significance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "When true, emitters deemed insignificant will have their tick and render disabled Instantly. When false they will simple stop spawning new particles." },
			};
#endif
			auto NewProp_bDisableWhenInsignficant_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->bDisableWhenInsignficant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenInsignficant = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableWhenInsignficant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableWhenInsignficant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableWhenInsignficant_MetaData, ARRAY_COUNT(NewProp_bDisableWhenInsignficant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabledLODsKeepEmitterAlive_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "When true, if the current LOD is disabled the emitter will be kept alive. Otherwise, the emitter will be considered complete if the current LOD is disabled." },
			};
#endif
			auto NewProp_bDisabledLODsKeepEmitterAlive_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->bDisabledLODsKeepEmitterAlive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabledLODsKeepEmitterAlive = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabledLODsKeepEmitterAlive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabledLODsKeepEmitterAlive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabledLODsKeepEmitterAlive_MetaData, ARRAY_COUNT(NewProp_bDisabledLODsKeepEmitterAlive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookedOut_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "If true, then this emitter was 'cooked out' by the cooker.\nThis means it was completely disabled, but to preserve any\nindexing schemes, it is left in place." },
			};
#endif
			auto NewProp_bCookedOut_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->bCookedOut = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookedOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookedOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCookedOut_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCookedOut_MetaData, ARRAY_COUNT(NewProp_bCookedOut_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSoloing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "If true, then show only this emitter in the editor" },
			};
#endif
			auto NewProp_bIsSoloing_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->bIsSoloing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSoloing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSoloing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSoloing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSoloing_MetaData, ARRAY_COUNT(NewProp_bIsSoloing_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[] = {
				{ "Category", "Cascade" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "This value indicates the emitter should be drawn 'collapsed' in Cascade" },
			};
#endif
			auto NewProp_bCollapsed_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->bCollapsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCollapsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCollapsed_MetaData, ARRAY_COUNT(NewProp_bCollapsed_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "If detail mode is >= system detail mode, primitive won't be rendered." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetailMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DetailMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(NewProp_DetailMode_MetaData, ARRAY_COUNT(NewProp_DetailMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelSpawnRateScale_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QualityLevelSpawnRateScale = { UE4CodeGen_Private::EPropertyClass::Float, "QualityLevelSpawnRateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, QualityLevelSpawnRateScale), METADATA_PARAMS(NewProp_QualityLevelSpawnRateScale_MetaData, ARRAY_COUNT(NewProp_QualityLevelSpawnRateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumDetailSpawnRateScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Scales the spawn rate of this emitter when the engine is running in medium or low detail mode.\nThis can be used to optimize particle draw cost in splitscreen.\nA value of 0 effectively disables this emitter outside of high detail mode,\nAnd this does not affect spawn per unit, unless the value is 0." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MediumDetailSpawnRateScale = { UE4CodeGen_Private::EPropertyClass::Float, "MediumDetailSpawnRateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, MediumDetailSpawnRateScale_DEPRECATED), METADATA_PARAMS(NewProp_MediumDetailSpawnRateScale_MetaData, ARRAY_COUNT(NewProp_MediumDetailSpawnRateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAllocationCount_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Initial allocation count - overrides calculated peak count if > 0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialAllocationCount = { UE4CodeGen_Private::EPropertyClass::Int, "InitialAllocationCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, InitialAllocationCount), METADATA_PARAMS(NewProp_InitialAllocationCount_MetaData, ARRAY_COUNT(NewProp_InitialAllocationCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles = { UE4CodeGen_Private::EPropertyClass::Int, "PeakActiveParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, PeakActiveParticles), METADATA_PARAMS(NewProp_PeakActiveParticles_MetaData, ARRAY_COUNT(NewProp_PeakActiveParticles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
			auto NewProp_ConvertedModules_SetBit = [](void* Obj){ ((UParticleEmitter*)Obj)->ConvertedModules = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules = { UE4CodeGen_Private::EPropertyClass::Bool, "ConvertedModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ConvertedModules_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ConvertedModules_MetaData, ARRAY_COUNT(NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "'Private' data - not required by the editor" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODLevels = { UE4CodeGen_Private::EPropertyClass::Array, "LODLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, LODLevels), METADATA_PARAMS(NewProp_LODLevels_MetaData, ARRAY_COUNT(NewProp_LODLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevels_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "'Private' data - not required by the editor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LODLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LODLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleLODLevel_NoRegister, METADATA_PARAMS(NewProp_LODLevels_Inner_MetaData, ARRAY_COUNT(NewProp_LODLevels_Inner_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterEditorColor_MetaData[] = {
				{ "Category", "Cascade" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "The color of the emitter in the curve editor and debug rendering modes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterEditorColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EmitterEditorColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_EmitterEditorColor_MetaData, ARRAY_COUNT(NewProp_EmitterEditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRenderMode_MetaData[] = {
				{ "Category", "Cascade" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "How to render the emitter particles. Can be one of the following:\n        ERM_Normal      - As the intended sprite/mesh\n        ERM_Point       - As a 2x2 pixel block with no scaling and the color set in EmitterEditorColor\n        ERM_Cross       - As a cross of lines, scaled to the size of the particle in EmitterEditorColor\n        ERM_None        - Do not render" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmitterRenderMode = { UE4CodeGen_Private::EPropertyClass::Byte, "EmitterRenderMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterRenderMode), Z_Construct_UEnum_Engine_EEmitterRenderMode, METADATA_PARAMS(NewProp_EmitterRenderMode_MetaData, ARRAY_COUNT(NewProp_EmitterRenderMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubUVDataOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubUVDataOffset = { UE4CodeGen_Private::EPropertyClass::Int, "SubUVDataOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, SubUVDataOffset), METADATA_PARAMS(NewProp_SubUVDataOffset_MetaData, ARRAY_COUNT(NewProp_SubUVDataOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
				{ "Category", "Particle" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "The name of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName = { UE4CodeGen_Private::EPropertyClass::Name, "EmitterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterName), METADATA_PARAMS(NewProp_EmitterName_MetaData, ARRAY_COUNT(NewProp_EmitterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignificanceLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignificanceLevel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableWhenInsignficant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabledLODsKeepEmitterAlive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCookedOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSoloing,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCollapsed,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetailMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QualityLevelSpawnRateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediumDetailSpawnRateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialAllocationCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeakActiveParticles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvertedModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODLevels_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterEditorColor,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterRenderMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubUVDataOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleEmitter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleEmitter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881081u,
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
	IMPLEMENT_CLASS(UParticleEmitter, 3842131433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleEmitter(Z_Construct_UClass_UParticleEmitter, &UParticleEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
