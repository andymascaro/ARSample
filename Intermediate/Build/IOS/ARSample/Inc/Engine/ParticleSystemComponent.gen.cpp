// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleReplayState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_BeginTrails();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_EndTrails();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetActorParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachmentParameters();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetColorParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetEmitterEnable();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetFloatParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetVectorParameter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature()
	{
		struct _Script_Engine_eventOnSystemFinished_Parms
		{
			UParticleSystemComponent* PSystem;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSystem = { UE4CodeGen_Private::EPropertyClass::Object, "PSystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSystemFinished_Parms, PSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_PSystem_MetaData, ARRAY_COUNT(NewProp_PSystem_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PSystem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Called when the particle system is done" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnSystemFinished__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnSystemFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EParticleEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleEventType, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleEventType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleEventType(EParticleEventType_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleEventType_CRC() { return 261240894U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleEventType"), 0, Get_Z_Construct_UEnum_Engine_EParticleEventType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPET_Any", (int64)EPET_Any },
				{ "EPET_Spawn", (int64)EPET_Spawn },
				{ "EPET_Death", (int64)EPET_Death },
				{ "EPET_Collision", (int64)EPET_Collision },
				{ "EPET_Burst", (int64)EPET_Burst },
				{ "EPET_Blueprint", (int64)EPET_Blueprint },
				{ "EPET_MAX", (int64)EPET_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPET_Any.DisplayName", "Any" },
				{ "EPET_Any.ToolTip", "Any - allow any event" },
				{ "EPET_Blueprint.DisplayName", "Blueprint" },
				{ "EPET_Blueprint.ToolTip", "Blueprint - an event generated by level script" },
				{ "EPET_Burst.DisplayName", "Burst" },
				{ "EPET_Burst.ToolTip", "Burst - a particle burst event" },
				{ "EPET_Collision.DisplayName", "Collision" },
				{ "EPET_Collision.ToolTip", "Collision - a particle collision event" },
				{ "EPET_Death.DisplayName", "Death" },
				{ "EPET_Death.ToolTip", "Death - a particle death event" },
				{ "EPET_Spawn.DisplayName", "Spawn" },
				{ "EPET_Spawn.ToolTip", "Spawn - a particle spawn event" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Event type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleEventType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleEventType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ParticleReplayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleReplayState, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleReplayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ParticleReplayState(ParticleReplayState_StaticEnum, TEXT("/Script/Engine"), TEXT("ParticleReplayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ParticleReplayState_CRC() { return 3092652346U; }
	UEnum* Z_Construct_UEnum_Engine_ParticleReplayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ParticleReplayState"), 0, Get_Z_Construct_UEnum_Engine_ParticleReplayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PRS_Disabled", (int64)PRS_Disabled },
				{ "PRS_Capturing", (int64)PRS_Capturing },
				{ "PRS_Replaying", (int64)PRS_Replaying },
				{ "PRS_MAX", (int64)PRS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "PRS_Capturing.DisplayName", "Capturing" },
				{ "PRS_Capturing.ToolTip", "Capture all particle data to the clip specified by ReplayClipIDNumber.  The frame to capture\n              must be specified using the ReplayFrameIndex" },
				{ "PRS_Disabled.DisplayName", "Disabled" },
				{ "PRS_Disabled.ToolTip", "Replay system is disabled.  Particles are simulated and rendered normally." },
				{ "PRS_Replaying.DisplayName", "Replaying" },
				{ "PRS_Replaying.ToolTip", "Replay captured particle state from the clip specified by ReplayClipIDNumber.  The frame to play\n              must be specified using the ReplayFrameIndex" },
				{ "ToolTip", "Particle system replay state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ParticleReplayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ParticleReplayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleSysParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSysParamType, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSysParamType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSysParamType(EParticleSysParamType_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSysParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSysParamType_CRC() { return 3854393629U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSysParamType"), 0, Get_Z_Construct_UEnum_Engine_EParticleSysParamType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSPT_None", (int64)PSPT_None },
				{ "PSPT_Scalar", (int64)PSPT_Scalar },
				{ "PSPT_ScalarRand", (int64)PSPT_ScalarRand },
				{ "PSPT_Vector", (int64)PSPT_Vector },
				{ "PSPT_VectorRand", (int64)PSPT_VectorRand },
				{ "PSPT_Color", (int64)PSPT_Color },
				{ "PSPT_Actor", (int64)PSPT_Actor },
				{ "PSPT_Material", (int64)PSPT_Material },
				{ "PSPT_MAX", (int64)PSPT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "PSPT_Actor.DisplayName", "Actor" },
				{ "PSPT_Color.DisplayName", "Color" },
				{ "PSPT_Material.DisplayName", "Material" },
				{ "PSPT_None.DisplayName", "None" },
				{ "PSPT_Scalar.DisplayName", "Scalar" },
				{ "PSPT_ScalarRand.DisplayName", "Scalar Random" },
				{ "PSPT_Vector.DisplayName", "Vector" },
				{ "PSPT_VectorRand.DisplayName", "Vector Random" },
				{ "ToolTip", "Enum for specifying type of a name instance parameter." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSysParamType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSysParamType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FParticleSysParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSysParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSysParam, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSysParam"), sizeof(FParticleSysParam), Get_Z_Construct_UScriptStruct_FParticleSysParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSysParam(FParticleSysParam::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSysParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSysParam
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSysParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSysParam")),new UScriptStruct::TCppStructOps<FParticleSysParam>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSysParam;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSysParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSysParam"), sizeof(FParticleSysParam), Get_Z_Construct_UScriptStruct_FParticleSysParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Struct used for a particular named instance parameter for this ParticleSystemComponent." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSysParam>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Actor_MetaData, ARRAY_COUNT(NewProp_Actor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_Low_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector_Low = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector_Low", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Vector_Low), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Vector_Low_MetaData, ARRAY_COUNT(NewProp_Vector_Low_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Vector_MetaData, ARRAY_COUNT(NewProp_Vector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalar_Low_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scalar_Low = { UE4CodeGen_Private::EPropertyClass::Float, "Scalar_Low", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Scalar_Low), METADATA_PARAMS(NewProp_Scalar_Low_MetaData, ARRAY_COUNT(NewProp_Scalar_Low_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scalar = { UE4CodeGen_Private::EPropertyClass::Float, "Scalar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Scalar), METADATA_PARAMS(NewProp_Scalar_MetaData, ARRAY_COUNT(NewProp_Scalar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "The type of parameters\nPSPT_None       - There is no data type\nPSPT_Scalar     - Use the scalar value\nPSPT_ScalarRand - Select a scalar value in the range [Scalar_Low..Scalar)\nPSPT_Vector     - Use the vector value\nPSPT_VectorRand - Select a vector value in the range [Vector_Low..Vector)\nPSPT_Color      - Use the color value\nPSPT_Actor      - Use the actor value\nPSPT_Material   - Use the material value" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType = { UE4CodeGen_Private::EPropertyClass::Byte, "ParamType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, ParamType), Z_Construct_UEnum_Engine_EParticleSysParamType, METADATA_PARAMS(NewProp_ParamType_MetaData, ARRAY_COUNT(NewProp_ParamType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "ParticleSysParam" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "The name of the parameter" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FParticleSysParam, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector_Low,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scalar_Low,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scalar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleSysParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleSysParam),
				alignof(FParticleSysParam),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSysParam_CRC() { return 1621187939U; }
	void UParticleSystemComponent::StaticRegisterNativesUParticleSystemComponent()
	{
		UClass* Class = UParticleSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTrails", (Native)&UParticleSystemComponent::execBeginTrails },
			{ "CreateNamedDynamicMaterialInstance", (Native)&UParticleSystemComponent::execCreateNamedDynamicMaterialInstance },
			{ "EndTrails", (Native)&UParticleSystemComponent::execEndTrails },
			{ "GenerateParticleEvent", (Native)&UParticleSystemComponent::execGenerateParticleEvent },
			{ "GetBeamEndPoint", (Native)&UParticleSystemComponent::execGetBeamEndPoint },
			{ "GetBeamSourcePoint", (Native)&UParticleSystemComponent::execGetBeamSourcePoint },
			{ "GetBeamSourceStrength", (Native)&UParticleSystemComponent::execGetBeamSourceStrength },
			{ "GetBeamSourceTangent", (Native)&UParticleSystemComponent::execGetBeamSourceTangent },
			{ "GetBeamTargetPoint", (Native)&UParticleSystemComponent::execGetBeamTargetPoint },
			{ "GetBeamTargetStrength", (Native)&UParticleSystemComponent::execGetBeamTargetStrength },
			{ "GetBeamTargetTangent", (Native)&UParticleSystemComponent::execGetBeamTargetTangent },
			{ "GetNamedMaterial", (Native)&UParticleSystemComponent::execGetNamedMaterial },
			{ "GetNumActiveParticles", (Native)&UParticleSystemComponent::execGetNumActiveParticles },
			{ "SetActorParameter", (Native)&UParticleSystemComponent::execSetActorParameter },
			{ "SetAutoAttachmentParameters", (Native)&UParticleSystemComponent::execSetAutoAttachmentParameters },
			{ "SetAutoAttachParams", (Native)&UParticleSystemComponent::execSetAutoAttachParams },
			{ "SetBeamEndPoint", (Native)&UParticleSystemComponent::execSetBeamEndPoint },
			{ "SetBeamSourcePoint", (Native)&UParticleSystemComponent::execSetBeamSourcePoint },
			{ "SetBeamSourceStrength", (Native)&UParticleSystemComponent::execSetBeamSourceStrength },
			{ "SetBeamSourceTangent", (Native)&UParticleSystemComponent::execSetBeamSourceTangent },
			{ "SetBeamTargetPoint", (Native)&UParticleSystemComponent::execSetBeamTargetPoint },
			{ "SetBeamTargetStrength", (Native)&UParticleSystemComponent::execSetBeamTargetStrength },
			{ "SetBeamTargetTangent", (Native)&UParticleSystemComponent::execSetBeamTargetTangent },
			{ "SetColorParameter", (Native)&UParticleSystemComponent::execSetColorParameter },
			{ "SetEmitterEnable", (Native)&UParticleSystemComponent::execSetEmitterEnable },
			{ "SetFloatParameter", (Native)&UParticleSystemComponent::execSetFloatParameter },
			{ "SetMaterialParameter", (Native)&UParticleSystemComponent::execSetMaterialParameter },
			{ "SetTemplate", (Native)&UParticleSystemComponent::execSetTemplate },
			{ "SetTrailSourceData", (Native)&UParticleSystemComponent::execSetTrailSourceData },
			{ "SetVectorParameter", (Native)&UParticleSystemComponent::execSetVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_BeginTrails()
	{
		struct ParticleSystemComponent_eventBeginTrails_Parms
		{
			FName InFirstSocketName;
			FName InSecondSocketName;
			TEnumAsByte<ETrailWidthMode> InWidthMode;
			float InWidth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWidth = { UE4CodeGen_Private::EPropertyClass::Float, "InWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InWidthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InWidthMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSecondSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InSecondSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InFirstSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InFirstSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidthMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSecondSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFirstSocketName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Particles|Trails" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Begins all trail emitters in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "BeginTrails", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventBeginTrails_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance()
	{
		struct ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms
		{
			FName InName;
			UMaterialInterface* SourceMaterial;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "SourceMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.\n@param Name - The slot name of the material to replace.  If invalid, the material is unchanged and NULL is returned." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "CreateNamedDynamicMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_EndTrails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Particles|Trails" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Ends all trail emitters in this component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "EndTrails", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent()
	{
		struct ParticleSystemComponent_eventGenerateParticleEvent_Parms
		{
			FName InEventName;
			float InEmitterTime;
			FVector InLocation;
			FVector InDirection;
			FVector InVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "InVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InVelocity_MetaData, ARRAY_COUNT(NewProp_InVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "InDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InDirection_MetaData, ARRAY_COUNT(NewProp_InDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InLocation_MetaData, ARRAY_COUNT(NewProp_InLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEmitterTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InEmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "InEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEmitterTime), METADATA_PARAMS(NewProp_InEmitterTime_MetaData, ARRAY_COUNT(NewProp_InEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InEventName = { UE4CodeGen_Private::EPropertyClass::Name, "InEventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEventName), METADATA_PARAMS(NewProp_InEventName_MetaData, ARRAY_COUNT(NewProp_InEventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InEventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Record a kismet event.\n\n@param  InEventName                             The name of the event that fired.\n@param  InEmitterTime                   The emitter time when the event fired.\n@param  InLocation                              The location of the particle when the event fired.\n@param  InVelocity                              The velocity of the particle when the event fired.\n@param  InNormal                                Normal vector of the collision in coordinate system of the returner. Zero=none." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GenerateParticleEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ParticleSystemComponent_eventGenerateParticleEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint()
	{
		struct ParticleSystemComponent_eventGetBeamEndPoint_Parms
		{
			int32 EmitterIndex;
			FVector OutEndPoint;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamEndPoint_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamEndPoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEndPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "OutEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, OutEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutEndPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam end point\n\n@param  EmitterIndex            The index of the emitter to get the value of\n\n@return true            EmitterIndex is valid and End point is set - OutEndPoint is valid\n                false           EmitterIndex invalid or End point is not set - OutEndPoint is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(ParticleSystemComponent_eventGetBeamEndPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint()
	{
		struct ParticleSystemComponent_eventGetBeamSourcePoint_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			FVector OutSourcePoint;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamSourcePoint_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamSourcePoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSourcePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "OutSourcePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, OutSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSourcePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam source point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourcePoint          Value of source point\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourcePoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamSourcePoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(ParticleSystemComponent_eventGetBeamSourcePoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength()
	{
		struct ParticleSystemComponent_eventGetBeamSourceStrength_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			float OutSourceStrength;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamSourceStrength_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamSourceStrength_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSourceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "OutSourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, OutSourceStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSourceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam source strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourceStrength               Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourceStrength is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamSourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(ParticleSystemComponent_eventGetBeamSourceStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent()
	{
		struct ParticleSystemComponent_eventGetBeamSourceTangent_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			FVector OutTangentPoint;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamSourceTangent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamSourceTangent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "OutTangentPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTangentPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamSourceTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(ParticleSystemComponent_eventGetBeamSourceTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint()
	{
		struct ParticleSystemComponent_eventGetBeamTargetPoint_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			FVector OutTargetPoint;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamTargetPoint_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamTargetPoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTargetPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "OutTargetPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, OutTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTargetPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam target point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetPoint          Value of target point\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamTargetPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(ParticleSystemComponent_eventGetBeamTargetPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength()
	{
		struct ParticleSystemComponent_eventGetBeamTargetStrength_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			float OutTargetStrength;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamTargetStrength_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamTargetStrength_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTargetStrength = { UE4CodeGen_Private::EPropertyClass::Float, "OutTargetStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, OutTargetStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTargetStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam target strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetStrength       Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetStrength is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamTargetStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(ParticleSystemComponent_eventGetBeamTargetStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent()
	{
		struct ParticleSystemComponent_eventGetBeamTargetTangent_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			FVector OutTangentPoint;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventGetBeamTargetTangent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventGetBeamTargetTangent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "OutTangentPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTangentPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetBeamTargetTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(ParticleSystemComponent_eventGetBeamTargetTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial()
	{
		struct ParticleSystemComponent_eventGetNamedMaterial_Parms
		{
			FName InName;
			UMaterialInterface* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Returns a named material. If this named material is not found, returns NULL." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetNamedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(ParticleSystemComponent_eventGetNamedMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles()
	{
		struct ParticleSystemComponent_eventGetNumActiveParticles_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNumActiveParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Get the current number of active particles in this system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "GetNumActiveParticles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ParticleSystemComponent_eventGetNumActiveParticles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetActorParameter()
	{
		struct ParticleSystemComponent_eventSetActorParameter_Parms
		{
			FName ParameterName;
			AActor* Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set a named actor instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetActorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetActorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachmentParameters()
	{
		struct ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "ScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "RotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "LocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationRule         Option for how we handle our location when we attach to Parent.\n@param  RotationRule         Option for how we handle our rotation when we attach to Parent.\n@param  ScaleRule            Option for how we handle our scale when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetAutoAttachmentParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetAutoAttachmentParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams()
	{
		struct ParticleSystemComponent_eventSetAutoAttachParams_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			TEnumAsByte<EAttachLocation::Type> LocationType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType = { UE4CodeGen_Private::EPropertyClass::Byte, "LocationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "CPP_Default_LocationType", "KeepRelativeOffset" },
				{ "CPP_Default_SocketName", "None" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Please use Set Auto Attachment Parameters" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationType         Option for how we handle our location when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetAutoAttachParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetAutoAttachParams_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint()
	{
		struct ParticleSystemComponent_eventSetBeamEndPoint_Parms
		{
			int32 EmitterIndex;
			FVector NewEndPoint;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEndPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NewEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, NewEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewEndPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam end point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewEndPoint                     The value to set it to" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ParticleSystemComponent_eventSetBeamEndPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint()
	{
		struct ParticleSystemComponent_eventSetBeamSourcePoint_Parms
		{
			int32 EmitterIndex;
			FVector NewSourcePoint;
			int32 SourceIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSourcePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NewSourcePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, NewSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSourcePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam source point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourcePoint          The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamSourcePoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ParticleSystemComponent_eventSetBeamSourcePoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength()
	{
		struct ParticleSystemComponent_eventSetBeamSourceStrength_Parms
		{
			int32 EmitterIndex;
			float NewSourceStrength;
			int32 SourceIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSourceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "NewSourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, NewSourceStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSourceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam source strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourceStrength       The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamSourceStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ParticleSystemComponent_eventSetBeamSourceStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent()
	{
		struct ParticleSystemComponent_eventSetBeamSourceTangent_Parms
		{
			int32 EmitterIndex;
			FVector NewTangentPoint;
			int32 SourceIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTangentPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTangentPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamSourceTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ParticleSystemComponent_eventSetBeamSourceTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint()
	{
		struct ParticleSystemComponent_eventSetBeamTargetPoint_Parms
		{
			int32 EmitterIndex;
			FVector NewTargetPoint;
			int32 TargetIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTargetPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTargetPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, NewTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTargetPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam target point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetPoint          The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamTargetPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ParticleSystemComponent_eventSetBeamTargetPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength()
	{
		struct ParticleSystemComponent_eventSetBeamTargetStrength_Parms
		{
			int32 EmitterIndex;
			float NewTargetStrength;
			int32 TargetIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTargetStrength = { UE4CodeGen_Private::EPropertyClass::Float, "NewTargetStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, NewTargetStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTargetStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam target strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetStrength       The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamTargetStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ParticleSystemComponent_eventSetBeamTargetStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent()
	{
		struct ParticleSystemComponent_eventSetBeamTargetTangent_Parms
		{
			int32 EmitterIndex;
			FVector NewTangentPoint;
			int32 TargetIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTangentPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTangentPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetBeamTargetTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ParticleSystemComponent_eventSetBeamTargetTangent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetColorParameter()
	{
		struct ParticleSystemComponent_eventSetColorParameter_Parms
		{
			FName ParameterName;
			FLinearColor Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set a named color instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetColorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ParticleSystemComponent_eventSetColorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetEmitterEnable()
	{
		struct ParticleSystemComponent_eventSetEmitterEnable_Parms
		{
			FName EmitterName;
			bool bNewEnableState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewEnableState_SetBit = [](void* Obj){ ((ParticleSystemComponent_eventSetEmitterEnable_Parms*)Obj)->bNewEnableState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnableState = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewEnableState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystemComponent_eventSetEmitterEnable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewEnableState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName = { UE4CodeGen_Private::EPropertyClass::Name, "EmitterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetEmitterEnable_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewEnableState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Enables/Disables a sub-emitter\n\n@param  EmitterName                     The name of the sub-emitter to set it on\n@param  bNewEnableState         The value to set it to" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetEmitterEnable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ParticleSystemComponent_eventSetEmitterEnable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetFloatParameter()
	{
		struct ParticleSystemComponent_eventSetFloatParameter_Parms
		{
			FName ParameterName;
			float Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Change a named float parameter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetFloatParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetFloatParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter()
	{
		struct ParticleSystemComponent_eventSetMaterialParameter_Parms
		{
			FName ParameterName;
			UMaterialInterface* Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set a named material instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetMaterialParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetMaterialParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTemplate()
	{
		struct ParticleSystemComponent_eventSetTemplate_Parms
		{
			UParticleSystem* NewTemplate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "NewTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Change the ParticleSystem used by this ParticleSystemComponent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetTemplate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData()
	{
		struct ParticleSystemComponent_eventSetTrailSourceData_Parms
		{
			FName InFirstSocketName;
			FName InSecondSocketName;
			TEnumAsByte<ETrailWidthMode> InWidthMode;
			float InWidth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWidth = { UE4CodeGen_Private::EPropertyClass::Float, "InWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InWidthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InWidthMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSecondSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InSecondSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InFirstSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InFirstSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidthMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSecondSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFirstSocketName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Particles|Trails" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Sets the defining data for all trails in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetTrailSourceData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystemComponent_eventSetTrailSourceData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetVectorParameter()
	{
		struct ParticleSystemComponent_eventSetVectorParameter_Parms
		{
			FName ParameterName;
			FVector Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Set a named vector instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, "SetVectorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ParticleSystemComponent_eventSetVectorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister()
	{
		return UParticleSystemComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UParticleSystemComponent_BeginTrails, "BeginTrails" }, // 1049709296
				{ &Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance, "CreateNamedDynamicMaterialInstance" }, // 1361699364
				{ &Z_Construct_UFunction_UParticleSystemComponent_EndTrails, "EndTrails" }, // 2111608891
				{ &Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent, "GenerateParticleEvent" }, // 3158374379
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint, "GetBeamEndPoint" }, // 3746416288
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint, "GetBeamSourcePoint" }, // 4269036996
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength, "GetBeamSourceStrength" }, // 4096479272
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent, "GetBeamSourceTangent" }, // 75801329
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint, "GetBeamTargetPoint" }, // 1329525516
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength, "GetBeamTargetStrength" }, // 535863801
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent, "GetBeamTargetTangent" }, // 3667640564
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial, "GetNamedMaterial" }, // 3968215513
				{ &Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles, "GetNumActiveParticles" }, // 2984879345
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetActorParameter, "SetActorParameter" }, // 21140623
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachmentParameters, "SetAutoAttachmentParameters" }, // 2126051813
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams, "SetAutoAttachParams" }, // 2889642843
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint, "SetBeamEndPoint" }, // 1533827194
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint, "SetBeamSourcePoint" }, // 3615930144
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength, "SetBeamSourceStrength" }, // 3775380398
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent, "SetBeamSourceTangent" }, // 1386445797
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint, "SetBeamTargetPoint" }, // 3171267297
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength, "SetBeamTargetStrength" }, // 2325302369
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent, "SetBeamTargetTangent" }, // 2072885434
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetColorParameter, "SetColorParameter" }, // 2147286403
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetEmitterEnable, "SetEmitterEnable" }, // 2012397120
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetFloatParameter, "SetFloatParameter" }, // 3231530780
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter, "SetMaterialParameter" }, // 3379265973
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetTemplate, "SetTemplate" }, // 519406074
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData, "SetTrailSourceData" }, // 48875414
				{ &Z_Construct_UFunction_UParticleSystemComponent_SetVectorParameter, "SetVectorParameter" }, // 4251437739
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering Common" },
				{ "HideCategories", "Object Physics Collision Mobility" },
				{ "IncludePath", "Particles/ParticleSystemComponent.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "A particle emitter." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSystemFinished_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Called when the particle system is done" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSystemFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnSystemFinished), Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnSystemFinished_MetaData, ARRAY_COUNT(NewProp_OnSystemFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[] = {
				{ "Category", "Attachment" },
				{ "EditCondition", "bAutoManageAttachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoAttachScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AutoAttachScaleRule_MetaData, ARRAY_COUNT(NewProp_AutoAttachScaleRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[] = {
				{ "Category", "Attachment" },
				{ "EditCondition", "bAutoManageAttachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoAttachRotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AutoAttachRotationRule_MetaData, ARRAY_COUNT(NewProp_AutoAttachRotationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[] = {
				{ "Category", "Attachment" },
				{ "EditCondition", "bAutoManageAttachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoAttachLocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AutoAttachLocationRule_MetaData, ARRAY_COUNT(NewProp_AutoAttachLocationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "DEPRECATED: Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachLocation::Type" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationType = { UE4CodeGen_Private::EPropertyClass::Byte, "AutoAttachLocationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationType_DEPRECATED), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(NewProp_AutoAttachLocationType_MetaData, ARRAY_COUNT(NewProp_AutoAttachLocationType_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[] = {
				{ "Category", "Attachment" },
				{ "EditCondition", "bAutoManageAttachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "AutoAttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachSocketName), METADATA_PARAMS(NewProp_AutoAttachSocketName_MetaData, ARRAY_COUNT(NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[] = {
				{ "Category", "Attachment" },
				{ "EditCondition", "bAutoManageAttachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "AutoAttachParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00140000000a080d, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_AutoAttachParent_MetaData, ARRAY_COUNT(NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTimeDilation_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Scales DeltaTime in UParticleSystemComponent::Tick(...)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "CustomTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, CustomTimeDilation), METADATA_PARAMS(NewProp_CustomTimeDilation_MetaData, ARRAY_COUNT(NewProp_CustomTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayClips_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so!" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplayClips = { UE4CodeGen_Private::EPropertyClass::Array, "ReplayClips", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, ReplayClips), METADATA_PARAMS(NewProp_ReplayClips_MetaData, ARRAY_COUNT(NewProp_ReplayClips_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayClips_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReplayClips", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystemReplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorDetailMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Used for applying Cascade's detail mode setting to in-level particle systems" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorDetailMode = { UE4CodeGen_Private::EPropertyClass::Int, "EditorDetailMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EditorDetailMode), METADATA_PARAMS(NewProp_EditorDetailMode_MetaData, ARRAY_COUNT(NewProp_EditorDetailMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLODLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "INTERNAL. Used by the editor to set the LODLevel" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorLODLevel = { UE4CodeGen_Private::EPropertyClass::Int, "EditorLODLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EditorLODLevel), METADATA_PARAMS(NewProp_EditorLODLevel_MetaData, ARRAY_COUNT(NewProp_EditorLODLevel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\nWhich is effectively how often the bounds are shrunk." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeForceUpdateTransform = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTimeBeforeForceUpdateTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, MaxTimeBeforeForceUpdateTransform), METADATA_PARAMS(NewProp_MaxTimeBeforeForceUpdateTransform_MetaData, ARRAY_COUNT(NewProp_MaxTimeBeforeForceUpdateTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive = { UE4CodeGen_Private::EPropertyClass::Float, "SecondsBeforeInactive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, SecondsBeforeInactive), METADATA_PARAMS(NewProp_SecondsBeforeInactive_MetaData, ARRAY_COUNT(NewProp_SecondsBeforeInactive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate = { UE4CodeGen_Private::EPropertyClass::Float, "WarmupTickRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, WarmupTickRate), METADATA_PARAMS(NewProp_WarmupTickRate_MetaData, ARRAY_COUNT(NewProp_WarmupTickRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTime = { UE4CodeGen_Private::EPropertyClass::Float, "WarmupTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, WarmupTime), METADATA_PARAMS(NewProp_WarmupTime_MetaData, ARRAY_COUNT(NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartSysVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartSysVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "PartSysVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, PartSysVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PartSysVelocity_MetaData, ARRAY_COUNT(NewProp_PartSysVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "OldPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OldPosition_MetaData, ARRAY_COUNT(NewProp_OldPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleCollide_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleCollide = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleCollide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleCollide_MetaData, ARRAY_COUNT(NewProp_OnParticleCollide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleDeath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleDeath = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleDeath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleDeath_MetaData, ARRAY_COUNT(NewProp_OnParticleDeath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleBurst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleBurst = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleBurst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleBurst_MetaData, ARRAY_COUNT(NewProp_OnParticleBurst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleSpawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleSpawn = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleSpawn_MetaData, ARRAY_COUNT(NewProp_OnParticleSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Array holding name instance parameters for this ParticleSystemComponent.\nParameters can be used in Cascade using DistributionFloat/VectorParticleParameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, InstanceParameters), METADATA_PARAMS(NewProp_InstanceParameters_MetaData, ARRAY_COUNT(NewProp_InstanceParameters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleSysParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSignificance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "The significance this component requires of it's emitters for them to be enabled." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequiredSignificance = { UE4CodeGen_Private::EPropertyClass::Enum, "RequiredSignificance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, RequiredSignificance), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(NewProp_RequiredSignificance_MetaData, ARRAY_COUNT(NewProp_RequiredSignificance_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequiredSignificance_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "The method of LOD level determination to utilize for this particle system" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "LODMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(NewProp_LODMethod_MetaData, ARRAY_COUNT(NewProp_LODMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipUpdateDynamicDataDuringTick_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "Flag indicating that dynamic updating of render data should NOT occur during Tick.\nThis is used primarily to allow for warming up and simulated effects to a certain state." },
			};
#endif
			auto NewProp_bSkipUpdateDynamicDataDuringTick_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bSkipUpdateDynamicDataDuringTick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipUpdateDynamicDataDuringTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipUpdateDynamicDataDuringTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipUpdateDynamicDataDuringTick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipUpdateDynamicDataDuringTick_MetaData, ARRAY_COUNT(NewProp_bSkipUpdateDynamicDataDuringTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODMethod_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "indicates that the component's LODMethod overrides the Template's" },
			};
#endif
			auto NewProp_bOverrideLODMethod_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bOverrideLODMethod = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODMethod = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLODMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLODMethod_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLODMethod_MetaData, ARRAY_COUNT(NewProp_bOverrideLODMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarmingUp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			auto NewProp_bWarmingUp_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bWarmingUp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarmingUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bWarmingUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWarmingUp_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWarmingUp_MetaData, ARRAY_COUNT(NewProp_bWarmingUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[] = {
				{ "Category", "Attachment" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
			};
#endif
			auto NewProp_bAutoManageAttachment_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bAutoManageAttachment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoManageAttachment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoManageAttachment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoManageAttachment_MetaData, ARRAY_COUNT(NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRecycling_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled.\nSome systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects.\nThis is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once." },
			};
#endif
			auto NewProp_bAllowRecycling_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bAllowRecycling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRecycling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRecycling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowRecycling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowRecycling_MetaData, ARRAY_COUNT(NewProp_bAllowRecycling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnDedicatedServer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "whether to update the particle system on dedicated servers" },
			};
#endif
			auto NewProp_bUpdateOnDedicatedServer_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bUpdateOnDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOnDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdateOnDedicatedServer_MetaData, ARRAY_COUNT(NewProp_bUpdateOnDedicatedServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetOnDetach_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			auto NewProp_bResetOnDetach_SetBit = [](void* Obj){ ((UParticleSystemComponent*)Obj)->bResetOnDetach = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetOnDetach = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetOnDetach", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystemComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetOnDetach_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResetOnDetach_MetaData, ARRAY_COUNT(NewProp_bResetOnDetach_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
				{ "ToolTip", "The skeletal mesh components used with the socket location module.\nThis is to prevent them from being garbage collected." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkelMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "SkelMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000202008, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, SkelMeshComponents), METADATA_PARAMS(NewProp_SkelMeshComponents_MetaData, ARRAY_COUNT(NewProp_SkelMeshComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SkelMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterMaterials_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmitterMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "EmitterMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EmitterMaterials), METADATA_PARAMS(NewProp_EmitterMaterials_MetaData, ARRAY_COUNT(NewProp_EmitterMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EmitterMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
				{ "Category", "Particles" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template = { UE4CodeGen_Private::EPropertyClass::Object, "Template", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UParticleSystemComponent, Template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_Template_MetaData, ARRAY_COUNT(NewProp_Template_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSystemFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachRotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachRotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachLocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachLocationRule_Underlying,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachLocationType,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAttachParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayClips,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayClips_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorDetailMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorLODLevel,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTimeBeforeForceUpdateTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondsBeforeInactive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarmupTickRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarmupTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartSysVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleCollide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleDeath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleBurst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceParameters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredSignificance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredSignificance_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipUpdateDynamicDataDuringTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLODMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWarmingUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoManageAttachment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowRecycling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOnDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetOnDetach,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMeshComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMeshComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterMaterials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Template,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleSystemComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleSystemComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UParticleSystemComponent, 3796573370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystemComponent(Z_Construct_UClass_UParticleSystemComponent, &UParticleSystemComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
