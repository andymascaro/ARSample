// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MediaTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTexture() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	void UMediaTexture::StaticRegisterNativesUMediaTexture()
	{
		UClass* Class = UMediaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAspectRatio", (Native)&UMediaTexture::execGetAspectRatio },
			{ "GetHeight", (Native)&UMediaTexture::execGetHeight },
			{ "GetWidth", (Native)&UMediaTexture::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio()
	{
		struct MediaTexture_eventGetAspectRatio_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaTexture" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, "GetAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MediaTexture_eventGetAspectRatio_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight()
	{
		struct MediaTexture_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaTexture" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, "GetHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MediaTexture_eventGetHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth()
	{
		struct MediaTexture_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaTexture" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, "GetWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MediaTexture_eventGetWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaTexture_NoRegister()
	{
		return UMediaTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UMediaTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMediaTexture_GetAspectRatio, "GetAspectRatio" }, // 766124748
				{ &Z_Construct_UFunction_UMediaTexture_GetHeight, "GetHeight" }, // 2318182847
				{ &Z_Construct_UFunction_UMediaTexture_GetWidth, "GetWidth" }, // 3484813383
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Adjustments Compositing LevelOfDetail Object" },
				{ "IncludePath", "MediaTexture.h" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "Implements a texture asset for rendering video tracks from UMediaPlayer assets." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
				{ "Category", "Media" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "The media player asset associated with this texture." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "MediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMediaTexture, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(NewProp_MediaPlayer_MetaData, ARRAY_COUNT(NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
				{ "Category", "MediaTexture" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "The color used to clear the texture if AutoClear is enabled (default = black)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMediaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ClearColor_MetaData, ARRAY_COUNT(NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoClear_MetaData[] = {
				{ "Category", "MediaTexture" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "Whether to clear the texture when no media is being played (default = enabled)." },
			};
#endif
			auto NewProp_AutoClear_SetBit = [](void* Obj){ ((UMediaTexture*)Obj)->AutoClear = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoClear = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoClear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMediaTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoClear_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutoClear_MetaData, ARRAY_COUNT(NewProp_AutoClear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
				{ "Category", "MediaTexture" },
				{ "DisplayName", "Y-axis Tiling Method" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "The addressing mode to use for the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressY_MetaData, ARRAY_COUNT(NewProp_AddressY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
				{ "Category", "MediaTexture" },
				{ "DisplayName", "X-axis Tiling Method" },
				{ "ModuleRelativePath", "Public/MediaTexture.h" },
				{ "ToolTip", "The addressing mode to use for the X axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressX_MetaData, ARRAY_COUNT(NewProp_AddressX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoClear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMediaTexture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMediaTexture::StaticClass,
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
	IMPLEMENT_CLASS(UMediaTexture, 1929432255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaTexture(Z_Construct_UClass_UMediaTexture, &UMediaTexture::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
