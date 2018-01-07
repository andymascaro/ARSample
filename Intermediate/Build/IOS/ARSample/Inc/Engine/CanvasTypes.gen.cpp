// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CanvasTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
class UScriptStruct* FWrappedStringElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrappedStringElement, Z_Construct_UPackage__Script_Engine(), TEXT("WrappedStringElement"), sizeof(FWrappedStringElement), Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrappedStringElement(FWrappedStringElement::StaticStruct, TEXT("/Script/Engine"), TEXT("WrappedStringElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement
{
	FScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WrappedStringElement")),new UScriptStruct::TCppStructOps<FWrappedStringElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWrappedStringElement;
	UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrappedStringElement"), sizeof(FWrappedStringElement), Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrappedStringElement>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineExtent_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "the size (in pixels) that it will take to render this string" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "LineExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWrappedStringElement, LineExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_LineExtent_MetaData, ARRAY_COUNT(NewProp_LineExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "the string associated with this line" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWrappedStringElement, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WrappedStringElement",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWrappedStringElement),
				alignof(FWrappedStringElement),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC() { return 2494302820U; }
class UScriptStruct* FTextSizingParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextSizingParameters, Z_Construct_UPackage__Script_Engine(), TEXT("TextSizingParameters"), sizeof(FTextSizingParameters), Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextSizingParameters(FTextSizingParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("TextSizingParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextSizingParameters")),new UScriptStruct::TCppStructOps<FTextSizingParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextSizingParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextSizingParameters"), sizeof(FTextSizingParameters), Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "General purpose data structure for grouping all parameters needed when sizing or wrapping a string" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextSizingParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingAdjust_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpacingAdjust = { UE4CodeGen_Private::EPropertyClass::Struct, "SpacingAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, SpacingAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SpacingAdjust_MetaData, ARRAY_COUNT(NewProp_SpacingAdjust_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFont_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "the font to use for sizing/wrapping the string" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFont = { UE4CodeGen_Private::EPropertyClass::Object, "DrawFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_DrawFont_MetaData, ARRAY_COUNT(NewProp_DrawFont_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scaling = { UE4CodeGen_Private::EPropertyClass::Struct, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, Scaling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Scaling_MetaData, ARRAY_COUNT(NewProp_Scaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawYL_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "a pixel value representing the height of the area available for rendering the string" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawYL = { UE4CodeGen_Private::EPropertyClass::Float, "DrawYL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawYL), METADATA_PARAMS(NewProp_DrawYL_MetaData, ARRAY_COUNT(NewProp_DrawYL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawXL_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "a pixel value representing the width of the area available for rendering the string" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawXL = { UE4CodeGen_Private::EPropertyClass::Float, "DrawXL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawXL), METADATA_PARAMS(NewProp_DrawXL_MetaData, ARRAY_COUNT(NewProp_DrawXL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawY_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "a pixel value representing the vertical screen location to begin rendering the string" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawY = { UE4CodeGen_Private::EPropertyClass::Float, "DrawY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawY), METADATA_PARAMS(NewProp_DrawY_MetaData, ARRAY_COUNT(NewProp_DrawY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawX_MetaData[] = {
				{ "ModuleRelativePath", "Public/CanvasTypes.h" },
				{ "ToolTip", "a pixel value representing the horizontal screen location to begin rendering the string" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawX = { UE4CodeGen_Private::EPropertyClass::Float, "DrawX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawX), METADATA_PARAMS(NewProp_DrawX_MetaData, ARRAY_COUNT(NewProp_DrawX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpacingAdjust,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFont,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawYL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawXL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawX,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TextSizingParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTextSizingParameters),
				alignof(FTextSizingParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC() { return 2148951888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
