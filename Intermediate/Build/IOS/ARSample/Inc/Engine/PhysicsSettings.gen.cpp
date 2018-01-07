// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsDOF();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode();
// End Cross Module References
	static UEnum* ESettingsLockedAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsLockedAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsLockedAxis(ESettingsLockedAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsLockedAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_CRC() { return 719742700U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsLockedAxis"), 0, Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsLockedAxis::None", (int64)ESettingsLockedAxis::None },
				{ "ESettingsLockedAxis::X", (int64)ESettingsLockedAxis::X },
				{ "ESettingsLockedAxis::Y", (int64)ESettingsLockedAxis::Y },
				{ "ESettingsLockedAxis::Z", (int64)ESettingsLockedAxis::Z },
				{ "ESettingsLockedAxis::Invalid", (int64)ESettingsLockedAxis::Invalid },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.ToolTip", "Used for backwards compatibility. Indicates that we've updated into the new struct." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "None.ToolTip", "No axis is locked." },
				{ "X.ToolTip", "Lock movement along the x-axis." },
				{ "Y.ToolTip", "Lock movement along the y-axis." },
				{ "Z.ToolTip", "Lock movement along the z-axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESettingsLockedAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESettingsLockedAxis::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESettingsDOF_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsDOF"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsDOF(ESettingsDOF_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsDOF"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsDOF_CRC() { return 3958033828U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsDOF()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsDOF"), 0, Get_Z_Construct_UEnum_Engine_ESettingsDOF_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsDOF::Full3D", (int64)ESettingsDOF::Full3D },
				{ "ESettingsDOF::YZPlane", (int64)ESettingsDOF::YZPlane },
				{ "ESettingsDOF::XZPlane", (int64)ESettingsDOF::XZPlane },
				{ "ESettingsDOF::XYPlane", (int64)ESettingsDOF::XYPlane },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Full3D.ToolTip", "Allows for full 3D movement and rotation." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESettingsDOF",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESettingsDOF::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPhysicalSurfaceName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceName, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSurfaceName(FPhysicalSurfaceName::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalSurfaceName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSurfaceName")),new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName;
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Structure that represents the name of physical surfaces." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceName, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceName, Type), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PhysicalSurfaceName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPhysicalSurfaceName),
				alignof(FPhysicalSurfaceName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC() { return 1841447272U; }
	void UPhysicsSettings::StaticRegisterNativesUPhysicsSettings()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister()
	{
		return UPhysicsSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Physics" },
				{ "IncludePath", "PhysicsEngine/PhysicsSettings.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Default physics settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaces_MetaData[] = {
				{ "Category", "PhysicalSurfaces" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "PhysicalMaterial Surface Types" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaces = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalSurfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, PhysicalSurfaces), METADATA_PARAMS(NewProp_PhysicalSurfaces_MetaData, ARRAY_COUNT(NewProp_PhysicalSurfaces_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalSurfaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysXTreeRebuildRate_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMin", "4" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built" },
				{ "UIMin", "4" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PhysXTreeRebuildRate = { UE4CodeGen_Private::EPropertyClass::Int, "PhysXTreeRebuildRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, PhysXTreeRebuildRate), METADATA_PARAMS(NewProp_PhysXTreeRebuildRate_MetaData, ARRAY_COUNT(NewProp_PhysXTreeRebuildRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAverageFrameRate_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0013" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Physics delta time initial average." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0013" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAverageFrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "InitialAverageFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, InitialAverageFrameRate), METADATA_PARAMS(NewProp_InitialAverageFrameRate_MetaData, ARRAY_COUNT(NewProp_InitialAverageFrameRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncSceneSmoothingFactor_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Physics delta time smoothing factor for async scene." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncSceneSmoothingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AsyncSceneSmoothingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, AsyncSceneSmoothingFactor), METADATA_PARAMS(NewProp_AsyncSceneSmoothingFactor_MetaData, ARRAY_COUNT(NewProp_AsyncSceneSmoothingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncSceneSmoothingFactor_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Physics delta time smoothing factor for sync scene." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncSceneSmoothingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SyncSceneSmoothingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, SyncSceneSmoothingFactor), METADATA_PARAMS(NewProp_SyncSceneSmoothingFactor_MetaData, ARRAY_COUNT(NewProp_SyncSceneSmoothingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubsteps_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "16" },
				{ "ClampMin", "1" },
				{ "editcondition", "bSubstepping" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max number of substeps for physics simulation." },
				{ "UIMax", "16" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSubsteps = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSubsteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxSubsteps), METADATA_PARAMS(NewProp_MaxSubsteps_MetaData, ARRAY_COUNT(NewProp_MaxSubsteps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubstepDeltaTime_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0013" },
				{ "editcondition", "bSubStepping" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max delta time (in seconds) for an individual simulation substep." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0013" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSubstepDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSubstepDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxSubstepDeltaTime), METADATA_PARAMS(NewProp_MaxSubstepDeltaTime_MetaData, ARRAY_COUNT(NewProp_MaxSubstepDeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubsteppingAsync_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
			};
#endif
			auto NewProp_bSubsteppingAsync_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bSubsteppingAsync = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubsteppingAsync = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubsteppingAsync", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSubsteppingAsync_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSubsteppingAsync_MetaData, ARRAY_COUNT(NewProp_bSubsteppingAsync_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubstepping_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
			};
#endif
			auto NewProp_bSubstepping_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bSubstepping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubstepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubstepping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSubstepping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSubstepping_MetaData, ARRAY_COUNT(NewProp_bSubstepping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsDeltaTime_MetaData[] = {
				{ "Category", "Framerate" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0013" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max Physics Delta Time to be clamped." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0013" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPhysicsDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxPhysicsDeltaTime), METADATA_PARAMS(NewProp_MaxPhysicsDeltaTime_MetaData, ARRAY_COUNT(NewProp_MaxPhysicsDeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEnhancedDeterminism_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If set to true, the scene will use enhanced determinism at the cost of a bit more resources. See eENABLE_ENHANCED_DETERMINISM to learn about the specifics" },
			};
#endif
			auto NewProp_bEnableEnhancedDeterminism_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnableEnhancedDeterminism = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEnhancedDeterminism = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableEnhancedDeterminism", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableEnhancedDeterminism_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableEnhancedDeterminism_MetaData, ARRAY_COUNT(NewProp_bEnableEnhancedDeterminism_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCCD_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally." },
			};
#endif
			auto NewProp_bDisableCCD_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bDisableCCD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCCD = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCCD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableCCD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableCCD_MetaData, ARRAY_COUNT(NewProp_bDisableCCD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveActors_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx." },
			};
#endif
			auto NewProp_bDisableActiveActors_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bDisableActiveActors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveActors = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableActiveActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableActiveActors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableActiveActors_MetaData, ARRAY_COUNT(NewProp_bDisableActiveActors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUVFromHitResults_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "DisplayName", "Support UV From Hit Results" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility" },
			};
#endif
			auto NewProp_bSupportUVFromHitResults_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bSupportUVFromHitResults = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUVFromHitResults = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportUVFromHitResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportUVFromHitResults_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportUVFromHitResults_MetaData, ARRAY_COUNT(NewProp_bSupportUVFromHitResults_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressFaceRemapTable_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries." },
			};
#endif
			auto NewProp_bSuppressFaceRemapTable_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bSuppressFaceRemapTable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressFaceRemapTable = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressFaceRemapTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuppressFaceRemapTable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuppressFaceRemapTable_MetaData, ARRAY_COUNT(NewProp_bSuppressFaceRemapTable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultHasComplexCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true, static meshes will use per poly collision as complex collision by default. If false the default behavior is the same as UseSimpleAsComplex." },
			};
#endif
			auto NewProp_bDefaultHasComplexCollision_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bDefaultHasComplexCollision_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultHasComplexCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultHasComplexCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultHasComplexCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultHasComplexCollision_MetaData, ARRAY_COUNT(NewProp_bDefaultHasComplexCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeComplexity_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Determines the default physics shape complexity." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultShapeComplexity = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultShapeComplexity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultShapeComplexity), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(NewProp_DefaultShapeComplexity_MetaData, ARRAY_COUNT(NewProp_DefaultShapeComplexity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "If true, simulate physics for this component on a dedicated server.\nThis should be set if simulating physics and replicating with a dedicated server." },
			};
#endif
			auto NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bSimulateSkeletalMeshOnDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateSkeletalMeshOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulateSkeletalMeshOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData, ARRAY_COUNT(NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxContactOffset_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max Contact offset." },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxContactOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MaxContactOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxContactOffset), METADATA_PARAMS(NewProp_MaxContactOffset_MetaData, ARRAY_COUNT(NewProp_MaxContactOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinContactOffset_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMin", "0.0001" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Min Contact offset." },
				{ "UIMin", "0.0001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinContactOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MinContactOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MinContactOffset), METADATA_PARAMS(NewProp_MinContactOffset_MetaData, ARRAY_COUNT(NewProp_MinContactOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactOffsetMultiplier_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Contact offset multiplier. When creating a physics shape we look at its bounding volume and multiply its minimum value by this multiplier. A bigger number will generate contact points earlier which results in higher stability at the cost of performance." },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactOffsetMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ContactOffsetMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, ContactOffsetMultiplier), METADATA_PARAMS(NewProp_ContactOffsetMultiplier_MetaData, ARRAY_COUNT(NewProp_ContactOffsetMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max velocity which may be used to depenetrate simulated physics objects. 0 means no maximum." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxDepenetrationVelocity), METADATA_PARAMS(NewProp_MaxDepenetrationVelocity_MetaData, ARRAY_COUNT(NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Max angular velocity that a simulated object can achieve." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxAngularVelocity), METADATA_PARAMS(NewProp_MaxAngularVelocity_MetaData, ARRAY_COUNT(NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RestitutionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, RestitutionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(NewProp_RestitutionCombineMode_MetaData, ARRAY_COUNT(NewProp_RestitutionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "FrictionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, FrictionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(NewProp_FrictionCombineMode_MetaData, ARRAY_COUNT(NewProp_FrictionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceThresholdVelocity_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Minimum relative velocity required for an object to bounce. A typical value for simulation stability is about 0.2 * gravity" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceThresholdVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "BounceThresholdVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, BounceThresholdVelocity), METADATA_PARAMS(NewProp_BounceThresholdVelocity_MetaData, ARRAY_COUNT(NewProp_BounceThresholdVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDegreesOfFreedom_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultDegreesOfFreedom = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultDegreesOfFreedom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultDegreesOfFreedom), Z_Construct_UEnum_Engine_ESettingsDOF, METADATA_PARAMS(NewProp_DefaultDegreesOfFreedom_MetaData, ARRAY_COUNT(NewProp_DefaultDegreesOfFreedom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, LockedAxis_DEPRECATED), Z_Construct_UEnum_Engine_ESettingsLockedAxis, METADATA_PARAMS(NewProp_LockedAxis_MetaData, ARRAY_COUNT(NewProp_LockedAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable2DPhysics_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Can 2D physics be used (Box2D)?" },
			};
#endif
			auto NewProp_bEnable2DPhysics_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnable2DPhysics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable2DPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable2DPhysics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable2DPhysics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnable2DPhysics_MetaData, ARRAY_COUNT(NewProp_bEnable2DPhysics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingLocks_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Whether to warn when physics locks are used incorrectly. Turning this off is not recommended and should only be used by very advanced users." },
			};
#endif
			auto NewProp_bWarnMissingLocks_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bWarnMissingLocks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingLocks = { UE4CodeGen_Private::EPropertyClass::Bool, "bWarnMissingLocks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWarnMissingLocks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWarnMissingLocks_MetaData, ARRAY_COUNT(NewProp_bWarnMissingLocks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStabilization_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Enables stabilization of contacts for slow moving bodies. This will help improve the stability of stacking." },
			};
#endif
			auto NewProp_bEnableStabilization_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnableStabilization = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStabilization = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableStabilization", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableStabilization_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableStabilization_MetaData, ARRAY_COUNT(NewProp_bEnableStabilization_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePCM_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Enables persistent contact manifolds. This will generate fewer contact points, but with more accuracy. Reduces stability of stacking, but can help energy conservation." },
			};
#endif
			auto NewProp_bEnablePCM_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnablePCM = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePCM = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePCM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePCM_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePCM_MetaData, ARRAY_COUNT(NewProp_bEnablePCM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShapeSharing_MetaData[] = {
				{ "Category", "Simulation" },
				{ "editcondition", "bEnableAsyncScene" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Enables shape sharing between sync and async scene for static rigid actors" },
			};
#endif
			auto NewProp_bEnableShapeSharing_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnableShapeSharing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShapeSharing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableShapeSharing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableShapeSharing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableShapeSharing_MetaData, ARRAY_COUNT(NewProp_bEnableShapeSharing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAsyncScene_MetaData[] = {
				{ "Category", "Simulation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Enables the use of an async scene" },
			};
#endif
			auto NewProp_bEnableAsyncScene_SetBit = [](void* Obj){ ((UPhysicsSettings*)Obj)->bEnableAsyncScene = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAsyncScene_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAsyncScene_MetaData, ARRAY_COUNT(NewProp_bEnableAsyncScene_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData[] = {
				{ "Category", "Constants" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "-1.0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Triangles from triangle meshes (BSP) with an area less than or equal to this value will be removed from physics collision data. Set to less than 0 to disable." },
				{ "UIMax", "10.0" },
				{ "UIMin", "-1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriangleMeshTriangleMinAreaThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "TriangleMeshTriangleMinAreaThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, TriangleMeshTriangleMinAreaThreshold), METADATA_PARAMS(NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData, ARRAY_COUNT(NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollAggregateThreshold_MetaData[] = {
				{ "Category", "Constants" },
				{ "ClampMax", "127" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Threshold for ragdoll bodies above which they will be added to an aggregate before being added to the scene" },
				{ "UIMax", "127" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RagdollAggregateThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "RagdollAggregateThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, RagdollAggregateThreshold), METADATA_PARAMS(NewProp_RagdollAggregateThreshold_MetaData, ARRAY_COUNT(NewProp_RagdollAggregateThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulateScratchMemorySize_MetaData[] = {
				{ "Category", "Constants" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Amount of memory to reserve for PhysX simulate(), this is per pxscene and will be rounded up to the next 16K boundary" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimulateScratchMemorySize = { UE4CodeGen_Private::EPropertyClass::Int, "SimulateScratchMemorySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, SimulateScratchMemorySize), METADATA_PARAMS(NewProp_SimulateScratchMemorySize_MetaData, ARRAY_COUNT(NewProp_SimulateScratchMemorySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFluidFriction_MetaData[] = {
				{ "Category", "Constants" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Default fluid friction for Physics Volumes." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFluidFriction = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultFluidFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultFluidFriction), METADATA_PARAMS(NewProp_DefaultFluidFriction_MetaData, ARRAY_COUNT(NewProp_DefaultFluidFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTerminalVelocity_MetaData[] = {
				{ "Category", "Constants" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Default terminal velocity for Physics Volumes." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTerminalVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultTerminalVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultTerminalVelocity), METADATA_PARAMS(NewProp_DefaultTerminalVelocity_MetaData, ARRAY_COUNT(NewProp_DefaultTerminalVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGravityZ_MetaData[] = {
				{ "Category", "Constants" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "ToolTip", "Default gravity." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultGravityZ), METADATA_PARAMS(NewProp_DefaultGravityZ_MetaData, ARRAY_COUNT(NewProp_DefaultGravityZ_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurfaces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalSurfaces_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysXTreeRebuildRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialAverageFrameRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncSceneSmoothingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncSceneSmoothingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSubsteps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSubstepDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSubsteppingAsync,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSubstepping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPhysicsDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableEnhancedDeterminism,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableCCD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableActiveActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportUVFromHitResults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuppressFaceRemapTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultHasComplexCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultShapeComplexity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimulateSkeletalMeshOnDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxContactOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinContactOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactOffsetMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDepenetrationVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RestitutionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BounceThresholdVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultDegreesOfFreedom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockedAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable2DPhysics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWarnMissingLocks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableStabilization,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePCM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableShapeSharing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAsyncScene,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriangleMeshTriangleMinAreaThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RagdollAggregateThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulateScratchMemorySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFluidFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTerminalVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultGravityZ,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UPhysicsSettings, 484285946);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSettings(Z_Construct_UClass_UPhysicsSettings, &UPhysicsSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
