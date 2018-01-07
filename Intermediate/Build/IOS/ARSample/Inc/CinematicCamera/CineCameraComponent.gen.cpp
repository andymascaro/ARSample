// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CineCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ECameraFocusMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("ECameraFocusMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraFocusMethod(ECameraFocusMethod_StaticEnum, TEXT("/Script/CinematicCamera"), TEXT("ECameraFocusMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_CRC() { return 4293728506U; }
	UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraFocusMethod"), 0, Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraFocusMethod::None", (int64)ECameraFocusMethod::None },
				{ "ECameraFocusMethod::Manual", (int64)ECameraFocusMethod::Manual },
				{ "ECameraFocusMethod::Tracking", (int64)ECameraFocusMethod::Tracking },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Manual.ToolTip", "Allows for specifying or animating exact focus distances." },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "None.ToolTip", "Disables DoF entirely." },
				{ "ToolTip", "Supported methods for focusing the camera." },
				{ "Tracking.ToolTip", "Locks focus to specific object." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CinematicCamera,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECameraFocusMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECameraFocusMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCameraFocusSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFocusSettings(FCameraFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFocusSettings")),new UScriptStruct::TCppStructOps<FCameraFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Settings to control camera focus" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFocusSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusOffset_MetaData[] = {
				{ "Category", "Focus Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusOffset = { UE4CodeGen_Private::EPropertyClass::Float, "FocusOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusOffset), METADATA_PARAMS(NewProp_FocusOffset_MetaData, ARRAY_COUNT(NewProp_FocusOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
				{ "Category", "Focus Settings" },
				{ "EditCondition", "bSmoothFocusChanges" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothingInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FocusSmoothingInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusSmoothingInterpSpeed), METADATA_PARAMS(NewProp_FocusSmoothingInterpSpeed_MetaData, ARRAY_COUNT(NewProp_FocusSmoothingInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[] = {
				{ "Category", "Focus Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous." },
			};
#endif
			auto NewProp_bSmoothFocusChanges_SetBit = [](void* Obj){ ((FCameraFocusSettings*)Obj)->bSmoothFocusChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothFocusChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraFocusSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothFocusChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothFocusChanges_MetaData, ARRAY_COUNT(NewProp_bSmoothFocusChanges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneColor_MetaData[] = {
				{ "Category", "Focus Settings" },
				{ "EditCondition", "bDrawDebugFocusPlane" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "For customizing the focus plane color, in case the default doesn't show up well in your scene." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugFocusPlaneColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugFocusPlaneColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, DebugFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_DebugFocusPlaneColor_MetaData, ARRAY_COUNT(NewProp_DebugFocusPlaneColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPlane_MetaData[] = {
				{ "Category", "Focus Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "True to draw a translucent plane at the current focus depth, for easy tweaking." },
			};
#endif
			auto NewProp_bDrawDebugFocusPlane_SetBit = [](void* Obj){ ((FCameraFocusSettings*)Obj)->bDrawDebugFocusPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDebugFocusPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraFocusSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDebugFocusPlane_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDebugFocusPlane_MetaData, ARRAY_COUNT(NewProp_bDrawDebugFocusPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingFocusSettings_MetaData[] = {
				{ "Category", "Tracking Focus Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Settings to control tracking focus (tracking focus mode only)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingFocusSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackingFocusSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, TrackingFocusSettings), Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, METADATA_PARAMS(NewProp_TrackingFocusSettings_MetaData, ARRAY_COUNT(NewProp_TrackingFocusSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[] = {
				{ "Category", "Manual Focus Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Manually-controlled focus distance (manual focus mode only)" },
				{ "Units", "cm" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance = { UE4CodeGen_Private::EPropertyClass::Float, "ManualFocusDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, ManualFocusDistance), METADATA_PARAMS(NewProp_ManualFocusDistance_MetaData, ARRAY_COUNT(NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[] = {
				{ "Category", "Focus Method" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Which method to use to handle camera focus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FocusMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "FocusMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(NewProp_FocusMethod_MetaData, ARRAY_COUNT(NewProp_FocusMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusSmoothingInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothFocusChanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugFocusPlaneColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDebugFocusPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingFocusSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualFocusDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusMethod_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraFocusSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraFocusSettings),
				alignof(FCameraFocusSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC() { return 2550884124U; }
class UScriptStruct* FCameraTrackingFocusSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraTrackingFocusSettings(FCameraTrackingFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraTrackingFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraTrackingFocusSettings")),new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Settings to control tracking-focus mode." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTrackingFocusPoint_MetaData[] = {
				{ "Category", "Tracking Focus" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "True to draw a debug representation of the tracked position." },
			};
#endif
			auto NewProp_bDrawDebugTrackingFocusPoint_SetBit = [](void* Obj){ ((FCameraTrackingFocusSettings*)Obj)->bDrawDebugTrackingFocusPoint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrackingFocusPoint = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDebugTrackingFocusPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraTrackingFocusSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDebugTrackingFocusPoint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDebugTrackingFocusPoint_MetaData, ARRAY_COUNT(NewProp_bDrawDebugTrackingFocusPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[] = {
				{ "Category", "Tracking Focus" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraTrackingFocusSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeOffset_MetaData, ARRAY_COUNT(NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[] = {
				{ "Category", "Tracking Focus" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Focus distance will be tied to this actor's location." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToTrack = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraTrackingFocusSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorToTrack_MetaData, ARRAY_COUNT(NewProp_ActorToTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDebugTrackingFocusPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToTrack,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraTrackingFocusSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraTrackingFocusSettings),
				alignof(FCameraTrackingFocusSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC() { return 1014077048U; }
class UScriptStruct* FNamedLensPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedLensPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedLensPreset(FNamedLensPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedLensPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedLensPreset")),new UScriptStruct::TCppStructOps<FNamedLensPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "A named bundle of lens settings used to implement lens presets." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedLensPreset>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LensSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedLensPreset, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(NewProp_LensSettings_MetaData, ARRAY_COUNT(NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Name for the preset." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedLensPreset, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LensSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedLensPreset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNamedLensPreset),
				alignof(FNamedLensPreset),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC() { return 576679678U; }
class UScriptStruct* FCameraLensSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLensSettings(FCameraLensSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLensSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLensSettings")),new UScriptStruct::TCppStructOps<FCameraLensSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFocusDistance_MetaData[] = {
				{ "Category", "Lens" },
				{ "ForceUnits", "mm" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Shortest distance this lens can focus on." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumFocusDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumFocusDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinimumFocusDistance), METADATA_PARAMS(NewProp_MinimumFocusDistance_MetaData, ARRAY_COUNT(NewProp_MinimumFocusDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[] = {
				{ "Category", "Lens" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFStop = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLensSettings, MaxFStop), METADATA_PARAMS(NewProp_MaxFStop_MetaData, ARRAY_COUNT(NewProp_MaxFStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFStop_MetaData[] = {
				{ "Category", "Lens" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFStop = { UE4CodeGen_Private::EPropertyClass::Float, "MinFStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinFStop), METADATA_PARAMS(NewProp_MinFStop_MetaData, ARRAY_COUNT(NewProp_MinFStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFocalLength_MetaData[] = {
				{ "Category", "Lens" },
				{ "ForceUnits", "mm" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Maximum focal length for this lens" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFocalLength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFocalLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLensSettings, MaxFocalLength), METADATA_PARAMS(NewProp_MaxFocalLength_MetaData, ARRAY_COUNT(NewProp_MaxFocalLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFocalLength_MetaData[] = {
				{ "Category", "Lens" },
				{ "ForceUnits", "mm" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Minimum focal length for this lens" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFocalLength = { UE4CodeGen_Private::EPropertyClass::Float, "MinFocalLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinFocalLength), METADATA_PARAMS(NewProp_MinFocalLength_MetaData, ARRAY_COUNT(NewProp_MinFocalLength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumFocusDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinFStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFocalLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinFocalLength,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraLensSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraLensSettings),
				alignof(FCameraLensSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC() { return 1768016229U; }
class UScriptStruct* FNamedFilmbackPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFilmbackPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedFilmbackPreset(FNamedFilmbackPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedFilmbackPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedFilmbackPreset")),new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "A named bundle of filmback settings used to implement filmback presets" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmbackSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedFilmbackPreset, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(NewProp_FilmbackSettings_MetaData, ARRAY_COUNT(NewProp_FilmbackSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Name for the preset." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedFilmbackPreset, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilmbackSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedFilmbackPreset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNamedFilmbackPreset),
				alignof(FNamedFilmbackPreset),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC() { return 170040254U; }
class UScriptStruct* FCameraFilmbackSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFilmbackSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFilmbackSettings(FCameraFilmbackSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFilmbackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFilmbackSettings")),new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "#note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorAspectRatio_MetaData[] = {
				{ "Category", "Filmback" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Read-only. Computed from Sensor dimensions." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "SensorAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200020015, 1, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorAspectRatio), METADATA_PARAMS(NewProp_SensorAspectRatio_MetaData, ARRAY_COUNT(NewProp_SensorAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[] = {
				{ "Category", "Filmback" },
				{ "ClampMin", "0.001" },
				{ "ForceUnits", "mm" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorHeight = { UE4CodeGen_Private::EPropertyClass::Float, "SensorHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorHeight), METADATA_PARAMS(NewProp_SensorHeight_MetaData, ARRAY_COUNT(NewProp_SensorHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[] = {
				{ "Category", "Filmback" },
				{ "ClampMin", "0.001" },
				{ "ForceUnits", "mm" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorWidth = { UE4CodeGen_Private::EPropertyClass::Float, "SensorWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorWidth), METADATA_PARAMS(NewProp_SensorWidth_MetaData, ARRAY_COUNT(NewProp_SensorWidth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SensorAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SensorHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SensorWidth,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraFilmbackSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraFilmbackSettings),
				alignof(FCameraFilmbackSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC() { return 1357848633U; }
	void UCineCameraComponent::StaticRegisterNativesUCineCameraComponent()
	{
		UClass* Class = UCineCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFilmbackPresetName", (Native)&UCineCameraComponent::execGetFilmbackPresetName },
			{ "GetHorizontalFieldOfView", (Native)&UCineCameraComponent::execGetHorizontalFieldOfView },
			{ "GetLensPresetName", (Native)&UCineCameraComponent::execGetLensPresetName },
			{ "GetVerticalFieldOfView", (Native)&UCineCameraComponent::execGetVerticalFieldOfView },
			{ "SetFilmbackPresetByName", (Native)&UCineCameraComponent::execSetFilmbackPresetByName },
			{ "SetLensPresetByName", (Native)&UCineCameraComponent::execSetLensPresetByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName()
	{
		struct CineCameraComponent_eventGetFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Returns the filmback name of the camera with the current settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "GetFilmbackPresetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CineCameraComponent_eventGetFilmbackPresetName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView()
	{
		struct CineCameraComponent_eventGetHorizontalFieldOfView_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Returns the horizonal FOV of the camera with current settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "GetHorizontalFieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CineCameraComponent_eventGetHorizontalFieldOfView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName()
	{
		struct CineCameraComponent_eventGetLensPresetName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Returns the lens name of the camera with the current settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "GetLensPresetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CineCameraComponent_eventGetLensPresetName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView()
	{
		struct CineCameraComponent_eventGetVerticalFieldOfView_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventGetVerticalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Returns the vertical FOV of the camera with current settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "GetVerticalFieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CineCameraComponent_eventGetVerticalFieldOfView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName()
	{
		struct CineCameraComponent_eventSetFilmbackPresetByName_Parms
		{
			FString InPresetName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPresetName = { UE4CodeGen_Private::EPropertyClass::Str, "InPresetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventSetFilmbackPresetByName_Parms, InPresetName), METADATA_PARAMS(NewProp_InPresetName_MetaData, ARRAY_COUNT(NewProp_InPresetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPresetName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Set the current preset settings by preset name." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "SetFilmbackPresetByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CineCameraComponent_eventSetFilmbackPresetByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName()
	{
		struct CineCameraComponent_eventSetLensPresetByName_Parms
		{
			FString InPresetName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPresetName = { UE4CodeGen_Private::EPropertyClass::Str, "InPresetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CineCameraComponent_eventSetLensPresetByName_Parms, InPresetName), METADATA_PARAMS(NewProp_InPresetName_MetaData, ARRAY_COUNT(NewProp_InPresetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPresetName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cine Camera" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Set the current lens settings by preset name." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, "SetLensPresetByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CineCameraComponent_eventSetLensPresetByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister()
	{
		return UCineCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCineCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCameraComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName, "GetFilmbackPresetName" }, // 3336106694
				{ &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 652073062
				{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName, "GetLensPresetName" }, // 2994169312
				{ &Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView, "GetVerticalFieldOfView" }, // 3594653141
				{ &Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName, "SetFilmbackPresetByName" }, // 508834242
				{ &Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName, "SetLensPresetByName" }, // 2659015083
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Camera" },
				{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
				{ "HideFunctions", "SetFieldOfView SetAspectRatio SetConstraintAspectRatio" },
				{ "IncludePath", "CineCameraComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "A specialized version of a camera component, geared toward cinematic usage." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFStop_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Default aperture (will be constrained by default lens)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFStop = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultLensFStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop), METADATA_PARAMS(NewProp_DefaultLensFStop_MetaData, ARRAY_COUNT(NewProp_DefaultLensFStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFocalLength_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Default focal length (will be constrained by default lens)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFocalLength = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultLensFocalLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength), METADATA_PARAMS(NewProp_DefaultLensFocalLength_MetaData, ARRAY_COUNT(NewProp_DefaultLensFocalLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensPresetName_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Name of the default lens preset" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultLensPresetName = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultLensPresetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName), METADATA_PARAMS(NewProp_DefaultLensPresetName_MetaData, ARRAY_COUNT(NewProp_DefaultLensPresetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPresetName_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Name of the default filmback preset" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPresetName = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultFilmbackPresetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName), METADATA_PARAMS(NewProp_DefaultFilmbackPresetName_MetaData, ARRAY_COUNT(NewProp_DefaultFilmbackPresetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensPresets_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "List of available lens presets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LensPresets = { UE4CodeGen_Private::EPropertyClass::Array, "LensPresets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, LensPresets), METADATA_PARAMS(NewProp_LensPresets_MetaData, ARRAY_COUNT(NewProp_LensPresets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensPresets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LensPresets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackPresets_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "List of available filmback presets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilmbackPresets = { UE4CodeGen_Private::EPropertyClass::Array, "FilmbackPresets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets), METADATA_PARAMS(NewProp_FilmbackPresets_MetaData, ARRAY_COUNT(NewProp_FilmbackPresets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackPresets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmbackPresets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMID_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Dynamic material instance for the debug focus plane visualization" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneMID = { UE4CodeGen_Private::EPropertyClass::Object, "DebugFocusPlaneMID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_DebugFocusPlaneMID_MetaData, ARRAY_COUNT(NewProp_DebugFocusPlaneMID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Component for the debug focus plane visualization" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "DebugFocusPlaneComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800082008, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DebugFocusPlaneComponent_MetaData, ARRAY_COUNT(NewProp_DebugFocusPlaneComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Material used for debug focus plane visualization" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DebugFocusPlaneMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_DebugFocusPlaneMaterial_MetaData, ARRAY_COUNT(NewProp_DebugFocusPlaneMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMesh_MetaData[] = {
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Mesh used for debug focus plane visualization" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DebugFocusPlaneMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_DebugFocusPlaneMesh_MetaData, ARRAY_COUNT(NewProp_DebugFocusPlaneMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHorizontalFOV_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Read-only. Control this value with CurrentFocalLength (and filmback settings)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHorizontalFOV = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentHorizontalFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, CurrentHorizontalFOV), METADATA_PARAMS(NewProp_CurrentHorizontalFOV_MetaData, ARRAY_COUNT(NewProp_CurrentHorizontalFOV_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusDistance_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Read-only. Control this value via FocusSettings." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFocusDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentFocusDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, CurrentFocusDistance), METADATA_PARAMS(NewProp_CurrentFocusDistance_MetaData, ARRAY_COUNT(NewProp_CurrentFocusDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentAperture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, CurrentAperture), METADATA_PARAMS(NewProp_CurrentAperture_MetaData, ARRAY_COUNT(NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Current focal length of the camera (i.e. controls FoV, zoom)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentFocalLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, CurrentFocalLength), METADATA_PARAMS(NewProp_CurrentFocalLength_MetaData, ARRAY_COUNT(NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Controls the camera's focus." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "FocusSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(NewProp_FocusSettings_MetaData, ARRAY_COUNT(NewProp_FocusSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Controls the camera's lens." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LensSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(NewProp_LensSettings_MetaData, ARRAY_COUNT(NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Controls the filmback of the camera." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmbackSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UCineCameraComponent, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(NewProp_FilmbackSettings_MetaData, ARRAY_COUNT(NewProp_FilmbackSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultLensFStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultLensFocalLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultLensPresetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFilmbackPresetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LensPresets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LensPresets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilmbackPresets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilmbackPresets_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugFocusPlaneMID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugFocusPlaneComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugFocusPlaneMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugFocusPlaneMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentHorizontalFOV,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentFocusDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentAperture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentFocalLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LensSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilmbackSettings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCineCameraComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCineCameraComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCineCameraComponent, 2051892647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCineCameraComponent(Z_Construct_UClass_UCineCameraComponent, &UCineCameraComponent::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("UCineCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
