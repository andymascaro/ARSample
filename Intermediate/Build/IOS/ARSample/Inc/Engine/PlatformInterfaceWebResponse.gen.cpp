// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PlatformInterfaceWebResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInterfaceWebResponse() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders();
// End Cross Module References
	void UPlatformInterfaceWebResponse::StaticRegisterNativesUPlatformInterfaceWebResponse()
	{
		UClass* Class = UPlatformInterfaceWebResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeader", (Native)&UPlatformInterfaceWebResponse::execGetHeader },
			{ "GetHeaderValue", (Native)&UPlatformInterfaceWebResponse::execGetHeaderValue },
			{ "GetNumHeaders", (Native)&UPlatformInterfaceWebResponse::execGetNumHeaders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader()
	{
		struct PlatformInterfaceWebResponse_eventGetHeader_Parms
		{
			int32 HeaderIndex;
			FString Header;
			FString Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header = { UE4CodeGen_Private::EPropertyClass::Str, "Header", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, Header), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeaderIndex = { UE4CodeGen_Private::EPropertyClass::Int, "HeaderIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, HeaderIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Header,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "Retrieve the header and value for the given index of header/value pair" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, "GetHeader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420400, sizeof(PlatformInterfaceWebResponse_eventGetHeader_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue()
	{
		struct PlatformInterfaceWebResponse_eventGetHeaderValue_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeaderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderName = { UE4CodeGen_Private::EPropertyClass::Str, "HeaderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeaderValue_Parms, HeaderName), METADATA_PARAMS(NewProp_HeaderName_MetaData, ARRAY_COUNT(NewProp_HeaderName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "@return the value for the given header (or \"\" if no matching header)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, "GetHeaderValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(PlatformInterfaceWebResponse_eventGetHeaderValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders()
	{
		struct PlatformInterfaceWebResponse_eventGetNumHeaders_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetNumHeaders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "@return the number of header/value pairs" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, "GetNumHeaders", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(PlatformInterfaceWebResponse_eventGetNumHeaders_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse_NoRegister()
	{
		return UPlatformInterfaceWebResponse::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader, "GetHeader" }, // 3521399383
				{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue, "GetHeaderValue" }, // 1742196531
				{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders, "GetNumHeaders" }, // 2464615864
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/PlatformInterfaceWebResponse.h" },
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinaryResponse_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "For non-string results, this is the response" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BinaryResponse = { UE4CodeGen_Private::EPropertyClass::Array, "BinaryResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, BinaryResponse), METADATA_PARAMS(NewProp_BinaryResponse_MetaData, ARRAY_COUNT(NewProp_BinaryResponse_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryResponse_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "BinaryResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringResponse_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "For string results, this is the response" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringResponse = { UE4CodeGen_Private::EPropertyClass::Str, "StringResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, StringResponse), METADATA_PARAMS(NewProp_StringResponse_MetaData, ARRAY_COUNT(NewProp_StringResponse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "A user-specified tag specified with the request" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Int, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "Result code from the response (200=OK, 404=Not Found, etc)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode = { UE4CodeGen_Private::EPropertyClass::Int, "ResponseCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, ResponseCode), METADATA_PARAMS(NewProp_ResponseCode_MetaData, ARRAY_COUNT(NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalURL_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
				{ "ToolTip", "This holds the original requested URL" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalURL = { UE4CodeGen_Private::EPropertyClass::Str, "OriginalURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, OriginalURL), METADATA_PARAMS(NewProp_OriginalURL_MetaData, ARRAY_COUNT(NewProp_OriginalURL_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BinaryResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BinaryResponse_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalURL,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlatformInterfaceWebResponse>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlatformInterfaceWebResponse::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080088u,
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
	IMPLEMENT_CLASS(UPlatformInterfaceWebResponse, 2140534516);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformInterfaceWebResponse(Z_Construct_UClass_UPlatformInterfaceWebResponse, &UPlatformInterfaceWebResponse::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformInterfaceWebResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInterfaceWebResponse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
