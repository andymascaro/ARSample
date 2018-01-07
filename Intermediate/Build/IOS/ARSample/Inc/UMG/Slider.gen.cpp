// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Slider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlider() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UFunction_USlider_GetValue();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetIndentHandle();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetLocked();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetSliderBarColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetSliderHandleColor();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetStepSize();
	UMG_API UFunction* Z_Construct_UFunction_USlider_SetValue();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature()
	{
		struct _Script_UMG_eventOnFloatValueChangedEvent_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnFloatValueChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnFloatValueChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnControllerCaptureEndEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnControllerCaptureBeginEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnMouseCaptureEndEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnMouseCaptureBeginEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void USlider::StaticRegisterNativesUSlider()
	{
		UClass* Class = USlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", (Native)&USlider::execGetValue },
			{ "SetIndentHandle", (Native)&USlider::execSetIndentHandle },
			{ "SetLocked", (Native)&USlider::execSetLocked },
			{ "SetSliderBarColor", (Native)&USlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", (Native)&USlider::execSetSliderHandleColor },
			{ "SetStepSize", (Native)&USlider::execSetStepSize },
			{ "SetValue", (Native)&USlider::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USlider_GetValue()
	{
		struct Slider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Slider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Gets the current value of the slider." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Slider_eventGetValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetIndentHandle()
	{
		struct Slider_eventSetIndentHandle_Parms
		{
			bool InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InValue_SetBit = [](void* Obj){ ((Slider_eventSetIndentHandle_Parms*)Obj)->InValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Slider_eventSetIndentHandle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets if the slidable area should be indented to fit the handle" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetIndentHandle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Slider_eventSetIndentHandle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetLocked()
	{
		struct Slider_eventSetLocked_Parms
		{
			bool InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InValue_SetBit = [](void* Obj){ ((Slider_eventSetLocked_Parms*)Obj)->InValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Slider_eventSetLocked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets the handle to be interactive or fixed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetLocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Slider_eventSetLocked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetSliderBarColor()
	{
		struct Slider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Slider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets the color of the slider bar" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetSliderBarColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Slider_eventSetSliderBarColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetSliderHandleColor()
	{
		struct Slider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Slider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets the color of the handle bar" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetSliderHandleColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Slider_eventSetSliderHandleColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetStepSize()
	{
		struct Slider_eventSetStepSize_Parms
		{
			float InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Float, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Slider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetStepSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Slider_eventSetStepSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USlider_SetValue()
	{
		struct Slider_eventSetValue_Parms
		{
			float InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Float, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Slider_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Sets the current value of the slider." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, "SetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Slider_eventSetValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlider_NoRegister()
	{
		return USlider::StaticClass();
	}
	UClass* Z_Construct_UClass_USlider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USlider_GetValue, "GetValue" }, // 3384170795
				{ &Z_Construct_UFunction_USlider_SetIndentHandle, "SetIndentHandle" }, // 108625676
				{ &Z_Construct_UFunction_USlider_SetLocked, "SetLocked" }, // 728058618
				{ &Z_Construct_UFunction_USlider_SetSliderBarColor, "SetSliderBarColor" }, // 4290915846
				{ &Z_Construct_UFunction_USlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 2542786055
				{ &Z_Construct_UFunction_USlider_SetStepSize, "SetStepSize" }, // 2387709863
				{ &Z_Construct_UFunction_USlider_SetValue, "SetValue" }, // 4186508218
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Slider.h" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Called when the value is changed by slider or typing." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnValueChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USlider, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnValueChanged_MetaData, ARRAY_COUNT(NewProp_OnValueChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureEnd_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Invoked when the controller capture ends." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureEnd = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnControllerCaptureEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USlider, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnControllerCaptureEnd_MetaData, ARRAY_COUNT(NewProp_OnControllerCaptureEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureBegin_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Invoked when the controller capture begins." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureBegin = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnControllerCaptureBegin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USlider, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnControllerCaptureBegin_MetaData, ARRAY_COUNT(NewProp_OnControllerCaptureBegin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureEnd_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureEnd = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMouseCaptureEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USlider, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseCaptureEnd_MetaData, ARRAY_COUNT(NewProp_OnMouseCaptureEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureBegin_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureBegin = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMouseCaptureBegin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USlider, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseCaptureBegin_MetaData, ARRAY_COUNT(NewProp_OnMouseCaptureBegin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Should the slider be focusable?" },
			};
#endif
			auto NewProp_IsFocusable_SetBit = [](void* Obj){ ((USlider*)Obj)->IsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFocusable_MetaData, ARRAY_COUNT(NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize = { UE4CodeGen_Private::EPropertyClass::Float, "StepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USlider, StepSize), METADATA_PARAMS(NewProp_StepSize_MetaData, ARRAY_COUNT(NewProp_StepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Whether the handle is interactive or fixed." },
			};
#endif
			auto NewProp_Locked_SetBit = [](void* Obj){ ((USlider*)Obj)->Locked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Locked = { UE4CodeGen_Private::EPropertyClass::Bool, "Locked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Locked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Locked_MetaData, ARRAY_COUNT(NewProp_Locked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
			};
#endif
			auto NewProp_IndentHandle_SetBit = [](void* Obj){ ((USlider*)Obj)->IndentHandle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IndentHandle = { UE4CodeGen_Private::EPropertyClass::Bool, "IndentHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IndentHandle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IndentHandle_MetaData, ARRAY_COUNT(NewProp_IndentHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The color to draw the slider handle in." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderHandleColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SliderHandleColor_MetaData, ARRAY_COUNT(NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The color to draw the slider bar in." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderBarColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderBarColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SliderBarColor_MetaData, ARRAY_COUNT(NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The slider's orientation." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The progress bar style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ValueDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(USlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(NewProp_ValueDelegate_MetaData, ARRAY_COUNT(NewProp_ValueDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/Slider.h" },
				{ "ToolTip", "The volume value to display." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USlider, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnValueChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnControllerCaptureEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnControllerCaptureBegin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseCaptureEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseCaptureBegin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Locked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndentHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderHandleColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderBarColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlider>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlider::StaticClass,
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
	IMPLEMENT_CLASS(USlider, 3786089792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlider(Z_Construct_UClass_USlider, &USlider::StaticClass, TEXT("/Script/UMG"), TEXT("USlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
