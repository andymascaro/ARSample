// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelStreaming.h"
#include "Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreaming() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_CreateInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelVisible();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "LevelStreamingVisibilityStatus__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Delegate signatures" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "LevelStreamingLoadedStatus__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void ULevelStreaming::StaticRegisterNativesULevelStreaming()
	{
		UClass* Class = ULevelStreaming::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstance", (Native)&ULevelStreaming::execCreateInstance },
			{ "GetLevelScriptActor", (Native)&ULevelStreaming::execGetLevelScriptActor },
			{ "GetWorldAssetPackageFName", (Native)&ULevelStreaming::execGetWorldAssetPackageFName },
			{ "IsLevelLoaded", (Native)&ULevelStreaming::execIsLevelLoaded },
			{ "IsLevelVisible", (Native)&ULevelStreaming::execIsLevelVisible },
			{ "IsStreamingStatePending", (Native)&ULevelStreaming::execIsStreamingStatePending },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_CreateInstance()
	{
		struct LevelStreaming_eventCreateInstance_Parms
		{
			FString UniqueInstanceName;
			ULevelStreaming* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueInstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "UniqueInstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, UniqueInstanceName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueInstanceName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Creates a new instance of this streaming level with a provided unique instance name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "CreateInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelStreaming_eventCreateInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor()
	{
		struct LevelStreaming_eventGetLevelScriptActor_Parms
		{
			ALevelScriptActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetLevelScriptActor_Parms, ReturnValue), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Returns the Level Script Actor of the level if the level is loaded and valid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "GetLevelScriptActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020403, sizeof(LevelStreaming_eventGetLevelScriptActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName()
	{
		struct LevelStreaming_eventGetWorldAssetPackageFName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetWorldAssetPackageFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Gets the package name for the world asset referred to by this level streaming as an FName" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "GetWorldAssetPackageFName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(LevelStreaming_eventGetWorldAssetPackageFName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded()
	{
		struct LevelStreaming_eventIsLevelLoaded_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LevelStreaming_eventIsLevelLoaded_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsLevelLoaded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Returns whether streaming level is loaded" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsLevelLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(LevelStreaming_eventIsLevelLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelVisible()
	{
		struct LevelStreaming_eventIsLevelVisible_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LevelStreaming_eventIsLevelVisible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsLevelVisible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Returns whether streaming level is visible" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsLevelVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(LevelStreaming_eventIsLevelVisible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending()
	{
		struct LevelStreaming_eventIsStreamingStatePending_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LevelStreaming_eventIsStreamingStatePending_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsStreamingStatePending_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Returns whether level has streaming state change pending" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsStreamingStatePending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(LevelStreaming_eventIsStreamingStatePending_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreaming_NoRegister()
	{
		return ULevelStreaming::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelStreaming()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULevelStreaming_CreateInstance, "CreateInstance" }, // 1879722504
				{ &Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor, "GetLevelScriptActor" }, // 2329961346
				{ &Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName, "GetWorldAssetPackageFName" }, // 182401113
				{ &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded, "IsLevelLoaded" }, // 2165210977
				{ &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible, "IsLevelVisible" }, // 3331933999
				{ &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending, "IsStreamingStatePending" }, // 828776908
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/LevelStreaming.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Abstract base class of container object encapsulating data required for streaming and providing\ninterface for when a level should be streamed in and out of memory." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "The folder path for this level within the world browser. This is only available in editor builds.\n              A NONE path indicates that it exists at the root. It is '/' separated." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderPath = { UE4CodeGen_Private::EPropertyClass::Name, "FolderPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, FolderPath), METADATA_PARAMS(NewProp_FolderPath_MetaData, ARRAY_COUNT(NewProp_FolderPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingUnloadLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Pointer to a Level object that was previously active and was replaced with a new LoadedLevel (for LOD switching)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingUnloadLevel = { UE4CodeGen_Private::EPropertyClass::Object, "PendingUnloadLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PendingUnloadLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(NewProp_PendingUnloadLevel_MetaData, ARRAY_COUNT(NewProp_PendingUnloadLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Pointer to Level object if currently loaded/ streamed in." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedLevel = { UE4CodeGen_Private::EPropertyClass::Object, "LoadedLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LoadedLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(NewProp_LoadedLevel_MetaData, ARRAY_COUNT(NewProp_LoadedLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelHidden_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Called when level is removed from the world" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelHidden = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelHidden", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelHidden), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(NewProp_OnLevelHidden_MetaData, ARRAY_COUNT(NewProp_OnLevelHidden_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelShown_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Called when level is added to the world" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelShown = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelShown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelShown), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(NewProp_OnLevelShown_MetaData, ARRAY_COUNT(NewProp_OnLevelShown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelUnloaded_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Called when level is streamed out" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUnloaded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelUnloaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelUnloaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(NewProp_OnLevelUnloaded_MetaData, ARRAY_COUNT(NewProp_OnLevelUnloaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Called when level is streamed in" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelLoaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(NewProp_OnLevelLoaded_MetaData, ARRAY_COUNT(NewProp_OnLevelLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "List of keywords to filter on in the level browser" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keywords = { UE4CodeGen_Private::EPropertyClass::Array, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, Keywords), METADATA_PARAMS(NewProp_Keywords_MetaData, ARRAY_COUNT(NewProp_Keywords_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Cooldown time in seconds between volume-based unload requests.  Used in preventing spurious unload requests." },
				{ "UIMax", "10" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenVolumeUnloadRequests = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeBetweenVolumeUnloadRequests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, MinTimeBetweenVolumeUnloadRequests), METADATA_PARAMS(NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData, ARRAY_COUNT(NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorStreamingVolumes_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "DisplayName", "Streaming Volumes" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "NoElementDuplicate", "" },
				{ "ToolTip", "The level streaming volumes bound to this level." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorStreamingVolumes = { UE4CodeGen_Private::EPropertyClass::Array, "EditorStreamingVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, EditorStreamingVolumes), METADATA_PARAMS(NewProp_EditorStreamingVolumes_MetaData, ARRAY_COUNT(NewProp_EditorStreamingVolumes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorStreamingVolumes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EditorStreamingVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ALevelStreamingVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_LevelColor_MetaData, ARRAY_COUNT(NewProp_LevelColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Deprecated level color used for visualization." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, DrawColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_DrawColor_MetaData, ARRAY_COUNT(NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOnLevelStatusMap_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "If true, will be drawn on the 'level streaming status' map (STAT LEVELMAP console command)" },
			};
#endif
			auto NewProp_bDrawOnLevelStatusMap_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bDrawOnLevelStatusMap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOnLevelStatusMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawOnLevelStatusMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawOnLevelStatusMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawOnLevelStatusMap_MetaData, ARRAY_COUNT(NewProp_bDrawOnLevelStatusMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDistanceStreaming_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether this level streaming object should be ignored by world composition distance streaming,\nso streaming state can be controlled by other systems (ex: in blueprints)" },
			};
#endif
			auto NewProp_bDisableDistanceStreaming_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bDisableDistanceStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDistanceStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableDistanceStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableDistanceStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableDistanceStreaming_MetaData, ARRAY_COUNT(NewProp_bDisableDistanceStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelLODIndex_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Requested LOD. Non LOD sub-levels have Index = -1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelLODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LevelLODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelLODIndex), METADATA_PARAMS(NewProp_LevelLODIndex_MetaData, ARRAY_COUNT(NewProp_LevelLODIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBlockOnLoad_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether we want to force a blocking load" },
			};
#endif
			auto NewProp_bShouldBlockOnLoad_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bShouldBlockOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBlockOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBlockOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBlockOnLoad_MetaData, ARRAY_COUNT(NewProp_bShouldBlockOnLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStatic_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether this level only contains static actors that aren't affected by gameplay or replication.\nIf true, the engine can make certain optimizations and will add this level to the StaticLevels collection." },
			};
#endif
			auto NewProp_bIsStatic_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bIsStatic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStatic = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStatic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStatic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStatic_MetaData, ARRAY_COUNT(NewProp_bIsStatic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether the level should be visible if it is loaded" },
			};
#endif
			auto NewProp_bShouldBeVisible_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bShouldBeVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBeVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBeVisible_MetaData, ARRAY_COUNT(NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether the level should be loaded" },
			};
#endif
			auto NewProp_bShouldBeLoaded_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bShouldBeLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBeLoaded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBeLoaded_MetaData, ARRAY_COUNT(NewProp_bShouldBeLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether this level is locked; that is, its actors are read-only." },
			};
#endif
			auto NewProp_bLocked_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLocked_MetaData, ARRAY_COUNT(NewProp_bLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInEditor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Whether this level should be visible in the Editor" },
			};
#endif
			auto NewProp_bShouldBeVisibleInEditor_SetBit = [](void* Obj){ ((ULevelStreaming*)Obj)->bShouldBeVisibleInEditor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisibleInEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBeVisibleInEditor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBeVisibleInEditor_MetaData, ARRAY_COUNT(NewProp_bShouldBeVisibleInEditor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTransform_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Transform applied to actors after loading." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LevelTransform_MetaData, ARRAY_COUNT(NewProp_LevelTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODPackageNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "LOD versions of this level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODPackageNames = { UE4CodeGen_Private::EPropertyClass::Array, "LODPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LODPackageNames), METADATA_PARAMS(NewProp_LODPackageNames_MetaData, ARRAY_COUNT(NewProp_LODPackageNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LODPackageNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LODPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageNameToLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "If this isn't Name_None, then we load from this package on disk to the new package named PackageName" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageNameToLoad = { UE4CodeGen_Private::EPropertyClass::Name, "PackageNameToLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageNameToLoad), METADATA_PARAMS(NewProp_PackageNameToLoad_MetaData, ARRAY_COUNT(NewProp_PackageNameToLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "LevelStreaming" },
				{ "DisplayName", "Level" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "The reference to the world containing the level to load" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "WorldAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000020015, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_WorldAsset_MetaData, ARRAY_COUNT(NewProp_WorldAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
				{ "ToolTip", "Deprecated name of the package containing the level to load. Use GetWorldAsset() or GetWorldAssetPackageFName() instead." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageName_DEPRECATED), METADATA_PARAMS(NewProp_PackageName_MetaData, ARRAY_COUNT(NewProp_PackageName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FolderPath,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingUnloadLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadedLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLevelHidden,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLevelShown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLevelUnloaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLevelLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keywords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keywords_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTimeBetweenVolumeUnloadRequests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorStreamingVolumes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorStreamingVolumes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawOnLevelStatusMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableDistanceStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelLODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBlockOnLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStatic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBeVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBeLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBeVisibleInEditor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODPackageNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODPackageNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageNameToLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelStreaming>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelStreaming::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881081u,
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
	IMPLEMENT_CLASS(ULevelStreaming, 1018880627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreaming(Z_Construct_UClass_ULevelStreaming, &ULevelStreaming::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreaming"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreaming);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
