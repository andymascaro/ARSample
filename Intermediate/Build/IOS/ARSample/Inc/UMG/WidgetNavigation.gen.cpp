// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/WidgetNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetNavigation() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FWidgetNavigationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNavigationData, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetNavigationData"), sizeof(FWidgetNavigationData), Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetNavigationData(FWidgetNavigationData::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetNavigationData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetNavigationData")),new UScriptStruct::TCppStructOps<FWidgetNavigationData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetNavigationData"), sizeof(FWidgetNavigationData), Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetNavigationData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000080008, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFocus_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus = { UE4CodeGen_Private::EPropertyClass::Name, "WidgetToFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, WidgetToFocus), METADATA_PARAMS(NewProp_WidgetToFocus_MetaData, ARRAY_COUNT(NewProp_WidgetToFocus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rule = { UE4CodeGen_Private::EPropertyClass::Enum, "Rule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(NewProp_Rule_MetaData, ARRAY_COUNT(NewProp_Rule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetToFocus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rule_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WidgetNavigationData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FWidgetNavigationData),
				alignof(FWidgetNavigationData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC() { return 2666020577U; }
	void UWidgetNavigation::StaticRegisterNativesUWidgetNavigation()
	{
	}
	UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister()
	{
		return UWidgetNavigation::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/WidgetNavigation.h" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses Shift+Tab." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Previous = { UE4CodeGen_Private::EPropertyClass::Struct, "Previous", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Previous), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Previous_MetaData, ARRAY_COUNT(NewProp_Previous_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses Tab." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Next = { UE4CodeGen_Private::EPropertyClass::Struct, "Next", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Next), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Next_MetaData, ARRAY_COUNT(NewProp_Next_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses right arrow, joystick, d-pad." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Struct, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Right), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Right_MetaData, ARRAY_COUNT(NewProp_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses left arrow, joystick, d-pad." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Struct, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Left), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Left_MetaData, ARRAY_COUNT(NewProp_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses down arrow, joystick, d-pad." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down = { UE4CodeGen_Private::EPropertyClass::Struct, "Down", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Down), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Down_MetaData, ARRAY_COUNT(NewProp_Down_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
				{ "ToolTip", "Happens when the user presses up arrow, joystick, d-pad." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up = { UE4CodeGen_Private::EPropertyClass::Struct, "Up", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Up), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(NewProp_Up_MetaData, ARRAY_COUNT(NewProp_Up_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Previous,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Next,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Down,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Up,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetNavigation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetNavigation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UWidgetNavigation, 1807961057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetNavigation(Z_Construct_UClass_UWidgetNavigation, &UWidgetNavigation::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
