// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CineCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	CINEMATICCAMERA_API UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FCameraLookatTrackingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLookatTrackingSettings(FCameraLookatTrackingSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLookatTrackingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLookatTrackingSettings")),new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "Settings to control the camera's lookat feature" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "True to allow user-defined roll, false otherwise." },
			};
#endif
			auto NewProp_bAllowRoll_SetBit = [](void* Obj){ ((FCameraLookatTrackingSettings*)Obj)->bAllowRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraLookatTrackingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowRoll_MetaData, ARRAY_COUNT(NewProp_bAllowRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeOffset_MetaData, ARRAY_COUNT(NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "If set, camera will track this actor's location" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToTrack = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorToTrack_MetaData, ARRAY_COUNT(NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTrackingInterpSpeed_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAtTrackingInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LookAtTrackingInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed), METADATA_PARAMS(NewProp_LookAtTrackingInterpSpeed_MetaData, ARRAY_COUNT(NewProp_LookAtTrackingInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLookAtTrackingPosition_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "True to draw a debug representation of the lookat location" },
			};
#endif
			auto NewProp_bDrawDebugLookAtTrackingPosition_SetBit = [](void* Obj){ ((FCameraLookatTrackingSettings*)Obj)->bDrawDebugLookAtTrackingPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLookAtTrackingPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDebugLookAtTrackingPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraLookatTrackingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDebugLookAtTrackingPosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDebugLookAtTrackingPosition_MetaData, ARRAY_COUNT(NewProp_bDrawDebugLookAtTrackingPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "Interp," },
			};
#endif
			auto NewProp_bEnableLookAtTracking_SetBit = [](void* Obj){ ((FCameraLookatTrackingSettings*)Obj)->bEnableLookAtTracking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLookAtTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FCameraLookatTrackingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLookAtTracking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLookAtTracking_MetaData, ARRAY_COUNT(NewProp_bEnableLookAtTracking_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAtTrackingInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDebugLookAtTrackingPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLookAtTracking,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraLookatTrackingSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraLookatTrackingSettings),
				alignof(FCameraLookatTrackingSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC() { return 1384217264U; }
	void ACineCameraActor::StaticRegisterNativesACineCameraActor()
	{
		UClass* Class = ACineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineCameraComponent", (Native)&ACineCameraActor::execGetCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent()
	{
		struct CineCameraActor_eventGetCineCameraComponent_Parms
		{
			UCineCameraComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CineCameraActor_eventGetCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ToolTip", "Returns the CineCameraComponent of this CineCamera" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraActor, "GetCineCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CineCameraActor_eventGetCineCameraComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACineCameraActor_NoRegister()
	{
		return ACineCameraActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACineCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACameraActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent, "GetCineCameraComponent" }, // 1965268608
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Common" },
				{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
				{ "IncludePath", "CineCameraActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "A CineCameraActor is a CameraActor specialized to work like a cinematic camera." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[] = {
				{ "Category", "Current Camera Settings" },
				{ "ModuleRelativePath", "Public/CineCameraActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LookatTrackingSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACineCameraActor, LookatTrackingSettings), Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, METADATA_PARAMS(NewProp_LookatTrackingSettings_MetaData, ARRAY_COUNT(NewProp_LookatTrackingSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookatTrackingSettings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACineCameraActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACineCameraActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ACineCameraActor, 4136866226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACineCameraActor(Z_Construct_UClass_ACineCameraActor, &ACineCameraActor::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACineCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
