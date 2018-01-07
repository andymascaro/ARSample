// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/AsyncTaskDownloadImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskDownloadImage() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UMG_API UFunction* Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature()
	{
		struct _Script_UMG_eventDownloadImageDelegate_Parms
		{
			UTexture2DDynamic* Texture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventDownloadImageDelegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "DownloadImageDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventDownloadImageDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage()
	{
		UClass* Class = UAsyncTaskDownloadImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadImage", (Native)&UAsyncTaskDownloadImage::execDownloadImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage()
	{
		struct AsyncTaskDownloadImage_eventDownloadImage_Parms
		{
			FString URL;
			UAsyncTaskDownloadImage* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, URL), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_URL,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskDownloadImage, "DownloadImage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AsyncTaskDownloadImage_eventDownloadImage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister()
	{
		return UAsyncTaskDownloadImage::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncTaskDownloadImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage, "DownloadImage" }, // 2681112466
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/AsyncTaskDownloadImage.h" },
				{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnFail), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFail_MetaData, ARRAY_COUNT(NewProp_OnFail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnSuccess), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncTaskDownloadImage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncTaskDownloadImage::StaticClass,
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
	IMPLEMENT_CLASS(UAsyncTaskDownloadImage, 2513780610);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncTaskDownloadImage(Z_Construct_UClass_UAsyncTaskDownloadImage, &UAsyncTaskDownloadImage::StaticClass, TEXT("/Script/UMG"), TEXT("UAsyncTaskDownloadImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskDownloadImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
