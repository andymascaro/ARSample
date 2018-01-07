// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/ConstraintDrives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintDrives() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
// End Cross Module References
	static UEnum* EAngularDriveMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAngularDriveMode, Z_Construct_UPackage__Script_Engine(), TEXT("EAngularDriveMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAngularDriveMode(EAngularDriveMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EAngularDriveMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAngularDriveMode_CRC() { return 1748626856U; }
	UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAngularDriveMode"), 0, Get_Z_Construct_UEnum_Engine_EAngularDriveMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAngularDriveMode::SLERP", (int64)EAngularDriveMode::SLERP },
				{ "EAngularDriveMode::TwistAndSwing", (int64)EAngularDriveMode::TwistAndSwing },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "SLERP.ToolTip", "Spherical lerp between the current orientation/velocity and the target orientation/velocity. NOTE: This will NOT work if any angular constraints are set to Locked." },
				{ "TwistAndSwing.ToolTip", "Path is decomposed into twist (roll constraint) and swing (cone constraint). Doesn't follow shortest arc and may experience gimbal lock. Does work with locked angular constraints." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAngularDriveMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAngularDriveMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAngularDriveConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularDriveConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("AngularDriveConstraint"), sizeof(FAngularDriveConstraint), Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAngularDriveConstraint(FAngularDriveConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("AngularDriveConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AngularDriveConstraint")),new UScriptStruct::TCppStructOps<FAngularDriveConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AngularDriveConstraint"), sizeof(FAngularDriveConstraint), Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Angular Drive" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularDriveConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[] = {
				{ "Category", "AngularMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Whether motors use SLERP (spherical lerp) or decompose into a Swing motor (cone constraints) and Twist motor (roll constraints). NOTE: SLERP will NOT work if any of the angular constraints are locked." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularDriveMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, AngularDriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(NewProp_AngularDriveMode_MetaData, ARRAY_COUNT(NewProp_AngularDriveMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[] = {
				{ "Category", "AngularMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Target angular velocity relative to the body reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, AngularVelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularVelocityTarget_MetaData, ARRAY_COUNT(NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationTarget_MetaData[] = {
				{ "Category", "AngularMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Target orientation relative to the the body reference frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrientationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "OrientationTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, OrientationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_OrientationTarget_MetaData, ARRAY_COUNT(NewProp_OrientationTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlerpDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "DisplayName", "SLERP" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Controls the SLERP (spherical lerp) drive between current orientation/velocity and target orientation/velocity. NOTE: This is only available when all three angular limits are either free or limited. Locking any angular limit will turn off the drive implicitly." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlerpDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "SlerpDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, SlerpDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_SlerpDrive_MetaData, ARRAY_COUNT(NewProp_SlerpDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "DisplayName", "Swing" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Controls the cone constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as there is at least one swing limit set to free or limited." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwingDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "SwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, SwingDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_SwingDrive_MetaData, ARRAY_COUNT(NewProp_SwingDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "DisplayName", "Twist" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Controls the twist (roll) constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as the twist limit is set to free or limited." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAngularDriveConstraint, TwistDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_TwistDrive_MetaData, ARRAY_COUNT(NewProp_TwistDrive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDriveMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocityTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrientationTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlerpDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwingDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistDrive,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AngularDriveConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAngularDriveConstraint),
				alignof(FAngularDriveConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC() { return 289547880U; }
class UScriptStruct* FLinearDriveConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearDriveConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("LinearDriveConstraint"), sizeof(FLinearDriveConstraint), Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinearDriveConstraint(FLinearDriveConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("LinearDriveConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LinearDriveConstraint")),new UScriptStruct::TCppStructOps<FLinearDriveConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinearDriveConstraint"), sizeof(FLinearDriveConstraint), Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Linear Drive" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearDriveConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
			};
#endif
			auto NewProp_bEnablePositionDrive_SetBit = [](void* Obj){ ((FLinearDriveConstraint*)Obj)->bEnablePositionDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLinearDriveConstraint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePositionDrive_MetaData, ARRAY_COUNT(NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "ZDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, ZDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_ZDrive_MetaData, ARRAY_COUNT(NewProp_ZDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_YDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "YDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, YDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_YDrive_MetaData, ARRAY_COUNT(NewProp_YDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XDrive_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_XDrive = { UE4CodeGen_Private::EPropertyClass::Struct, "XDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, XDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(NewProp_XDrive_MetaData, ARRAY_COUNT(NewProp_XDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityTarget_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Target velocity the linear drive." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, VelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VelocityTarget_MetaData, ARRAY_COUNT(NewProp_VelocityTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionTarget_MetaData[] = {
				{ "Category", "LinearMotor" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Target position the linear drive." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "PositionTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLinearDriveConstraint, PositionTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PositionTarget_MetaData, ARRAY_COUNT(NewProp_PositionTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionTarget,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LinearDriveConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FLinearDriveConstraint),
				alignof(FLinearDriveConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_CRC() { return 3219206636U; }
class UScriptStruct* FConstraintDrive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDrive, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintDrive"), sizeof(FConstraintDrive), Get_Z_Construct_UScriptStruct_FConstraintDrive_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDrive(FConstraintDrive::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintDrive"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintDrive
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintDrive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDrive")),new UScriptStruct::TCppStructOps<FConstraintDrive>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintDrive;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDrive"), sizeof(FConstraintDrive), Get_Z_Construct_UScriptStruct_FConstraintDrive_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDrive>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVelocityDrive_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Enables/Disables velocity drive (angular velocity if using angular drive)" },
			};
#endif
			auto NewProp_bEnableVelocityDrive_SetBit = [](void* Obj){ ((FConstraintDrive*)Obj)->bEnableVelocityDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVelocityDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintDrive), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableVelocityDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableVelocityDrive_MetaData, ARRAY_COUNT(NewProp_bEnableVelocityDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "Enables/Disables position drive (orientation if using angular drive)" },
			};
#endif
			auto NewProp_bEnablePositionDrive_SetBit = [](void* Obj){ ((FConstraintDrive*)Obj)->bEnablePositionDrive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FConstraintDrive), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePositionDrive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePositionDrive_MetaData, ARRAY_COUNT(NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "The force limit of the drive." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FConstraintDrive, MaxForce), METADATA_PARAMS(NewProp_MaxForce_MetaData, ARRAY_COUNT(NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "The damping strength of the drive. Force proportional to the velocity error." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Float, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FConstraintDrive, Damping), METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "ToolTip", "The spring strength of the drive. Force proportional to the position error." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness = { UE4CodeGen_Private::EPropertyClass::Float, "Stiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FConstraintDrive, Stiffness), METADATA_PARAMS(NewProp_Stiffness_MetaData, ARRAY_COUNT(NewProp_Stiffness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableVelocityDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePositionDrive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stiffness,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintDrive",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintDrive),
				alignof(FConstraintDrive),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_CRC() { return 53679502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
