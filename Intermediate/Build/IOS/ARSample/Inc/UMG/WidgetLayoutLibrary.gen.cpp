// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/WidgetLayoutLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetLayoutLibrary() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot();
	UMG_API UClass* Z_Construct_UClass_UBorderSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot();
	UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
// End Cross Module References
	void UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary()
	{
		UClass* Class = UWidgetLayoutLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMousePositionOnPlatform", (Native)&UWidgetLayoutLibrary::execGetMousePositionOnPlatform },
			{ "GetMousePositionOnViewport", (Native)&UWidgetLayoutLibrary::execGetMousePositionOnViewport },
			{ "GetMousePositionScaledByDPI", (Native)&UWidgetLayoutLibrary::execGetMousePositionScaledByDPI },
			{ "GetPlayerScreenWidgetGeometry", (Native)&UWidgetLayoutLibrary::execGetPlayerScreenWidgetGeometry },
			{ "GetViewportScale", (Native)&UWidgetLayoutLibrary::execGetViewportScale },
			{ "GetViewportSize", (Native)&UWidgetLayoutLibrary::execGetViewportSize },
			{ "GetViewportWidgetGeometry", (Native)&UWidgetLayoutLibrary::execGetViewportWidgetGeometry },
			{ "ProjectWorldLocationToWidgetPosition", (Native)&UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition },
			{ "RemoveAllWidgets", (Native)&UWidgetLayoutLibrary::execRemoveAllWidgets },
			{ "SlotAsBorderSlot", (Native)&UWidgetLayoutLibrary::execSlotAsBorderSlot },
			{ "SlotAsCanvasSlot", (Native)&UWidgetLayoutLibrary::execSlotAsCanvasSlot },
			{ "SlotAsGridSlot", (Native)&UWidgetLayoutLibrary::execSlotAsGridSlot },
			{ "SlotAsHorizontalBoxSlot", (Native)&UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot },
			{ "SlotAsOverlaySlot", (Native)&UWidgetLayoutLibrary::execSlotAsOverlaySlot },
			{ "SlotAsUniformGridSlot", (Native)&UWidgetLayoutLibrary::execSlotAsUniformGridSlot },
			{ "SlotAsVerticalBoxSlot", (Native)&UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform()
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the platform's mouse cursor position.  This is the 'absolute' desktop location of the mouse." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetMousePositionOnPlatform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport()
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the platform's mouse cursor position in the local space of the viewport widget." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetMousePositionOnViewport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI()
	{
		struct WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms
		{
			APlayerController* Player;
			float LocationX;
			float LocationY;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY = { UE4CodeGen_Private::EPropertyClass::Float, "LocationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX = { UE4CodeGen_Private::EPropertyClass::Float, "LocationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the mouse position of the player controller, scaled by the DPI.  If you're trying to go from raw mouse screenspace coordinates\nto fullscreen widget space, you'll need to transform the mouse into DPI Scaled space.  This function performs that scaling.\n\nMousePositionScaledByDPI = MousePosition * (1 / ViewportScale).\n        //DEPRECATED(4.17, \"Use GetMousePositionOnViewport() instead.  Optionally and for more options, you can use GetViewportWidgetGeometry and GetPlayerScreenWidgetGeometry are newly introduced to give you the geometry of the viewport and the player screen for widgets to help convert between spaces.\")" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetMousePositionScaledByDPI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422409, sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry()
	{
		struct WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms
		{
			APlayerController* PlayerController;
			FGeometry ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Player Screen\". You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetPlayerScreenWidgetGeometry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale()
	{
		struct WidgetLayoutLibrary_eventGetViewportScale_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the current DPI Scale being applied to the viewport and all the Widgets." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetViewportScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022409, sizeof(WidgetLayoutLibrary_eventGetViewportScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize()
	{
		struct WidgetLayoutLibrary_eventGetViewportSize_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the size of the game viewport." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetViewportSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822409, sizeof(WidgetLayoutLibrary_eventGetViewportSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry()
	{
		struct WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms
		{
			UObject* WorldContextObject;
			FGeometry ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Viewport\".  You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "GetViewportWidgetGeometry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition()
	{
		struct WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms
		{
			APlayerController* PlayerController;
			FVector WorldLocation;
			FVector2D ScreenPosition;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the projected world to screen position for a player, then converts it into a widget\nposition, which takes into account any quality scaling.\n@param PlayerController The player controller to project the position in the world to their screen.\n@param WorldLocation The world location to project from.\n@param ScreenPosition The position in the viewport with quality scale removed and DPI scale remove.\n@return true if the position projects onto the screen." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "ProjectWorldLocationToWidgetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22409, sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets()
	{
		struct WidgetLayoutLibrary_eventRemoveAllWidgets_Parms
		{
			UObject* WorldContextObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Viewport" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Removes all widgets from the viewport." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "RemoveAllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms
		{
			UWidget* Widget;
			UBorderSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, ReturnValue), Z_Construct_UClass_UBorderSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Border Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a border panel." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsBorderSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms
		{
			UWidget* Widget;
			UCanvasPanelSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Canvas Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a canvas panel." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsCanvasSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsGridSlot_Parms
		{
			UWidget* Widget;
			UGridSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a grid panel." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsGridSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms
		{
			UWidget* Widget;
			UHorizontalBoxSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UHorizontalBoxSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Horizontal Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Horizontal Box." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsHorizontalBoxSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms
		{
			UWidget* Widget;
			UOverlaySlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Overlay Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a overlay panel." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsOverlaySlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms
		{
			UWidget* Widget;
			UUniformGridSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Uniform Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a uniform grid panel." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsUniformGridSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot()
	{
		struct WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms
		{
			UWidget* Widget;
			UVerticalBoxSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Slot" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
				{ "ToolTip", "Gets the slot object on the child widget as a Vertical Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Vertical Box." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, "SlotAsVerticalBoxSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister()
	{
		return UWidgetLayoutLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform, "GetMousePositionOnPlatform" }, // 808912214
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport, "GetMousePositionOnViewport" }, // 3317271501
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI, "GetMousePositionScaledByDPI" }, // 105299233
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry, "GetPlayerScreenWidgetGeometry" }, // 4121619475
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale, "GetViewportScale" }, // 4219865538
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize, "GetViewportSize" }, // 1847378395
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry, "GetViewportWidgetGeometry" }, // 4233154432
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition, "ProjectWorldLocationToWidgetPosition" }, // 3563660507
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets, "RemoveAllWidgets" }, // 2807458385
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot, "SlotAsBorderSlot" }, // 2036301201
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot, "SlotAsCanvasSlot" }, // 1464972161
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot, "SlotAsGridSlot" }, // 4220235589
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot, "SlotAsHorizontalBoxSlot" }, // 2602794498
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot, "SlotAsOverlaySlot" }, // 3712842692
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot, "SlotAsUniformGridSlot" }, // 3614809178
				{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot, "SlotAsVerticalBoxSlot" }, // 2339029987
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/WidgetLayoutLibrary.h" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetLayoutLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetLayoutLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UWidgetLayoutLibrary, 2722905025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetLayoutLibrary(Z_Construct_UClass_UWidgetLayoutLibrary, &UWidgetLayoutLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetLayoutLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetLayoutLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
