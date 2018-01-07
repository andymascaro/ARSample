// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Canvas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvas() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_Deproject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBorder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawLine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasUVTri();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawPolygon();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawText();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTriangle();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_Project();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_StrLen();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_TextSize();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FCanvasIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanvasIcon, Z_Construct_UPackage__Script_Engine(), TEXT("CanvasIcon"), sizeof(FCanvasIcon), Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCanvasIcon(FCanvasIcon::StaticStruct, TEXT("/Script/Engine"), TEXT("CanvasIcon"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCanvasIcon
{
	FScriptStruct_Engine_StaticRegisterNativesFCanvasIcon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CanvasIcon")),new UScriptStruct::TCppStructOps<FCanvasIcon>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCanvasIcon;
	UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CanvasIcon"), sizeof(FCanvasIcon), Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Holds texture information with UV coordinates as well." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanvasIcon>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VL_MetaData[] = {
				{ "Category", "CanvasIcon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VL = { UE4CodeGen_Private::EPropertyClass::Float, "VL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCanvasIcon, VL), METADATA_PARAMS(NewProp_VL_MetaData, ARRAY_COUNT(NewProp_VL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_MetaData[] = {
				{ "Category", "CanvasIcon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL = { UE4CodeGen_Private::EPropertyClass::Float, "UL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCanvasIcon, UL), METADATA_PARAMS(NewProp_UL_MetaData, ARRAY_COUNT(NewProp_UL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
				{ "Category", "CanvasIcon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCanvasIcon, V), METADATA_PARAMS(NewProp_V_MetaData, ARRAY_COUNT(NewProp_V_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
				{ "Category", "CanvasIcon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "UV coords" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCanvasIcon, U), METADATA_PARAMS(NewProp_U_MetaData, ARRAY_COUNT(NewProp_U_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "CanvasIcon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Source texture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCanvasIcon, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_U,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CanvasIcon",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCanvasIcon),
				alignof(FCanvasIcon),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC() { return 1616678843U; }
	void UCanvas::StaticRegisterNativesUCanvas()
	{
		UClass* Class = UCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Deproject", (Native)&UCanvas::execK2_Deproject },
			{ "K2_DrawBorder", (Native)&UCanvas::execK2_DrawBorder },
			{ "K2_DrawBox", (Native)&UCanvas::execK2_DrawBox },
			{ "K2_DrawLine", (Native)&UCanvas::execK2_DrawLine },
			{ "K2_DrawMaterial", (Native)&UCanvas::execK2_DrawMaterial },
			{ "K2_DrawMaterialTriangle", (Native)&UCanvas::execK2_DrawMaterialTriangle },
			{ "K2_DrawPolygon", (Native)&UCanvas::execK2_DrawPolygon },
			{ "K2_DrawText", (Native)&UCanvas::execK2_DrawText },
			{ "K2_DrawTexture", (Native)&UCanvas::execK2_DrawTexture },
			{ "K2_DrawTriangle", (Native)&UCanvas::execK2_DrawTriangle },
			{ "K2_Project", (Native)&UCanvas::execK2_Project },
			{ "K2_StrLen", (Native)&UCanvas::execK2_StrLen },
			{ "K2_TextSize", (Native)&UCanvas::execK2_TextSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_Deproject()
	{
		struct Canvas_eventK2_Deproject_Parms
		{
			FVector2D ScreenPosition;
			FVector WorldOrigin;
			FVector WorldDirection;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "DisplayName", "Deproject" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Performs a deprojection of a screen space coordinate using the projection matrix set up for the Canvas.\n\n@param ScreenPosition                        Screen space position to deproject to the World.\n@param WorldOrigin                           Vector which is the world position of the screen space position.\n@param WorldDirection                        Vector which can be used in a trace to determine what is \"behind\" the screen space position. Useful for object picking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_Deproject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(Canvas_eventK2_Deproject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBorder()
	{
		struct Canvas_eventK2_DrawBorder_Parms
		{
			UTexture* BorderTexture;
			UTexture* BackgroundTexture;
			UTexture* LeftBorderTexture;
			UTexture* RightBorderTexture;
			UTexture* TopBorderTexture;
			UTexture* BottomBorderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			FVector2D BorderScale;
			FVector2D BackgroundScale;
			float Rotation;
			FVector2D PivotPoint;
			FVector2D CornerSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CornerSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CornerSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundScale = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderScale = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RenderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinateSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomBorderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BottomBorderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BottomBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopBorderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "TopBorderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, TopBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightBorderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "RightBorderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RightBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftBorderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "LeftBorderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, LeftBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BorderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BorderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CornerSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinateSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinatePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomBorderTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopBorderTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightBorderTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftBorderTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_BackgroundScale", "(X=0.100,Y=0.100)" },
				{ "CPP_Default_BorderScale", "(X=0.100,Y=0.100)" },
				{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
				{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
				{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_Rotation", "0.000000" },
				{ "DisplayName", "Draw Border" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a 3x3 grid border with tiled frame and tiled interior on the Canvas.\n\n@param BorderTexture                         Texture to use for border.\n@param BackgroundTexture                     Texture to use for border background.\n@param LeftBorderTexture                     Texture to use for the tiling left border.\n@param RightBorderTexture            Texture to use for the tiling right border.\n@param TopBorderTexture                      Texture to use for the tiling top border.\n@param BottomBorderTexture           Texture to use for the tiling bottom border.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the border texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the border texture.\n@param RenderColor                           Color to tint the border.\n@param BorderScale                           Scale of the border.\n@param BackgroundScale                       Scale of the background.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture.\n@param CornerSize                            Frame corner size in percent of frame texture (should be < 0.5f)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawBorder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawBorder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBox()
	{
		struct Canvas_eventK2_DrawBox_Parms
		{
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			float Thickness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_Thickness", "1.000000" },
				{ "DisplayName", "Draw Box" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws an unfilled box on the Canvas.\n\n@param ScreenPosition                        Screen space position to render the text.\n@param ScreenSize                            Screen space size to render the texture.\n@param Thickness                                     How many pixels thick the box lines should be." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawLine()
	{
		struct Canvas_eventK2_DrawLine_Parms
		{
			FVector2D ScreenPositionA;
			FVector2D ScreenPositionB;
			float Thickness;
			FLinearColor RenderColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RenderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPositionB = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPositionB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPositionA = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPositionA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPositionB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPositionA,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_Thickness", "1.000000" },
				{ "DisplayName", "Draw Line" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a line on the Canvas.\n\n@param ScreenPositionA               Starting position of the line in screen space.\n@param ScreenPositionB               Ending position of the line in screen space.\n@param Thickness                             How many pixels thick this line should be.\n@param RenderColor                   Color to render the line." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawLine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterial()
	{
		struct Canvas_eventK2_DrawMaterial_Parms
		{
			UMaterialInterface* RenderMaterial;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			float Rotation;
			FVector2D PivotPoint;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinateSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "RenderMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinateSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinatePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
				{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
				{ "CPP_Default_Rotation", "0.000000" },
				{ "DisplayName", "Draw Material" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a material on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle()
	{
		struct Canvas_eventK2_DrawMaterialTriangle_Parms
		{
			UMaterialInterface* RenderMaterial;
			TArray<FCanvasUVTri> Triangles;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "RenderMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "DisplayName", "Draw Material Triangles" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param Triangles                                     Triangles to render." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawMaterialTriangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Canvas_eventK2_DrawMaterialTriangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawPolygon()
	{
		struct Canvas_eventK2_DrawPolygon_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D Radius;
			int32 NumberOfSides;
			FLinearColor RenderColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RenderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSides = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfSides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, NumberOfSides), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Struct, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, Radius), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfSides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_NumberOfSides", "3" },
				{ "CPP_Default_Radius", "(X=1.000,Y=1.000)" },
				{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "DisplayName", "Draw Polygon" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a polygon on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param ScreenPosition                        Screen space position to render the text.\n@param Radius                                        How large in pixels this polygon should be.\n@param NumberOfSides                         How many sides this polygon should have. This should be above or equal to three.\n@param RenderColor                           Color to tint the polygon." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawPolygon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawPolygon_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawText()
	{
		struct Canvas_eventK2_DrawText_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ScreenPosition;
			FLinearColor RenderColor;
			float Kerning;
			FLinearColor ShadowColor;
			FVector2D ShadowOffset;
			bool bCentreX;
			bool bCentreY;
			bool bOutlined;
			FLinearColor OutlineColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "OutlineColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bOutlined_SetBit = [](void* Obj){ ((Canvas_eventK2_DrawText_Parms*)Obj)->bOutlined = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutlined = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutlined", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Canvas_eventK2_DrawText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOutlined_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCentreY_SetBit = [](void* Obj){ ((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentreY = { UE4CodeGen_Private::EPropertyClass::Bool, "bCentreY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Canvas_eventK2_DrawText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCentreY_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCentreX_SetBit = [](void* Obj){ ((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentreX = { UE4CodeGen_Private::EPropertyClass::Bool, "bCentreX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Canvas_eventK2_DrawText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCentreX_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Kerning = { UE4CodeGen_Private::EPropertyClass::Float, "Kerning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, Kerning), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RenderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText = { UE4CodeGen_Private::EPropertyClass::Str, "RenderText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderText), METADATA_PARAMS(NewProp_RenderText_MetaData, ARRAY_COUNT(NewProp_RenderText_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont = { UE4CodeGen_Private::EPropertyClass::Object, "RenderFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutlineColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOutlined,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCentreY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCentreX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Kerning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderFont,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_bCentreX", "false" },
				{ "CPP_Default_bCentreY", "false" },
				{ "CPP_Default_bOutlined", "false" },
				{ "CPP_Default_Kerning", "0.000000" },
				{ "CPP_Default_OutlineColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
				{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_ShadowColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
				{ "CPP_Default_ShadowOffset", "(X=1.000,Y=1.000)" },
				{ "DisplayName", "Draw Text" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws text on the Canvas.\n\n@param RenderFont                            Font to use when rendering the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to render on the Canvas.\n@param ScreenPosition                        Screen space position to render the text.\n@param RenderColor                           Color to render the text.\n@param Kerning                                       Horizontal spacing adjustment to modify the spacing between each letter.\n@param ShadowColor                           Color to render the shadow of the text.\n@param ShadowOffset                          Pixel offset relative to the screen space position to render the shadow of the text.\n@param bCentreX                                      If true, then interpret the screen space position X coordinate as the center of the rendered text.\n@param bCentreY                                      If true, then interpret the screen space position Y coordinate as the center of the rendered text.\n@param bOutlined                                     If true, then the text should be rendered with an outline.\n@param OutlineColor                          Color to render the outline for the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTexture()
	{
		struct Canvas_eventK2_DrawTexture_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			TEnumAsByte<EBlendMode> BlendMode;
			float Rotation;
			FVector2D PivotPoint;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "RenderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinateSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CoordinatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinateSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinatePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_BlendMode", "BLEND_Translucent" },
				{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
				{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
				{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "CPP_Default_Rotation", "0.000000" },
				{ "DisplayName", "Draw Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a texture on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering. If no texture is set then this will use the default white texture.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param RenderColor                           Color to use when rendering the texture.\n@param BlendMode                                     Blending mode to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_DrawTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTriangle()
	{
		struct Canvas_eventK2_DrawTriangle_Parms
		{
			UTexture* RenderTexture;
			TArray<FCanvasUVTri> Triangles;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "DisplayName", "Draw Triangles" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param Triangles                                     Triangles to render." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_DrawTriangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Canvas_eventK2_DrawTriangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_Project()
	{
		struct Canvas_eventK2_Project_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "DisplayName", "Project" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Performs a projection of a world space coordinates using the projection matrix set up for the Canvas.\n\n@param WorldLocation                         World space location to project onto the Canvas rendering plane.\n@return                                                      Returns a vector where X, Y defines a screen space position representing the world space location." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_Project", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_Project_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_StrLen()
	{
		struct Canvas_eventK2_StrLen_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText = { UE4CodeGen_Private::EPropertyClass::Str, "RenderText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderText), METADATA_PARAMS(NewProp_RenderText_MetaData, ARRAY_COUNT(NewProp_RenderText_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont = { UE4CodeGen_Private::EPropertyClass::Object, "RenderFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderFont,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "DisplayName", "Wrapped Text Size" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Returns the wrapped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@return                                                      Returns the screen space size of the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_StrLen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_StrLen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvas_K2_TextSize()
	{
		struct Canvas_eventK2_TextSize_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D Scale;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText = { UE4CodeGen_Private::EPropertyClass::Str, "RenderText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderText), METADATA_PARAMS(NewProp_RenderText_MetaData, ARRAY_COUNT(NewProp_RenderText_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont = { UE4CodeGen_Private::EPropertyClass::Object, "RenderFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderFont,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas" },
				{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
				{ "DisplayName", "Clipped Text Size" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Returns the clipped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@param Scale                                         Scale of the font to use when determining the size of the text.\n@return                                                      Returns the screen space size of the text." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, "K2_TextSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Canvas_eventK2_TextSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvas_NoRegister()
	{
		return UCanvas::StaticClass();
	}
	UClass* Z_Construct_UClass_UCanvas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCanvas_K2_Deproject, "K2_Deproject" }, // 3946662588
				{ &Z_Construct_UFunction_UCanvas_K2_DrawBorder, "K2_DrawBorder" }, // 4034791274
				{ &Z_Construct_UFunction_UCanvas_K2_DrawBox, "K2_DrawBox" }, // 550490221
				{ &Z_Construct_UFunction_UCanvas_K2_DrawLine, "K2_DrawLine" }, // 1548296026
				{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterial, "K2_DrawMaterial" }, // 2988892415
				{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle, "K2_DrawMaterialTriangle" }, // 2167009362
				{ &Z_Construct_UFunction_UCanvas_K2_DrawPolygon, "K2_DrawPolygon" }, // 3607994456
				{ &Z_Construct_UFunction_UCanvas_K2_DrawText, "K2_DrawText" }, // 221380396
				{ &Z_Construct_UFunction_UCanvas_K2_DrawTexture, "K2_DrawTexture" }, // 3969192680
				{ &Z_Construct_UFunction_UCanvas_K2_DrawTriangle, "K2_DrawTriangle" }, // 524152291
				{ &Z_Construct_UFunction_UCanvas_K2_Project, "K2_Project" }, // 722957945
				{ &Z_Construct_UFunction_UCanvas_K2_StrLen, "K2_StrLen" }, // 2027779773
				{ &Z_Construct_UFunction_UCanvas_K2_TextSize, "K2_TextSize" }, // 2172622008
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/Canvas.h" },
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "A drawing canvas." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReporterGraph_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Helper class to render 2d graphs on canvas" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReporterGraph = { UE4CodeGen_Private::EPropertyClass::Object, "ReporterGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, ReporterGraph), Z_Construct_UClass_UReporterGraph_NoRegister, METADATA_PARAMS(NewProp_ReporterGraph_MetaData, ARRAY_COUNT(NewProp_ReporterGraph_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientTexture0_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Default texture to use" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GradientTexture0 = { UE4CodeGen_Private::EPropertyClass::Object, "GradientTexture0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, GradientTexture0), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_GradientTexture0_MetaData, ARRAY_COUNT(NewProp_GradientTexture0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DefaultTexture_MetaData, ARRAY_COUNT(NewProp_DefaultTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorModulate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Internal." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorModulate = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorModulate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, ColorModulate), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(NewProp_ColorModulate_MetaData, ARRAY_COUNT(NewProp_ColorModulate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Zero-based actual dimensions X." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, SizeY), METADATA_PARAMS(NewProp_SizeY_MetaData, ARRAY_COUNT(NewProp_SizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Don't bilinear filter." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoSmooth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Whether to center the text vertically (about CurY)" },
			};
#endif
			auto NewProp_bNoSmooth_SetBit = [](void* Obj){ ((UCanvas*)Obj)->bNoSmooth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoSmooth = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoSmooth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCanvas), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoSmooth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoSmooth_MetaData, ARRAY_COUNT(NewProp_bNoSmooth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Whether to center the text horizontally (about CurX)" },
			};
#endif
			auto NewProp_bCenterY_SetBit = [](void* Obj){ ((UCanvas*)Obj)->bCenterY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterY = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCanvas), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCenterY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCenterY_MetaData, ARRAY_COUNT(NewProp_bCenterY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Color for drawing." },
			};
#endif
			auto NewProp_bCenterX_SetBit = [](void* Obj){ ((UCanvas*)Obj)->bCenterX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterX = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCanvas), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCenterX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCenterX_MetaData, ARRAY_COUNT(NewProp_bCenterX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Bottom right clipping region." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_DrawColor_MetaData, ARRAY_COUNT(NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Bottom right clipping region." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipY = { UE4CodeGen_Private::EPropertyClass::Float, "ClipY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, ClipY), METADATA_PARAMS(NewProp_ClipY_MetaData, ARRAY_COUNT(NewProp_ClipY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Origin for drawing in Y." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipX = { UE4CodeGen_Private::EPropertyClass::Float, "ClipX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, ClipX), METADATA_PARAMS(NewProp_ClipX_MetaData, ARRAY_COUNT(NewProp_ClipX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrgY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Origin for drawing in X." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrgY = { UE4CodeGen_Private::EPropertyClass::Float, "OrgY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, OrgY), METADATA_PARAMS(NewProp_OrgY_MetaData, ARRAY_COUNT(NewProp_OrgY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrgX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
				{ "ToolTip", "Modifiable properties." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrgX = { UE4CodeGen_Private::EPropertyClass::Float, "OrgX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCanvas, OrgX), METADATA_PARAMS(NewProp_OrgX_MetaData, ARRAY_COUNT(NewProp_OrgX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReporterGraph,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GradientTexture0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorModulate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoSmooth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCenterY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCenterX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrgY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrgX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCanvas>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCanvas::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UCanvas, 658353972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvas(Z_Construct_UClass_UCanvas, &UCanvas::StaticClass, TEXT("/Script/Engine"), TEXT("UCanvas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
