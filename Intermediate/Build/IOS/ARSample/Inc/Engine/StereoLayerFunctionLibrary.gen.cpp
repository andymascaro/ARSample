// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/StereoLayerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen();
// End Cross Module References
	void UStereoLayerFunctionLibrary::StaticRegisterNativesUStereoLayerFunctionLibrary()
	{
		UClass* Class = UStereoLayerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAutoLoadingSplashScreen", (Native)&UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen },
			{ "HideSplashScreen", (Native)&UStereoLayerFunctionLibrary::execHideSplashScreen },
			{ "SetSplashScreen", (Native)&UStereoLayerFunctionLibrary::execSetSplashScreen },
			{ "ShowSplashScreen", (Native)&UStereoLayerFunctionLibrary::execShowSplashScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen()
	{
		struct StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
		{
			bool InAutoShowEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InAutoShowEnabled_SetBit = [](void* Obj){ ((StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->InAutoShowEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoShowEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "InAutoShowEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InAutoShowEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAutoShowEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
				{ "ToolTip", "Enables/disables splash screen to be automatically shown when LoadMap is called.\n\n@param       bAutoShowEnabled        (in)    True, if automatic showing of splash screens is enabled when map is being loaded." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, "EnableAutoLoadingSplashScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
				{ "ToolTip", "Hide the splash screen and return to normal display." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, "HideSplashScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen()
	{
		struct StereoLayerFunctionLibrary_eventSetSplashScreen_Parms
		{
			UTexture* Texture;
			FVector2D Scale;
			FVector2D Offset;
			bool bShowLoadingMovie;
			bool bShowOnSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bShowOnSet_SetBit = [](void* Obj){ ((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowOnSet = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnSet = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowOnSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowOnSet_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShowLoadingMovie_SetBit = [](void* Obj){ ((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowLoadingMovie = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingMovie = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowLoadingMovie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowLoadingMovie_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowOnSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowLoadingMovie,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR" },
				{ "CPP_Default_bShowLoadingMovie", "false" },
				{ "CPP_Default_bShowOnSet", "false" },
				{ "CPP_Default_Offset", "(X=0.000,Y=0.000)" },
				{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
				{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
				{ "ToolTip", "Set splash screen attributes\n\n@param Texture                        (in) A texture to be used for the splash. B8R8G8A8 format.\n@param Scale                          (in) Scale of the texture.\n@param Offset                         (in) Position from which to start rendering the texture.\n@param ShowLoadingMovie       (in) Whether the splash screen presents loading movies." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, "SetSplashScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
				{ "ToolTip", "Show the splash screen and override the VR display" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, "ShowSplashScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister()
	{
		return UStereoLayerFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 1573568168
				{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen, "HideSplashScreen" }, // 2950718429
				{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen, "SetSplashScreen" }, // 2724133691
				{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen, "ShowSplashScreen" }, // 2879752376
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/StereoLayerFunctionLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
				{ "ToolTip", "StereoLayer Extensions Function Library" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStereoLayerFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStereoLayerFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UStereoLayerFunctionLibrary, 2903709714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerFunctionLibrary(Z_Construct_UClass_UStereoLayerFunctionLibrary, &UStereoLayerFunctionLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UStereoLayerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
