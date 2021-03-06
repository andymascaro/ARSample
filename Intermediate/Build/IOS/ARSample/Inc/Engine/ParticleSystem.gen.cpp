// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystem() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystem_ContainsEmitterType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
// End Cross Module References
	static UEnum* EParticleSystemOcclusionBoundsMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemOcclusionBoundsMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSystemOcclusionBoundsMethod(EParticleSystemOcclusionBoundsMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSystemOcclusionBoundsMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_CRC() { return 3498582012U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSystemOcclusionBoundsMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSOBM_None", (int64)EPSOBM_None },
				{ "EPSOBM_ParticleBounds", (int64)EPSOBM_ParticleBounds },
				{ "EPSOBM_CustomBounds", (int64)EPSOBM_CustomBounds },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPSOBM_CustomBounds.DisplayName", "Custom Bounds" },
				{ "EPSOBM_CustomBounds.ToolTip", "Use the custom occlusion bounds when determining occlusion" },
				{ "EPSOBM_None.DisplayName", "None" },
				{ "EPSOBM_None.ToolTip", "Don't determine occlusion on this particle system" },
				{ "EPSOBM_ParticleBounds.DisplayName", "Particle Bounds" },
				{ "EPSOBM_ParticleBounds.ToolTip", "Use the bounds of the particle system component when determining occlusion" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Occlusion method enumeration" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSystemOcclusionBoundsMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSystemOcclusionBoundsMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ParticleSystemLODMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleSystemLODMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLODMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ParticleSystemLODMethod(ParticleSystemLODMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ParticleSystemLODMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ParticleSystemLODMethod_CRC() { return 3482703026U; }
	UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemLODMethod"), 0, Get_Z_Construct_UEnum_Engine_ParticleSystemLODMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PARTICLESYSTEMLODMETHOD_Automatic", (int64)PARTICLESYSTEMLODMETHOD_Automatic },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet", (int64)PARTICLESYSTEMLODMETHOD_DirectSet },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic", (int64)PARTICLESYSTEMLODMETHOD_ActivateAutomatic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.DisplayName", "Activate Automatic" },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.ToolTip", "LOD level is determined at Activation time, then left alone unless directly set by game code." },
				{ "PARTICLESYSTEMLODMETHOD_Automatic.DisplayName", "Automatic" },
				{ "PARTICLESYSTEMLODMETHOD_Automatic.ToolTip", "Automatically set the LOD level, checking every LODDistanceCheckTime seconds." },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet.DisplayName", "Direct Set" },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet.ToolTip", "LOD level is directly set by the game code." },
				{ "ToolTip", "ParticleSystemLODMethod" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ParticleSystemLODMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ParticleSystemLODMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleSystemUpdateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemUpdateMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSystemUpdateMode(EParticleSystemUpdateMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSystemUpdateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_CRC() { return 1362537964U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSystemUpdateMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSUM_RealTime", (int64)EPSUM_RealTime },
				{ "EPSUM_FixedTime", (int64)EPSUM_FixedTime },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPSUM_FixedTime.DisplayName", "Fixed-Time" },
				{ "EPSUM_FixedTime.ToolTip", "FixedTime      - update via a fixed time step" },
				{ "EPSUM_RealTime.DisplayName", "Real-Time" },
				{ "EPSUM_RealTime.ToolTip", "RealTime       - update via the delta time passed in" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "ParticleSystemUpdateMode\nEnumeration indicating the method by which the system should be updated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSystemUpdateMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSystemUpdateMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNamedEmitterMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedEmitterMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("NamedEmitterMaterial"), sizeof(FNamedEmitterMaterial), Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedEmitterMaterial(FNamedEmitterMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedEmitterMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedEmitterMaterial")),new UScriptStruct::TCppStructOps<FNamedEmitterMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedEmitterMaterial"), sizeof(FNamedEmitterMaterial), Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedEmitterMaterial>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "NamedMaterial" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNamedEmitterMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "NamedMaterial" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNamedEmitterMaterial, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedEmitterMaterial",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNamedEmitterMaterial),
				alignof(FNamedEmitterMaterial),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_CRC() { return 2999900738U; }
class UScriptStruct* FLODSoloTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODSoloTrack, Z_Construct_UPackage__Script_Engine(), TEXT("LODSoloTrack"), sizeof(FLODSoloTrack), Get_Z_Construct_UScriptStruct_FLODSoloTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLODSoloTrack(FLODSoloTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("LODSoloTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LODSoloTrack")),new UScriptStruct::TCppStructOps<FLODSoloTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LODSoloTrack"), sizeof(FLODSoloTrack), Get_Z_Construct_UScriptStruct_FLODSoloTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Temporary array for tracking 'solo' emitter mode.\nEntry will be true if emitter was enabled" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODSoloTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloEnableSetting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoloEnableSetting = { UE4CodeGen_Private::EPropertyClass::Array, "SoloEnableSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FLODSoloTrack, SoloEnableSetting), METADATA_PARAMS(NewProp_SoloEnableSetting_MetaData, ARRAY_COUNT(NewProp_SoloEnableSetting_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoloEnableSetting_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "SoloEnableSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoloEnableSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoloEnableSetting_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LODSoloTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLODSoloTrack),
				alignof(FLODSoloTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_CRC() { return 2489785054U; }
class UScriptStruct* FParticleSystemLOD::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemLOD, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLOD"), sizeof(FParticleSystemLOD), Get_Z_Construct_UScriptStruct_FParticleSystemLOD_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSystemLOD(FParticleSystemLOD::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSystemLOD"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSystemLOD")),new UScriptStruct::TCppStructOps<FParticleSystemLOD>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemLOD"), sizeof(FParticleSystemLOD), Get_Z_Construct_UScriptStruct_FParticleSystemLOD_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Structure containing per-LOD settings that pertain to the entire UParticleSystem." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemLOD>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleSystemLOD",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleSystemLOD),
				alignof(FParticleSystemLOD),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_CRC() { return 2735075455U; }
	void UParticleSystem::StaticRegisterNativesUParticleSystem()
	{
		UClass* Class = UParticleSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsEmitterType", (Native)&UParticleSystem::execContainsEmitterType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UParticleSystem_ContainsEmitterType()
	{
		struct ParticleSystem_eventContainsEmitterType_Parms
		{
			UClass* TypeData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ParticleSystem_eventContainsEmitterType_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ParticleSystem_eventContainsEmitterType_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TypeData = { UE4CodeGen_Private::EPropertyClass::Class, "TypeData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ParticleSystem_eventContainsEmitterType_Parms, TypeData), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TypeData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particle System" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Returns true if this system contains an emitter of the pasesd type.\n@ param TypeData - The emitter type to check for. Must be a child class of UParticleModuleTypeDataBase" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystem, "ContainsEmitterType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ParticleSystem_eventContainsEmitterType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParticleSystem_NoRegister()
	{
		return UParticleSystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType, "ContainsEmitterType" }, // 763189233
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Particles/ParticleSystem.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "A ParticleSystem is a complete particle effect that contains any number of ParticleEmitters. By allowing multiple emitters\nin a system, the designer can create elaborate particle effects that are held in a single system. Once created using\nCascade, a ParticleSystem can then be inserted into a level or created in script." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialSlots_MetaData[] = {
				{ "Category", "Materials" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Array of named material slots for use by emitters of this system.\nEmitters can use these instead of their own materials by providing the name to the NamedMaterialOverrides property of their required module.\nThese materials can be overridden using CreateNamedDynamicMaterialInstance() on a ParticleSystemComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialSlots = { UE4CodeGen_Private::EPropertyClass::Array, "NamedMaterialSlots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, NamedMaterialSlots), METADATA_PARAMS(NewProp_NamedMaterialSlots_MetaData, ARRAY_COUNT(NewProp_NamedMaterialSlots_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedMaterialSlots_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NamedMaterialSlots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedEmitterMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloTracking_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoloTracking = { UE4CodeGen_Private::EPropertyClass::Array, "SoloTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, SoloTracking), METADATA_PARAMS(NewProp_SoloTracking_MetaData, ARRAY_COUNT(NewProp_SoloTracking_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloTracking_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoloTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLODSoloTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomOcclusionBounds_MetaData[] = {
				{ "Category", "Occlusion" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The occlusion bounds to use if OcclusionBoundsMethod is set to EPSOBM_CustomBounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomOcclusionBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomOcclusionBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, CustomOcclusionBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_CustomOcclusionBounds_MetaData, ARRAY_COUNT(NewProp_CustomOcclusionBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionBoundsMethod_MetaData[] = {
				{ "Category", "Occlusion" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Which occlusion bounds method to use for this particle system.\nEPSOBM_None - Don't determine occlusion for this system.\nEPSOBM_ParticleBounds - Use the bounds of the component when determining occlusion." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionBoundsMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionBoundsMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, OcclusionBoundsMethod), Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, METADATA_PARAMS(NewProp_OcclusionBoundsMethod_MetaData, ARRAY_COUNT(NewProp_OcclusionBoundsMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[] = {
				{ "Category", "MacroUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MacroUVRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, MacroUVRadius), METADATA_PARAMS(NewProp_MacroUVRadius_MetaData, ARRAY_COUNT(NewProp_MacroUVRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[] = {
				{ "Category", "MacroUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MacroUVPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MacroUVPosition_MetaData, ARRAY_COUNT(NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSignificanceLevel_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The maximum level of significance for emitters in this system. Any emitters with a higher significance will be capped at this significance level." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxSignificanceLevel = { UE4CodeGen_Private::EPropertyClass::Enum, "MaxSignificanceLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, MaxSignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(NewProp_MaxSignificanceLevel_MetaData, ARRAY_COUNT(NewProp_MaxSignificanceLevel_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSignificanceLevel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificanceDelay_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Time delay between all emitters becoming insignificant and the systems insignificant reaction." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsignificanceDelay = { UE4CodeGen_Private::EPropertyClass::Float, "InsignificanceDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, InsignificanceDelay), METADATA_PARAMS(NewProp_InsignificanceDelay_MetaData, ARRAY_COUNT(NewProp_InsignificanceDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificantReaction_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The reaction this system takes when all emitters are insignificant." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InsignificantReaction = { UE4CodeGen_Private::EPropertyClass::Enum, "InsignificantReaction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, InsignificantReaction), Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction, METADATA_PARAMS(NewProp_InsignificantReaction_MetaData, ARRAY_COUNT(NewProp_InsignificantReaction_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InsignificantReaction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenTicks_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Minimum duration between ticks; 33=tick at max. 30FPS, 16=60FPS, 8=120FPS" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MinTimeBetweenTicks = { UE4CodeGen_Private::EPropertyClass::UInt32, "MinTimeBetweenTicks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, MinTimeBetweenTicks), METADATA_PARAMS(NewProp_MinTimeBetweenTicks_MetaData, ARRAY_COUNT(NewProp_MinTimeBetweenTicks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivate_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Auto-deactivate system if all emitters are determined to not spawn particles again, regardless of lifetime." },
			};
#endif
			auto NewProp_bAutoDeactivate_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bAutoDeactivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDeactivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDeactivate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDeactivate_MetaData, ARRAY_COUNT(NewProp_bAutoDeactivate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDelayRange_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "If true, select the emitter delay from the range\n        [DelayLow..Delay]" },
			};
#endif
			auto NewProp_bUseDelayRange_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bUseDelayRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDelayRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDelayRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDelayRange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDelayRange_MetaData, ARRAY_COUNT(NewProp_bUseDelayRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayLow_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The low end of the emitter delay if using a range." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayLow = { UE4CodeGen_Private::EPropertyClass::Float, "DelayLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, DelayLow), METADATA_PARAMS(NewProp_DelayLow_MetaData, ARRAY_COUNT(NewProp_DelayLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "How long this Particle system should delay when ActivateSystem is called on it." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay = { UE4CodeGen_Private::EPropertyClass::Float, "Delay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, Delay), METADATA_PARAMS(NewProp_Delay_MetaData, ARRAY_COUNT(NewProp_Delay_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Internal: The PSys thumbnail image" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_ThumbnailImage_MetaData, ARRAY_COUNT(NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Internal: Indicates the PSys thumbnail image is out of date" },
			};
#endif
			auto NewProp_ThumbnailImageOutOfDate_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->ThumbnailImageOutOfDate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate = { UE4CodeGen_Private::EPropertyClass::Bool, "ThumbnailImageOutOfDate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ThumbnailImageOutOfDate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ThumbnailImageOutOfDate_MetaData, ARRAY_COUNT(NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRealtimeThumbnail_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Inidicates the old 'real-time' thumbnail rendering should be used" },
			};
#endif
			auto NewProp_bUseRealtimeThumbnail_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bUseRealtimeThumbnail = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRealtimeThumbnail = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRealtimeThumbnail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRealtimeThumbnail_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRealtimeThumbnail_MetaData, ARRAY_COUNT(NewProp_bUseRealtimeThumbnail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPhysics_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Set during load time to indicate that physics is used..." },
			};
#endif
			auto NewProp_bHasPhysics_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bHasPhysics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasPhysics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasPhysics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasPhysics_MetaData, ARRAY_COUNT(NewProp_bHasPhysics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldResetPeakCounts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "EDITOR ONLY: Indicates that Cascade would like to have the PeakActiveParticles count reset" },
			};
#endif
			auto NewProp_bShouldResetPeakCounts_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bShouldResetPeakCounts = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldResetPeakCounts = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldResetPeakCounts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldResetPeakCounts_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldResetPeakCounts_MetaData, ARRAY_COUNT(NewProp_bShouldResetPeakCounts_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The background color to display in Cascade" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorScale3D_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorScale3D = { UE4CodeGen_Private::EPropertyClass::Struct, "FloorScale3D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FloorScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FloorScale3D_MetaData, ARRAY_COUNT(NewProp_FloorScale3D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorScale = { UE4CodeGen_Private::EPropertyClass::Float, "FloorScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FloorScale), METADATA_PARAMS(NewProp_FloorScale_MetaData, ARRAY_COUNT(NewProp_FloorScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "FloorRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FloorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_FloorRotation_MetaData, ARRAY_COUNT(NewProp_FloorRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "FloorPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FloorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FloorPosition_MetaData, ARRAY_COUNT(NewProp_FloorPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Cascade 'floor' mesh information." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FloorMesh = { UE4CodeGen_Private::EPropertyClass::Str, "FloorMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FloorMesh), METADATA_PARAMS(NewProp_FloorMesh_MetaData, ARRAY_COUNT(NewProp_FloorMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive = { UE4CodeGen_Private::EPropertyClass::Float, "SecondsBeforeInactive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, SecondsBeforeInactive), METADATA_PARAMS(NewProp_SecondsBeforeInactive_MetaData, ARRAY_COUNT(NewProp_SecondsBeforeInactive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedRelativeBoundingBox_MetaData[] = {
				{ "Category", "Bounds" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Fixed relative bounding box for particle system." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedRelativeBoundingBox = { UE4CodeGen_Private::EPropertyClass::Struct, "FixedRelativeBoundingBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, FixedRelativeBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_FixedRelativeBoundingBox_MetaData, ARRAY_COUNT(NewProp_FixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRelativeBoundingBox_MetaData[] = {
				{ "Category", "Bounds" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Whether to use the fixed relative bounding box or calculate it every frame." },
			};
#endif
			auto NewProp_bUseFixedRelativeBoundingBox_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bUseFixedRelativeBoundingBox = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRelativeBoundingBox = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixedRelativeBoundingBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFixedRelativeBoundingBox_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFixedRelativeBoundingBox_MetaData, ARRAY_COUNT(NewProp_bUseFixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODSettings = { UE4CodeGen_Private::EPropertyClass::Array, "LODSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, LODSettings), METADATA_PARAMS(NewProp_LODSettings_MetaData, ARRAY_COUNT(NewProp_LODSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleSystemLOD, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegenerateLODDuplicate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Internal value that tracks the regenerate LOD levels preference.\nIf true, when autoregenerating LOD levels in code, the low level will\nbe a duplicate of the high." },
			};
#endif
			auto NewProp_bRegenerateLODDuplicate_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bRegenerateLODDuplicate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegenerateLODDuplicate = { UE4CodeGen_Private::EPropertyClass::Bool, "bRegenerateLODDuplicate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRegenerateLODDuplicate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRegenerateLODDuplicate_MetaData, ARRAY_COUNT(NewProp_bRegenerateLODDuplicate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLODSetting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "LOD setting for intepolation (set by Cascade) Range [0..100]" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorLODSetting = { UE4CodeGen_Private::EPropertyClass::Int, "EditorLODSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, EditorLODSetting), METADATA_PARAMS(NewProp_EditorLODSetting_MetaData, ARRAY_COUNT(NewProp_EditorLODSetting_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistances_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The array of distances for each LOD level in the system.\nUsed when LODMethod is set to PARTICLESYSTEMLODMETHOD_Automatic.\n\nExample: System with 3 LOD levels\n        LODDistances(0) = 0.0\n        LODDistances(1) = 2500.0\n        LODDistances(2) = 5000.0\n\n        In this case, when the system is [   0.0 ..   2499.9] from the camera, LOD level 0 will be used.\n                                                                         [2500.0 ..   4999.9] from the camera, LOD level 1 will be used.\n                                                                         [5000.0 .. INFINITY] from the camera, LOD level 2 will be used." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODDistances = { UE4CodeGen_Private::EPropertyClass::Array, "LODDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(UParticleSystem, LODDistances), METADATA_PARAMS(NewProp_LODDistances_MetaData, ARRAY_COUNT(NewProp_LODDistances_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The method of LOD level determination to utilize for this particle system\n  PARTICLESYSTEMLODMETHOD_Automatic - Automatically set the LOD level, checking every LODDistanceCheckTime seconds.\nPARTICLESYSTEMLODMETHOD_DirectSet - LOD level is directly set by the game code.\nPARTICLESYSTEMLODMETHOD_ActivateAutomatic - LOD level is determined at Activation time, then left alone unless directly set by game code." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "LODMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(NewProp_LODMethod_MetaData, ARRAY_COUNT(NewProp_LODMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceCheckTime_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "How often (in seconds) the system should perform the LOD distance check." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceCheckTime = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistanceCheckTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, LODDistanceCheckTime), METADATA_PARAMS(NewProp_LODDistanceCheckTime_MetaData, ARRAY_COUNT(NewProp_LODDistanceCheckTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientZAxisTowardCamera_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "If true, the system's Z axis will be oriented toward the camera" },
			};
#endif
			auto NewProp_bOrientZAxisTowardCamera_SetBit = [](void* Obj){ ((UParticleSystem*)Obj)->bOrientZAxisTowardCamera = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientZAxisTowardCamera = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrientZAxisTowardCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleSystem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOrientZAxisTowardCamera_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOrientZAxisTowardCamera_MetaData, ARRAY_COUNT(NewProp_bOrientZAxisTowardCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Used for curve editor to remember curve-editing setup." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveEdSetup = { UE4CodeGen_Private::EPropertyClass::Object, "CurveEdSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000008, 1, nullptr, STRUCT_OFFSET(UParticleSystem, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(NewProp_CurveEdSetup_MetaData, ARRAY_COUNT(NewProp_CurveEdSetup_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailWarmup_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The time to warm-up the system for the thumbnail image" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailWarmup = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbnailWarmup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailWarmup), METADATA_PARAMS(NewProp_ThumbnailWarmup_MetaData, ARRAY_COUNT(NewProp_ThumbnailWarmup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The distance to place the system when rendering the thumbnail image" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailDistance = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbnailDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailDistance), METADATA_PARAMS(NewProp_ThumbnailDistance_MetaData, ARRAY_COUNT(NewProp_ThumbnailDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The angle to use when rendering the thumbnail image" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "ThumbnailAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_ThumbnailAngle_MetaData, ARRAY_COUNT(NewProp_ThumbnailAngle_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "The component used to preview the particle system in Cascade" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UParticleSystem, PreviewComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_PreviewComponent_MetaData, ARRAY_COUNT(NewProp_PreviewComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters = { UE4CodeGen_Private::EPropertyClass::Array, "Emitters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UParticleSystem, Emitters), METADATA_PARAMS(NewProp_Emitters_MetaData, ARRAY_COUNT(NewProp_Emitters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Emitters_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Emitters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleEmitter_NoRegister, METADATA_PARAMS(NewProp_Emitters_Inner_MetaData, ARRAY_COUNT(NewProp_Emitters_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "WarmupTickRate - the time step for each tick during warm up.\n       Increasing this improves performance. Decreasing, improves accuracy.\n       Set to 0 to use the default tick time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate = { UE4CodeGen_Private::EPropertyClass::Float, "WarmupTickRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, WarmupTickRate), METADATA_PARAMS(NewProp_WarmupTickRate_MetaData, ARRAY_COUNT(NewProp_WarmupTickRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "DisplayName", "Warmup Time - beware hitches!" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "WarmupTime - the time to warm-up the particle system when first rendered\nWarning: WarmupTime is implemented by simulating the particle system for the time requested upon activation.\nThis is extremely prone to cause hitches, especially with large particle counts - use with caution." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTime = { UE4CodeGen_Private::EPropertyClass::Float, "WarmupTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, WarmupTime), METADATA_PARAMS(NewProp_WarmupTime_MetaData, ARRAY_COUNT(NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_Delta_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "UpdateTime_Delta       - internal" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_Delta = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateTime_Delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleSystem, UpdateTime_Delta), METADATA_PARAMS(NewProp_UpdateTime_Delta_MetaData, ARRAY_COUNT(NewProp_UpdateTime_Delta_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_FPS_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "UpdateTime_FPS - the frame per second to update at in FixedTime mode" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_FPS = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateTime_FPS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, UpdateTime_FPS), METADATA_PARAMS(NewProp_UpdateTime_FPS_MetaData, ARRAY_COUNT(NewProp_UpdateTime_FPS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateMode_MetaData[] = {
				{ "Category", "ParticleSystem" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SystemUpdateMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SystemUpdateMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UParticleSystem, SystemUpdateMode), Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, METADATA_PARAMS(NewProp_SystemUpdateMode_MetaData, ARRAY_COUNT(NewProp_SystemUpdateMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NamedMaterialSlots,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NamedMaterialSlots_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoloTracking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoloTracking_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomOcclusionBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionBoundsMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroUVRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroUVPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSignificanceLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSignificanceLevel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InsignificanceDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InsignificantReaction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InsignificantReaction_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTimeBetweenTicks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDeactivate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDelayRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delay,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailImageOutOfDate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRealtimeThumbnail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasPhysics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldResetPeakCounts,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorScale3D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondsBeforeInactive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FixedRelativeBoundingBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFixedRelativeBoundingBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRegenerateLODDuplicate,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorLODSetting,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistanceCheckTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOrientZAxisTowardCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveEdSetup,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailWarmup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailAngle,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Emitters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Emitters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarmupTickRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarmupTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateTime_Delta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateTime_FPS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SystemUpdateMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleSystem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleSystem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UParticleSystem, 3323595516);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystem(Z_Construct_UClass_UParticleSystem, &UParticleSystem::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
