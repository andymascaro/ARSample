// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataGpu() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
// End Cross Module References
class UScriptStruct* FGPUSpriteResourceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteResourceData, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteResourceData"), sizeof(FGPUSpriteResourceData), Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteResourceData(FGPUSpriteResourceData::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteResourceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteResourceData")),new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData;
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteResourceData"), sizeof(FGPUSpriteResourceData), Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The source data for runtime resources." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MaxFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MinFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
			};
#endif
			auto NewProp_bRemoveHMDRoll_SetBit = [](void* Obj){ ((FGPUSpriteResourceData*)Obj)->bRemoveHMDRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveHMDRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteResourceData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveHMDRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Pivot offset in UV space for placing the verts of each particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_PivotOffset_MetaData, ARRAY_COUNT(NewProp_PivotOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The method for locking the particles to a particular axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "LockAxisFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(NewProp_LockAxisFlag_MetaData, ARRAY_COUNT(NewProp_LockAxisFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Screen alignment for particles." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "ScreenAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "How much to stretch sprites based on camera motion blur." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount = { UE4CodeGen_Private::EPropertyClass::Float, "CameraMotionBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CameraMotionBlurAmount), METADATA_PARAMS(NewProp_CameraMotionBlurAmount_MetaData, ARRAY_COUNT(NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to per-particle rotation rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale = { UE4CodeGen_Private::EPropertyClass::Float, "RotationRateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, RotationRateScale), METADATA_PARAMS(NewProp_RotationRateScale_MetaData, ARRAY_COUNT(NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneMinusFriction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "One minus the coefficient of friction applied to particles upon collision." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneMinusFriction = { UE4CodeGen_Private::EPropertyClass::Float, "OneMinusFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OneMinusFriction), METADATA_PARAMS(NewProp_OneMinusFriction_MetaData, ARRAY_COUNT(NewProp_OneMinusFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomDistribution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Control on reflection's random distribution when colliding. (1=uniform distribution)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomDistribution = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRandomDistribution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomDistribution), METADATA_PARAMS(NewProp_CollisionRandomDistribution_MetaData, ARRAY_COUNT(NewProp_CollisionRandomDistribution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomSpread_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Control on reflection's random distribution spread." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomSpread = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRandomSpread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomSpread), METADATA_PARAMS(NewProp_CollisionRandomSpread_MetaData, ARRAY_COUNT(NewProp_CollisionRandomSpread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTimeBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Bias applied to relative time upon collision." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionTimeBias = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionTimeBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionTimeBias), METADATA_PARAMS(NewProp_CollisionTimeBias_MetaData, ARRAY_COUNT(NewProp_CollisionTimeBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Bias to apply to per-particle size for collision." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusBias = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRadiusBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusBias), METADATA_PARAMS(NewProp_CollisionRadiusBias_MetaData, ARRAY_COUNT(NewProp_CollisionRadiusBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to per-particle size for collision." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusScale = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRadiusScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusScale), METADATA_PARAMS(NewProp_CollisionRadiusScale_MetaData, ARRAY_COUNT(NewProp_CollisionRadiusScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResilienceBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Bias to apply to per-particle damping factor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResilienceBias = { UE4CodeGen_Private::EPropertyClass::Float, "ResilienceBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceBias), METADATA_PARAMS(NewProp_ResilienceBias_MetaData, ARRAY_COUNT(NewProp_ResilienceBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResilienceScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to per-particle damping factor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResilienceScale = { UE4CodeGen_Private::EPropertyClass::Float, "ResilienceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceScale), METADATA_PARAMS(NewProp_ResilienceScale_MetaData, ARRAY_COUNT(NewProp_ResilienceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Bias to apply to per-particle drag coefficient." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientBias = { UE4CodeGen_Private::EPropertyClass::Float, "DragCoefficientBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientBias), METADATA_PARAMS(NewProp_DragCoefficientBias_MetaData, ARRAY_COUNT(NewProp_DragCoefficientBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to per-particle drag coefficient." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientScale = { UE4CodeGen_Private::EPropertyClass::Float, "DragCoefficientScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientScale), METADATA_PARAMS(NewProp_DragCoefficientScale_MetaData, ARRAY_COUNT(NewProp_DragCoefficientScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Bias to apply to per-particle vector field scale." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldBias = { UE4CodeGen_Private::EPropertyClass::Float, "PerParticleVectorFieldBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldBias), METADATA_PARAMS(NewProp_PerParticleVectorFieldBias_MetaData, ARRAY_COUNT(NewProp_PerParticleVectorFieldBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to per-particle vector field scale." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldScale = { UE4CodeGen_Private::EPropertyClass::Float, "PerParticleVectorFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldScale), METADATA_PARAMS(NewProp_PerParticleVectorFieldScale_MetaData, ARRAY_COUNT(NewProp_PerParticleVectorFieldScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Tightness override value for the global vector fields." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalVectorFieldTightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldTightness), METADATA_PARAMS(NewProp_GlobalVectorFieldTightness_MetaData, ARRAY_COUNT(NewProp_GlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale to apply to global vector fields." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalVectorFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldScale), METADATA_PARAMS(NewProp_GlobalVectorFieldScale_MetaData, ARRAY_COUNT(NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseRange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseRange = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitPhaseRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitPhaseRange_MetaData, ARRAY_COUNT(NewProp_OrbitPhaseRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseBase_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Phase offset of orbit around each axis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseBase = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitPhaseBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitPhaseBase_MetaData, ARRAY_COUNT(NewProp_OrbitPhaseBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyRange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyRange = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitFrequencyRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitFrequencyRange_MetaData, ARRAY_COUNT(NewProp_OrbitFrequencyRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyBase_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Frequency at which the particle orbits around each axis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyBase = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitFrequencyBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitFrequencyBase_MetaData, ARRAY_COUNT(NewProp_OrbitFrequencyBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitOffsetRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitOffsetRange_MetaData, ARRAY_COUNT(NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Offset at which to orbit." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitOffsetBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitOffsetBase_MetaData, ARRAY_COUNT(NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Constant acceleration to apply to particles." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstantAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ConstantAcceleration_MetaData, ARRAY_COUNT(NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeBySpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeBySpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "SizeBySpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SizeBySpeed), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_SizeBySpeed_MetaData, ARRAY_COUNT(NewProp_SizeBySpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageSize = { UE4CodeGen_Private::EPropertyClass::Struct, "SubImageSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SubImageSize), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_SubImageSize_MetaData, ARRAY_COUNT(NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveBias = { UE4CodeGen_Private::EPropertyClass::Struct, "SimulationAttrCurveBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_SimulationAttrCurveBias_MetaData, ARRAY_COUNT(NewProp_SimulationAttrCurveBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale and bias to be applied to the simulation attribute curves." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SimulationAttrCurveScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_SimulationAttrCurveScale_MetaData, ARRAY_COUNT(NewProp_SimulationAttrCurveScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiscBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiscBias = { UE4CodeGen_Private::EPropertyClass::Struct, "MiscBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MiscBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_MiscBias_MetaData, ARRAY_COUNT(NewProp_MiscBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiscScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale and bias to be applied to the misc curve." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiscScale = { UE4CodeGen_Private::EPropertyClass::Struct, "MiscScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MiscScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_MiscScale_MetaData, ARRAY_COUNT(NewProp_MiscScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBias = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ColorBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_ColorBias_MetaData, ARRAY_COUNT(NewProp_ColorBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Scale and bias to be applied to the color of sprites." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScale = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ColorScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_ColorScale_MetaData, ARRAY_COUNT(NewProp_ColorScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedSimulationAttrSamples_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Quantized samples for simulation attributes." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedSimulationAttrSamples = { UE4CodeGen_Private::EPropertyClass::Array, "QuantizedSimulationAttrSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedSimulationAttrSamples), METADATA_PARAMS(NewProp_QuantizedSimulationAttrSamples_MetaData, ARRAY_COUNT(NewProp_QuantizedSimulationAttrSamples_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedSimulationAttrSamples_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QuantizedSimulationAttrSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedMiscSamples_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Quantized samples for misc curve attributes to be evaluated at runtime." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedMiscSamples = { UE4CodeGen_Private::EPropertyClass::Array, "QuantizedMiscSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedMiscSamples), METADATA_PARAMS(NewProp_QuantizedMiscSamples_MetaData, ARRAY_COUNT(NewProp_QuantizedMiscSamples_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedMiscSamples_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QuantizedMiscSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedColorSamples_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Quantized color samples." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedColorSamples = { UE4CodeGen_Private::EPropertyClass::Array, "QuantizedColorSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedColorSamples), METADATA_PARAMS(NewProp_QuantizedColorSamples_MetaData, ARRAY_COUNT(NewProp_QuantizedColorSamples_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedColorSamples_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QuantizedColorSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveHMDRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockAxisFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraMotionBlurAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OneMinusFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionRandomDistribution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionRandomSpread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionTimeBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionRadiusBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionRadiusScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResilienceBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResilienceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficientBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficientScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerParticleVectorFieldBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerParticleVectorFieldScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalVectorFieldTightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalVectorFieldScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitPhaseRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitPhaseBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitFrequencyRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitFrequencyBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitOffsetRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitOffsetBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantAcceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeBySpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImageSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationAttrCurveBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationAttrCurveScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MiscBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MiscScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedSimulationAttrSamples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedSimulationAttrSamples_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedMiscSamples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedMiscSamples_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedColorSamples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuantizedColorSamples_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GPUSpriteResourceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGPUSpriteResourceData),
				alignof(FGPUSpriteResourceData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_CRC() { return 3702682305U; }
class UScriptStruct* FGPUSpriteEmitterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteEmitterInfo"), sizeof(FGPUSpriteEmitterInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteEmitterInfo(FGPUSpriteEmitterInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteEmitterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteEmitterInfo")),new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteEmitterInfo"), sizeof(FGPUSpriteEmitterInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The data needed by the runtime to simulate sprites." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicAlphaScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Dynamic alpha scale from the ColorScaleOverLife module." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicAlphaScale = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicAlphaScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlphaScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_DynamicAlphaScale_MetaData, ARRAY_COUNT(NewProp_DynamicAlphaScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicColorScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Dynamic color scale from the ColorScaleOverLife module." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicColorScale = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicColorScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColorScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_DynamicColorScale_MetaData, ARRAY_COUNT(NewProp_DynamicColorScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Dynamic alpha scale from the ColorOverLife module." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicAlpha = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_DynamicAlpha_MetaData, ARRAY_COUNT(NewProp_DynamicAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Dynamic color scale from the ColorOverLife module." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_DynamicColor_MetaData, ARRAY_COUNT(NewProp_DynamicColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
			};
#endif
			auto NewProp_bRemoveHMDRoll_SetBit = [](void* Obj){ ((FGPUSpriteEmitterInfo*)Obj)->bRemoveHMDRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveHMDRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteEmitterInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveHMDRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(NewProp_CollisionMode_MetaData, ARRAY_COUNT(NewProp_CollisionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "If true, collisions are enabled for this emitter." },
			};
#endif
			auto NewProp_bEnableCollision_SetBit = [](void* Obj){ ((FGPUSpriteEmitterInfo*)Obj)->bEnableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteEmitterInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCollision_MetaData, ARRAY_COUNT(NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The method for locking the particles to a particular axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "LockAxisFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(NewProp_LockAxisFlag_MetaData, ARRAY_COUNT(NewProp_LockAxisFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The method for aligning the particle based on the camera." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "ScreenAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleCount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The maximum number of particles expected for this emitter." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxParticleCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxParticleCount), METADATA_PARAMS(NewProp_MaxParticleCount_MetaData, ARRAY_COUNT(NewProp_MaxParticleCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLifetime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The maximum lifetime of particles in this emitter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLifetime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLifetime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxLifetime), METADATA_PARAMS(NewProp_MaxLifetime_MetaData, ARRAY_COUNT(NewProp_MaxLifetime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvRotationRateScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The inverse scale to apply to rotation rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvRotationRateScale = { UE4CodeGen_Private::EPropertyClass::Float, "InvRotationRateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvRotationRateScale), METADATA_PARAMS(NewProp_InvRotationRateScale_MetaData, ARRAY_COUNT(NewProp_InvRotationRateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvMaxSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "One over the maximum size of a sprite particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvMaxSize = { UE4CodeGen_Private::EPropertyClass::Struct, "InvMaxSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvMaxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_InvMaxSize_MetaData, ARRAY_COUNT(NewProp_InvMaxSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitOffsetRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitOffsetRange_MetaData, ARRAY_COUNT(NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Amount by which to offset particles when they are spawned." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase = { UE4CodeGen_Private::EPropertyClass::Struct, "OrbitOffsetBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OrbitOffsetBase_MetaData, ARRAY_COUNT(NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorRadiusSq_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Point attractor radius, squared." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointAttractorRadiusSq = { UE4CodeGen_Private::EPropertyClass::Float, "PointAttractorRadiusSq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorRadiusSq), METADATA_PARAMS(NewProp_PointAttractorRadiusSq_MetaData, ARRAY_COUNT(NewProp_PointAttractorRadiusSq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Point attractor position." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAttractorPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "PointAttractorPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PointAttractorPosition_MetaData, ARRAY_COUNT(NewProp_PointAttractorPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Constant acceleration to apply to particles." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstantAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ConstantAcceleration_MetaData, ARRAY_COUNT(NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Damping factor applied to particle collisions." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resilience = { UE4CodeGen_Private::EPropertyClass::Struct, "Resilience", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, Resilience), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(NewProp_Resilience_MetaData, ARRAY_COUNT(NewProp_Resilience_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorStrength_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Point attractor strength over time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAttractorStrength = { UE4CodeGen_Private::EPropertyClass::Struct, "PointAttractorStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorStrength), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(NewProp_PointAttractorStrength_MetaData, ARRAY_COUNT(NewProp_PointAttractorStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Per-particle drag coefficient." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Struct, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DragCoefficient), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(NewProp_DragCoefficient_MetaData, ARRAY_COUNT(NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Per-particle vector field scale." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScale = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, VectorFieldScale), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(NewProp_VectorFieldScale_MetaData, ARRAY_COUNT(NewProp_VectorFieldScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVectorField_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field info." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVectorField = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalVectorField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LocalVectorField), Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, METADATA_PARAMS(NewProp_LocalVectorField_MetaData, ARRAY_COUNT(NewProp_LocalVectorField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "List of spawn modules that must be evaluated at runtime." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnModules = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModules), METADATA_PARAMS(NewProp_SpawnModules_MetaData, ARRAY_COUNT(NewProp_SpawnModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnitModule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The spawn-per-unit module." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPerUnitModule = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnPerUnitModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnPerUnitModule), Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister, METADATA_PARAMS(NewProp_SpawnPerUnitModule_MetaData, ARRAY_COUNT(NewProp_SpawnPerUnitModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The spawn module. Needed for now, but should be divorced from the runtime." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModule = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(NewProp_SpawnModule_MetaData, ARRAY_COUNT(NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "The required module. Needed for now, but should be divorced from the runtime." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredModule = { UE4CodeGen_Private::EPropertyClass::Object, "RequiredModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(NewProp_RequiredModule_MetaData, ARRAY_COUNT(NewProp_RequiredModule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicAlphaScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicColorScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveHMDRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockAxisFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxParticleCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLifetime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvRotationRateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvMaxSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitOffsetRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitOffsetBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointAttractorRadiusSq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointAttractorPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantAcceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Resilience,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointAttractorStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalVectorField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnPerUnitModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredModule,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GPUSpriteEmitterInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FGPUSpriteEmitterInfo),
				alignof(FGPUSpriteEmitterInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_CRC() { return 1994815279U; }
class UScriptStruct* FGPUSpriteLocalVectorFieldInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteLocalVectorFieldInfo"), sizeof(FGPUSpriteLocalVectorFieldInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo(FGPUSpriteLocalVectorFieldInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteLocalVectorFieldInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteLocalVectorFieldInfo")),new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteLocalVectorFieldInfo"), sizeof(FGPUSpriteLocalVectorFieldInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Data needed for local vector fields." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Use fix delta time in the simulation?" },
			};
#endif
			auto NewProp_bUseFixDT_SetBit = [](void* Obj){ ((FGPUSpriteLocalVectorFieldInfo*)Obj)->bUseFixDT = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixDT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteLocalVectorFieldInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFixDT_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFixDT_MetaData, ARRAY_COUNT(NewProp_bUseFixDT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Tile vector field in z axis?" },
			};
#endif
			auto NewProp_bTileZ_SetBit = [](void* Obj){ ((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteLocalVectorFieldInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileZ_MetaData, ARRAY_COUNT(NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Tile vector field in y axis?" },
			};
#endif
			auto NewProp_bTileY_SetBit = [](void* Obj){ ((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileY = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteLocalVectorFieldInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileY_MetaData, ARRAY_COUNT(NewProp_bTileY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Tile vector field in x axis?" },
			};
#endif
			auto NewProp_bTileX_SetBit = [](void* Obj){ ((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileX = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteLocalVectorFieldInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTileX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTileX_MetaData, ARRAY_COUNT(NewProp_bTileX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Ignore Components Transform" },
			};
#endif
			auto NewProp_bIgnoreComponentTransform_SetBit = [](void* Obj){ ((FGPUSpriteLocalVectorFieldInfo*)Obj)->bIgnoreComponentTransform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreComponentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGPUSpriteLocalVectorFieldInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreComponentTransform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreComponentTransform_MetaData, ARRAY_COUNT(NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field tightness." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness = { UE4CodeGen_Private::EPropertyClass::Float, "Tightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Tightness), METADATA_PARAMS(NewProp_Tightness_MetaData, ARRAY_COUNT(NewProp_Tightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field intensity." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Intensity), METADATA_PARAMS(NewProp_Intensity_MetaData, ARRAY_COUNT(NewProp_Intensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field rotation rate." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RotationRate_MetaData, ARRAY_COUNT(NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Maximum initial rotation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxInitialRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MaxInitialRotation_MetaData, ARRAY_COUNT(NewProp_MaxInitialRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Minimum initial rotation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinInitialRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MinInitialRotation_MetaData, ARRAY_COUNT(NewProp_MinInitialRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field transform." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Local vector field to apply to this emitter." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field = { UE4CodeGen_Private::EPropertyClass::Object, "Field", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(NewProp_Field_MetaData, ARRAY_COUNT(NewProp_Field_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFixDT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTileX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreComponentTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInitialRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinInitialRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Field,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GPUSpriteLocalVectorFieldInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGPUSpriteLocalVectorFieldInfo),
				alignof(FGPUSpriteLocalVectorFieldInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_CRC() { return 826217212U; }
	void UParticleModuleTypeDataGpu::StaticRegisterNativesUParticleModuleTypeDataGpu()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister()
	{
		return UParticleModuleTypeDataGpu::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "GPU Sprites" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearExistingParticlesOnInit_MetaData[] = {
				{ "Category", "ParticleModuleTypeDataGpu" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "When true, all existing partilces are cleared when the emitter is initialized." },
			};
#endif
			auto NewProp_bClearExistingParticlesOnInit_SetBit = [](void* Obj){ ((UParticleModuleTypeDataGpu*)Obj)->bClearExistingParticlesOnInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearExistingParticlesOnInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearExistingParticlesOnInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataGpu), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClearExistingParticlesOnInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClearExistingParticlesOnInit_MetaData, ARRAY_COUNT(NewProp_bClearExistingParticlesOnInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[] = {
				{ "Category", "ParticleModuleTypeDataGpu" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "TEMP: How much to stretch sprites based on camera motion blur." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount = { UE4CodeGen_Private::EPropertyClass::Float, "CameraMotionBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, CameraMotionBlurAmount), METADATA_PARAMS(NewProp_CameraMotionBlurAmount_MetaData, ARRAY_COUNT(NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Data used to initialize runtime resources." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceData = { UE4CodeGen_Private::EPropertyClass::Struct, "ResourceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, ResourceData), Z_Construct_UScriptStruct_FGPUSpriteResourceData, METADATA_PARAMS(NewProp_ResourceData_MetaData, ARRAY_COUNT(NewProp_ResourceData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
				{ "ToolTip", "Information for runtime simulation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "EmitterInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, EmitterInfo), Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, METADATA_PARAMS(NewProp_EmitterInfo_MetaData, ARRAY_COUNT(NewProp_EmitterInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClearExistingParticlesOnInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraMotionBlurAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterInfo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataGpu>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataGpu::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataGpu, 1379189880);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataGpu(Z_Construct_UClass_UParticleModuleTypeDataGpu, &UParticleModuleTypeDataGpu::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataGpu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataGpu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
