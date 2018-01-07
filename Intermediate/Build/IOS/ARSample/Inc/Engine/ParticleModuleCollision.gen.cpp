// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Collision/ParticleModuleCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleCollision::StaticRegisterNativesUParticleModuleCollision()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister()
	{
		return UParticleModuleCollision::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleCollisionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Actor Collision" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Collision/ParticleModuleCollision.h" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionDistance_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "Max distance at which particle collision will occur." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCollisionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisionDistance), METADATA_PARAMS(NewProp_MaxCollisionDistance_MetaData, ARRAY_COUNT(NewProp_MaxCollisionDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, then the source actor is ignored in collision checks.\nDefaults to true." },
			};
#endif
			auto NewProp_bIgnoreSourceActor_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bIgnoreSourceActor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSourceActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreSourceActor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreSourceActor_MetaData, ARRAY_COUNT(NewProp_bIgnoreSourceActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollideOnlyIfVisible_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, Particle collision only if particle system is currently being rendered." },
			};
#endif
			auto NewProp_bCollideOnlyIfVisible_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bCollideOnlyIfVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollideOnlyIfVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollideOnlyIfVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCollideOnlyIfVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCollideOnlyIfVisible_MetaData, ARRAY_COUNT(NewProp_bCollideOnlyIfVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropDetail_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, when the World->bDropDetail flag is set, the module will be ignored." },
			};
#endif
			auto NewProp_bDropDetail_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bDropDetail = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropDetail = { UE4CodeGen_Private::EPropertyClass::Bool, "bDropDetail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDropDetail_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDropDetail_MetaData, ARRAY_COUNT(NewProp_bDropDetail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayAmount_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "How long to delay before checking a particle for collisions.\nValue is retrieved using the EmitterTime.\nDuring update, the particle flag IgnoreCollisions will be\nset until the particle RelativeTime has surpassed the\nDelayAmount." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayAmount = { UE4CodeGen_Private::EPropertyClass::Struct, "DelayAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, DelayAmount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_DelayAmount_MetaData, ARRAY_COUNT(NewProp_DelayAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalFudgeFactor_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "The fudge factor to use to determine vertical.\nTrue vertical will have a Hit.Normal.Z == 1.0\nThis will allow for Z components in the range of\n[1.0-VerticalFudgeFactor..1.0]\nto count as vertical collisions." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalFudgeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "VerticalFudgeFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, VerticalFudgeFactor), METADATA_PARAMS(NewProp_VerticalFudgeFactor_MetaData, ARRAY_COUNT(NewProp_VerticalFudgeFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyVerticalNormalsDecrementCount_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, then collisions that do not have a vertical hit\nnormal will still react, but UsedMaxCollisions count will\nnot be decremented. (ie., They don't 'count' as collisions)\nUseful for having particles come to rest on floors." },
			};
#endif
			auto NewProp_bOnlyVerticalNormalsDecrementCount_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bOnlyVerticalNormalsDecrementCount = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyVerticalNormalsDecrementCount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyVerticalNormalsDecrementCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyVerticalNormalsDecrementCount_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyVerticalNormalsDecrementCount_MetaData, ARRAY_COUNT(NewProp_bOnlyVerticalNormalsDecrementCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPawnsDoNotDecrementCount_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, then collisions with Pawns will still react, but\nthe UsedMaxCollisions count will not be decremented.\n(ie., They don't 'count' as collisions)\nNOTE: Having this on prevents the code from running in parallel." },
			};
#endif
			auto NewProp_bPawnsDoNotDecrementCount_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bPawnsDoNotDecrementCount = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPawnsDoNotDecrementCount = { UE4CodeGen_Private::EPropertyClass::Bool, "bPawnsDoNotDecrementCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPawnsDoNotDecrementCount_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPawnsDoNotDecrementCount_MetaData, ARRAY_COUNT(NewProp_bPawnsDoNotDecrementCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirScalar_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "The directional scalar value - used to scale the bounds to\n'assist' in avoiding inter-penetration or large gaps." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirScalar = { UE4CodeGen_Private::EPropertyClass::Float, "DirScalar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, DirScalar), METADATA_PARAMS(NewProp_DirScalar_MetaData, ARRAY_COUNT(NewProp_DirScalar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleMass_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "The mass of the particle - for use when bApplyPhysics is true.\nValue is obtained using the EmitterTime at particle spawn." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleMass = { UE4CodeGen_Private::EPropertyClass::Struct, "ParticleMass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, ParticleMass), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_ParticleMass_MetaData, ARRAY_COUNT(NewProp_ParticleMass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTriggerVolumes_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "Any trigger volumes that are hit will be ignored. NOTE: This can be turned off if the TrigerVolume physics object type is not in the CollisionTypes array.\nTurning this off is strongly recommended as having it on prevents the code from running off the game thread." },
			};
#endif
			auto NewProp_bIgnoreTriggerVolumes_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bIgnoreTriggerVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTriggerVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTriggerVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreTriggerVolumes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreTriggerVolumes_MetaData, ARRAY_COUNT(NewProp_bIgnoreTriggerVolumes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyPhysics_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "If true, physic will be applied between a particle and the\nobject it collides with.\nThis is one-way - particle --> object. The particle does\nnot have physics applied to it - it just generates an\nimpulse applied to the object it collides with.\nNOTE: having this on prevents the code from running off the game thread." },
			};
#endif
			auto NewProp_bApplyPhysics_SetBit = [](void* Obj){ ((UParticleModuleCollision*)Obj)->bApplyPhysics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyPhysics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyPhysics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyPhysics_MetaData, ARRAY_COUNT(NewProp_bApplyPhysics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTypes_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "Which ObjectTypes to collide with" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionTypes = { UE4CodeGen_Private::EPropertyClass::Array, "CollisionTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, CollisionTypes), METADATA_PARAMS(NewProp_CollisionTypes_MetaData, ARRAY_COUNT(NewProp_CollisionTypes_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCompletionOption_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "What to do once a particles MaxCollisions is reached.\nOne of the following:\nEPCC_Kill\n        Kill the particle when MaxCollisions is reached\nEPCC_Freeze\n        Freeze in place, NO MORE UPDATES\nEPCC_HaltCollisions,\n        Stop collision checks, keep updating everything\nEPCC_FreezeTranslation,\n        Stop translations, keep updating everything else\nEPCC_FreezeRotation,\n        Stop rotations, keep updating everything else\nEPCC_FreezeMovement\n        Stop all movement, keep updating" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionCompletionOption = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionCompletionOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, CollisionCompletionOption), Z_Construct_UEnum_Engine_EParticleCollisionComplete, METADATA_PARAMS(NewProp_CollisionCompletionOption_MetaData, ARRAY_COUNT(NewProp_CollisionCompletionOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisions_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "The maximum number of collisions a particle can have.\nValue is obtained using the EmitterTime at particle spawn." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxCollisions = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxCollisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisions), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_MaxCollisions_MetaData, ARRAY_COUNT(NewProp_MaxCollisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingFactorRotation_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "How much to `slow' the rotation of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DampingFactorRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "DampingFactorRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, DampingFactorRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_DampingFactorRotation_MetaData, ARRAY_COUNT(NewProp_DampingFactorRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
				{ "ToolTip", "How much to `slow' the velocity of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DampingFactor = { UE4CodeGen_Private::EPropertyClass::Struct, "DampingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCollision, DampingFactor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_DampingFactor_MetaData, ARRAY_COUNT(NewProp_DampingFactor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCollisionDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreSourceActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCollideOnlyIfVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDropDetail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalFudgeFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyVerticalNormalsDecrementCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPawnsDoNotDecrementCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirScalar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleMass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreTriggerVolumes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyPhysics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionCompletionOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCollisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampingFactorRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampingFactor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleCollision>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleCollision::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleCollision, 1743390617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCollision(Z_Construct_UClass_UParticleModuleCollision, &UParticleModuleCollision::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
