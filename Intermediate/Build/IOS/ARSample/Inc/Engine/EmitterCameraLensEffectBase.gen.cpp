// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/EmitterCameraLensEffectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase()
	{
	}
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister()
	{
		return AEmitterCameraLensEffectBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AEmitter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
				{ "IncludePath", "Particles/EmitterCameraLensEffectBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistFromCamera_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "DEPRECATED(4.11)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistFromCamera = { UE4CodeGen_Private::EPropertyClass::Float, "DistFromCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, DistFromCamera_DEPRECATED), METADATA_PARAMS(NewProp_DistFromCamera_MetaData, ARRAY_COUNT(NewProp_DistFromCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmittersToTreatAsSame_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "If an emitter class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmittersToTreatAsSame = { UE4CodeGen_Private::EPropertyClass::Array, "EmittersToTreatAsSame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, EmittersToTreatAsSame), METADATA_PARAMS(NewProp_EmittersToTreatAsSame_MetaData, ARRAY_COUNT(NewProp_EmittersToTreatAsSame_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_EmittersToTreatAsSame_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "EmittersToTreatAsSame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetWhenRetriggered_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true" },
			};
#endif
			auto NewProp_bResetWhenRetriggered_SetBit = [](void* Obj){ ((AEmitterCameraLensEffectBase*)Obj)->bResetWhenRetriggered = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetWhenRetriggered = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetWhenRetriggered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitterCameraLensEffectBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetWhenRetriggered_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResetWhenRetriggered_MetaData, ARRAY_COUNT(NewProp_bResetWhenRetriggered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "true if multiple instances of this emitter can exist simultaneously, false otherwise." },
			};
#endif
			auto NewProp_bAllowMultipleInstances_SetBit = [](void* Obj){ ((AEmitterCameraLensEffectBase*)Obj)->bAllowMultipleInstances = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMultipleInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitterCameraLensEffectBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowMultipleInstances_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowMultipleInstances_MetaData, ARRAY_COUNT(NewProp_bAllowMultipleInstances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFOV = { UE4CodeGen_Private::EPropertyClass::Float, "BaseFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseFOV), METADATA_PARAMS(NewProp_BaseFOV_MetaData, ARRAY_COUNT(NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "Effect-to-camera transform to allow arbitrary placement of the particle system .\nNote the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_RelativeTransform_MetaData, ARRAY_COUNT(NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCamera_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "Camera this emitter is attached to, will be notified when emitter is destroyed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseCamera = { UE4CodeGen_Private::EPropertyClass::Object, "BaseCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(NewProp_BaseCamera_MetaData, ARRAY_COUNT(NewProp_BaseCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffectNonExtremeContent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "The effect to use for non extreme content" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_CameraEffectNonExtremeContent = { UE4CodeGen_Private::EPropertyClass::Object, "PS_CameraEffectNonExtremeContent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffectNonExtremeContent_DEPRECATED), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PS_CameraEffectNonExtremeContent_MetaData, ARRAY_COUNT(NewProp_PS_CameraEffectNonExtremeContent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffect_MetaData[] = {
				{ "Category", "EmitterCameraLensEffectBase" },
				{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
				{ "ToolTip", "Particle System to use" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_CameraEffect = { UE4CodeGen_Private::EPropertyClass::Object, "PS_CameraEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PS_CameraEffect_MetaData, ARRAY_COUNT(NewProp_PS_CameraEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistFromCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmittersToTreatAsSame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmittersToTreatAsSame_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetWhenRetriggered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowMultipleInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS_CameraEffectNonExtremeContent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS_CameraEffect,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEmitterCameraLensEffectBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEmitterCameraLensEffectBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
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
	IMPLEMENT_CLASS(AEmitterCameraLensEffectBase, 3249078842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmitterCameraLensEffectBase(Z_Construct_UClass_AEmitterCameraLensEffectBase, &AEmitterCameraLensEffectBase::StaticClass, TEXT("/Script/Engine"), TEXT("AEmitterCameraLensEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitterCameraLensEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
