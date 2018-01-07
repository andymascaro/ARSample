// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ScaleBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale();
	UMG_API UFunction* Z_Construct_UFunction_UScaleBox_SetStretch();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	UMG_API UFunction* Z_Construct_UFunction_UScaleBox_SetStretchDirection();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
	UMG_API UFunction* Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale();
// End Cross Module References
	void UScaleBox::StaticRegisterNativesUScaleBox()
	{
		UClass* Class = UScaleBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIgnoreInheritedScale", (Native)&UScaleBox::execSetIgnoreInheritedScale },
			{ "SetStretch", (Native)&UScaleBox::execSetStretch },
			{ "SetStretchDirection", (Native)&UScaleBox::execSetStretchDirection },
			{ "SetUserSpecifiedScale", (Native)&UScaleBox::execSetUserSpecifiedScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale()
	{
		struct ScaleBox_eventSetIgnoreInheritedScale_Parms
		{
			bool bInIgnoreInheritedScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInIgnoreInheritedScale_SetBit = [](void* Obj){ ((ScaleBox_eventSetIgnoreInheritedScale_Parms*)Obj)->bInIgnoreInheritedScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreInheritedScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bInIgnoreInheritedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScaleBox_eventSetIgnoreInheritedScale_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInIgnoreInheritedScale_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInIgnoreInheritedScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, "SetIgnoreInheritedScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaleBox_eventSetIgnoreInheritedScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaleBox_SetStretch()
	{
		struct ScaleBox_eventSetStretch_Parms
		{
			TEnumAsByte<EStretch::Type> InStretch;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStretch = { UE4CodeGen_Private::EPropertyClass::Byte, "InStretch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaleBox_eventSetStretch_Parms, InStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStretch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, "SetStretch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaleBox_eventSetStretch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaleBox_SetStretchDirection()
	{
		struct ScaleBox_eventSetStretchDirection_Parms
		{
			TEnumAsByte<EStretchDirection::Type> InStretchDirection;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStretchDirection = { UE4CodeGen_Private::EPropertyClass::Byte, "InStretchDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaleBox_eventSetStretchDirection_Parms, InStretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStretchDirection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, "SetStretchDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaleBox_eventSetStretchDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale()
	{
		struct ScaleBox_eventSetUserSpecifiedScale_Parms
		{
			float InUserSpecifiedScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InUserSpecifiedScale = { UE4CodeGen_Private::EPropertyClass::Float, "InUserSpecifiedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScaleBox_eventSetUserSpecifiedScale_Parms, InUserSpecifiedScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InUserSpecifiedScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, "SetUserSpecifiedScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScaleBox_eventSetUserSpecifiedScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScaleBox_NoRegister()
	{
		return UScaleBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UScaleBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale, "SetIgnoreInheritedScale" }, // 3880638757
				{ &Z_Construct_UFunction_UScaleBox_SetStretch, "SetStretch" }, // 1636693079
				{ &Z_Construct_UFunction_UScaleBox_SetStretchDirection, "SetStretchDirection" }, // 5942269
				{ &Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale, "SetUserSpecifiedScale" }, // 314732268
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/ScaleBox.h" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If\nyou needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need\nto auto fit some text to an area, this is the control for you.\n\n* Single Child\n* Aspect Ratio" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleLayoutPass_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "Only perform a single layout pass, if you do this, it can save a considerable\namount of time, however, some things like text may not look correct.  You may also\nsee the UI judder between frames.  This generally is caused by not explicitly\nsizing the widget, and instead allowing it to layout based on desired size along\nwhich won't work in Single Layout Pass mode." },
			};
#endif
			auto NewProp_bSingleLayoutPass_SetBit = [](void* Obj){ ((UScaleBox*)Obj)->bSingleLayoutPass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleLayoutPass = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleLayoutPass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaleBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSingleLayoutPass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSingleLayoutPass_MetaData, ARRAY_COUNT(NewProp_bSingleLayoutPass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreInheritedScale_MetaData[] = {
				{ "Category", "Stretching" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation." },
			};
#endif
			auto NewProp_IgnoreInheritedScale_SetBit = [](void* Obj){ ((UScaleBox*)Obj)->IgnoreInheritedScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreInheritedScale = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreInheritedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaleBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IgnoreInheritedScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IgnoreInheritedScale_MetaData, ARRAY_COUNT(NewProp_IgnoreInheritedScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSpecifiedScale_MetaData[] = {
				{ "Category", "Stretching" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "Optional scale that can be specified by the User. Used only for UserSpecified stretching." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UserSpecifiedScale = { UE4CodeGen_Private::EPropertyClass::Float, "UserSpecifiedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScaleBox, UserSpecifiedScale), METADATA_PARAMS(NewProp_UserSpecifiedScale_MetaData, ARRAY_COUNT(NewProp_UserSpecifiedScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchDirection_MetaData[] = {
				{ "Category", "Stretching" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "Controls in what direction content can be scaled" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StretchDirection = { UE4CodeGen_Private::EPropertyClass::Byte, "StretchDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScaleBox, StretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(NewProp_StretchDirection_MetaData, ARRAY_COUNT(NewProp_StretchDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[] = {
				{ "Category", "Stretching" },
				{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
				{ "ToolTip", "The stretching rule to apply when content is stretched" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stretch = { UE4CodeGen_Private::EPropertyClass::Byte, "Stretch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScaleBox, Stretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(NewProp_Stretch_MetaData, ARRAY_COUNT(NewProp_Stretch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSingleLayoutPass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreInheritedScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserSpecifiedScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StretchDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stretch,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScaleBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScaleBox::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaleBox, 3937780271);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaleBox(Z_Construct_UClass_UScaleBox, &UScaleBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScaleBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
