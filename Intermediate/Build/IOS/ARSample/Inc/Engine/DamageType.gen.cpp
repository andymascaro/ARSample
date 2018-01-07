// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/DamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDamageType::StaticRegisterNativesUDamageType()
	{
	}
	UClass* Z_Construct_UClass_UDamageType_NoRegister()
	{
		return UDamageType::StaticClass();
	}
	UClass* Z_Construct_UClass_UDamageType()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameFramework/DamageType.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "A DamageType is intended to define and describe a particular form of damage and to provide an avenue\nfor customizing responses to damage from various sources.\n\nFor example, a game could make a DamageType_Fire set it up to ignite the damaged actor.\n\nDamageTypes are never instanced and should be treated as immutable data holders with static code\nfunctionality.  They should never be stateful." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[] = {
				{ "Category", "DamageType" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "DamageFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDamageType, DamageFalloff), METADATA_PARAMS(NewProp_DamageFalloff_MetaData, ARRAY_COUNT(NewProp_DamageFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageSpreadScale_MetaData[] = {
				{ "Category", "Destruction" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "How much the damage spreads on a destructible mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageSpreadScale = { UE4CodeGen_Private::EPropertyClass::Float, "DestructibleDamageSpreadScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDamageType, DestructibleDamageSpreadScale), METADATA_PARAMS(NewProp_DestructibleDamageSpreadScale_MetaData, ARRAY_COUNT(NewProp_DestructibleDamageSpreadScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleImpulse_MetaData[] = {
				{ "Category", "Destruction" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "How large the impulse should be applied to destructible meshes" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "DestructibleImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDamageType, DestructibleImpulse), METADATA_PARAMS(NewProp_DestructibleImpulse_MetaData, ARRAY_COUNT(NewProp_DestructibleImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageImpulse_MetaData[] = {
				{ "Category", "RigidBody" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "The magnitude of impulse to apply to the Actors damaged by this type." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "DamageImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDamageType, DamageImpulse), METADATA_PARAMS(NewProp_DamageImpulse_MetaData, ARRAY_COUNT(NewProp_DamageImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRadialDamageVelChange_MetaData[] = {
				{ "Category", "RigidBody" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "When applying radial impulses, whether to treat as impulse or velocity change." },
			};
#endif
			auto NewProp_bRadialDamageVelChange_SetBit = [](void* Obj){ ((UDamageType*)Obj)->bRadialDamageVelChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRadialDamageVelChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bRadialDamageVelChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDamageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRadialDamageVelChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRadialDamageVelChange_MetaData, ARRAY_COUNT(NewProp_bRadialDamageVelChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleMomentumByMass_MetaData[] = {
				{ "Category", "DamageType" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "True to scale imparted momentum by the receiving pawn's mass for pawns using character movement" },
			};
#endif
			auto NewProp_bScaleMomentumByMass_SetBit = [](void* Obj){ ((UDamageType*)Obj)->bScaleMomentumByMass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleMomentumByMass = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleMomentumByMass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDamageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleMomentumByMass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleMomentumByMass_MetaData, ARRAY_COUNT(NewProp_bScaleMomentumByMass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCausedByWorld_MetaData[] = {
				{ "Category", "DamageType" },
				{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
				{ "ToolTip", "True if this damagetype is caused by the world (falling off level, into lava, etc)." },
			};
#endif
			auto NewProp_bCausedByWorld_SetBit = [](void* Obj){ ((UDamageType*)Obj)->bCausedByWorld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCausedByWorld = { UE4CodeGen_Private::EPropertyClass::Bool, "bCausedByWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDamageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCausedByWorld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCausedByWorld_MetaData, ARRAY_COUNT(NewProp_bCausedByWorld_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestructibleDamageSpreadScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestructibleImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRadialDamageVelChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleMomentumByMass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCausedByWorld,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDamageType>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDamageType::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00090080u,
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
	IMPLEMENT_CLASS(UDamageType, 155358205);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageType(Z_Construct_UClass_UDamageType, &UDamageType::StaticClass, TEXT("/Script/Engine"), TEXT("UDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
