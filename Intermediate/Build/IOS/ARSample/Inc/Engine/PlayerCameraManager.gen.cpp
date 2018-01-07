// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/PlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraManager() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTViewTarget();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCacheEntry();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_PlayCameraAnim();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_PlayCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StartCameraFade();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraAnims();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraAnim();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraAnimInst();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraFade();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* EViewTargetBlendFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewTargetBlendFunction, Z_Construct_UPackage__Script_Engine(), TEXT("EViewTargetBlendFunction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewTargetBlendFunction(EViewTargetBlendFunction_StaticEnum, TEXT("/Script/Engine"), TEXT("EViewTargetBlendFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EViewTargetBlendFunction_CRC() { return 2504876746U; }
	UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewTargetBlendFunction"), 0, Get_Z_Construct_UEnum_Engine_EViewTargetBlendFunction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VTBlend_Linear", (int64)VTBlend_Linear },
				{ "VTBlend_Cubic", (int64)VTBlend_Cubic },
				{ "VTBlend_EaseIn", (int64)VTBlend_EaseIn },
				{ "VTBlend_EaseOut", (int64)VTBlend_EaseOut },
				{ "VTBlend_EaseInOut", (int64)VTBlend_EaseInOut },
				{ "VTBlend_MAX", (int64)VTBlend_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Options that define how to blend when changing view targets.\n@see FViewTargetTransitionParams, SetViewTarget" },
				{ "VTBlend_Cubic.ToolTip", "Camera has a slight ease in and ease out, but amount of ease cannot be tweaked." },
				{ "VTBlend_EaseIn.ToolTip", "Camera immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by BlendExp." },
				{ "VTBlend_EaseInOut.ToolTip", "Camera smoothly accelerates and decelerates.  Ease amount controlled by BlendExp." },
				{ "VTBlend_EaseOut.ToolTip", "Camera smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by BlendExp." },
				{ "VTBlend_Linear.ToolTip", "Camera does a simple linear interpolation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EViewTargetBlendFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EViewTargetBlendFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FViewTargetTransitionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FViewTargetTransitionParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewTargetTransitionParams, Z_Construct_UPackage__Script_Engine(), TEXT("ViewTargetTransitionParams"), sizeof(FViewTargetTransitionParams), Get_Z_Construct_UScriptStruct_FViewTargetTransitionParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FViewTargetTransitionParams(FViewTargetTransitionParams::StaticStruct, TEXT("/Script/Engine"), TEXT("ViewTargetTransitionParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFViewTargetTransitionParams
{
	FScriptStruct_Engine_StaticRegisterNativesFViewTargetTransitionParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ViewTargetTransitionParams")),new UScriptStruct::TCppStructOps<FViewTargetTransitionParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFViewTargetTransitionParams;
	UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FViewTargetTransitionParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ViewTargetTransitionParams"), sizeof(FViewTargetTransitionParams), Get_Z_Construct_UScriptStruct_FViewTargetTransitionParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "A set of parameters to describe how to transition between view targets." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewTargetTransitionParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockOutgoing_MetaData[] = {
				{ "Category", "ViewTargetTransitionParams" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "If true, lock outgoing viewtarget to last frame's camera POV for the remainder of the blend.\nThis is useful if you plan to teleport the old viewtarget, but don't want to affect the blend." },
			};
#endif
			auto NewProp_bLockOutgoing_SetBit = [](void* Obj){ ((FViewTargetTransitionParams*)Obj)->bLockOutgoing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockOutgoing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FViewTargetTransitionParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockOutgoing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockOutgoing_MetaData, ARRAY_COUNT(NewProp_bLockOutgoing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendExp_MetaData[] = {
				{ "Category", "ViewTargetTransitionParams" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Exponent, used by certain blend functions to control the shape of the curve." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendExp = { UE4CodeGen_Private::EPropertyClass::Float, "BlendExp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendExp), METADATA_PARAMS(NewProp_BlendExp_MetaData, ARRAY_COUNT(NewProp_BlendExp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[] = {
				{ "Category", "ViewTargetTransitionParams" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Function to apply to the blend parameter." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendFunction = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendFunction), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(NewProp_BlendFunction_MetaData, ARRAY_COUNT(NewProp_BlendFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
				{ "Category", "ViewTargetTransitionParams" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Total duration of blend to pending view target. 0 means no blending." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendTime), METADATA_PARAMS(NewProp_BlendTime_MetaData, ARRAY_COUNT(NewProp_BlendTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockOutgoing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendExp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ViewTargetTransitionParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FViewTargetTransitionParams),
				alignof(FViewTargetTransitionParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FViewTargetTransitionParams_CRC() { return 1428172274U; }
class UScriptStruct* FTViewTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTViewTarget_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTViewTarget, Z_Construct_UPackage__Script_Engine(), TEXT("TViewTarget"), sizeof(FTViewTarget), Get_Z_Construct_UScriptStruct_FTViewTarget_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTViewTarget(FTViewTarget::StaticStruct, TEXT("/Script/Engine"), TEXT("TViewTarget"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTViewTarget
{
	FScriptStruct_Engine_StaticRegisterNativesFTViewTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TViewTarget")),new UScriptStruct::TCppStructOps<FTViewTarget>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTViewTarget;
	UScriptStruct* Z_Construct_UScriptStruct_FTViewTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTViewTarget_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TViewTarget"), sizeof(FTViewTarget), Get_Z_Construct_UScriptStruct_FTViewTarget_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "A ViewTarget is the primary actor the camera is associated with." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTViewTarget>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
				{ "Category", "TViewTarget" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "PlayerState (used to follow same player through pawn transitions, etc., when spectating)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FTViewTarget, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_PlayerState_MetaData, ARRAY_COUNT(NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[] = {
				{ "Category", "TViewTarget" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Computed point of view" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV = { UE4CodeGen_Private::EPropertyClass::Struct, "POV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTViewTarget, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(NewProp_POV_MetaData, ARRAY_COUNT(NewProp_POV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "Category", "TViewTarget" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Target Actor used to compute POV" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTViewTarget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_POV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TViewTarget",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTViewTarget),
				alignof(FTViewTarget),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTViewTarget_CRC() { return 555314042U; }
class UScriptStruct* FCameraCacheEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraCacheEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraCacheEntry, Z_Construct_UPackage__Script_Engine(), TEXT("CameraCacheEntry"), sizeof(FCameraCacheEntry), Get_Z_Construct_UScriptStruct_FCameraCacheEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraCacheEntry(FCameraCacheEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraCacheEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraCacheEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraCacheEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraCacheEntry")),new UScriptStruct::TCppStructOps<FCameraCacheEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraCacheEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraCacheEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraCacheEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraCacheEntry"), sizeof(FCameraCacheEntry), Get_Z_Construct_UScriptStruct_FCameraCacheEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Cached camera POV info, stored as optimization so we only\nneed to do a full camera update once per tick." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraCacheEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Camera POV to cache." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV = { UE4CodeGen_Private::EPropertyClass::Struct, "POV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCameraCacheEntry, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(NewProp_POV_MetaData, ARRAY_COUNT(NewProp_POV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "World time this entry was created." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCameraCacheEntry, TimeStamp), METADATA_PARAMS(NewProp_TimeStamp_MetaData, ARRAY_COUNT(NewProp_TimeStamp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_POV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraCacheEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraCacheEntry),
				alignof(FCameraCacheEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraCacheEntry_CRC() { return 4272344385U; }
	static FName NAME_APlayerCameraManager_BlueprintUpdateCamera = FName(TEXT("BlueprintUpdateCamera"));
	bool APlayerCameraManager::BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV)
	{
		PlayerCameraManager_eventBlueprintUpdateCamera_Parms Parms;
		Parms.CameraTarget=CameraTarget;
		Parms.NewCameraLocation=NewCameraLocation;
		Parms.NewCameraRotation=NewCameraRotation;
		Parms.NewCameraFOV=NewCameraFOV;
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_BlueprintUpdateCamera),&Parms);
		NewCameraLocation=Parms.NewCameraLocation;
		NewCameraRotation=Parms.NewCameraRotation;
		NewCameraFOV=Parms.NewCameraFOV;
		return !!Parms.ReturnValue;
	}
	static FName NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd = FName(TEXT("OnPhotographyMultiPartCaptureEnd"));
	void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureStart = FName(TEXT("OnPhotographyMultiPartCaptureStart"));
	void APlayerCameraManager::OnPhotographyMultiPartCaptureStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureStart),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographySessionEnd = FName(TEXT("OnPhotographySessionEnd"));
	void APlayerCameraManager::OnPhotographySessionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographySessionEnd),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographySessionStart = FName(TEXT("OnPhotographySessionStart"));
	void APlayerCameraManager::OnPhotographySessionStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographySessionStart),NULL);
	}
	static FName NAME_APlayerCameraManager_PhotographyCameraModify = FName(TEXT("PhotographyCameraModify"));
	void APlayerCameraManager::PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation)
	{
		PlayerCameraManager_eventPhotographyCameraModify_Parms Parms;
		Parms.NewCameraLocation=NewCameraLocation;
		Parms.PreviousCameraLocation=PreviousCameraLocation;
		Parms.OriginalCameraLocation=OriginalCameraLocation;
		Parms.ResultCameraLocation=ResultCameraLocation;
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_PhotographyCameraModify),&Parms);
		ResultCameraLocation=Parms.ResultCameraLocation;
	}
	void APlayerCameraManager::StaticRegisterNativesAPlayerCameraManager()
	{
		UClass* Class = APlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraLensEffect", (Native)&APlayerCameraManager::execAddCameraLensEffect },
			{ "AddNewCameraModifier", (Native)&APlayerCameraManager::execAddNewCameraModifier },
			{ "ClearCameraLensEffects", (Native)&APlayerCameraManager::execClearCameraLensEffects },
			{ "FindCameraModifierByClass", (Native)&APlayerCameraManager::execFindCameraModifierByClass },
			{ "GetCameraLocation", (Native)&APlayerCameraManager::execGetCameraLocation },
			{ "GetCameraRotation", (Native)&APlayerCameraManager::execGetCameraRotation },
			{ "GetFOVAngle", (Native)&APlayerCameraManager::execGetFOVAngle },
			{ "GetOwningPlayerController", (Native)&APlayerCameraManager::execGetOwningPlayerController },
			{ "OnPhotographyMultiPartCaptureEnd", (Native)&APlayerCameraManager::execOnPhotographyMultiPartCaptureEnd },
			{ "OnPhotographyMultiPartCaptureStart", (Native)&APlayerCameraManager::execOnPhotographyMultiPartCaptureStart },
			{ "OnPhotographySessionEnd", (Native)&APlayerCameraManager::execOnPhotographySessionEnd },
			{ "OnPhotographySessionStart", (Native)&APlayerCameraManager::execOnPhotographySessionStart },
			{ "PhotographyCameraModify", (Native)&APlayerCameraManager::execPhotographyCameraModify },
			{ "PlayCameraAnim", (Native)&APlayerCameraManager::execPlayCameraAnim },
			{ "PlayCameraShake", (Native)&APlayerCameraManager::execPlayCameraShake },
			{ "RemoveCameraLensEffect", (Native)&APlayerCameraManager::execRemoveCameraLensEffect },
			{ "RemoveCameraModifier", (Native)&APlayerCameraManager::execRemoveCameraModifier },
			{ "SetManualCameraFade", (Native)&APlayerCameraManager::execSetManualCameraFade },
			{ "StartCameraFade", (Native)&APlayerCameraManager::execStartCameraFade },
			{ "StopAllCameraAnims", (Native)&APlayerCameraManager::execStopAllCameraAnims },
			{ "StopAllCameraShakes", (Native)&APlayerCameraManager::execStopAllCameraShakes },
			{ "StopAllInstancesOfCameraAnim", (Native)&APlayerCameraManager::execStopAllInstancesOfCameraAnim },
			{ "StopAllInstancesOfCameraShake", (Native)&APlayerCameraManager::execStopAllInstancesOfCameraShake },
			{ "StopCameraAnimInst", (Native)&APlayerCameraManager::execStopCameraAnimInst },
			{ "StopCameraFade", (Native)&APlayerCameraManager::execStopCameraFade },
			{ "StopCameraShake", (Native)&APlayerCameraManager::execStopCameraShake },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect()
	{
		struct PlayerCameraManager_eventAddCameraLensEffect_Parms
		{
			TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass;
			AEmitterCameraLensEffectBase* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddCameraLensEffect_Parms, ReturnValue), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass = { UE4CodeGen_Private::EPropertyClass::Class, "LensEffectEmitterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LensEffectEmitterClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Creates a camera lens effect of the given class on this camera.\n@param LensEffectEmitterClass - Class of lens effect emitter to create.\n@return Returns the new emitter actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "AddCameraLensEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventAddCameraLensEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier()
	{
		struct PlayerCameraManager_eventAddNewCameraModifier_Parms
		{
			TSubclassOf<UCameraModifier>  ModifierClass;
			UCameraModifier* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddNewCameraModifier_Parms, ReturnValue), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ModifierClass = { UE4CodeGen_Private::EPropertyClass::Class, "ModifierClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddNewCameraModifier_Parms, ModifierClass), Z_Construct_UClass_UCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Player" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Creates and initializes a new camera modifier of the specified class.\n@param ModifierClass - The class of camera modifier to create.\n@return Returns the newly created camera modifier." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "AddNewCameraModifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventAddNewCameraModifier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PlayerCameraManager_eventBlueprintUpdateCamera_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventBlueprintUpdateCamera_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCameraFOV = { UE4CodeGen_Private::EPropertyClass::Float, "NewCameraFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCameraRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewCameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CameraTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, CameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCameraFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCameraRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCameraLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.\nIf this function returns true, we will use the given returned values and skip further calculations to determine\nfinal camera POV." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "BlueprintUpdateCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20808, sizeof(PlayerCameraManager_eventBlueprintUpdateCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Removes all camera lens effects." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "ClearCameraLensEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass()
	{
		struct PlayerCameraManager_eventFindCameraModifierByClass_Parms
		{
			TSubclassOf<UCameraModifier>  ModifierClass;
			UCameraModifier* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventFindCameraModifierByClass_Parms, ReturnValue), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ModifierClass = { UE4CodeGen_Private::EPropertyClass::Class, "ModifierClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventFindCameraModifierByClass_Parms, ModifierClass), Z_Construct_UClass_UCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Player" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Returns camera modifier for this camera of the given class, if it exists.\nExact class match only. If there are multiple modifiers of the same class, the first one is returned." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "FindCameraModifierByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventFindCameraModifierByClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation()
	{
		struct PlayerCameraManager_eventGetCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "@return Returns camera's current location." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "GetCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PlayerCameraManager_eventGetCameraLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation()
	{
		struct PlayerCameraManager_eventGetCameraRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "@return Returns camera's current rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "GetCameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PlayerCameraManager_eventGetCameraRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle()
	{
		struct PlayerCameraManager_eventGetFOVAngle_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetFOVAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "@return Returns the camera's current full FOV angle, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "GetFOVAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(PlayerCameraManager_eventGetFOVAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController()
	{
		struct PlayerCameraManager_eventGetOwningPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Player" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Returns the PlayerController that owns this camera." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "GetOwningPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(PlayerCameraManager_eventGetOwningPlayerController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Photography" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Event triggered upon the end of a multi-part photograph capture, when manual\nfree-roaming photographic camera control is about to be returned to the user.\nHere you may re-enable whatever was turned off within\nOnPhotographyMultiPartCaptureStart." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "OnPhotographyMultiPartCaptureEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C08, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Photography" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Event triggered upon the start of a multi-part photograph capture (i.e. a\nstereoscopic or 360-degree shot).  This is an ideal time to turn off\nrendering effects that tile badly (UI, subtitles, vignette, very aggressive\nbloom, etc; most of these are automatically disabled when\nr.Photography.AutoPostprocess is 1)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "OnPhotographyMultiPartCaptureStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C08, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Photography" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Event triggered upon leaving Photography mode (after unpausing, if\nr.Photography.AutoPause is 1)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "OnPhotographySessionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C08, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Photography" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Event triggered upon entering Photography mode (before pausing, if\nr.Photography.AutoPause is 1)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "OnPhotographySessionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C08, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, ResultCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, OriginalCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OriginalCameraLocation_MetaData, ARRAY_COUNT(NewProp_OriginalCameraLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCameraLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, PreviousCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousCameraLocation_MetaData, ARRAY_COUNT(NewProp_PreviousCameraLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCameraLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NewCameraLocation_MetaData, ARRAY_COUNT(NewProp_NewCameraLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultCameraLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalCameraLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousCameraLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCameraLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Photography" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Implementable blueprint hook to allow a PlayerCameraManager subclass to\nconstrain or otherwise modify the camera during free-camera photography.\nFor example, a blueprint may wish to limit the distance from the camera's\noriginal point, or forbid the camera from passing through walls.\nNewCameraLocation contains the proposed new camera location.\nPreviousCameraLocation contains the camera location in the previous frame.\nOriginalCameraLocation contains the camera location before the game was put\ninto photography mode.\nReturn ResultCameraLocation as modified according to your constraints." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "PhotographyCameraModify", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C08, sizeof(PlayerCameraManager_eventPhotographyCameraModify_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_PlayCameraAnim()
	{
		struct PlayerCameraManager_eventPlayCameraAnim_Parms
		{
			UCameraAnim* Anim;
			float Rate;
			float Scale;
			float BlendInTime;
			float BlendOutTime;
			bool bLoop;
			bool bRandomStartTime;
			float Duration;
			TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
			FRotator UserPlaySpaceRot;
			UCameraAnimInst* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, ReturnValue), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot = { UE4CodeGen_Private::EPropertyClass::Struct, "UserPlaySpaceRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "PlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRandomStartTime_SetBit = [](void* Obj){ ((PlayerCameraManager_eventPlayCameraAnim_Parms*)Obj)->bRandomStartTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventPlayCameraAnim_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandomStartTime_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((PlayerCameraManager_eventPlayCameraAnim_Parms*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventPlayCameraAnim_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate = { UE4CodeGen_Private::EPropertyClass::Float, "Rate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "Anim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraAnim_Parms, Anim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserPlaySpaceRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandomStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Anim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Animation" },
				{ "CPP_Default_BlendInTime", "0.000000" },
				{ "CPP_Default_BlendOutTime", "0.000000" },
				{ "CPP_Default_bLoop", "false" },
				{ "CPP_Default_bRandomStartTime", "false" },
				{ "CPP_Default_Duration", "0.000000" },
				{ "CPP_Default_PlaySpace", "CameraLocal" },
				{ "CPP_Default_Rate", "1.000000" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Play the indicated CameraAnim on this camera.\n\n@param Anim The animation that should play on this instance.\n@param Rate                          How fast to play the animation. 1.0 is normal.\n@param Scale                         How \"intense\" to play the animation. 1.0 is normal.\n@param BlendInTime           Time to linearly ramp in.\n@param BlendOutTime          Time to linearly ramp out.\n@param bLoop                         True to loop the animation if it hits the end.\n@param bRandomStartTime      Whether or not to choose a random time to start playing. Useful with bLoop=true and a duration to randomize things like shakes.\n@param Duration                      Optional total playtime for this animation, including blends. 0 means to use animations natural duration, or infinite if looping.\n@param PlaySpace                     Which space to play the animation in.\n@param UserPlaySpaceRot  Custom play space, used when PlaySpace is UserDefined.\n@return The CameraAnim instance, which can be stored to manipulate/stop the anim after the fact." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "PlayCameraAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PlayerCameraManager_eventPlayCameraAnim_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_PlayCameraShake()
	{
		struct PlayerCameraManager_eventPlayCameraShake_Parms
		{
			TSubclassOf<UCameraShake>  ShakeClass;
			float Scale;
			TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
			FRotator UserPlaySpaceRot;
			UCameraShake* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraShake_Parms, ReturnValue), Z_Construct_UClass_UCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot = { UE4CodeGen_Private::EPropertyClass::Struct, "UserPlaySpaceRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "PlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass = { UE4CodeGen_Private::EPropertyClass::Class, "ShakeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPlayCameraShake_Parms, ShakeClass), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserPlaySpaceRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Shakes" },
				{ "CPP_Default_PlaySpace", "CameraLocal" },
				{ "CPP_Default_Scale", "1.000000" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Plays a camera shake on this camera.\n@param Shake - The class of camera shake to play.\n@param Scale - Scalar defining how \"intense\" to play the shake. 1.0 is normal (as authored).\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims)\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == CAPS_UserDefined." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "PlayCameraShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PlayerCameraManager_eventPlayCameraShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect()
	{
		struct PlayerCameraManager_eventRemoveCameraLensEffect_Parms
		{
			AEmitterCameraLensEffectBase* Emitter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Emitter = { UE4CodeGen_Private::EPropertyClass::Object, "Emitter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventRemoveCameraLensEffect_Parms, Emitter), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Emitter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Removes the given lens effect from the camera.\n@param Emitter - the emitter actor to remove from the camera" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "RemoveCameraLensEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventRemoveCameraLensEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier()
	{
		struct PlayerCameraManager_eventRemoveCameraModifier_Parms
		{
			UCameraModifier* ModifierToRemove;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PlayerCameraManager_eventRemoveCameraModifier_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventRemoveCameraModifier_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierToRemove = { UE4CodeGen_Private::EPropertyClass::Object, "ModifierToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventRemoveCameraModifier_Parms, ModifierToRemove), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierToRemove,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Player" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Removes the given camera modifier from this camera (if it's on the camera in the first place) and discards it.\n@return True if successfully removed, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "RemoveCameraModifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventRemoveCameraModifier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade()
	{
		struct PlayerCameraManager_eventSetManualCameraFade_Parms
		{
			float InFadeAmount;
			FLinearColor Color;
			bool bInFadeAudio;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInFadeAudio_SetBit = [](void* Obj){ ((PlayerCameraManager_eventSetManualCameraFade_Parms*)Obj)->bInFadeAudio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInFadeAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bInFadeAudio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventSetManualCameraFade_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInFadeAudio_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventSetManualCameraFade_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFadeAmount = { UE4CodeGen_Private::EPropertyClass::Float, "InFadeAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventSetManualCameraFade_Parms, InFadeAmount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInFadeAudio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFadeAmount,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Fades" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Turns on camera fading at the given opacity. Does not auto-animate, allowing user to animate themselves.\nCall StopCameraFade to turn fading back off." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "SetManualCameraFade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PlayerCameraManager_eventSetManualCameraFade_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StartCameraFade()
	{
		struct PlayerCameraManager_eventStartCameraFade_Parms
		{
			float FromAlpha;
			float ToAlpha;
			float Duration;
			FLinearColor Color;
			bool bShouldFadeAudio;
			bool bHoldWhenFinished;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bHoldWhenFinished_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStartCameraFade_Parms*)Obj)->bHoldWhenFinished = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoldWhenFinished = { UE4CodeGen_Private::EPropertyClass::Bool, "bHoldWhenFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStartCameraFade_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHoldWhenFinished_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShouldFadeAudio_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStartCameraFade_Parms*)Obj)->bShouldFadeAudio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFadeAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldFadeAudio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStartCameraFade_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldFadeAudio_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ToAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, ToAlpha), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FromAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "FromAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, FromAlpha), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHoldWhenFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldFadeAudio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FromAlpha,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Fades" },
				{ "CPP_Default_bHoldWhenFinished", "false" },
				{ "CPP_Default_bShouldFadeAudio", "false" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Does a camera fade to/from a solid color.  Animates automatically.\n@param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.\n@param ToAlpha - Alpha at which to finish the fade.\n@param Duration - How long the fade should take, in seconds.\n@param Color - Color to fade to/from.\n@param bShouldFadeAudio - True to fade audio volume along with the alpha of the solid color.\n@param bHoldWhenFinished - True for fade to hold at the ToAlpha until explicitly stopped (e.g. with StopCameraFade)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StartCameraFade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PlayerCameraManager_eventStartCameraFade_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraAnims()
	{
		struct PlayerCameraManager_eventStopAllCameraAnims_Parms
		{
			bool bImmediate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediate_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopAllCameraAnims_Parms*)Obj)->bImmediate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopAllCameraAnims_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Animation" },
				{ "CPP_Default_bImmediate", "false" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stop playing all CameraAnims on this CameraManager.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopAllCameraAnims", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopAllCameraAnims_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes()
	{
		struct PlayerCameraManager_eventStopAllCameraShakes_Parms
		{
			bool bImmediately;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediately_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopAllCameraShakes_Parms*)Obj)->bImmediately = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediately", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopAllCameraShakes_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediately_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediately,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Shakes" },
				{ "CPP_Default_bImmediately", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stops all active camera shakes on this camera." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopAllCameraShakes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopAllCameraShakes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraAnim()
	{
		struct PlayerCameraManager_eventStopAllInstancesOfCameraAnim_Parms
		{
			UCameraAnim* Anim;
			bool bImmediate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediate_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopAllInstancesOfCameraAnim_Parms*)Obj)->bImmediate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraAnim_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "Anim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllInstancesOfCameraAnim_Parms, Anim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Anim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Animation" },
				{ "CPP_Default_bImmediate", "false" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stop playing all instances of the indicated CameraAnim.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopAllInstancesOfCameraAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraAnim_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake()
	{
		struct PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms
		{
			TSubclassOf<UCameraShake>  Shake;
			bool bImmediately;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediately_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms*)Obj)->bImmediately = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediately", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediately_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shake = { UE4CodeGen_Private::EPropertyClass::Class, "Shake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms, Shake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediately,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shake,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Shakes" },
				{ "CPP_Default_bImmediately", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stops playing CameraShake of the given class." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopAllInstancesOfCameraShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraAnimInst()
	{
		struct PlayerCameraManager_eventStopCameraAnimInst_Parms
		{
			UCameraAnimInst* AnimInst;
			bool bImmediate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediate_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopCameraAnimInst_Parms*)Obj)->bImmediate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopCameraAnimInst_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInst = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopCameraAnimInst_Parms, AnimInst), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInst,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Animation" },
				{ "CPP_Default_bImmediate", "false" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stops the given CameraAnimInst from playing.  The given pointer should be considered invalid after this.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopCameraAnimInst", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopCameraAnimInst_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Fades" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Stops camera fading." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopCameraFade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraShake()
	{
		struct PlayerCameraManager_eventStopCameraShake_Parms
		{
			UCameraShake* ShakeInstance;
			bool bImmediately;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bImmediately_SetBit = [](void* Obj){ ((PlayerCameraManager_eventStopCameraShake_Parms*)Obj)->bImmediately = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediately", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlayerCameraManager_eventStopCameraShake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImmediately_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShakeInstance = { UE4CodeGen_Private::EPropertyClass::Object, "ShakeInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopCameraShake_Parms, ShakeInstance), Z_Construct_UClass_UCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImmediately,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera Shakes" },
				{ "CPP_Default_bImmediately", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Immediately stops the given shake instance and invalidates it." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, "StopCameraShake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerCameraManager_eventStopCameraShake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister()
	{
		return APlayerCameraManager::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect, "AddCameraLensEffect" }, // 753109994
				{ &Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier, "AddNewCameraModifier" }, // 4135283930
				{ &Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera, "BlueprintUpdateCamera" }, // 1255141489
				{ &Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects, "ClearCameraLensEffects" }, // 3962017619
				{ &Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass, "FindCameraModifierByClass" }, // 391130261
				{ &Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation, "GetCameraLocation" }, // 96452645
				{ &Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation, "GetCameraRotation" }, // 640798158
				{ &Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle, "GetFOVAngle" }, // 1864207423
				{ &Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController, "GetOwningPlayerController" }, // 3538600933
				{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd, "OnPhotographyMultiPartCaptureEnd" }, // 329485461
				{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart, "OnPhotographyMultiPartCaptureStart" }, // 2720350146
				{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd, "OnPhotographySessionEnd" }, // 1896524778
				{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart, "OnPhotographySessionStart" }, // 3159268786
				{ &Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify, "PhotographyCameraModify" }, // 2382253817
				{ &Z_Construct_UFunction_APlayerCameraManager_PlayCameraAnim, "PlayCameraAnim" }, // 4274338556
				{ &Z_Construct_UFunction_APlayerCameraManager_PlayCameraShake, "PlayCameraShake" }, // 1074324819
				{ &Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect, "RemoveCameraLensEffect" }, // 946703657
				{ &Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier, "RemoveCameraModifier" }, // 96670602
				{ &Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade, "SetManualCameraFade" }, // 1762653032
				{ &Z_Construct_UFunction_APlayerCameraManager_StartCameraFade, "StartCameraFade" }, // 3411388821
				{ &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraAnims, "StopAllCameraAnims" }, // 18806429
				{ &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes, "StopAllCameraShakes" }, // 1015692379
				{ &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraAnim, "StopAllInstancesOfCameraAnim" }, // 280232363
				{ &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake, "StopAllInstancesOfCameraShake" }, // 2699319392
				{ &Z_Construct_UFunction_APlayerCameraManager_StopCameraAnimInst, "StopCameraAnimInst" }, // 2848731629
				{ &Z_Construct_UFunction_APlayerCameraManager_StopCameraFade, "StopCameraFade" }, // 1263069960
				{ &Z_Construct_UFunction_APlayerCameraManager_StopCameraShake, "StopCameraShake" }, // 1371450577
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Camera/PlayerCameraManager.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "A PlayerCameraManager is responsible for managing the camera for a particular\nplayer. It defines the final view properties used by other systems (e.g. the renderer),\nmeaning you can think of it as your virtual eyeball in the world. It can compute the\nfinal camera properties directly, or it can arbitrate/blend between other objects or\nactors that influence the camera (e.g. blending from one CameraActor to another).\n\nThe PlayerCameraManagers primary external responsibility is to reliably respond to\nvarious Get*() functions, such as GetCameraViewPoint. Most everything else is\nimplementation detail and overrideable by user projects.\n\nBy default, a PlayerCameraManager maintains a \"view target\", which is the primary actor\nthe camera is associated with. It can also apply various \"post\" effects to the final\nview state, such as camera animations, shakes, post-process effects or special\neffects such as dirt on the lens.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Camera/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRollMax_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Maximum view roll, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewRollMax = { UE4CodeGen_Private::EPropertyClass::Float, "ViewRollMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewRollMax), METADATA_PARAMS(NewProp_ViewRollMax_MetaData, ARRAY_COUNT(NewProp_ViewRollMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRollMin_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Minimum view roll, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewRollMin = { UE4CodeGen_Private::EPropertyClass::Float, "ViewRollMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewRollMin), METADATA_PARAMS(NewProp_ViewRollMin_MetaData, ARRAY_COUNT(NewProp_ViewRollMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewYawMax_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Maximum view yaw, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewYawMax = { UE4CodeGen_Private::EPropertyClass::Float, "ViewYawMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewYawMax), METADATA_PARAMS(NewProp_ViewYawMax_MetaData, ARRAY_COUNT(NewProp_ViewYawMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewYawMin_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Minimum view yaw, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewYawMin = { UE4CodeGen_Private::EPropertyClass::Float, "ViewYawMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewYawMin), METADATA_PARAMS(NewProp_ViewYawMin_MetaData, ARRAY_COUNT(NewProp_ViewYawMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Maximum view pitch, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax = { UE4CodeGen_Private::EPropertyClass::Float, "ViewPitchMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewPitchMax), METADATA_PARAMS(NewProp_ViewPitchMax_MetaData, ARRAY_COUNT(NewProp_ViewPitchMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Minimum view pitch, in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin = { UE4CodeGen_Private::EPropertyClass::Float, "ViewPitchMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewPitchMin), METADATA_PARAMS(NewProp_ViewPitchMin_MetaData, ARRAY_COUNT(NewProp_ViewPitchMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameCameraCutThisFrame_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false every frame.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur)." },
			};
#endif
			auto NewProp_bGameCameraCutThisFrame_SetBit = [](void* Obj){ ((APlayerCameraManager*)Obj)->bGameCameraCutThisFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameCameraCutThisFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bGameCameraCutThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerCameraManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGameCameraCutThisFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGameCameraCutThisFrame_MetaData, ARRAY_COUNT(NewProp_bGameCameraCutThisFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClientSideCameraUpdates_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "True if server will use camera positions replicated from the client instead of calculating them locally." },
			};
#endif
			auto NewProp_bUseClientSideCameraUpdates_SetBit = [](void* Obj){ ((APlayerCameraManager*)Obj)->bUseClientSideCameraUpdates = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClientSideCameraUpdates = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseClientSideCameraUpdates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerCameraManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseClientSideCameraUpdates_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseClientSideCameraUpdates_MetaData, ARRAY_COUNT(NewProp_bUseClientSideCameraUpdates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultConstrainAspectRatio_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "True if black bars should be added if the destination view has a different aspect ratio (only used when a view target doesn't specify whether or not to constrain the aspect ratio; most of the time the value from a camera component is used instead)" },
			};
#endif
			auto NewProp_bDefaultConstrainAspectRatio_SetBit = [](void* Obj){ ((APlayerCameraManager*)Obj)->bDefaultConstrainAspectRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultConstrainAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultConstrainAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerCameraManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultConstrainAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultConstrainAspectRatio_MetaData, ARRAY_COUNT(NewProp_bDefaultConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOrthographic_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "True when this camera should use an orthographic perspective instead of FOV" },
			};
#endif
			auto NewProp_bIsOrthographic_SetBit = [](void* Obj){ ((APlayerCameraManager*)Obj)->bIsOrthographic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOrthographic = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOrthographic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerCameraManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsOrthographic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsOrthographic_MetaData, ARRAY_COUNT(NewProp_bIsOrthographic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCameraActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Internal. Receives the output of individual camera animations." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimCameraActor = { UE4CodeGen_Private::EPropertyClass::Object, "AnimCameraActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, AnimCameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_AnimCameraActor_MetaData, ARRAY_COUNT(NewProp_AnimCameraActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAnims_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Array of camera anim instances that are not playing and available to be used." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FreeAnims = { UE4CodeGen_Private::EPropertyClass::Array, "FreeAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, FreeAnims), METADATA_PARAMS(NewProp_FreeAnims_MetaData, ARRAY_COUNT(NewProp_FreeAnims_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FreeAnims_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FreeAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAnims_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Array of camera anim instances that are currently playing and in-use" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAnims = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ActiveAnims), METADATA_PARAMS(NewProp_ActiveAnims_MetaData, ARRAY_COUNT(NewProp_ActiveAnims_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveAnims_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveAnims", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Internal list of active post process effects. Parallel array to PostProcessBlendCacheWeights." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostProcessBlendCache = { UE4CodeGen_Private::EPropertyClass::Array, "PostProcessBlendCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, PostProcessBlendCache), METADATA_PARAMS(NewProp_PostProcessBlendCache_MetaData, ARRAY_COUNT(NewProp_PostProcessBlendCache_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessBlendCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessBlendCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstPool_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Internal pool of camera anim instance objects available for playing camera animations. Defines the max number of camera anims that can play simultaneously." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstPool = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstPool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, CPP_ARRAY_DIM(AnimInstPool, APlayerCameraManager), nullptr, STRUCT_OFFSET(APlayerCameraManager, AnimInstPool), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(NewProp_AnimInstPool_MetaData, ARRAY_COUNT(NewProp_AnimInstPool_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCameraShakeMod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Cached ref to modifier for code-driven screen shakes" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedCameraShakeMod = { UE4CodeGen_Private::EPropertyClass::Object, "CachedCameraShakeMod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, CachedCameraShakeMod), Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister, METADATA_PARAMS(NewProp_CachedCameraShakeMod_MetaData, ARRAY_COUNT(NewProp_CachedCameraShakeMod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLensEffects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "CameraBlood emitter attached to this camera" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraLensEffects = { UE4CodeGen_Private::EPropertyClass::Array, "CameraLensEffects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, CameraLensEffects), METADATA_PARAMS(NewProp_CameraLensEffects_MetaData, ARRAY_COUNT(NewProp_CameraLensEffects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraLensEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CameraLensEffects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetOffset_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Offset to view target (used in certain CameraStyles)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewTargetOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewTargetOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ViewTargetOffset_MetaData, ARRAY_COUNT(NewProp_ViewTargetOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeCamOffset_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Offset to Z free camera position (used in certain CameraStyles)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeCamOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "FreeCamOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, FreeCamOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FreeCamOffset_MetaData, ARRAY_COUNT(NewProp_FreeCamOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeCamDistance_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Distance to place free camera from view target (used in certain CameraStyles)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreeCamDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FreeCamDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, FreeCamDistance), METADATA_PARAMS(NewProp_FreeCamDistance_MetaData, ARRAY_COUNT(NewProp_FreeCamDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultModifiers_MetaData[] = {
				{ "Category", "CameraModifier" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "List of modifiers to create by default for this camera" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultModifiers = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultModifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultModifiers), METADATA_PARAMS(NewProp_DefaultModifiers_MetaData, ARRAY_COUNT(NewProp_DefaultModifiers_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultModifiers_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultModifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "List of active camera modifier instances that have a chance to update the final camera POV" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifierList = { UE4CodeGen_Private::EPropertyClass::Array, "ModifierList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ModifierList), METADATA_PARAMS(NewProp_ModifierList_MetaData, ARRAY_COUNT(NewProp_ModifierList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifierList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ModifierList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingViewTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Pending view target for blending" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingViewTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "PendingViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, PendingViewTarget), Z_Construct_UScriptStruct_FTViewTarget, METADATA_PARAMS(NewProp_PendingViewTarget_MetaData, ARRAY_COUNT(NewProp_PendingViewTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Current ViewTarget" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewTarget), Z_Construct_UScriptStruct_FTViewTarget, METADATA_PARAMS(NewProp_ViewTarget_MetaData, ARRAY_COUNT(NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrameCameraCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Cached camera properties, one frame old." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastFrameCameraCache = { UE4CodeGen_Private::EPropertyClass::Struct, "LastFrameCameraCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, LastFrameCameraCache), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(NewProp_LastFrameCameraCache_MetaData, ARRAY_COUNT(NewProp_LastFrameCameraCache_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Cached camera properties." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCache = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, CameraCache), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(NewProp_CameraCache_MetaData, ARRAY_COUNT(NewProp_CameraCache_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAspectRatio_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "EditCondition", "bDefaultConstrainAspectRatio" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Default aspect ratio (used when a view target override the aspect ratio and bConstrainAspectRatio is set; most of the time the value from a camera component will be used instead)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultAspectRatio), METADATA_PARAMS(NewProp_DefaultAspectRatio_MetaData, ARRAY_COUNT(NewProp_DefaultAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOrthoWidth_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "The default desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultOrthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultOrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultOrthoWidth), METADATA_PARAMS(NewProp_DefaultOrthoWidth_MetaData, ARRAY_COUNT(NewProp_DefaultOrthoWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
				{ "Category", "PlayerCameraManager" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "FOV to use by default." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultFOV), METADATA_PARAMS(NewProp_DefaultFOV_MetaData, ARRAY_COUNT(NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "PlayerCameraManager" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "Dummy component we can use to attach things to the camera." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TransformComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_TransformComponent_MetaData, ARRAY_COUNT(NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
				{ "ToolTip", "PlayerController that owns this Camera actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PCOwner = { UE4CodeGen_Private::EPropertyClass::Object, "PCOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APlayerCameraManager, PCOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_PCOwner_MetaData, ARRAY_COUNT(NewProp_PCOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewRollMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewRollMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewYawMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewYawMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewPitchMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewPitchMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGameCameraCutThisFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseClientSideCameraUpdates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultConstrainAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsOrthographic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimCameraActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreeAnims,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreeAnims_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveAnims,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveAnims_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendCache_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstPool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCameraShakeMod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraLensEffects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraLensEffects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewTargetOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreeCamOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreeCamDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultModifiers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultModifiers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingViewTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastFrameCameraCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultOrthoWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PCOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerCameraManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerCameraManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(APlayerCameraManager, 3701197859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraManager(Z_Construct_UClass_APlayerCameraManager, &APlayerCameraManager::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
