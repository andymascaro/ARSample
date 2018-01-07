// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PhysicsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APhysicsVolume::StaticRegisterNativesAPhysicsVolume()
	{
	}
	UClass* Z_Construct_UClass_APhysicsVolume_NoRegister()
	{
		return APhysicsVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_APhysicsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "GameFramework/PhysicsVolume.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "PhysicsVolume: A bounding volume which affects actor physics.\nEach AActor is affected at any time by one PhysicsVolume." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPhysicsOnContact_MetaData[] = {
				{ "Category", "Volume" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ToolTip", "By default, the origin of an AActor must be inside a PhysicsVolume for it to affect the actor. However if this flag is true, the other actor only has to touch the volume to be affected by it." },
			};
#endif
			auto NewProp_bPhysicsOnContact_SetBit = [](void* Obj){ ((APhysicsVolume*)Obj)->bPhysicsOnContact = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPhysicsOnContact = { UE4CodeGen_Private::EPropertyClass::Bool, "bPhysicsOnContact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APhysicsVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPhysicsOnContact_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPhysicsOnContact_MetaData, ARRAY_COUNT(NewProp_bPhysicsOnContact_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaterVolume_MetaData[] = {
				{ "Category", "CharacterMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ToolTip", "True if this volume contains a fluid like water" },
			};
#endif
			auto NewProp_bWaterVolume_SetBit = [](void* Obj){ ((APhysicsVolume*)Obj)->bWaterVolume = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaterVolume = { UE4CodeGen_Private::EPropertyClass::Bool, "bWaterVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APhysicsVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWaterVolume_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWaterVolume_MetaData, ARRAY_COUNT(NewProp_bWaterVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidFriction_MetaData[] = {
				{ "Category", "CharacterMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ToolTip", "This property controls the amount of friction applied by the volume as pawns using CharacterMovement move through it. The higher this value, the harder it will feel to move through" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidFriction = { UE4CodeGen_Private::EPropertyClass::Float, "FluidFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsVolume, FluidFriction), METADATA_PARAMS(NewProp_FluidFriction_MetaData, ARRAY_COUNT(NewProp_FluidFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "CharacterMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ToolTip", "Determines which PhysicsVolume takes precedence if they overlap (higher number = higher priority)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Int, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsVolume, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalVelocity_MetaData[] = {
				{ "Category", "CharacterMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
				{ "ToolTip", "Terminal velocity of pawns using CharacterMovement when falling." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerminalVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "TerminalVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsVolume, TerminalVelocity), METADATA_PARAMS(NewProp_TerminalVelocity_MetaData, ARRAY_COUNT(NewProp_TerminalVelocity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPhysicsOnContact,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWaterVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TerminalVelocity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhysicsVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhysicsVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APhysicsVolume, 3699696328);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsVolume(Z_Construct_UClass_APhysicsVolume, &APhysicsVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APhysicsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
