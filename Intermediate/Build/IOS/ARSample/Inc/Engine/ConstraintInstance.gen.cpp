// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/ConstraintInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
// End Cross Module References
class UScriptStruct* FConstraintInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstance, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstance"), sizeof(FConstraintInstance), Get_Z_Construct_UScriptStruct_FConstraintInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintInstance(FConstraintInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintInstance")),new UScriptStruct::TCppStructOps<FConstraintInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintInstance"), sizeof(FConstraintInstance), Get_Z_Construct_UScriptStruct_FConstraintInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Container for a physics representation of an object." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstance>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveForceLimit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDriveForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularDriveForceLimit_DEPRECATED), METADATA_PARAMS(NewProp_AngularDriveForceLimit_MetaData, ARRAY_COUNT(NewProp_AngularDriveForceLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDamping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDamping = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDriveDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularDriveDamping_DEPRECATED), METADATA_PARAMS(NewProp_AngularDriveDamping_MetaData, ARRAY_COUNT(NewProp_AngularDriveDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveSpring_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Revolutions per second" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveSpring = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDriveSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularDriveSpring_DEPRECATED), METADATA_PARAMS(NewProp_AngularDriveSpring_MetaData, ARRAY_COUNT(NewProp_AngularDriveSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularVelocityTarget_MetaData, ARRAY_COUNT(NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularOrientationTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularOrientationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularOrientationTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularOrientationTarget_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_AngularOrientationTarget_MetaData, ARRAY_COUNT(NewProp_AngularOrientationTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularDriveMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularDriveMode_DEPRECATED), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(NewProp_AngularDriveMode_MetaData, ARRAY_COUNT(NewProp_AngularDriveMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularPositionTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularPositionTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularPositionTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_AngularPositionTarget_MetaData, ARRAY_COUNT(NewProp_AngularPositionTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bAngularVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bAngularVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bAngularVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bEnableTwistDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bEnableTwistDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTwistDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableTwistDrive_MetaData, ARRAY_COUNT(NewProp_bEnableTwistDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSwingDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bEnableSwingDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bEnableSwingDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSwingDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableSwingDrive_MetaData, ARRAY_COUNT(NewProp_bEnableSwingDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularOrientationDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bAngularOrientationDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bAngularOrientationDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularOrientationDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularOrientationDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularOrientationDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularOrientationDrive_MetaData, ARRAY_COUNT(NewProp_bAngularOrientationDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularSlerpDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bAngularSlerpDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bAngularSlerpDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularSlerpDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularSlerpDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularSlerpDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularSlerpDrive_MetaData, ARRAY_COUNT(NewProp_bAngularSlerpDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bTwistVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bTwistVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bTwistVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTwistVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTwistVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bTwistVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bTwistPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bTwistPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bTwistPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTwistPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTwistPositionDrive_MetaData, ARRAY_COUNT(NewProp_bTwistPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bSwingVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bSwingVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bSwingVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSwingVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSwingVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bSwingVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bSwingPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bSwingPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bSwingPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSwingPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSwingPositionDrive_MetaData, ARRAY_COUNT(NewProp_bSwingPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveForceLimit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDriveForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearDriveForceLimit_DEPRECATED), METADATA_PARAMS(NewProp_LinearDriveForceLimit_MetaData, ARRAY_COUNT(NewProp_LinearDriveForceLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDamping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDriveDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearDriveDamping_DEPRECATED), METADATA_PARAMS(NewProp_LinearDriveDamping_MetaData, ARRAY_COUNT(NewProp_LinearDriveDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveSpring_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveSpring = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDriveSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearDriveSpring_DEPRECATED), METADATA_PARAMS(NewProp_LinearDriveSpring_MetaData, ARRAY_COUNT(NewProp_LinearDriveSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocityTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearVelocityTarget_MetaData, ARRAY_COUNT(NewProp_LinearVelocityTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearPositionTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearPositionTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearPositionTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearPositionTarget_MetaData, ARRAY_COUNT(NewProp_LinearPositionTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bLinearVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearPositionDrive_MetaData, ARRAY_COUNT(NewProp_bLinearPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearZVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearZVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearZVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearZVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearZVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearZVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearZVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bLinearZVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearZPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearZPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearZPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearZPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearZPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearZPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearZPositionDrive_MetaData, ARRAY_COUNT(NewProp_bLinearZPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearYVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearYVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearYVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearYVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearYVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearYVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearYVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bLinearYVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearYPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearYPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearYPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearYPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearYPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearYPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearYPositionDrive_MetaData, ARRAY_COUNT(NewProp_bLinearYPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearXVelocityDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearXVelocityDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearXVelocityDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearXVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearXVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearXVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearXVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bLinearXVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearXPositionDrive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearXPositionDrive_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearXPositionDrive_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearXPositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearXPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearXPositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearXPositionDrive_MetaData, ARRAY_COUNT(NewProp_bLinearXPositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(NewProp_AngularBreakThreshold_MetaData, ARRAY_COUNT(NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bAngularBreakable_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bAngularBreakable_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularBreakable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularBreakable_MetaData, ARRAY_COUNT(NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(NewProp_TwistLimitDamping_MetaData, ARRAY_COUNT(NewProp_TwistLimitDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(NewProp_TwistLimitStiffness_MetaData, ARRAY_COUNT(NewProp_TwistLimitStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "SwingLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(NewProp_SwingLimitDamping_MetaData, ARRAY_COUNT(NewProp_SwingLimitDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SwingLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(NewProp_SwingLimitStiffness_MetaData, ARRAY_COUNT(NewProp_SwingLimitStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing2LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(NewProp_Swing2LimitAngle_MetaData, ARRAY_COUNT(NewProp_Swing2LimitAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(NewProp_TwistLimitAngle_MetaData, ARRAY_COUNT(NewProp_TwistLimitAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing1LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(NewProp_Swing1LimitAngle_MetaData, ARRAY_COUNT(NewProp_Swing1LimitAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bTwistLimitSoft_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bTwistLimitSoft_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bTwistLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTwistLimitSoft_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTwistLimitSoft_MetaData, ARRAY_COUNT(NewProp_bTwistLimitSoft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bSwingLimitSoft_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bSwingLimitSoft_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bSwingLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSwingLimitSoft_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSwingLimitSoft_MetaData, ARRAY_COUNT(NewProp_bSwingLimitSoft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularSwing2Motion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(NewProp_AngularSwing2Motion_MetaData, ARRAY_COUNT(NewProp_AngularSwing2Motion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularTwistMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(NewProp_AngularTwistMotion_MetaData, ARRAY_COUNT(NewProp_AngularTwistMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularSwing1Motion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(NewProp_AngularSwing1Motion_MetaData, ARRAY_COUNT(NewProp_AngularSwing1Motion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearBreakable_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearBreakable_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearBreakable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearBreakable_MetaData, ARRAY_COUNT(NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(NewProp_LinearLimitDamping_MetaData, ARRAY_COUNT(NewProp_LinearLimitDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(NewProp_LinearLimitStiffness_MetaData, ARRAY_COUNT(NewProp_LinearLimitStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bLinearLimitSoft_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bLinearLimitSoft_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearLimitSoft_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearLimitSoft_MetaData, ARRAY_COUNT(NewProp_bLinearLimitSoft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearLimitSize_DEPRECATED), METADATA_PARAMS(NewProp_LinearLimitSize_MetaData, ARRAY_COUNT(NewProp_LinearLimitSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearZMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearZMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearZMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(NewProp_LinearZMotion_MetaData, ARRAY_COUNT(NewProp_LinearZMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearYMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearYMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearYMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(NewProp_LinearYMotion_MetaData, ARRAY_COUNT(NewProp_LinearYMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearXMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearXMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, LinearXMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(NewProp_LinearXMotion_MetaData, ARRAY_COUNT(NewProp_LinearXMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionAngularTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(NewProp_ProjectionAngularTolerance_MetaData, ARRAY_COUNT(NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionLinearTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(NewProp_ProjectionLinearTolerance_MetaData, ARRAY_COUNT(NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bEnableProjection_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bEnableProjection_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableProjection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableProjection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableProjection_MetaData, ARRAY_COUNT(NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			auto NewProp_bDisableCollision_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bDisableCollision_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableCollision_MetaData, ARRAY_COUNT(NewProp_bDisableCollision_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileInstance_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Constraint Data (properties easily swapped at runtime based on different constraint profiles)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, ProfileInstance), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(NewProp_ProfileInstance_MetaData, ARRAY_COUNT(NewProp_ProfileInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleLinearLimits_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "If true, linear limits scale using the absolute min of the 3d scale of the owning component" },
			};
#endif
			auto NewProp_bScaleLinearLimits_SetBit = [](void* Obj){ ((FConstraintInstance*)Obj)->bScaleLinearLimits = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleLinearLimits = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleLinearLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleLinearLimits_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleLinearLimits_MetaData, ARRAY_COUNT(NewProp_bScaleLinearLimits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularRotationOffset_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\nThis allows you to bias the limit for swing1 swing2 and twist." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, AngularRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_AngularRotationOffset_MetaData, ARRAY_COUNT(NewProp_AngularRotationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Seconday axis in Body2 reference frame. Orthogonal to PriAxis2." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis2 = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, SecAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SecAxis2_MetaData, ARRAY_COUNT(NewProp_SecAxis2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Primary (twist) axis in Body2 reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis2 = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, PriAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PriAxis2_MetaData, ARRAY_COUNT(NewProp_PriAxis2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Location of constraint in Body2 reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos2 = { UE4CodeGen_Private::EPropertyClass::Struct, "Pos2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, Pos2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Pos2_MetaData, ARRAY_COUNT(NewProp_Pos2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Seconday axis in Body1 reference frame. Orthogonal to PriAxis1." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis1 = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, SecAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SecAxis1_MetaData, ARRAY_COUNT(NewProp_SecAxis1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Primary (twist) axis in Body1 reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis1 = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, PriAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PriAxis1_MetaData, ARRAY_COUNT(NewProp_PriAxis1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Location of constraint in Body1 reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos1 = { UE4CodeGen_Private::EPropertyClass::Struct, "Pos1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, Pos1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Pos1_MetaData, ARRAY_COUNT(NewProp_Pos1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Name of second bone (body) that this constraint is connecting.\nThis will be the 'parent' bone in a PhysicsAset." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2 = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintBone2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, ConstraintBone2), METADATA_PARAMS(NewProp_ConstraintBone2_MetaData, ARRAY_COUNT(NewProp_ConstraintBone2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Name of first bone (body) that this constraint is connecting.\nThis will be the 'child' bone in a PhysicsAsset." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1 = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintBone1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, ConstraintBone1), METADATA_PARAMS(NewProp_ConstraintBone1_MetaData, ARRAY_COUNT(NewProp_ConstraintBone1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Name of bone that this joint is associated with." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointName = { UE4CodeGen_Private::EPropertyClass::Name, "JointName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FConstraintInstance, JointName), METADATA_PARAMS(NewProp_JointName_MetaData, ARRAY_COUNT(NewProp_JointName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDriveForceLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDriveDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDriveSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocityTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularOrientationTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDriveMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularPositionTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTwistDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSwingDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularOrientationDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularSlerpDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTwistVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTwistPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSwingVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSwingPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDriveForceLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDriveDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDriveSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearVelocityTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearPositionTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearZVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearZPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearYVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearYPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearXVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearXPositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistLimitDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistLimitStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwingLimitDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwingLimitStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Swing2LimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistLimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Swing1LimitAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTwistLimitSoft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSwingLimitSoft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularSwing2Motion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularTwistMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularSwing1Motion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearLimitDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearLimitStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearLimitSoft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearLimitSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearZMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearYMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearXMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionAngularTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionLinearTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableProjection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableCollision,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleLinearLimits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularRotationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecAxis2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PriAxis2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pos2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecAxis1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PriAxis1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pos1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintBone2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintBone1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintInstance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintInstance),
				alignof(FConstraintInstance),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_CRC() { return 2843287489U; }
class UScriptStruct* FConstraintProfileProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintProfileProperties, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintProfileProperties"), sizeof(FConstraintProfileProperties), Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintProfileProperties(FConstraintProfileProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintProfileProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintProfileProperties")),new UScriptStruct::TCppStructOps<FConstraintProfileProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintProfileProperties"), sizeof(FConstraintProfileProperties), Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintProfileProperties>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Whether it is possible to break the joint with linear force." },
			};
#endif
			auto NewProp_bLinearBreakable_SetBit = [](void* Obj){ ((FConstraintProfileProperties*)Obj)->bLinearBreakable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintProfileProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearBreakable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearBreakable_MetaData, ARRAY_COUNT(NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Whether it is possible to break the joint with angular force." },
			};
#endif
			auto NewProp_bAngularBreakable_SetBit = [](void* Obj){ ((FConstraintProfileProperties*)Obj)->bAngularBreakable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintProfileProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularBreakable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularBreakable_MetaData, ARRAY_COUNT(NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[] = {
				{ "Category", "Projection" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "If distance error between bodies exceeds 0.1 units, or rotation error exceeds 10 degrees, body will be projected to fix this.\nFor example a chain spinning too fast will have its elements appear detached due to velocity, this will project all bodies so they still appear attached to each other." },
			};
#endif
			auto NewProp_bEnableProjection_SetBit = [](void* Obj){ ((FConstraintProfileProperties*)Obj)->bEnableProjection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableProjection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintProfileProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableProjection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableProjection_MetaData, ARRAY_COUNT(NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentDominates_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "When set, the parent body in a constraint will not be affected by the motion of the child" },
			};
#endif
			auto NewProp_bParentDominates_SetBit = [](void* Obj){ ((FConstraintProfileProperties*)Obj)->bParentDominates = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentDominates = { UE4CodeGen_Private::EPropertyClass::Bool, "bParentDominates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintProfileProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bParentDominates_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bParentDominates_MetaData, ARRAY_COUNT(NewProp_bParentDominates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Disable collision between bodies joined by this constraint." },
			};
#endif
			auto NewProp_bDisableCollision_SetBit = [](void* Obj){ ((FConstraintProfileProperties*)Obj)->bDisableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintProfileProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableCollision_MetaData, ARRAY_COUNT(NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDrive_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, AngularDrive), Z_Construct_UScriptStruct_FAngularDriveConstraint, METADATA_PARAMS(NewProp_AngularDrive_MetaData, ARRAY_COUNT(NewProp_AngularDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDrive_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, LinearDrive), Z_Construct_UScriptStruct_FLinearDriveConstraint, METADATA_PARAMS(NewProp_LinearDrive_MetaData, ARRAY_COUNT(NewProp_LinearDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistLimit = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, TwistLimit), Z_Construct_UScriptStruct_FTwistConstraint, METADATA_PARAMS(NewProp_TwistLimit_MetaData, ARRAY_COUNT(NewProp_TwistLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeLimit_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeLimit = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, ConeLimit), Z_Construct_UScriptStruct_FConeConstraint, METADATA_PARAMS(NewProp_ConeLimit_MetaData, ARRAY_COUNT(NewProp_ConeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimit_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearLimit = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, LinearLimit), Z_Construct_UScriptStruct_FLinearConstraint, METADATA_PARAMS(NewProp_LinearLimit_MetaData, ARRAY_COUNT(NewProp_LinearLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[] = {
				{ "Category", "Angular" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bAngularBreakable" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Torque needed to break the joint." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, AngularBreakThreshold), METADATA_PARAMS(NewProp_AngularBreakThreshold_MetaData, ARRAY_COUNT(NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[] = {
				{ "Category", "Linear" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bLinearBreakable" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Force needed to break the distance constraint." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, LinearBreakThreshold), METADATA_PARAMS(NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[] = {
				{ "Category", "Projection" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bEnableProjection" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Angular tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionAngularTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularTolerance), METADATA_PARAMS(NewProp_ProjectionAngularTolerance_MetaData, ARRAY_COUNT(NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[] = {
				{ "Category", "Projection" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bEnableProjection" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
				{ "ToolTip", "Linear tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionLinearTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearTolerance), METADATA_PARAMS(NewProp_ProjectionLinearTolerance_MetaData, ARRAY_COUNT(NewProp_ProjectionLinearTolerance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableProjection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bParentDominates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearBreakThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionAngularTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionLinearTolerance,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintProfileProperties",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintProfileProperties),
				alignof(FConstraintProfileProperties),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_CRC() { return 3730525944U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
