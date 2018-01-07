// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetRenderingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetRenderingLibrary() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
// End Cross Module References
class UScriptStruct* FDrawToRenderTargetContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawToRenderTargetContext, Z_Construct_UPackage__Script_Engine(), TEXT("DrawToRenderTargetContext"), sizeof(FDrawToRenderTargetContext), Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDrawToRenderTargetContext(FDrawToRenderTargetContext::StaticStruct, TEXT("/Script/Engine"), TEXT("DrawToRenderTargetContext"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext
{
	FScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DrawToRenderTargetContext")),new UScriptStruct::TCppStructOps<FDrawToRenderTargetContext>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext;
	UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DrawToRenderTargetContext"), sizeof(FDrawToRenderTargetContext), Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawToRenderTargetContext>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDrawToRenderTargetContext, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_RenderTarget_MetaData, ARRAY_COUNT(NewProp_RenderTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTarget,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DrawToRenderTargetContext",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDrawToRenderTargetContext),
				alignof(FDrawToRenderTargetContext),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC() { return 693226928U; }
	void UKismetRenderingLibrary::StaticRegisterNativesUKismetRenderingLibrary()
	{
		UClass* Class = UKismetRenderingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDrawCanvasToRenderTarget", (Native)&UKismetRenderingLibrary::execBeginDrawCanvasToRenderTarget },
			{ "BreakSkinWeightInfo", (Native)&UKismetRenderingLibrary::execBreakSkinWeightInfo },
			{ "ClearRenderTarget2D", (Native)&UKismetRenderingLibrary::execClearRenderTarget2D },
			{ "ConvertRenderTargetToTexture2DEditorOnly", (Native)&UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly },
			{ "CreateRenderTarget2D", (Native)&UKismetRenderingLibrary::execCreateRenderTarget2D },
			{ "DrawMaterialToRenderTarget", (Native)&UKismetRenderingLibrary::execDrawMaterialToRenderTarget },
			{ "EndDrawCanvasToRenderTarget", (Native)&UKismetRenderingLibrary::execEndDrawCanvasToRenderTarget },
			{ "ExportRenderTarget", (Native)&UKismetRenderingLibrary::execExportRenderTarget },
			{ "ExportTexture2D", (Native)&UKismetRenderingLibrary::execExportTexture2D },
			{ "MakeSkinWeightInfo", (Native)&UKismetRenderingLibrary::execMakeSkinWeightInfo },
			{ "ReleaseRenderTarget2D", (Native)&UKismetRenderingLibrary::execReleaseRenderTarget2D },
			{ "RenderTargetCreateStaticTexture2DEditorOnly", (Native)&UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DEditorOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget()
	{
		struct KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UCanvas* Canvas;
			FVector2D Size;
			FDrawToRenderTargetContext Context;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Struct, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Canvas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "BeginDrawCanvasToRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Returns a Canvas object that can be used to draw to the specified render target.\nCanvas has functions like DrawMaterial with size parameters that can be used to draw to a specific area of a render target.\nBe sure to call EndDrawCanvasToRenderTarget to complete the rendering!" },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "BeginDrawCanvasToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22403, sizeof(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo()
	{
		struct KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms
		{
			FSkelMeshSkinWeightInfo InWeight;
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone3 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone2 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone1 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight0 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone0 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeight = { UE4CodeGen_Private::EPropertyClass::Struct, "InWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, InWeight), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Break FSkelMeshSkinWeightInfo" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "BreakSkinWeightInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422403, sizeof(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D()
	{
		struct KismetRenderingLibrary_eventClearRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FLinearColor ClearColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
				{ "Keywords", "ClearRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Clears the specified render target with the given ClearColor." },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ClearRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventClearRenderTarget2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly()
	{
		struct KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* Texture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "ConvertRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Copies the contents of a render target to a UTexture2D\nOnly works in the editor" },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ConvertRenderTargetToTexture2DEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D()
	{
		struct KismetRenderingLibrary_eventCreateRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			UTextureRenderTarget2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Byte, "Format", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Format,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_Format", "RTF_RGBA16f" },
				{ "CPP_Default_Height", "256" },
				{ "CPP_Default_Width", "256" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Creates a new render target and initializes it to the specified dimensions" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "CreateRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget()
	{
		struct KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UMaterialInterface* Material;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "DrawMaterialToRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Renders a quad with the material applied to the specified render target.\nThis sets the render target even if it is already set, which is an expensive operation.\nUse BeginDrawCanvasToRenderTarget / EndDrawCanvasToRenderTarget instead if rendering multiple primitives to the same render target." },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "DrawMaterialToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget()
	{
		struct KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			FDrawToRenderTargetContext Context;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Struct, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "EndDrawCanvasToRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Must be paired with a BeginDrawCanvasToRenderTarget to complete rendering to a render target." },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "EndDrawCanvasToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget()
	{
		struct KismetRenderingLibrary_eventExportRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FString FilePath;
			FString FileName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName = { UE4CodeGen_Private::EPropertyClass::Str, "FileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FileName), METADATA_PARAMS(NewProp_FileName_MetaData, ARRAY_COUNT(NewProp_FileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "ExportRenderTarget" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Exports a render target as a HDR or PNG image onto the disk (depending on the format of the render target)" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ExportRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventExportRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D()
	{
		struct KismetRenderingLibrary_eventExportTexture2D_Parms
		{
			UObject* WorldContextObject;
			UTexture2D* Texture;
			FString FilePath;
			FString FileName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName = { UE4CodeGen_Private::EPropertyClass::Str, "FileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FileName), METADATA_PARAMS(NewProp_FileName_MetaData, ARRAY_COUNT(NewProp_FileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "Keywords", "ExportTexture2D" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Exports a Texture2D as a HDR image onto the disk." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ExportTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventExportTexture2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo()
	{
		struct KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms
		{
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
			FSkelMeshSkinWeightInfo ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone3 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone2 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone1 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight0 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone0 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "NativeMakeFunc", "" },
				{ "ToolTip", "Create FSkelMeshSkinWeightInfo" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "MakeSkinWeightInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022403, sizeof(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D()
	{
		struct KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRenderTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Manually releases GPU resources of a render target. This is useful for blueprint creating a lot of render target that would\nnormally be released too late by the garbage collector that can be problematic on platforms that have tight GPU memory constrains." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReleaseRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly()
	{
		struct KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			FString Name;
			TEnumAsByte<TextureCompressionSettings> CompressionSettings;
			TEnumAsByte<TextureMipGenSettings> MipSettings;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "MipSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, MipSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, Name), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "CPP_Default_CompressionSettings", "TC_Default" },
				{ "CPP_Default_MipSettings", "TMGS_FromTextureGroup" },
				{ "CPP_Default_Name", "Texture" },
				{ "DisplayName", "Render Target Create Static Texture Editor Only" },
				{ "Keywords", "Create Static Texture from Render Target" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
				{ "ToolTip", "Creates a new Static Texture from a Render Target 2D. Render Target Must be power of two and use four channels.\nOnly works in the editor" },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "RenderTargetCreateStaticTexture2DEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister()
	{
		return UKismetRenderingLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetRenderingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget, "BeginDrawCanvasToRenderTarget" }, // 1259550522
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo, "BreakSkinWeightInfo" }, // 1255864338
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D, "ClearRenderTarget2D" }, // 596525303
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly, "ConvertRenderTargetToTexture2DEditorOnly" }, // 2225735688
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D, "CreateRenderTarget2D" }, // 138394916
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget, "DrawMaterialToRenderTarget" }, // 3772940366
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget, "EndDrawCanvasToRenderTarget" }, // 2877797667
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget, "ExportRenderTarget" }, // 114474018
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D, "ExportTexture2D" }, // 2167161164
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo, "MakeSkinWeightInfo" }, // 54885361
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D, "ReleaseRenderTarget2D" }, // 3634789592
				{ &Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly, "RenderTargetCreateStaticTexture2DEditorOnly" }, // 3787547435
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/KismetRenderingLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetRenderingLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetRenderingLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetRenderingLibrary, 1854392264);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetRenderingLibrary(Z_Construct_UClass_UKismetRenderingLibrary, &UKismetRenderingLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetRenderingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetRenderingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
