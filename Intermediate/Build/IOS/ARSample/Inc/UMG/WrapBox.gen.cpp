// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/WrapBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBox_AddChildWrapBox();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UWrapBox::StaticRegisterNativesUWrapBox()
	{
		UClass* Class = UWrapBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildWrapBox", (Native)&UWrapBox::execAddChildWrapBox },
			{ "SetInnerSlotPadding", (Native)&UWrapBox::execSetInnerSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWrapBox_AddChildWrapBox()
	{
		struct WrapBox_eventAddChildWrapBox_Parms
		{
			UWidget* Content;
			UWrapBoxSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WrapBox_eventAddChildWrapBox_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Object, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WrapBox_eventAddChildWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Content_MetaData, ARRAY_COUNT(NewProp_Content_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Panel" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, "AddChildWrapBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBox_eventAddChildWrapBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding()
	{
		struct WrapBox_eventSetInnerSlotPadding_Parms
		{
			FVector2D InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WrapBox_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Content Layout" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
				{ "ToolTip", "Sets the inner slot padding goes between slots sharing borders" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, "SetInnerSlotPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(WrapBox_eventSetInnerSlotPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrapBox_NoRegister()
	{
		return UWrapBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UWrapBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWrapBox_AddChildWrapBox, "AddChildWrapBox" }, // 3025980812
				{ &Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 3923706436
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/WrapBox.h" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
				{ "ToolTip", "Arranges widgets left-to-right.  When the widgets exceed the Width it will place widgets on the next line.\n\n* Many Children\n* Flows\n* Wraps" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapWidth_MetaData[] = {
				{ "Category", "Content Layout" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
				{ "ToolTip", "Use explicit wrap width whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
			};
#endif
			auto NewProp_bExplicitWrapWidth_SetBit = [](void* Obj){ ((UWrapBox*)Obj)->bExplicitWrapWidth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapWidth = { UE4CodeGen_Private::EPropertyClass::Bool, "bExplicitWrapWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWrapBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExplicitWrapWidth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExplicitWrapWidth_MetaData, ARRAY_COUNT(NewProp_bExplicitWrapWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapWidth_MetaData[] = {
				{ "Category", "Content Layout" },
				{ "EditCondition", "bExplicitWrapWidth" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
				{ "ToolTip", "When this width is exceeded, elements will start appearing on the next line." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapWidth = { UE4CodeGen_Private::EPropertyClass::Float, "WrapWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBox, WrapWidth), METADATA_PARAMS(NewProp_WrapWidth_MetaData, ARRAY_COUNT(NewProp_WrapWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[] = {
				{ "Category", "Content Layout" },
				{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
				{ "ToolTip", "The inner slot padding goes between slots sharing borders" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InnerSlotPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBox, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_InnerSlotPadding_MetaData, ARRAY_COUNT(NewProp_InnerSlotPadding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExplicitWrapWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WrapWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InnerSlotPadding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWrapBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWrapBox::StaticClass,
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
	IMPLEMENT_CLASS(UWrapBox, 3863425820);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrapBox(Z_Construct_UClass_UWrapBox, &UWrapBox::StaticClass, TEXT("/Script/UMG"), TEXT("UWrapBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
