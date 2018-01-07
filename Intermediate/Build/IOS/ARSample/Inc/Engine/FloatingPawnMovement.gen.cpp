// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/FloatingPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UFloatingPawnMovement::StaticRegisterNativesUFloatingPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister()
	{
		return UFloatingPawnMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UFloatingPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "IncludePath", "GameFramework/FloatingPawnMovement.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "FloatingPawnMovement is a movement component that provides simple movement for any Pawn class.\nLimits on speed and acceleration are provided, while gravity is not implemented.\n\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nDuring swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPositionCorrected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "Set to true when a position correction is applied. Used to avoid recalculating velocity when this occurs." },
			};
#endif
			auto NewProp_bPositionCorrected_SetBit = [](void* Obj){ ((UFloatingPawnMovement*)Obj)->bPositionCorrected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionCorrected = { UE4CodeGen_Private::EPropertyClass::Bool, "bPositionCorrected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFloatingPawnMovement), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPositionCorrected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPositionCorrected_MetaData, ARRAY_COUNT(NewProp_bPositionCorrected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
				{ "Category", "FloatingPawnMovement" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "Setting affecting extra force applied when changing direction, making turns have less drift and become more responsive.\nVelocity magnitude is not allowed to increase, that only happens due to normal acceleration. It may decrease with large direction changes.\nLarger values apply extra force to reach the target direction more quickly, while a zero value disables any extra turn force." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningBoost = { UE4CodeGen_Private::EPropertyClass::Float, "TurningBoost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, TurningBoost), METADATA_PARAMS(NewProp_TurningBoost_MetaData, ARRAY_COUNT(NewProp_TurningBoost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
				{ "Category", "FloatingPawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "Deceleration applied when there is no input (rate of change of velocity)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Deceleration = { UE4CodeGen_Private::EPropertyClass::Float, "Deceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, Deceleration), METADATA_PARAMS(NewProp_Deceleration_MetaData, ARRAY_COUNT(NewProp_Deceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "FloatingPawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "Acceleration applied by input (rate of change of velocity)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Float, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, Acceleration), METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
				{ "Category", "FloatingPawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
				{ "ToolTip", "Maximum velocity magnitude allowed for the controlled Pawn." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, MaxSpeed), METADATA_PARAMS(NewProp_MaxSpeed_MetaData, ARRAY_COUNT(NewProp_MaxSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPositionCorrected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurningBoost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Deceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFloatingPawnMovement>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFloatingPawnMovement::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatingPawnMovement, 1772627195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatingPawnMovement(Z_Construct_UClass_UFloatingPawnMovement, &UFloatingPawnMovement::StaticClass, TEXT("/Script/Engine"), TEXT("UFloatingPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
