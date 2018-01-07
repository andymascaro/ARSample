// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheComponent() {}
// Cross Module References
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop();
// End Cross Module References
class UScriptStruct* FTrackRenderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackRenderData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackRenderData(FTrackRenderData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("TrackRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackRenderData")),new UScriptStruct::TCppStructOps<FTrackRenderData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Stores the RenderData for each individual track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackRenderData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TrackRenderData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTrackRenderData),
				alignof(FTrackRenderData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC() { return 333707829U; }
	void UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent()
	{
		UClass* Class = UGeometryCacheComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlaybackSpeed", (Native)&UGeometryCacheComponent::execGetPlaybackSpeed },
			{ "GetStartTimeOffset", (Native)&UGeometryCacheComponent::execGetStartTimeOffset },
			{ "IsLooping", (Native)&UGeometryCacheComponent::execIsLooping },
			{ "IsPlaying", (Native)&UGeometryCacheComponent::execIsPlaying },
			{ "IsPlayingReversed", (Native)&UGeometryCacheComponent::execIsPlayingReversed },
			{ "Pause", (Native)&UGeometryCacheComponent::execPause },
			{ "Play", (Native)&UGeometryCacheComponent::execPlay },
			{ "PlayFromStart", (Native)&UGeometryCacheComponent::execPlayFromStart },
			{ "PlayReversed", (Native)&UGeometryCacheComponent::execPlayReversed },
			{ "PlayReversedFromEnd", (Native)&UGeometryCacheComponent::execPlayReversedFromEnd },
			{ "SetGeometryCache", (Native)&UGeometryCacheComponent::execSetGeometryCache },
			{ "SetLooping", (Native)&UGeometryCacheComponent::execSetLooping },
			{ "SetPlaybackSpeed", (Native)&UGeometryCacheComponent::execSetPlaybackSpeed },
			{ "SetStartTimeOffset", (Native)&UGeometryCacheComponent::execSetStartTimeOffset },
			{ "Stop", (Native)&UGeometryCacheComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed()
	{
		struct GeometryCacheComponent_eventGetPlaybackSpeed_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Get current playback speed for GeometryCache." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "GetPlaybackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheComponent_eventGetPlaybackSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset()
	{
		struct GeometryCacheComponent_eventGetStartTimeOffset_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetStartTimeOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Get current start time offset for GeometryCache." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "GetStartTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheComponent_eventGetStartTimeOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping()
	{
		struct GeometryCacheComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GeometryCacheComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GeometryCacheComponent_eventIsLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Get whether this GeometryCache is looping or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "IsLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheComponent_eventIsLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying()
	{
		struct GeometryCacheComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GeometryCacheComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GeometryCacheComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Get whether this GeometryCache is playing or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed()
	{
		struct GeometryCacheComponent_eventIsPlayingReversed_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GeometryCacheComponent_eventIsPlayingReversed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Get whether this GeometryCache is playing in reverse or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "IsPlayingReversed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Pause playback of GeometryCache" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "Pause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Start playback of GeometryCache" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Start playback of GeometryCache from the start" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "PlayFromStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Start playback of GeometryCache in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "PlayReversed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Start playback of GeometryCache from the end and play in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "PlayReversedFromEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache()
	{
		struct GeometryCacheComponent_eventSetGeometryCache_Parms
		{
			UGeometryCache* NewGeomCache;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GeometryCacheComponent_eventSetGeometryCache_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGeomCache = { UE4CodeGen_Private::EPropertyClass::Object, "NewGeomCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetGeometryCache_Parms, NewGeomCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewGeomCache,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Change the Geometry Cache used by this instance." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "SetGeometryCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping()
	{
		struct GeometryCacheComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewLooping_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_bNewLooping_SetBit = [](void* Obj){ ((GeometryCacheComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GeometryCacheComponent_eventSetLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNewLooping_MetaData, ARRAY_COUNT(NewProp_bNewLooping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewLooping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Set whether this GeometryCache is looping or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "SetLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GeometryCacheComponent_eventSetLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed()
	{
		struct GeometryCacheComponent_eventSetPlaybackSpeed_Parms
		{
			float NewPlaybackSpeed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlaybackSpeed_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewPlaybackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetPlaybackSpeed_Parms, NewPlaybackSpeed), METADATA_PARAMS(NewProp_NewPlaybackSpeed_MetaData, ARRAY_COUNT(NewProp_NewPlaybackSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlaybackSpeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Set new playback speed for GeometryCache." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "SetPlaybackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GeometryCacheComponent_eventSetPlaybackSpeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset()
	{
		struct GeometryCacheComponent_eventSetStartTimeOffset_Parms
		{
			float NewStartTimeOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStartTimeOffset_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStartTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NewStartTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetStartTimeOffset_Parms, NewStartTimeOffset), METADATA_PARAMS(NewProp_NewStartTimeOffset_MetaData, ARRAY_COUNT(NewProp_NewStartTimeOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewStartTimeOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Set current start time offset for GeometryCache." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "SetStartTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GeometryCacheComponent_eventSetStartTimeOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Stop playback of GeometryCache" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed, "GetPlaybackSpeed" }, // 1224749713
				{ &Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset, "GetStartTimeOffset" }, // 3735744671
				{ &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping, "IsLooping" }, // 3293106243
				{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying, "IsPlaying" }, // 435877037
				{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed, "IsPlayingReversed" }, // 4069236793
				{ &Z_Construct_UFunction_UGeometryCacheComponent_Pause, "Pause" }, // 838362959
				{ &Z_Construct_UFunction_UGeometryCacheComponent_Play, "Play" }, // 3187514771
				{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart, "PlayFromStart" }, // 3998894891
				{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed, "PlayReversed" }, // 2936341521
				{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd, "PlayReversedFromEnd" }, // 389258741
				{ &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache, "SetGeometryCache" }, // 93545812
				{ &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping, "SetLooping" }, // 2293122821
				{ &Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 1863813182
				{ &Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset, "SetStartTimeOffset" }, // 644771836
				{ &Z_Construct_UFunction_UGeometryCacheComponent_Stop, "Stop" }, // 3977876390
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering Common Experimental" },
				{ "DevelopmentStatus", "Experimental" },
				{ "HideCategories", "Object LOD Mobility Trigger" },
				{ "IncludePath", "GeometryCacheComponent.h" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime = { UE4CodeGen_Private::EPropertyClass::Float, "ElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime), METADATA_PARAMS(NewProp_ElapsedTime_MetaData, ARRAY_COUNT(NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTracks_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTracks = { UE4CodeGen_Private::EPropertyClass::Int, "NumTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, NumTracks), METADATA_PARAMS(NewProp_NumTracks_MetaData, ARRAY_COUNT(NewProp_NumTracks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ClampMax", "512.0" },
				{ "ClampMin", "-512.0" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "UIMax", "4.0" },
				{ "UIMin", "-4.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "PlaybackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080200000005, 1, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed), METADATA_PARAMS(NewProp_PlaybackSpeed_MetaData, ARRAY_COUNT(NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeOffset_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ClampMax", "14400.0" },
				{ "ClampMin", "-14400.0" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "UIMax", "14400.0" },
				{ "UIMin", "-14400.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080200000005, 1, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset), METADATA_PARAMS(NewProp_StartTimeOffset_MetaData, ARRAY_COUNT(NewProp_StartTimeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((UGeometryCacheComponent*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080200000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeometryCacheComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
			};
#endif
			auto NewProp_bRunning_SetBit = [](void* Obj){ ((UGeometryCacheComponent*)Obj)->bRunning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080200000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGeometryCacheComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunning_MetaData, ARRAY_COUNT(NewProp_bRunning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[] = {
				{ "Category", "GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
				{ "ToolTip", "Geometry Cache instance referenced by the component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCache = { UE4CodeGen_Private::EPropertyClass::Object, "GeometryCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(NewProp_GeometryCache_MetaData, ARRAY_COUNT(NewProp_GeometryCache_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElapsedTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaybackSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTimeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometryCache,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeometryCacheComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeometryCacheComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UGeometryCacheComponent, 2629194821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheComponent(Z_Construct_UClass_UGeometryCacheComponent, &UGeometryCacheComponent::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
