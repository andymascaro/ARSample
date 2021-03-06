// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingOptions();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshScreenAlignment();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EMeshCameraFacingOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshCameraFacingOptions, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshCameraFacingOptions"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshCameraFacingOptions(EMeshCameraFacingOptions_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshCameraFacingOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_CRC() { return 2304933738U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshCameraFacingOptions"), 0, Get_Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "XAxisFacing_NoUp", (int64)XAxisFacing_NoUp },
				{ "XAxisFacing_ZUp", (int64)XAxisFacing_ZUp },
				{ "XAxisFacing_NegativeZUp", (int64)XAxisFacing_NegativeZUp },
				{ "XAxisFacing_YUp", (int64)XAxisFacing_YUp },
				{ "XAxisFacing_NegativeYUp", (int64)XAxisFacing_NegativeYUp },
				{ "LockedAxis_ZAxisFacing", (int64)LockedAxis_ZAxisFacing },
				{ "LockedAxis_NegativeZAxisFacing", (int64)LockedAxis_NegativeZAxisFacing },
				{ "LockedAxis_YAxisFacing", (int64)LockedAxis_YAxisFacing },
				{ "LockedAxis_NegativeYAxisFacing", (int64)LockedAxis_NegativeYAxisFacing },
				{ "VelocityAligned_ZAxisFacing", (int64)VelocityAligned_ZAxisFacing },
				{ "VelocityAligned_NegativeZAxisFacing", (int64)VelocityAligned_NegativeZAxisFacing },
				{ "VelocityAligned_YAxisFacing", (int64)VelocityAligned_YAxisFacing },
				{ "VelocityAligned_NegativeYAxisFacing", (int64)VelocityAligned_NegativeYAxisFacing },
				{ "EMeshCameraFacingOptions_MAX", (int64)EMeshCameraFacingOptions_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LockedAxis_NegativeYAxisFacing.DisplayName", "Locked Axis : -Y Axis Facing" },
				{ "LockedAxis_NegativeZAxisFacing.DisplayName", "Locked Axis : -Z Axis Facing" },
				{ "LockedAxis_YAxisFacing.DisplayName", "Locked Axis : Y Axis Facing" },
				{ "LockedAxis_ZAxisFacing.DisplayName", "Locked Axis : Z Axis Facing" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "VelocityAligned_NegativeYAxisFacing.DisplayName", "Velocity Aligned : -Y Axis Facing" },
				{ "VelocityAligned_NegativeZAxisFacing.DisplayName", "Velocity Aligned : -Z Axis Facing" },
				{ "VelocityAligned_YAxisFacing.DisplayName", "Velocity Aligned : Y Axis Facing" },
				{ "VelocityAligned_ZAxisFacing.DisplayName", "Velocity Aligned : Z Axis Facing" },
				{ "XAxisFacing_NegativeYUp.DisplayName", "X Axis Facing : -Y Up" },
				{ "XAxisFacing_NegativeZUp.DisplayName", "X Axis Facing : -Z Up" },
				{ "XAxisFacing_NoUp.DisplayName", "X Axis Facing : No Up" },
				{ "XAxisFacing_YUp.DisplayName", "X Axis Facing : Y Up" },
				{ "XAxisFacing_ZUp.DisplayName", "X Axis Facing : Z Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshCameraFacingOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMeshCameraFacingOptions",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshCameraFacingUpAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshCameraFacingUpAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshCameraFacingUpAxis(EMeshCameraFacingUpAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshCameraFacingUpAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_CRC() { return 4225133909U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshCameraFacingUpAxis"), 0, Get_Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CameraFacing_NoneUP", (int64)CameraFacing_NoneUP },
				{ "CameraFacing_ZUp", (int64)CameraFacing_ZUp },
				{ "CameraFacing_NegativeZUp", (int64)CameraFacing_NegativeZUp },
				{ "CameraFacing_YUp", (int64)CameraFacing_YUp },
				{ "CameraFacing_NegativeYUp", (int64)CameraFacing_NegativeYUp },
				{ "CameraFacing_MAX", (int64)CameraFacing_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraFacing_NegativeYUp.DisplayName", "-Y Up" },
				{ "CameraFacing_NegativeZUp.DisplayName", "-Z Up" },
				{ "CameraFacing_NoneUP.DisplayName", "None" },
				{ "CameraFacing_YUp.DisplayName", "Y Up" },
				{ "CameraFacing_ZUp.DisplayName", "Z Up" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshCameraFacingUpAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMeshCameraFacingUpAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshScreenAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshScreenAlignment, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshScreenAlignment"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshScreenAlignment(EMeshScreenAlignment_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshScreenAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshScreenAlignment_CRC() { return 1761089489U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshScreenAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshScreenAlignment"), 0, Get_Z_Construct_UEnum_Engine_EMeshScreenAlignment_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSMA_MeshFaceCameraWithRoll", (int64)PSMA_MeshFaceCameraWithRoll },
				{ "PSMA_MeshFaceCameraWithSpin", (int64)PSMA_MeshFaceCameraWithSpin },
				{ "PSMA_MeshFaceCameraWithLockedAxis", (int64)PSMA_MeshFaceCameraWithLockedAxis },
				{ "PSMA_MAX", (int64)PSMA_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "PSMA_MeshFaceCameraWithLockedAxis.DisplayName", "Face Camera With Locked-Axis" },
				{ "PSMA_MeshFaceCameraWithRoll.DisplayName", "Face Camera With Roll" },
				{ "PSMA_MeshFaceCameraWithSpin.DisplayName", "Face Camera With Spin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshScreenAlignment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMeshScreenAlignment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleTypeDataMesh::StaticRegisterNativesUParticleModuleTypeDataMesh()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister()
	{
		return UParticleModuleTypeDataMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh()
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
				{ "DisplayName", "Mesh Data" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollisionsConsiderPartilceSize_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, all collisions for mesh particle on this emitter will take the particle size into account.\nIf false, particle size will be ignored in collision checks." },
			};
#endif
			auto NewProp_bCollisionsConsiderPartilceSize_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bCollisionsConsiderPartilceSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionsConsiderPartilceSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollisionsConsiderPartilceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCollisionsConsiderPartilceSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCollisionsConsiderPartilceSize_MetaData, ARRAY_COUNT(NewProp_bCollisionsConsiderPartilceSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFaceCameraDirectionRatherThanPosition_MetaData[] = {
				{ "Category", "CameraFacing" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, all camera facing options will point the mesh against the camera's view direction rather than pointing at the cameras location.\nIf false, the camera facing will point to the cameras position as normal." },
			};
#endif
			auto NewProp_bFaceCameraDirectionRatherThanPosition_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bFaceCameraDirectionRatherThanPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceCameraDirectionRatherThanPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bFaceCameraDirectionRatherThanPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFaceCameraDirectionRatherThanPosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFaceCameraDirectionRatherThanPosition_MetaData, ARRAY_COUNT(NewProp_bFaceCameraDirectionRatherThanPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyParticleRotationAsSpin_MetaData[] = {
				{ "Category", "CameraFacing" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, apply 'sprite' particle rotation about the orientation axis (direction mesh is pointing).\nIf false, apply 'sprite' particle rotation about the camera facing axis." },
			};
#endif
			auto NewProp_bApplyParticleRotationAsSpin_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bApplyParticleRotationAsSpin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyParticleRotationAsSpin = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyParticleRotationAsSpin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyParticleRotationAsSpin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyParticleRotationAsSpin_MetaData, ARRAY_COUNT(NewProp_bApplyParticleRotationAsSpin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFacingOption_MetaData[] = {
				{ "Category", "CameraFacing" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The camera facing option to use:\nAll camera facing options without locked axis assume X-axis will be facing the camera.\n        XAxisFacing_NoUp                                - X-axis camera facing, no attempt to face an axis up or down.\n        XAxisFacing_ZUp                                 - X-axis camera facing, Z-axis of the mesh should attempt to point up.\n        XAxisFacing_NegativeZUp                 - X-axis camera facing, Z-axis of the mesh should attempt to point down.\n        XAxisFacing_YUp                                 - X-axis camera facing, Y-axis of the mesh should attempt to point up.\n        XAxisFacing_NegativeYUp                 - X-axis camera facing, Y-axis of the mesh should attempt to point down.\nAll axis-locked camera facing options assume the AxisLockOption is set. EPAL_NONE will be treated as EPAL_X.\n        LockedAxis_ZAxisFacing                  - X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face towards camera.\n        LockedAxis_NegativeZAxisFacing  - X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face away from camera.\n        LockedAxis_YAxisFacing                  - X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face towards camera.\n        LockedAxis_NegativeYAxisFacing  - X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face away from camera.\nAll velocity-aligned options do NOT require the ScreenAlignment be set to PSA_Velocity.\nDoing so will result in additional work being performed... (it will orient the mesh twice).\n        VelocityAligned_ZAxisFacing         - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face towards camera.\n        VelocityAligned_NegativeZAxisFacing - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face away from camera.\n        VelocityAligned_YAxisFacing         - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face towards camera.\n        VelocityAligned_NegativeYAxisFacing - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face away from camera." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraFacingOption = { UE4CodeGen_Private::EPropertyClass::Byte, "CameraFacingOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, CameraFacingOption), Z_Construct_UEnum_Engine_EMeshCameraFacingOptions, METADATA_PARAMS(NewProp_CameraFacingOption_MetaData, ARRAY_COUNT(NewProp_CameraFacingOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFacingUpAxisOption_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The axis of the mesh to point up when camera facing the X-axis.\n        CameraFacing_NoneUP                     No attempt to face an axis up or down.\n        CameraFacing_ZUp                        Z-axis of the mesh should attempt to point up.\n        CameraFacing_NegativeZUp        Z-axis of the mesh should attempt to point down.\n        CameraFacing_YUp                        Y-axis of the mesh should attempt to point up.\n        CameraFacing_NegativeYUp        Y-axis of the mesh should attempt to point down." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraFacingUpAxisOption = { UE4CodeGen_Private::EPropertyClass::Byte, "CameraFacingUpAxisOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, CameraFacingUpAxisOption_DEPRECATED), Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis, METADATA_PARAMS(NewProp_CameraFacingUpAxisOption_MetaData, ARRAY_COUNT(NewProp_CameraFacingUpAxisOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraFacing_MetaData[] = {
				{ "Category", "CameraFacing" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, then point the X-axis of the mesh towards the camera.\nWhen set, AxisLockOption as well as all other locked axis/screen alignment settings are ignored." },
			};
#endif
			auto NewProp_bCameraFacing_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bCameraFacing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraFacing = { UE4CodeGen_Private::EPropertyClass::Bool, "bCameraFacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCameraFacing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCameraFacing_MetaData, ARRAY_COUNT(NewProp_bCameraFacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisLockOption_MetaData[] = {
				{ "Category", "Orientation" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The axis to lock the mesh on. This overrides TypeSpecific mesh alignment as well as the LockAxis module.\n        EPAL_NONE                -      No locking to an axis.\n        EPAL_X                   -      Lock the mesh X-axis facing towards +X.\n        EPAL_Y                   -      Lock the mesh X-axis facing towards +Y.\n        EPAL_Z                   -      Lock the mesh X-axis facing towards +Z.\n        EPAL_NEGATIVE_X  -      Lock the mesh X-axis facing towards -X.\n        EPAL_NEGATIVE_Y  -      Lock the mesh X-axis facing towards -Y.\n        EPAL_NEGATIVE_Z  -      Lock the mesh X-axis facing towards -Z.\n        EPAL_ROTATE_X    -      Ignored for mesh emitters. Treated as EPAL_NONE.\n        EPAL_ROTATE_Y    -      Ignored for mesh emitters. Treated as EPAL_NONE.\n        EPAL_ROTATE_Z    -      Ignored for mesh emitters. Treated as EPAL_NONE." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisLockOption = { UE4CodeGen_Private::EPropertyClass::Byte, "AxisLockOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, AxisLockOption), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(NewProp_AxisLockOption_MetaData, ARRAY_COUNT(NewProp_AxisLockOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollPitchYawRange_MetaData[] = {
				{ "Category", "Orientation" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The 'pre' rotation pitch (in degrees) to apply to the static mesh used." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollPitchYawRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RollPitchYawRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, RollPitchYawRange), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_RollPitchYawRange_MetaData, ARRAY_COUNT(NewProp_RollPitchYawRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, Yaw_DEPRECATED), METADATA_PARAMS(NewProp_Yaw_MetaData, ARRAY_COUNT(NewProp_Yaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Float, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, Roll_DEPRECATED), METADATA_PARAMS(NewProp_Roll_MetaData, ARRAY_COUNT(NewProp_Roll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "deprecated properties for initial orientation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, Pitch_DEPRECATED), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionBlur_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditCondition", "bOverrideDefaultMotionBlurSettings" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
			auto NewProp_bEnableMotionBlur_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bEnableMotionBlur = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionBlur = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMotionBlur", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableMotionBlur_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableMotionBlur_MetaData, ARRAY_COUNT(NewProp_bEnableMotionBlur_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultMotionBlurSettings_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
			};
#endif
			auto NewProp_bOverrideDefaultMotionBlurSettings_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bOverrideDefaultMotionBlurSettings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultMotionBlurSettings = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideDefaultMotionBlurSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideDefaultMotionBlurSettings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideDefaultMotionBlurSettings_MetaData, ARRAY_COUNT(NewProp_bOverrideDefaultMotionBlurSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterial_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, use the emitter material when rendering rather than the one applied\nto the static mesh model." },
			};
#endif
			auto NewProp_bOverrideMaterial_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->bOverrideMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMaterial_MetaData, ARRAY_COUNT(NewProp_bOverrideMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAlignment_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The alignment to use on the meshes emitted.\nThe RequiredModule->ScreenAlignment MUST be set to PSA_TypeSpecific to use.\nOne of the following:\nPSMA_MeshFaceCameraWithRoll\n        Face the camera allowing for rotation around the mesh-to-camera FVector\n        (amount provided by the standard particle sprite rotation).\nPSMA_MeshFaceCameraWithSpin\n        Face the camera allowing for the mesh to rotate about the tangential axis.\nPSMA_MeshFaceCameraWithLockedAxis\n        Face the camera while maintaining the up FVector as the locked direction." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "MeshAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, MeshAlignment), Z_Construct_UEnum_Engine_EMeshScreenAlignment, METADATA_PARAMS(NewProp_MeshAlignment_MetaData, ARRAY_COUNT(NewProp_MeshAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoCollisions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "UNUSED (the collision module dictates doing collisions)" },
			};
#endif
			auto NewProp_DoCollisions_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->DoCollisions = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoCollisions = { UE4CodeGen_Private::EPropertyClass::Bool, "DoCollisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DoCollisions_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DoCollisions_MetaData, ARRAY_COUNT(NewProp_DoCollisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "If true, has the meshes cast shadows" },
			};
#endif
			auto NewProp_CastShadows_SetBit = [](void* Obj){ ((UParticleModuleTypeDataMesh*)Obj)->CastShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastShadows_MetaData, ARRAY_COUNT(NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
				{ "ToolTip", "The static mesh to render at the particle positions" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCollisionsConsiderPartilceSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFaceCameraDirectionRatherThanPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyParticleRotationAsSpin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraFacingOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraFacingUpAxisOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCameraFacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisLockOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollPitchYawRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Yaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableMotionBlur,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideDefaultMotionBlurSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoCollisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataMesh::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataMesh, 2946619006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataMesh(Z_Construct_UClass_UParticleModuleTypeDataMesh, &UParticleModuleTypeDataMesh::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
