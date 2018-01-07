// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ComboBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UComboBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBox();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UComboBox::StaticRegisterNativesUComboBox()
	{
	}
	UClass* Z_Construct_UClass_UComboBox_NoRegister()
	{
		return UComboBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UComboBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "DisplayName", "ComboBox (Object)" },
				{ "IncludePath", "Components/ComboBox.h" },
				{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
				{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
			};
#endif
			auto NewProp_bIsFocusable_SetBit = [](void* Obj){ ((UComboBox*)Obj)->bIsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFocusable_MetaData, ARRAY_COUNT(NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
				{ "ToolTip", "Called when the widget is needed for the item." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGenerateWidgetEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UComboBox, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature, METADATA_PARAMS(NewProp_OnGenerateWidgetEvent_MetaData, ARRAY_COUNT(NewProp_OnGenerateWidgetEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
				{ "ToolTip", "The list of items to be displayed on the combobox." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBox, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGenerateWidgetEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UComboBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UComboBox::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UComboBox, 3809142467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBox(Z_Construct_UClass_UComboBox, &UComboBox::StaticClass, TEXT("/Script/UMG"), TEXT("UComboBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
