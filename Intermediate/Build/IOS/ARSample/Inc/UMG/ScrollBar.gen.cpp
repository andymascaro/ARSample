// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ScrollBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBar() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UScrollBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBar_SetState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
// End Cross Module References
	void UScrollBar::StaticRegisterNativesUScrollBar()
	{
		UClass* Class = UScrollBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetState", (Native)&UScrollBar::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UScrollBar_SetState()
	{
		struct ScrollBar_eventSetState_Parms
		{
			float InOffsetFraction;
			float InThumbSizeFraction;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThumbSizeFraction = { UE4CodeGen_Private::EPropertyClass::Float, "InThumbSizeFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InThumbSizeFraction), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOffsetFraction = { UE4CodeGen_Private::EPropertyClass::Float, "InOffsetFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InOffsetFraction), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InThumbSizeFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOffsetFraction,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Scrolling" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
				{ "ToolTip", "Set the offset and size of the track's thumb.\nNote that the maximum offset is 1.0-ThumbSizeFraction.\nIf the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\n@param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n@param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBar, "SetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBar_eventSetState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBar_NoRegister()
	{
		return UScrollBar::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UScrollBar_SetState, "SetState" }, // 2733327473
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Components/ScrollBar.h" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
				{ "ToolTip", "The thickness of the scrollbar thumb" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Struct, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UScrollBar, Thickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Thickness_MetaData, ARRAY_COUNT(NewProp_Thickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UScrollBar, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbar_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
			};
#endif
			auto NewProp_bAlwaysShowScrollbar_SetBit = [](void* Obj){ ((UScrollBar*)Obj)->bAlwaysShowScrollbar = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbar = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBar), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysShowScrollbar_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysShowScrollbar_MetaData, ARRAY_COUNT(NewProp_bAlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UScrollBar, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
				{ "ToolTip", "Style of the scrollbar" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UScrollBar, WidgetStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysShowScrollbar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScrollBar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScrollBar::StaticClass,
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
	IMPLEMENT_CLASS(UScrollBar, 176708951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBar(Z_Construct_UClass_UScrollBar, &UScrollBar::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
