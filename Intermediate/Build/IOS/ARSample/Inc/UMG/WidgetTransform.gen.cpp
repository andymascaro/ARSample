// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Slate/WidgetTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTransform() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FWidgetTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTransform, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetTransform"), sizeof(FWidgetTransform), Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetTransform(FWidgetTransform::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetTransform"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetTransform
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetTransform")),new UScriptStruct::TCppStructOps<FWidgetTransform>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetTransform;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetTransform"), sizeof(FWidgetTransform), Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
				{ "ToolTip", "Describes the standard transformation of a widget" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetTransform>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "Category", "Transform" },
				{ "Delta", "1" },
				{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
				{ "ToolTip", "The angle in degrees to rotate" },
				{ "UIMax", "180" },
				{ "UIMin", "-180" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWidgetTransform, Angle), METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[] = {
				{ "Category", "Transform" },
				{ "ClampMax", "89" },
				{ "ClampMin", "-89" },
				{ "Delta", "1" },
				{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
				{ "ToolTip", "The amount to shear the widget in slate units" },
				{ "UIMax", "89" },
				{ "UIMin", "-89" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear = { UE4CodeGen_Private::EPropertyClass::Struct, "Shear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWidgetTransform, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Shear_MetaData, ARRAY_COUNT(NewProp_Shear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Transform" },
				{ "Delta", "0.05" },
				{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
				{ "ToolTip", "The scale to apply to the widget" },
				{ "UIMax", "5" },
				{ "UIMin", "-5" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWidgetTransform, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "Category", "Transform" },
				{ "Delta", "1" },
				{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
				{ "ToolTip", "The amount to translate the widget in slate units" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWidgetTransform, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WidgetTransform",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWidgetTransform),
				alignof(FWidgetTransform),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC() { return 2505007584U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
