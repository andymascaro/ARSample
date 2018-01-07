// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ExpandableArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandableArea() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature()
	{
		struct _Script_UMG_eventOnExpandableAreaExpansionChanged_Parms
		{
			UExpandableArea* Area;
			bool bIsExpanded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsExpanded_SetBit = [](void* Obj){ ((_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms*)Obj)->bIsExpanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsExpanded_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Area = { UE4CodeGen_Private::EPropertyClass::Object, "Area", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms, Area), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(NewProp_Area_MetaData, ARRAY_COUNT(NewProp_Area_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsExpanded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Area,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnExpandableAreaExpansionChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UExpandableArea::StaticRegisterNativesUExpandableArea()
	{
		UClass* Class = UExpandableArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsExpanded", (Native)&UExpandableArea::execGetIsExpanded },
			{ "SetIsExpanded", (Native)&UExpandableArea::execSetIsExpanded },
			{ "SetIsExpanded_Animated", (Native)&UExpandableArea::execSetIsExpanded_Animated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded()
	{
		struct ExpandableArea_eventGetIsExpanded_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ExpandableArea_eventGetIsExpanded_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExpandableArea_eventGetIsExpanded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, "GetIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ExpandableArea_eventGetIsExpanded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded()
	{
		struct ExpandableArea_eventSetIsExpanded_Parms
		{
			bool IsExpanded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsExpanded_SetBit = [](void* Obj){ ((ExpandableArea_eventSetIsExpanded_Parms*)Obj)->IsExpanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "IsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExpandableArea_eventSetIsExpanded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsExpanded_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsExpanded,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, "SetIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExpandableArea_eventSetIsExpanded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated()
	{
		struct ExpandableArea_eventSetIsExpanded_Animated_Parms
		{
			bool IsExpanded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsExpanded_SetBit = [](void* Obj){ ((ExpandableArea_eventSetIsExpanded_Animated_Parms*)Obj)->IsExpanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "IsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsExpanded_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsExpanded,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, "SetIsExpanded_Animated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExpandableArea_NoRegister()
	{
		return UExpandableArea::StaticClass();
	}
	UClass* Z_Construct_UClass_UExpandableArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UExpandableArea_GetIsExpanded, "GetIsExpanded" }, // 526061802
				{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded, "SetIsExpanded" }, // 2671097387
				{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated, "SetIsExpanded_Animated" }, // 1941037813
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/ExpandableArea.h" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyContent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyContent = { UE4CodeGen_Private::EPropertyClass::Object, "BodyContent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UExpandableArea, BodyContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_BodyContent_MetaData, ARRAY_COUNT(NewProp_BodyContent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderContent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeaderContent = { UE4CodeGen_Private::EPropertyClass::Object, "HeaderContent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UExpandableArea, HeaderContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_HeaderContent_MetaData, ARRAY_COUNT(NewProp_HeaderContent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExpansionChanged_MetaData[] = {
				{ "Category", "ExpandableArea|Event" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
				{ "ToolTip", "A bindable delegate for the IsChecked." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpansionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnExpansionChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UExpandableArea, OnExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnExpansionChanged_MetaData, ARRAY_COUNT(NewProp_OnExpansionChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaPadding_MetaData[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AreaPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "AreaPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExpandableArea, AreaPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_AreaPadding_MetaData, ARRAY_COUNT(NewProp_AreaPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderPadding_MetaData[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "HeaderPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExpandableArea, HeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_HeaderPadding_MetaData, ARRAY_COUNT(NewProp_HeaderPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
				{ "ToolTip", "The maximum height of the area" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExpandableArea, MaxHeight), METADATA_PARAMS(NewProp_MaxHeight_MetaData, ARRAY_COUNT(NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[] = {
				{ "Category", "Expansion" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			auto NewProp_bIsExpanded_SetBit = [](void* Obj){ ((UExpandableArea*)Obj)->bIsExpanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UExpandableArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsExpanded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsExpanded_MetaData, ARRAY_COUNT(NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExpandableArea, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_BorderColor_MetaData, ARRAY_COUNT(NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExpandableArea, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BorderBrush_MetaData, ARRAY_COUNT(NewProp_BorderBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Struct, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UExpandableArea, Style), Z_Construct_UScriptStruct_FExpandableAreaStyle, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyContent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderContent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnExpansionChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsExpanded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNamedSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UExpandableArea, INamedSlotInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UExpandableArea>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UExpandableArea::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExpandableArea, 3144272071);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExpandableArea(Z_Construct_UClass_UExpandableArea, &UExpandableArea::StaticClass, TEXT("/Script/UMG"), TEXT("UExpandableArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandableArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
