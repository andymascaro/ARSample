// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Navigation/NavLocalGridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLocalGridManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity();
// End Cross Module References
	void UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager()
	{
		UClass* Class = UNavLocalGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocalNavigationGridForBox", (Native)&UNavLocalGridManager::execAddLocalNavigationGridForBox },
			{ "AddLocalNavigationGridForCapsule", (Native)&UNavLocalGridManager::execAddLocalNavigationGridForCapsule },
			{ "AddLocalNavigationGridForPoint", (Native)&UNavLocalGridManager::execAddLocalNavigationGridForPoint },
			{ "AddLocalNavigationGridForPoints", (Native)&UNavLocalGridManager::execAddLocalNavigationGridForPoints },
			{ "FindLocalNavigationGridPath", (Native)&UNavLocalGridManager::execFindLocalNavigationGridPath },
			{ "RemoveLocalNavigationGrid", (Native)&UNavLocalGridManager::execRemoveLocalNavigationGrid },
			{ "SetLocalNavigationGridDensity", (Native)&UNavLocalGridManager::execSetLocalNavigationGridDensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox()
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FVector Extent;
			FRotator Rotation;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRebuildGrids_SetBit = [](void* Obj){ ((NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms*)Obj)->bRebuildGrids = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildGrids_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Radius2D), METADATA_PARAMS(NewProp_Radius2D_MetaData, ARRAY_COUNT(NewProp_Radius2D_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius2D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bRebuildGrids", "true" },
				{ "CPP_Default_Extent", "1.000000,1.000000,1.000000" },
				{ "CPP_Default_Height", "100.000000" },
				{ "CPP_Default_Radius2D", "5" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule()
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			float CapsuleRadius;
			float CapsuleHalfHeight;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRebuildGrids_SetBit = [](void* Obj){ ((NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms*)Obj)->bRebuildGrids = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildGrids_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Radius2D), METADATA_PARAMS(NewProp_Radius2D_MetaData, ARRAY_COUNT(NewProp_Radius2D_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius2D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bRebuildGrids", "true" },
				{ "CPP_Default_Height", "100.000000" },
				{ "CPP_Default_Radius2D", "5" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForCapsule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint()
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRebuildGrids_SetBit = [](void* Obj){ ((NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms*)Obj)->bRebuildGrids = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildGrids_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Radius2D), METADATA_PARAMS(NewProp_Radius2D_MetaData, ARRAY_COUNT(NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius2D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bRebuildGrids", "true" },
				{ "CPP_Default_Height", "100.000000" },
				{ "CPP_Default_Radius2D", "5" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "ToolTip", "creates new grid data for single point" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints()
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> Locations;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRebuildGrids_SetBit = [](void* Obj){ ((NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms*)Obj)->bRebuildGrids = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildGrids_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Radius2D), METADATA_PARAMS(NewProp_Radius2D_MetaData, ARRAY_COUNT(NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations = { UE4CodeGen_Private::EPropertyClass::Array, "Locations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Locations), METADATA_PARAMS(NewProp_Locations_MetaData, ARRAY_COUNT(NewProp_Locations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Locations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius2D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Locations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Locations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bRebuildGrids", "true" },
				{ "CPP_Default_Height", "100.000000" },
				{ "CPP_Default_Radius2D", "5" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "ToolTip", "creates single grid data for set of points" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath()
	{
		struct NavLocalGridManager_eventFindLocalNavigationGridPath_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			TArray<FVector> PathPoints;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavLocalGridManager_eventFindLocalNavigationGridPath_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, PathPoints), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Start_MetaData, ARRAY_COUNT(NewProp_Start_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "FindLocalNavigationGridPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid()
	{
		struct NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms
		{
			UObject* WorldContextObject;
			int32 GridId;
			bool bRebuildGrids;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bRebuildGrids_SetBit = [](void* Obj){ ((NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms*)Obj)->bRebuildGrids = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRebuildGrids_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridId = { UE4CodeGen_Private::EPropertyClass::Int, "GridId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, GridId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRebuildGrids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bRebuildGrids", "true" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "RemoveLocalNavigationGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity()
	{
		struct NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms
		{
			UObject* WorldContextObject;
			float CellSize;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize = { UE4CodeGen_Private::EPropertyClass::Float, "CellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "SetLocalNavigationGridDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister()
	{
		return UNavLocalGridManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLocalGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox, "AddLocalNavigationGridForBox" }, // 239207696
				{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule, "AddLocalNavigationGridForCapsule" }, // 3303449438
				{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint, "AddLocalNavigationGridForPoint" }, // 303653757
				{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints, "AddLocalNavigationGridForPoints" }, // 2370941617
				{ &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath, "FindLocalNavigationGridPath" }, // 937623923
				{ &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid, "RemoveLocalNavigationGrid" }, // 1202990520
				{ &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity, "SetLocalNavigationGridDensity" }, // 2651316938
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Navigation/NavLocalGridManager.h" },
				{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
				{ "ToolTip", "Manager for local navigation grids\n\nBuilds non overlapping grid from multiple sources, that can be used later for pathfinding.\nCheck also: UGridPathFollowingComponent, FNavLocalGridData" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLocalGridManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLocalGridManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLocalGridManager, 3917790789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLocalGridManager(Z_Construct_UClass_UNavLocalGridManager, &UNavLocalGridManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UNavLocalGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLocalGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
