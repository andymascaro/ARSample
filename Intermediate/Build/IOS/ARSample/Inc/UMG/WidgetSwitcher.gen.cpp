// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/WidgetSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcher() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex();
// End Cross Module References
	void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher()
	{
		UClass* Class = UWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveWidget", (Native)&UWidgetSwitcher::execGetActiveWidget },
			{ "GetActiveWidgetIndex", (Native)&UWidgetSwitcher::execGetActiveWidgetIndex },
			{ "GetNumWidgets", (Native)&UWidgetSwitcher::execGetNumWidgets },
			{ "GetWidgetAtIndex", (Native)&UWidgetSwitcher::execGetWidgetAtIndex },
			{ "SetActiveWidget", (Native)&UWidgetSwitcher::execSetActiveWidget },
			{ "SetActiveWidgetIndex", (Native)&UWidgetSwitcher::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget()
	{
		struct WidgetSwitcher_eventGetActiveWidget_Parms
		{
			UWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Get the reference of the currently active widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "GetActiveWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetSwitcher_eventGetActiveWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex()
	{
		struct WidgetSwitcher_eventGetActiveWidgetIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Gets the slot index of the currently active widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "GetActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetSwitcher_eventGetActiveWidgetIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets()
	{
		struct WidgetSwitcher_eventGetNumWidgets_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetNumWidgets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Gets the number of widgets that this switcher manages." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "GetNumWidgets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetSwitcher_eventGetNumWidgets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex()
	{
		struct WidgetSwitcher_eventGetWidgetAtIndex_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Get a widget at the provided index" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "GetWidgetAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetSwitcher_eventGetWidgetAtIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget()
	{
		struct WidgetSwitcher_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Activates the widget and makes it the active index." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "SetActiveWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetSwitcher_eventSetActiveWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex()
	{
		struct WidgetSwitcher_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Switcher" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "Activates the widget at the specified index." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, "SetActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetSwitcher_eventSetActiveWidgetIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister()
	{
		return UWidgetSwitcher::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget, "GetActiveWidget" }, // 2146501399
				{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 3666477607
				{ &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets, "GetNumWidgets" }, // 2368816795
				{ &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 311092342
				{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget, "SetActiveWidget" }, // 3525411409
				{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 2279799476
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/WidgetSwitcher.h" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[] = {
				{ "Category", "Switcher" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
				{ "ToolTip", "The slot index to display" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWidgetSwitcher, ActiveWidgetIndex), METADATA_PARAMS(NewProp_ActiveWidgetIndex_MetaData, ARRAY_COUNT(NewProp_ActiveWidgetIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveWidgetIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetSwitcher>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetSwitcher::StaticClass,
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
	IMPLEMENT_CLASS(UWidgetSwitcher, 3156594383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetSwitcher(Z_Construct_UClass_UWidgetSwitcher, &UWidgetSwitcher::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
