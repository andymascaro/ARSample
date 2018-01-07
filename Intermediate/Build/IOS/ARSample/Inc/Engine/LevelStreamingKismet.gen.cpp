// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelStreamingKismet.h"
#include "Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingKismet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingKismet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingKismet();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreamingKismet_LoadLevelInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void ULevelStreamingKismet::StaticRegisterNativesULevelStreamingKismet()
	{
		UClass* Class = ULevelStreamingKismet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadLevelInstance", (Native)&ULevelStreamingKismet::execLoadLevelInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULevelStreamingKismet_LoadLevelInstance()
	{
		struct LevelStreamingKismet_eventLoadLevelInstance_Parms
		{
			UObject* WorldContextObject;
			FString LevelName;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			ULevelStreamingKismet* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreamingKismet_eventLoadLevelInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingKismet_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bOutSuccess_SetBit = [](void* Obj){ ((LevelStreamingKismet_eventLoadLevelInstance_Parms*)Obj)->bOutSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreamingKismet_eventLoadLevelInstance_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOutSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LevelStreamingKismet_eventLoadLevelInstance_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LevelStreamingKismet_eventLoadLevelInstance_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingKismet_eventLoadLevelInstance_Parms, LevelName), METADATA_PARAMS(NewProp_LevelName_MetaData, ARRAY_COUNT(NewProp_LevelName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingKismet_eventLoadLevelInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOutSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingKismet.h" },
				{ "ToolTip", "Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n\nThe level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\npackaged, please be sure to include the .umap in your Packaging Settings:\n\n  Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n\n@param LevelName - Level package name, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n@param Location - World space location where the level should be spawned\n@param Rotation - World space rotation for rotating the entire level\n@param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n@return Streaming level object for a level instance" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingKismet, "LoadLevelInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22403, sizeof(LevelStreamingKismet_eventLoadLevelInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreamingKismet_NoRegister()
	{
		return ULevelStreamingKismet::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelStreamingKismet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULevelStreamingKismet_LoadLevelInstance, "LoadLevelInstance" }, // 1290819460
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/LevelStreamingKismet.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingKismet.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyVisible_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingKismet.h" },
				{ "ToolTip", "Whether the level should be visible at startup if it is loaded" },
			};
#endif
			auto NewProp_bInitiallyVisible_SetBit = [](void* Obj){ ((ULevelStreamingKismet*)Obj)->bInitiallyVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitiallyVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreamingKismet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitiallyVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInitiallyVisible_MetaData, ARRAY_COUNT(NewProp_bInitiallyVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyLoaded_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingKismet.h" },
				{ "ToolTip", "Whether the level should be loaded at startup" },
			};
#endif
			auto NewProp_bInitiallyLoaded_SetBit = [](void* Obj){ ((ULevelStreamingKismet*)Obj)->bInitiallyLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitiallyLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreamingKismet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitiallyLoaded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInitiallyLoaded_MetaData, ARRAY_COUNT(NewProp_bInitiallyLoaded_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitiallyVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitiallyLoaded,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelStreamingKismet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelStreamingKismet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(ULevelStreamingKismet, 603942237);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingKismet(Z_Construct_UClass_ULevelStreamingKismet, &ULevelStreamingKismet::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreamingKismet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingKismet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
