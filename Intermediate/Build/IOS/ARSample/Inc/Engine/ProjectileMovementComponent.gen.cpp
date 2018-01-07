// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/ProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileMovementComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity();
	ENGINE_API UFunction* Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature()
	{
		struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms
		{
			FHitResult ImpactResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, "OnProjectileStopDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature()
	{
		struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ImpactVelocity_MetaData, ARRAY_COUNT(NewProp_ImpactVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_ImpactResult_MetaData, ARRAY_COUNT(NewProp_ImpactResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, "OnProjectileBounceDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00D30000, sizeof(ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UProjectileMovementComponent::StaticRegisterNativesUProjectileMovementComponent()
	{
		UClass* Class = UProjectileMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LimitVelocity", (Native)&UProjectileMovementComponent::execLimitVelocity },
			{ "SetVelocityInLocalSpace", (Native)&UProjectileMovementComponent::execSetVelocityInLocalSpace },
			{ "StopSimulating", (Native)&UProjectileMovementComponent::execStopSimulating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity()
	{
		struct ProjectileMovementComponent_eventLimitVelocity_Parms
		{
			FVector NewVelocity;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventLimitVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventLimitVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Components|ProjectileMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Don't allow velocity magnitude to exceed MaxSpeed, if MaxSpeed is non-zero." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, "LimitVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54880401, sizeof(ProjectileMovementComponent_eventLimitVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace()
	{
		struct ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms
		{
			FVector NewVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Components|ProjectileMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Sets the velocity to the new value, rotated into Actor space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, "SetVelocityInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ProjectileMovementComponent_eventSetVelocityInLocalSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating()
	{
		struct ProjectileMovementComponent_eventStopSimulating_Parms
		{
			FHitResult HitResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ProjectileMovementComponent_eventStopSimulating_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_HitResult_MetaData, ARRAY_COUNT(NewProp_HitResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Components|ProjectileMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Clears the reference to UpdatedComponent, fires stop event (OnProjectileStop), and stops ticking (if bAutoUpdateTickRegistration is true)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileMovementComponent, "StopSimulating", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(ProjectileMovementComponent_eventStopSimulating_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister()
	{
		return UProjectileMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UProjectileMovementComponent_LimitVelocity, "LimitVelocity" }, // 1078057248
				{ &Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature, "OnProjectileBounceDelegate__DelegateSignature" }, // 882388340
				{ &Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature, "OnProjectileStopDelegate__DelegateSignature" }, // 2395017550
				{ &Z_Construct_UFunction_UProjectileMovementComponent_SetVelocityInLocalSpace, "SetVelocityInLocalSpace" }, // 2905436763
				{ &Z_Construct_UFunction_UProjectileMovementComponent_StopSimulating, "StopSimulating" }, // 3897251968
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "IncludePath", "GameFramework/ProjectileMovementComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "ProjectileMovementComponent updates the position of another component during its tick.\n\nBehavior such as bouncing after impacts and homing toward a target are supported.\n\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nIf the updated component is simulating physics, only the initial launch parameters (when initial velocity is non-zero)\nwill affect the projectile, and the physics sim will take over from there.\n\n@see UMovementComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationIterations_MetaData[] = {
				{ "Category", "ProjectileSimulation" },
				{ "ClampMax", "25" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Max number of iterations used for each discrete simulation step.\nIncreasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationTimeStep, bForceSubStepping" },
				{ "UIMax", "25" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimulationIterations = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSimulationIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSimulationIterations), METADATA_PARAMS(NewProp_MaxSimulationIterations_MetaData, ARRAY_COUNT(NewProp_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStep_MetaData[] = {
				{ "Category", "ProjectileSimulation" },
				{ "ClampMax", "0.50" },
				{ "ClampMin", "0.0166" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Max time delta for each discrete simulation step.\nLowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationIterations, bForceSubStepping" },
				{ "UIMax", "0.50" },
				{ "UIMin", "0.0166" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStep = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSimulationTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSimulationTimeStep), METADATA_PARAMS(NewProp_MaxSimulationTimeStep_MetaData, ARRAY_COUNT(NewProp_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomingTargetComponent_MetaData[] = {
				{ "Category", "Homing" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "The current target we are homing towards. Can only be set at runtime (when projectile is spawned or updating).\n@see bIsHomingProjectile" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HomingTargetComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HomingTargetComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00140000000a080d, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, HomingTargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_HomingTargetComponent_MetaData, ARRAY_COUNT(NewProp_HomingTargetComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomingAccelerationMagnitude_MetaData[] = {
				{ "Category", "Homing" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "The magnitude of our acceleration towards the homing target. Overall velocity magnitude will still be limited by MaxSpeed." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HomingAccelerationMagnitude = { UE4CodeGen_Private::EPropertyClass::Float, "HomingAccelerationMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, HomingAccelerationMagnitude), METADATA_PARAMS(NewProp_HomingAccelerationMagnitude_MetaData, ARRAY_COUNT(NewProp_HomingAccelerationMagnitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProjectileStop_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Called when projectile has come to a stop (velocity is below simulation threshold, bounces are disabled, or it is forcibly stopped)." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileStop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnProjectileStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, OnProjectileStop), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnProjectileStop_MetaData, ARRAY_COUNT(NewProp_OnProjectileStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProjectileBounce_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Called when projectile impacts something and bounces are enabled." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileBounce = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnProjectileBounce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, OnProjectileBounce), Z_Construct_UDelegateFunction_UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnProjectileBounce_MetaData, ARRAY_COUNT(NewProp_OnProjectileBounce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceVelocityStopSimulatingThreshold_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If velocity is below this threshold after a bounce, stops simulating and triggers the OnProjectileStop event.\nIgnored if bShouldBounce is false, in which case the projectile stops simulating on the first impact.\n@see StopSimulating(), OnProjectileStop" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceVelocityStopSimulatingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BounceVelocityStopSimulatingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, BounceVelocityStopSimulatingThreshold), METADATA_PARAMS(NewProp_BounceVelocityStopSimulatingThreshold_MetaData, ARRAY_COUNT(NewProp_BounceVelocityStopSimulatingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Coefficient of friction, affecting the resistance to sliding along a surface.\nNormal range is [0,1] : 0.0 = no friction, 1.0+ = very high friction.\nAlso affects the percentage of velocity maintained after the bounce in the direction tangent to the normal of impact.\nIgnored if bShouldBounce is false.\n@see bBounceAngleAffectsFriction" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction = { UE4CodeGen_Private::EPropertyClass::Float, "Friction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Friction), METADATA_PARAMS(NewProp_Friction_MetaData, ARRAY_COUNT(NewProp_Friction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounciness_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Percentage of velocity maintained after the bounce in the direction of the normal of impact (coefficient of restitution).\n1.0 = no velocity lost, 0.0 = no bounce. Ignored if bShouldBounce is false." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bounciness = { UE4CodeGen_Private::EPropertyClass::Float, "Bounciness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Bounciness), METADATA_PARAMS(NewProp_Bounciness_MetaData, ARRAY_COUNT(NewProp_Bounciness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buoyancy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Buoyancy of UpdatedComponent in fluid. 0.0=sinks as fast as in air, 1.0=neutral buoyancy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Buoyancy = { UE4CodeGen_Private::EPropertyClass::Float, "Buoyancy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, Buoyancy), METADATA_PARAMS(NewProp_Buoyancy_MetaData, ARRAY_COUNT(NewProp_Buoyancy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravityScale_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Custom gravity scale for this projectile. Set to 0 for no gravity." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravityScale = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectileGravityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, ProjectileGravityScale), METADATA_PARAMS(NewProp_ProjectileGravityScale_MetaData, ARRAY_COUNT(NewProp_ProjectileGravityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHitNormal_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Saved HitResult Normal from previous simulation step that resulted in an impact. If PreviousHitTime is 1.0, then the hit was not in the last step." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousHitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousHitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020815, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, PreviousHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousHitNormal_MetaData, ARRAY_COUNT(NewProp_PreviousHitNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHitTime_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Saved HitResult Time (0 to 1) from previous simulation step. Equal to 1.0 when there was no impact." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHitTime = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousHitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020815, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, PreviousHitTime), METADATA_PARAMS(NewProp_PreviousHitTime_MetaData, ARRAY_COUNT(NewProp_PreviousHitTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSliding_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, projectile is sliding / rolling along a surface." },
			};
#endif
			auto NewProp_bIsSliding_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bIsSliding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSliding = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSliding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020815, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSliding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSliding_MetaData, ARRAY_COUNT(NewProp_bIsSliding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBounceAngleAffectsFriction_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Controls the effects of friction on velocity parallel to the impact surface when bouncing.\nIf true, friction will be modified based on the angle of impact, making friction higher for perpendicular impacts and lower for glancing impacts.\nIf false, a bounce will retain a proportion of tangential velocity equal to (1.0 - Friction), acting as a \"horizontal restitution\"." },
			};
#endif
			auto NewProp_bBounceAngleAffectsFriction_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bBounceAngleAffectsFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBounceAngleAffectsFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bBounceAngleAffectsFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBounceAngleAffectsFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBounceAngleAffectsFriction_MetaData, ARRAY_COUNT(NewProp_bBounceAngleAffectsFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHomingProjectile_MetaData[] = {
				{ "Category", "Homing" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, we will accelerate toward our homing target. HomingTargetComponent must be set after the projectile is spawned.\n@see HomingTargetComponent, HomingAccelerationMagnitude" },
			};
#endif
			auto NewProp_bIsHomingProjectile_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bIsHomingProjectile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHomingProjectile = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHomingProjectile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHomingProjectile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsHomingProjectile_MetaData, ARRAY_COUNT(NewProp_bIsHomingProjectile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[] = {
				{ "Category", "ProjectileSimulation" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\nObjects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\nSub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n@see MaxSimulationTimeStep, MaxSimulationIterations" },
			};
#endif
			auto NewProp_bForceSubStepping_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bForceSubStepping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceSubStepping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceSubStepping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceSubStepping_MetaData, ARRAY_COUNT(NewProp_bForceSubStepping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialVelocityInLocalSpace_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, the initial Velocity is interpreted as being in local space upon startup.\n@see SetVelocityInLocalSpace()" },
			};
#endif
			auto NewProp_bInitialVelocityInLocalSpace_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bInitialVelocityInLocalSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialVelocityInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialVelocityInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitialVelocityInLocalSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInitialVelocityInLocalSpace_MetaData, ARRAY_COUNT(NewProp_bInitialVelocityInLocalSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBounce_MetaData[] = {
				{ "Category", "ProjectileBounces" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, simple bounces will be simulated. Set this to false to stop simulating on contact." },
			};
#endif
			auto NewProp_bShouldBounce_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bShouldBounce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBounce = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBounce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBounce_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBounce_MetaData, ARRAY_COUNT(NewProp_bShouldBounce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationFollowsVelocity_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "If true, this projectile will have its rotation updated each frame to match the direction of its velocity." },
			};
#endif
			auto NewProp_bRotationFollowsVelocity_SetBit = [](void* Obj){ ((UProjectileMovementComponent*)Obj)->bRotationFollowsVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationFollowsVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotationFollowsVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UProjectileMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotationFollowsVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotationFollowsVelocity_MetaData, ARRAY_COUNT(NewProp_bRotationFollowsVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Limit on speed of projectile (0 means no limit)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, MaxSpeed), METADATA_PARAMS(NewProp_MaxSpeed_MetaData, ARRAY_COUNT(NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Classes/GameFramework/ProjectileMovementComponent.h" },
				{ "ToolTip", "Initial speed of projectile. If greater than zero, this will override the initial Velocity value and instead treat Velocity as a direction." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InitialSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProjectileMovementComponent, InitialSpeed), METADATA_PARAMS(NewProp_InitialSpeed_MetaData, ARRAY_COUNT(NewProp_InitialSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimulationIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimulationTimeStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HomingTargetComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HomingAccelerationMagnitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnProjectileStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnProjectileBounce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BounceVelocityStopSimulatingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Friction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bounciness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Buoyancy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileGravityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousHitNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousHitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSliding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBounceAngleAffectsFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHomingProjectile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceSubStepping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitialVelocityInLocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBounce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotationFollowsVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProjectileMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProjectileMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UProjectileMovementComponent, 111301431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectileMovementComponent(Z_Construct_UClass_UProjectileMovementComponent, &UProjectileMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
