// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ProgressBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressBar() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetPercent();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
// End Cross Module References
	void UProgressBar::StaticRegisterNativesUProgressBar()
	{
		UClass* Class = UProgressBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillColorAndOpacity", (Native)&UProgressBar::execSetFillColorAndOpacity },
			{ "SetIsMarquee", (Native)&UProgressBar::execSetIsMarquee },
			{ "SetPercent", (Native)&UProgressBar::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity()
	{
		struct ProgressBar_eventSetFillColorAndOpacity_Parms
		{
			FLinearColor InColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProgressBar_eventSetFillColorAndOpacity_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Sets the fill color of the progress bar." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, "SetFillColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ProgressBar_eventSetFillColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee()
	{
		struct ProgressBar_eventSetIsMarquee_Parms
		{
			bool InbIsMarquee;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InbIsMarquee_SetBit = [](void* Obj){ ((ProgressBar_eventSetIsMarquee_Parms*)Obj)->InbIsMarquee = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsMarquee = { UE4CodeGen_Private::EPropertyClass::Bool, "InbIsMarquee", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ProgressBar_eventSetIsMarquee_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InbIsMarquee_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InbIsMarquee,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Sets the progress bar to show as a marquee." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, "SetIsMarquee", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProgressBar_eventSetIsMarquee_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProgressBar_SetPercent()
	{
		struct ProgressBar_eventSetPercent_Parms
		{
			float InPercent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPercent = { UE4CodeGen_Private::EPropertyClass::Float, "InPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProgressBar_eventSetPercent_Parms, InPercent), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPercent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Sets the current value of the ProgressBar." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, "SetPercent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProgressBar_eventSetPercent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProgressBar_NoRegister()
	{
		return UProgressBar::StaticClass();
	}
	UClass* Z_Construct_UClass_UProgressBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity, "SetFillColorAndOpacity" }, // 2762996911
				{ &Z_Construct_UFunction_UProgressBar_SetIsMarquee, "SetIsMarquee" }, // 2666449339
				{ &Z_Construct_UFunction_UProgressBar_SetPercent, "SetPercent" }, // 2899331887
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/ProgressBar.h" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n\n* No Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacityDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_FillColorAndOpacityDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "FillColorAndOpacityDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UProgressBar, FillColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_FillColorAndOpacityDelegate_MetaData, ARRAY_COUNT(NewProp_FillColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Fill Color and Opacity" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "FillColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProgressBar, FillColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FillColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_FillColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PercentDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "PercentDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UProgressBar, PercentDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(NewProp_PercentDelegate_MetaData, ARRAY_COUNT(NewProp_PercentDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProgressBar, BorderPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_BorderPadding_MetaData, ARRAY_COUNT(NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMarquee_MetaData[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
			};
#endif
			auto NewProp_bIsMarquee_SetBit = [](void* Obj){ ((UProgressBar*)Obj)->bIsMarquee = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMarquee = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMarquee", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProgressBar), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMarquee_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMarquee_MetaData, ARRAY_COUNT(NewProp_bIsMarquee_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarFillType_MetaData[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Defines if this progress bar fills Left to right or right to left" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BarFillType = { UE4CodeGen_Private::EPropertyClass::Byte, "BarFillType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProgressBar, BarFillType), Z_Construct_UEnum_Slate_EProgressBarFillType, METADATA_PARAMS(NewProp_BarFillType_MetaData, ARRAY_COUNT(NewProp_BarFillType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[] = {
				{ "Category", "Progress" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Used to determine the fill position of the progress bar ranging 0..1" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent = { UE4CodeGen_Private::EPropertyClass::Float, "Percent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UProgressBar, Percent), METADATA_PARAMS(NewProp_Percent_MetaData, ARRAY_COUNT(NewProp_Percent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "The brush to use as the marquee image" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarqueeImage = { UE4CodeGen_Private::EPropertyClass::Object, "MarqueeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UProgressBar, MarqueeImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_MarqueeImage_MetaData, ARRAY_COUNT(NewProp_MarqueeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "The brush to use as the fill image" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FillImage = { UE4CodeGen_Private::EPropertyClass::Object, "FillImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UProgressBar, FillImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_FillImage_MetaData, ARRAY_COUNT(NewProp_FillImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "The brush to use as the background of the progress bar" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UProgressBar, BackgroundImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_BackgroundImage_MetaData, ARRAY_COUNT(NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "Style used for the progress bar" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UProgressBar, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
				{ "ToolTip", "The progress bar style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProgressBar, WidgetStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillColorAndOpacityDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMarquee,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarFillType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Percent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarqueeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProgressBar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProgressBar::StaticClass,
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
	IMPLEMENT_CLASS(UProgressBar, 960380620);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressBar(Z_Construct_UClass_UProgressBar, &UProgressBar::StaticClass, TEXT("/Script/UMG"), TEXT("UProgressBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
