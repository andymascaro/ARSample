// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Emitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitter() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_Activate();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_Deactivate();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_IsActive();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_OnParticleSystemFinished();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetActorParameter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetColorParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetFloatParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetMaterialParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetVectorParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_ToggleActive();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature()
	{
		struct _Script_Engine_eventParticleCollisionSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
			FVector Normal;
			FName BoneName;
			UPhysicalMaterial* PhysMat;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMat = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleTime = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Collision Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location of the collision.\n@param Velocity - Velocity of the particle at the point of collision.\n@param Direction - Direction of the particle at the point of collision.\n@param Normal - Normal to the surface with which collision occurred.\n@param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\n@param PhysMat - Physical Material for this collision." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleCollisionSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleCollisionSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature()
	{
		struct _Script_Engine_eventParticleDeathSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleTime = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Death Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location the particle was at when it died.\n@param Velocity - Velocity of the particle when it died.\n@param Direction - Direction of the particle when it died." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleDeathSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleDeathSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature()
	{
		struct _Script_Engine_eventParticleBurstSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleCount;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleCount = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, ParticleCount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "Fires when a particle system bursts\n@param EventName - Custom event name for the Burst Event\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleCount - The number of particles spawned in the burst." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleBurstSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleBurstSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature()
	{
		struct _Script_Engine_eventParticleSpawnSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			FVector Location;
			FVector Velocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "Fires when a particle is spawned\n@param EventName - Custom event name for the Spawn Event.\n@param EmitterTime - The emitter time when the event occured.\n@param Location - Location at which the particle was spawned.\n@param Velocity - Initial velocity of the spawned particle." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleSpawnSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleSpawnSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void AEmitter::StaticRegisterNativesAEmitter()
	{
		UClass* Class = AEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", (Native)&AEmitter::execActivate },
			{ "Deactivate", (Native)&AEmitter::execDeactivate },
			{ "IsActive", (Native)&AEmitter::execIsActive },
			{ "OnParticleSystemFinished", (Native)&AEmitter::execOnParticleSystemFinished },
			{ "OnRep_bCurrentlyActive", (Native)&AEmitter::execOnRep_bCurrentlyActive },
			{ "SetActorParameter", (Native)&AEmitter::execSetActorParameter },
			{ "SetColorParameter", (Native)&AEmitter::execSetColorParameter },
			{ "SetFloatParameter", (Native)&AEmitter::execSetFloatParameter },
			{ "SetMaterialParameter", (Native)&AEmitter::execSetMaterialParameter },
			{ "SetTemplate", (Native)&AEmitter::execSetTemplate },
			{ "SetVectorParameter", (Native)&AEmitter::execSetVectorParameter },
			{ "ToggleActive", (Native)&AEmitter::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AEmitter_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "Deactivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_IsActive()
	{
		struct Emitter_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Emitter_eventIsActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Emitter_eventIsActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Emitter_eventIsActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_OnParticleSystemFinished()
	{
		struct Emitter_eventOnParticleSystemFinished_Parms
		{
			UParticleSystemComponent* FinishedComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FinishedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Emitter_eventOnParticleSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_FinishedComponent_MetaData, ARRAY_COUNT(NewProp_FinishedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FinishedComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "OnParticleSystemFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(Emitter_eventOnParticleSystemFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "OnRep_bCurrentlyActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetActorParameter()
	{
		struct Emitter_eventSetActorParameter_Parms
		{
			FName ParameterName;
			AActor* Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles|Parameters" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetActorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetActorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetColorParameter()
	{
		struct Emitter_eventSetColorParameter_Parms
		{
			FName ParameterName;
			FLinearColor Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles|Parameters" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetColorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Emitter_eventSetColorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetFloatParameter()
	{
		struct Emitter_eventSetFloatParameter_Parms
		{
			FName ParameterName;
			float Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles|Parameters" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetFloatParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetFloatParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetMaterialParameter()
	{
		struct Emitter_eventSetMaterialParameter_Parms
		{
			FName ParameterName;
			UMaterialInterface* Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles|Parameters" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetMaterialParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetMaterialParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetTemplate()
	{
		struct Emitter_eventSetTemplate_Parms
		{
			UParticleSystem* NewTemplate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "NewTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Emitter_eventSetTemplate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_SetVectorParameter()
	{
		struct Emitter_eventSetVectorParameter_Parms
		{
			FName ParameterName;
			FVector Param;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles|Parameters" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetVectorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Emitter_eventSetVectorParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmitter_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Particles" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "ToggleActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEmitter_NoRegister()
	{
		return AEmitter::StaticClass();
	}
	UClass* Z_Construct_UClass_AEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AEmitter_Activate, "Activate" }, // 2117625447
				{ &Z_Construct_UFunction_AEmitter_Deactivate, "Deactivate" }, // 2118878248
				{ &Z_Construct_UFunction_AEmitter_IsActive, "IsActive" }, // 4079772755
				{ &Z_Construct_UFunction_AEmitter_OnParticleSystemFinished, "OnParticleSystemFinished" }, // 4121030468
				{ &Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive, "OnRep_bCurrentlyActive" }, // 2383906708
				{ &Z_Construct_UFunction_AEmitter_SetActorParameter, "SetActorParameter" }, // 2593977956
				{ &Z_Construct_UFunction_AEmitter_SetColorParameter, "SetColorParameter" }, // 454713457
				{ &Z_Construct_UFunction_AEmitter_SetFloatParameter, "SetFloatParameter" }, // 24149472
				{ &Z_Construct_UFunction_AEmitter_SetMaterialParameter, "SetMaterialParameter" }, // 1880971033
				{ &Z_Construct_UFunction_AEmitter_SetTemplate, "SetTemplate" }, // 866109550
				{ &Z_Construct_UFunction_AEmitter_SetVectorParameter, "SetVectorParameter" }, // 582567481
				{ &Z_Construct_UFunction_AEmitter_ToggleActive, "ToggleActive" }, // 3542914922
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Particles/Emitter.h" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AEmitter, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AEmitter, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleCollide_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleCollide = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleCollide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleCollide_MetaData, ARRAY_COUNT(NewProp_OnParticleCollide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleDeath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleDeath = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleDeath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleDeath_MetaData, ARRAY_COUNT(NewProp_OnParticleDeath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleBurst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleBurst = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleBurst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleBurst_MetaData, ARRAY_COUNT(NewProp_OnParticleBurst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleSpawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleSpawn = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnParticleSpawn_MetaData, ARRAY_COUNT(NewProp_OnParticleSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyActive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
				{ "ToolTip", "used to update status of toggleable level placed emitters on clients" },
			};
#endif
			auto NewProp_bCurrentlyActive_SetBit = [](void* Obj){ ((AEmitter*)Obj)->bCurrentlyActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurrentlyActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_bCurrentlyActive", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurrentlyActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCurrentlyActive_MetaData, ARRAY_COUNT(NewProp_bCurrentlyActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostUpdateTickGroup_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			auto NewProp_bPostUpdateTickGroup_SetBit = [](void* Obj){ ((AEmitter*)Obj)->bPostUpdateTickGroup = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostUpdateTickGroup = { UE4CodeGen_Private::EPropertyClass::Bool, "bPostUpdateTickGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPostUpdateTickGroup_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPostUpdateTickGroup_MetaData, ARRAY_COUNT(NewProp_bPostUpdateTickGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			auto NewProp_bDestroyOnSystemFinish_SetBit = [](void* Obj){ ((AEmitter*)Obj)->bDestroyOnSystemFinish = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyOnSystemFinish", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDestroyOnSystemFinish_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDestroyOnSystemFinish_MetaData, ARRAY_COUNT(NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Emitter" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Particles|Beam,Particles|Parameters,Particles,Effects|Components|ParticleSystem,Rendering,Activation,Components|Activation" },
				{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AEmitter, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(NewProp_ParticleSystemComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleCollide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleDeath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleBurst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnParticleSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurrentlyActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPostUpdateTickGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDestroyOnSystemFinish,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleSystemComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEmitter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEmitter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AEmitter, 2925211958);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmitter(Z_Construct_UClass_AEmitter, &AEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("AEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
