// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/TileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileView() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UMG_API UClass* Z_Construct_UClass_UTableViewBase();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UTileView_RequestListRefresh();
	UMG_API UFunction* Z_Construct_UFunction_UTileView_SetItemHeight();
	UMG_API UFunction* Z_Construct_UFunction_UTileView_SetItemWidth();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UTableViewBase_OnGenerateRowUObject__DelegateSignature();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UTileView::StaticRegisterNativesUTileView()
	{
		UClass* Class = UTileView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestListRefresh", (Native)&UTileView::execRequestListRefresh },
			{ "SetItemHeight", (Native)&UTileView::execSetItemHeight },
			{ "SetItemWidth", (Native)&UTileView::execSetItemWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTileView_RequestListRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
				{ "ToolTip", "Refreshes the list" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, "RequestListRefresh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTileView_SetItemHeight()
	{
		struct TileView_eventSetItemHeight_Parms
		{
			float Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TileView_eventSetItemHeight_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
				{ "ToolTip", "Set item height" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, "SetItemHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TileView_eventSetItemHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTileView_SetItemWidth()
	{
		struct TileView_eventSetItemWidth_Parms
		{
			float Width;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TileView_eventSetItemWidth_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
				{ "ToolTip", "Set item width" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, "SetItemWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TileView_eventSetItemWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileView_NoRegister()
	{
		return UTileView::StaticClass();
	}
	UClass* Z_Construct_UClass_UTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTableViewBase,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTileView_RequestListRefresh, "RequestListRefresh" }, // 376188775
				{ &Z_Construct_UFunction_UTileView_SetItemHeight, "SetItemHeight" }, // 1152629576
				{ &Z_Construct_UFunction_UTileView_SetItemWidth, "SetItemWidth" }, // 1936484120
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Components/TileView.h" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
				{ "ToolTip", "A flow panel that presents the contents as a set of tiles all uniformly sized." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateTileEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateTileEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGenerateTileEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UTileView, OnGenerateTileEvent), Z_Construct_UDelegateFunction_UTableViewBase_OnGenerateRowUObject__DelegateSignature, METADATA_PARAMS(NewProp_OnGenerateTileEvent_MetaData, ARRAY_COUNT(NewProp_OnGenerateTileEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTileView, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(NewProp_SelectionMode_MetaData, ARRAY_COUNT(NewProp_SelectionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTileView, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeight_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ItemHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTileView, ItemHeight), METADATA_PARAMS(NewProp_ItemHeight_MetaData, ARRAY_COUNT(NewProp_ItemHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWidth_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TileView.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWidth = { UE4CodeGen_Private::EPropertyClass::Float, "ItemWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTileView, ItemWidth), METADATA_PARAMS(NewProp_ItemWidth_MetaData, ARRAY_COUNT(NewProp_ItemWidth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGenerateTileEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemWidth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTileView>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTileView::StaticClass,
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
	IMPLEMENT_CLASS(UTileView, 2308761872);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileView(Z_Construct_UClass_UTileView, &UTileView::StaticClass, TEXT("/Script/UMG"), TEXT("UTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
