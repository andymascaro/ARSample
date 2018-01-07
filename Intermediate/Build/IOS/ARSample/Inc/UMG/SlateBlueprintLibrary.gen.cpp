// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/SlateBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute();
	UMG_API UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal();
// End Cross Module References
	void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary()
	{
		UClass* Class = USlateBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbsoluteToLocal", (Native)&USlateBlueprintLibrary::execAbsoluteToLocal },
			{ "AbsoluteToViewport", (Native)&USlateBlueprintLibrary::execAbsoluteToViewport },
			{ "EqualEqual_SlateBrush", (Native)&USlateBlueprintLibrary::execEqualEqual_SlateBrush },
			{ "GetAbsoluteSize", (Native)&USlateBlueprintLibrary::execGetAbsoluteSize },
			{ "GetLocalSize", (Native)&USlateBlueprintLibrary::execGetLocalSize },
			{ "IsUnderLocation", (Native)&USlateBlueprintLibrary::execIsUnderLocation },
			{ "LocalToAbsolute", (Native)&USlateBlueprintLibrary::execLocalToAbsolute },
			{ "LocalToViewport", (Native)&USlateBlueprintLibrary::execLocalToViewport },
			{ "ScreenToViewport", (Native)&USlateBlueprintLibrary::execScreenToViewport },
			{ "ScreenToWidgetAbsolute", (Native)&USlateBlueprintLibrary::execScreenToWidgetAbsolute },
			{ "ScreenToWidgetLocal", (Native)&USlateBlueprintLibrary::execScreenToWidgetLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal()
	{
		struct SlateBlueprintLibrary_eventAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "AbsoluteCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsoluteCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return Transforms AbsoluteCoordinate into the local space of this Geometry." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "AbsoluteToLocal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport()
	{
		struct SlateBlueprintLibrary_eventAbsoluteToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D AbsoluteDesktopCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewportPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteDesktopCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "AbsoluteDesktopCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, AbsoluteDesktopCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewportPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsoluteDesktopCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "AbsoluteToViewport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush()
	{
		struct SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms
		{
			FSlateBrush A;
			FSlateBrush B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, B), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, A), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SlateBrush" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (SlateBrush)" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "@return Whether brushes A and B are identical." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "EqualEqual_SlateBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize()
	{
		struct SlateBlueprintLibrary_eventGetAbsoluteSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "@return the size of the geometry in absolute space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "GetAbsoluteSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize()
	{
		struct SlateBlueprintLibrary_eventGetLocalSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "@return the size of the geometry in local space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "GetLocalSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventGetLocalSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation()
	{
		struct SlateBlueprintLibrary_eventIsUnderLocation_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SlateBlueprintLibrary_eventIsUnderLocation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteCoordinate_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "AbsoluteCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_AbsoluteCoordinate_MetaData, ARRAY_COUNT(NewProp_AbsoluteCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsoluteCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return true if the provided location in absolute coordinates is within the bounds of this geometry." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "IsUnderLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute()
	{
		struct SlateBlueprintLibrary_eventLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates local coordinates into absolute coordinates\n\nAbsolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return  Absolute coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "LocalToAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventLocalToAbsolute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport()
	{
		struct SlateBlueprintLibrary_eventLocalToViewport_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewportPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewportPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates local coordinate of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "LocalToViewport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(SlateBlueprintLibrary_eventLocalToViewport_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport()
	{
		struct SlateBlueprintLibrary_eventScreenToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D ViewportPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewportPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewportPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates a screen position in pixels into the local space of the viewport widget." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "ScreenToViewport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C22401, sizeof(SlateBlueprintLibrary_eventScreenToViewport_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute()
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D AbsoluteCoordinate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "AbsoluteCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsoluteCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "DisplayName", "ScreenToAbsolute" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates a screen position in pixels into absolute application coordinates." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "ScreenToWidgetAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C22401, sizeof(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal()
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D ScreenPosition;
			FVector2D LocalCoordinate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Geometry = { UE4CodeGen_Private::EPropertyClass::Struct, "Geometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_Geometry_MetaData, ARRAY_COUNT(NewProp_Geometry_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Geometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface|Geometry" },
				{ "DisplayName", "ScreenToLocal" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
				{ "ToolTip", "Translates a screen position in pixels into the local space of a widget with the given geometry." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, "ScreenToWidgetLocal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C22401, sizeof(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister()
	{
		return USlateBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal, "AbsoluteToLocal" }, // 3161358454
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport, "AbsoluteToViewport" }, // 3504491896
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush, "EqualEqual_SlateBrush" }, // 2958645871
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize, "GetAbsoluteSize" }, // 619210634
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize, "GetLocalSize" }, // 3715619222
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation, "IsUnderLocation" }, // 3182184645
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute, "LocalToAbsolute" }, // 2770496820
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport, "LocalToViewport" }, // 4168788158
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport, "ScreenToViewport" }, // 4015514698
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute, "ScreenToWidgetAbsolute" }, // 497911280
				{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal, "ScreenToWidgetLocal" }, // 1690036032
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/SlateBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateBlueprintLibrary::StaticClass,
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
	IMPLEMENT_CLASS(USlateBlueprintLibrary, 653459496);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateBlueprintLibrary(Z_Construct_UClass_USlateBlueprintLibrary, &USlateBlueprintLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("USlateBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
