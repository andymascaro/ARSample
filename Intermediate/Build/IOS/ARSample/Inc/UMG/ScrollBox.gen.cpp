// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature()
	{
		struct _Script_UMG_eventOnUserScrolledEvent_Parms
		{
			float CurrentOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnUserScrolledEvent_Parms, CurrentOffset), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnUserScrolledEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnUserScrolledEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UScrollBox::StaticRegisterNativesUScrollBox()
	{
		UClass* Class = UScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScrollOffset", (Native)&UScrollBox::execGetScrollOffset },
			{ "ScrollToEnd", (Native)&UScrollBox::execScrollToEnd },
			{ "ScrollToStart", (Native)&UScrollBox::execScrollToStart },
			{ "ScrollWidgetIntoView", (Native)&UScrollBox::execScrollWidgetIntoView },
			{ "SetAllowOverscroll", (Native)&UScrollBox::execSetAllowOverscroll },
			{ "SetAlwaysShowScrollbar", (Native)&UScrollBox::execSetAlwaysShowScrollbar },
			{ "SetOrientation", (Native)&UScrollBox::execSetOrientation },
			{ "SetScrollbarThickness", (Native)&UScrollBox::execSetScrollbarThickness },
			{ "SetScrollBarVisibility", (Native)&UScrollBox::execSetScrollBarVisibility },
			{ "SetScrollOffset", (Native)&UScrollBox::execSetScrollOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset()
	{
		struct ScrollBox_eventGetScrollOffset_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventGetScrollOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Gets the scroll offset of the scrollbox in Slate Units." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "GetScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ScrollBox_eventGetScrollOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Scrolls the ScrollBox to the bottom instantly during the next layout pass." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollToEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Scrolls the ScrollBox to the top instantly" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollToStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView()
	{
		struct ScrollBox_eventScrollWidgetIntoView_Parms
		{
			UWidget* WidgetToFind;
			bool AnimateScroll;
			EDescendantScrollDestination ScrollDestination;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollDestination = { UE4CodeGen_Private::EPropertyClass::Enum, "ScrollDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, ScrollDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollDestination_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_AnimateScroll_SetBit = [](void* Obj){ ((ScrollBox_eventScrollWidgetIntoView_Parms*)Obj)->AnimateScroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AnimateScroll = { UE4CodeGen_Private::EPropertyClass::Bool, "AnimateScroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AnimateScroll_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFind_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToFind = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetToFind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, WidgetToFind), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_WidgetToFind_MetaData, ARRAY_COUNT(NewProp_WidgetToFind_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollDestination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollDestination_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimateScroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetToFind,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "CPP_Default_AnimateScroll", "true" },
				{ "CPP_Default_ScrollDestination", "IntoView" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Scrolls the ScrollBox to the widget during the next layout pass." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollWidgetIntoView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll()
	{
		struct ScrollBox_eventSetAllowOverscroll_Parms
		{
			bool NewAllowOverscroll;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewAllowOverscroll_SetBit = [](void* Obj){ ((ScrollBox_eventSetAllowOverscroll_Parms*)Obj)->NewAllowOverscroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAllowOverscroll = { UE4CodeGen_Private::EPropertyClass::Bool, "NewAllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventSetAllowOverscroll_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewAllowOverscroll_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAllowOverscroll,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetAllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetAllowOverscroll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar()
	{
		struct ScrollBox_eventSetAlwaysShowScrollbar_Parms
		{
			bool NewAlwaysShowScrollbar;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewAlwaysShowScrollbar_SetBit = [](void* Obj){ ((ScrollBox_eventSetAlwaysShowScrollbar_Parms*)Obj)->NewAlwaysShowScrollbar = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAlwaysShowScrollbar = { UE4CodeGen_Private::EPropertyClass::Bool, "NewAlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewAlwaysShowScrollbar_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAlwaysShowScrollbar,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetAlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation()
	{
		struct ScrollBox_eventSetOrientation_Parms
		{
			TEnumAsByte<EOrientation> NewOrientation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewOrientation = { UE4CodeGen_Private::EPropertyClass::Byte, "NewOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetOrientation_Parms, NewOrientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewOrientation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetOrientation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness()
	{
		struct ScrollBox_eventSetScrollbarThickness_Parms
		{
			FVector2D NewScrollbarThickness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScrollbarThickness_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScrollbarThickness = { UE4CodeGen_Private::EPropertyClass::Struct, "NewScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollbarThickness_Parms, NewScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_NewScrollbarThickness_MetaData, ARRAY_COUNT(NewProp_NewScrollbarThickness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewScrollbarThickness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(ScrollBox_eventSetScrollbarThickness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility()
	{
		struct ScrollBox_eventSetScrollBarVisibility_Parms
		{
			ESlateVisibility NewScrollBarVisibility;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewScrollBarVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "NewScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollBarVisibility_Parms, NewScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewScrollBarVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewScrollBarVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewScrollBarVisibility_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetScrollBarVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset()
	{
		struct ScrollBox_eventSetScrollOffset_Parms
		{
			float NewScrollOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScrollOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NewScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollOffset_Parms, NewScrollOffset), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewScrollOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Updates the scroll offset of the scrollbox.\n@param NewScrollOffset is in Slate Units." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetScrollOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBox_NoRegister()
	{
		return UScrollBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UScrollBox_GetScrollOffset, "GetScrollOffset" }, // 578719476
				{ &Z_Construct_UFunction_UScrollBox_ScrollToEnd, "ScrollToEnd" }, // 1938218934
				{ &Z_Construct_UFunction_UScrollBox_ScrollToStart, "ScrollToStart" }, // 1576573612
				{ &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView, "ScrollWidgetIntoView" }, // 319267050
				{ &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll, "SetAllowOverscroll" }, // 661337366
				{ &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar, "SetAlwaysShowScrollbar" }, // 109731129
				{ &Z_Construct_UFunction_UScrollBox_SetOrientation, "SetOrientation" }, // 2254824561
				{ &Z_Construct_UFunction_UScrollBox_SetScrollbarThickness, "SetScrollbarThickness" }, // 2466391151
				{ &Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility, "SetScrollBarVisibility" }, // 4063894360
				{ &Z_Construct_UFunction_UScrollBox_SetScrollOffset, "SetScrollOffset" }, // 2434665073
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/ScrollBox.h" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserScrolled_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Called when the scroll has changed" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserScrolled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUserScrolled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UScrollBox, OnUserScrolled), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnUserScrolled_MetaData, ARRAY_COUNT(NewProp_OnUserScrolled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRightClickDragScrolling_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Option to disable right-click-drag scrolling" },
			};
#endif
			auto NewProp_bAllowRightClickDragScrolling_SetBit = [](void* Obj){ ((UScrollBox*)Obj)->bAllowRightClickDragScrolling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRightClickDragScrolling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRightClickDragScrolling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowRightClickDragScrolling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowRightClickDragScrolling_MetaData, ARRAY_COUNT(NewProp_bAllowRightClickDragScrolling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationScrollPadding_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "The amount of padding to ensure exists between the item being navigated to, at the edge of the\nscrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigationScrollPadding = { UE4CodeGen_Private::EPropertyClass::Float, "NavigationScrollPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, NavigationScrollPadding), METADATA_PARAMS(NewProp_NavigationScrollPadding_MetaData, ARRAY_COUNT(NewProp_NavigationScrollPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDestination_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationDestination = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, NavigationDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(NewProp_NavigationDestination_MetaData, ARRAY_COUNT(NewProp_NavigationDestination_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationDestination_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowOverscroll_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Disable to stop scrollbars from activating inertial overscrolling" },
			};
#endif
			auto NewProp_AllowOverscroll_SetBit = [](void* Obj){ ((UScrollBox*)Obj)->AllowOverscroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverscroll = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowOverscroll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowOverscroll_MetaData, ARRAY_COUNT(NewProp_AllowOverscroll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbar_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			auto NewProp_AlwaysShowScrollbar_SetBit = [](void* Obj){ ((UScrollBox*)Obj)->AlwaysShowScrollbar = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbar = { UE4CodeGen_Private::EPropertyClass::Bool, "AlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AlwaysShowScrollbar_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AlwaysShowScrollbar_MetaData, ARRAY_COUNT(NewProp_AlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarThickness_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarThickness = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ScrollbarThickness_MetaData, ARRAY_COUNT(NewProp_ScrollbarThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Enable to always consume mouse wheel event, even when scrolling is not possible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel = { UE4CodeGen_Private::EPropertyClass::Enum, "ConsumeMouseWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(NewProp_ConsumeMouseWheel_MetaData, ARRAY_COUNT(NewProp_ConsumeMouseWheel_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarVisibility_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "Visibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollBarVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "ScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(NewProp_ScrollBarVisibility_MetaData, ARRAY_COUNT(NewProp_ScrollBarVisibility_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollBarVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "Scroll" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "The orientation of the scrolling and stacking in the box." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarStyle_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarStyle = { UE4CodeGen_Private::EPropertyClass::Object, "BarStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UScrollBox, BarStyle_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_BarStyle_MetaData, ARRAY_COUNT(NewProp_BarStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UScrollBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetBarStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Bar Style" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "The bar style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UScrollBox, WidgetBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(NewProp_WidgetBarStyle_MetaData, ARRAY_COUNT(NewProp_WidgetBarStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
				{ "ToolTip", "The style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UScrollBox, WidgetStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUserScrolled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowRightClickDragScrolling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationScrollPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationDestination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationDestination_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowOverscroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlwaysShowScrollbar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollbarThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsumeMouseWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsumeMouseWheel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollBarVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollBarVisibility_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetBarStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScrollBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScrollBox::StaticClass,
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
	IMPLEMENT_CLASS(UScrollBox, 2486590389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBox(Z_Construct_UClass_UScrollBox, &UScrollBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
