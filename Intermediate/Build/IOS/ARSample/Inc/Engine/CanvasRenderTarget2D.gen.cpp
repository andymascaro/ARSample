// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/CanvasRenderTarget2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasRenderTarget2D() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature()
	{
		struct _Script_Engine_eventOnCanvasRenderTargetUpdate_Parms
		{
			UCanvas* Canvas;
			int32 Width;
			int32 Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Canvas,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "This delegate is assignable through Blueprint and has similar functionality to the above." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnCanvasRenderTargetUpdate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UCanvasRenderTarget2D_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UCanvasRenderTarget2D::ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height)
	{
		CanvasRenderTarget2D_eventReceiveUpdate_Parms Parms;
		Parms.Canvas=Canvas;
		Parms.Width=Width;
		Parms.Height=Height;
		ProcessEvent(FindFunctionChecked(NAME_UCanvasRenderTarget2D_ReceiveUpdate),&Parms);
	}
	void UCanvasRenderTarget2D::StaticRegisterNativesUCanvasRenderTarget2D()
	{
		UClass* Class = UCanvasRenderTarget2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCanvasRenderTarget2D", (Native)&UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D },
			{ "GetSize", (Native)&UCanvasRenderTarget2D::execGetSize },
			{ "UpdateResource", (Native)&UCanvasRenderTarget2D::execUpdateResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D()
	{
		struct CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UCanvasRenderTarget2D>  CanvasRenderTarget2DClass;
			int32 Width;
			int32 Height;
			UCanvasRenderTarget2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CanvasRenderTarget2DClass = { UE4CodeGen_Private::EPropertyClass::Class, "CanvasRenderTarget2DClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, CanvasRenderTarget2DClass), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanvasRenderTarget2DClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "CPP_Default_Height", "1024" },
				{ "CPP_Default_Width", "1024" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "Creates a new canvas render target and initializes it to the specified dimensions\n\n@param       WorldContextObject      The world where this render target will be rendered for\n@param       CanvasRenderTarget2DClass       Class of the render target.  Unless you want to use a special sub-class, you can simply pass UCanvasRenderTarget2D::StaticClass() here.\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target.\n\n@return                                              Returns the instanced render target." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, "CreateCanvasRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CanvasRenderTarget2D_eventCreateCanvasRenderTarget2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize()
	{
		struct CanvasRenderTarget2D_eventGetSize_Parms
		{
			int32 Width;
			int32 Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventGetSize_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "Gets a specific render target's size from the global map of canvas render targets.\n\n@param       Width   Output variable for the render target's width\n@param       Height  Output variable for the render target's height" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, "GetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(CanvasRenderTarget2D_eventGetSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasRenderTarget2D_eventReceiveUpdate_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Canvas,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.\n\n@param       Canvas                          Canvas object that can be used to paint to the render target\n@param       Width                           Width of the render target.\n@param       Height                          Height of the render target." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, "ReceiveUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(CanvasRenderTarget2D_eventReceiveUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "Updates the the canvas render target texture's resource. This is where the render target will create or\nfind a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture\nfrom the deferred rendering list, to stop the texture from being cleared the next frame. From there it\nwill ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and\nthen the user's update delegate is called.  The canvas is then flushed and the RHI resolves the\ntexture to make it available for rendering." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasRenderTarget2D, "UpdateResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister()
	{
		return UCanvasRenderTarget2D::StaticClass();
	}
	UClass* Z_Construct_UClass_UCanvasRenderTarget2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget2D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCanvasRenderTarget2D_CreateCanvasRenderTarget2D, "CreateCanvasRenderTarget2D" }, // 1430750148
				{ &Z_Construct_UFunction_UCanvasRenderTarget2D_GetSize, "GetSize" }, // 2457145581
				{ &Z_Construct_UFunction_UCanvasRenderTarget2D_ReceiveUpdate, "ReceiveUpdate" }, // 3370268625
				{ &Z_Construct_UFunction_UCanvasRenderTarget2D_UpdateResource, "UpdateResource" }, // 3518109209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
				{ "IncludePath", "Engine/CanvasRenderTarget2D.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto\nit directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then\nbind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is\nupdated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick\nfunction.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get\ngarbage collected." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.)\nIf false, the render target will retain whatever values it had, allowing the user to update only areas that\nhave changed." },
			};
#endif
			auto NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit = [](void* Obj){ ((UCanvasRenderTarget2D*)Obj)->bShouldClearRenderTargetOnReceiveUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldClearRenderTargetOnReceiveUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldClearRenderTargetOnReceiveUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCanvasRenderTarget2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldClearRenderTargetOnReceiveUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData, ARRAY_COUNT(NewProp_bShouldClearRenderTargetOnReceiveUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "The world this render target will be used with" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::WeakObject, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000000, 1, nullptr, STRUCT_OFFSET(UCanvasRenderTarget2D, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanvasRenderTargetUpdate_MetaData[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "ModuleRelativePath", "Classes/Engine/CanvasRenderTarget2D.h" },
				{ "ToolTip", "Called when this Canvas Render Target is asked to update its texture resource." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanvasRenderTargetUpdate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCanvasRenderTargetUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCanvasRenderTarget2D, OnCanvasRenderTargetUpdate), Z_Construct_UDelegateFunction_Engine_OnCanvasRenderTargetUpdate__DelegateSignature, METADATA_PARAMS(NewProp_OnCanvasRenderTargetUpdate_MetaData, ARRAY_COUNT(NewProp_OnCanvasRenderTargetUpdate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldClearRenderTargetOnReceiveUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnCanvasRenderTargetUpdate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCanvasRenderTarget2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCanvasRenderTarget2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UCanvasRenderTarget2D, 4145049344);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasRenderTarget2D(Z_Construct_UClass_UCanvasRenderTarget2D, &UCanvasRenderTarget2D::StaticClass, TEXT("/Script/Engine"), TEXT("UCanvasRenderTarget2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasRenderTarget2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
