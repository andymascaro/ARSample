// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Misc/MediaBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices();
// End Cross Module References
	static UEnum* EMediaWebcamCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaWebcamCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaWebcamCaptureDeviceFilter(EMediaWebcamCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaWebcamCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_CRC() { return 4089690691U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaWebcamCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaWebcamCaptureDeviceFilter::DepthSensor", (int64)EMediaWebcamCaptureDeviceFilter::DepthSensor },
				{ "EMediaWebcamCaptureDeviceFilter::Front", (int64)EMediaWebcamCaptureDeviceFilter::Front },
				{ "EMediaWebcamCaptureDeviceFilter::Rear", (int64)EMediaWebcamCaptureDeviceFilter::Rear },
				{ "EMediaWebcamCaptureDeviceFilter::Unknown", (int64)EMediaWebcamCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "DepthSensor.ToolTip", "Depth sensor." },
				{ "Front.ToolTip", "Front facing web cam." },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Rear.ToolTip", "Rear facing web cam." },
				{ "ToolTip", "Filter flags for the EnumerateWebcamCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown web cam types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaWebcamCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaWebcamCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaVideoCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaVideoCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaVideoCaptureDeviceFilter(EMediaVideoCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaVideoCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_CRC() { return 1906227088U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaVideoCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaVideoCaptureDeviceFilter::Card", (int64)EMediaVideoCaptureDeviceFilter::Card },
				{ "EMediaVideoCaptureDeviceFilter::Software", (int64)EMediaVideoCaptureDeviceFilter::Software },
				{ "EMediaVideoCaptureDeviceFilter::Unknown", (int64)EMediaVideoCaptureDeviceFilter::Unknown },
				{ "EMediaVideoCaptureDeviceFilter::Webcam", (int64)EMediaVideoCaptureDeviceFilter::Webcam },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.ToolTip", "Video capture card." },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Software.ToolTip", "Software video capture device." },
				{ "ToolTip", "Filter flags for the EnumerateVideoCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown video capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
				{ "Webcam.ToolTip", "Web cam." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaVideoCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaVideoCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaAudioCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaAudioCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaAudioCaptureDeviceFilter(EMediaAudioCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaAudioCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_CRC() { return 1861687323U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaAudioCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaAudioCaptureDeviceFilter::Card", (int64)EMediaAudioCaptureDeviceFilter::Card },
				{ "EMediaAudioCaptureDeviceFilter::Microphone", (int64)EMediaAudioCaptureDeviceFilter::Microphone },
				{ "EMediaAudioCaptureDeviceFilter::Software", (int64)EMediaAudioCaptureDeviceFilter::Software },
				{ "EMediaAudioCaptureDeviceFilter::Unknown", (int64)EMediaAudioCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.ToolTip", "Audio capture cards." },
				{ "Microphone.ToolTip", "Microphone." },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Software.ToolTip", "Software device." },
				{ "ToolTip", "Filter flags for the EnumerateAudioCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown audio capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaAudioCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaAudioCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMediaCaptureDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAASSETS_API uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureDevice, Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaCaptureDevice(FMediaCaptureDevice::StaticStruct, TEXT("/Script/MediaAssets"), TEXT("MediaCaptureDevice"), false, nullptr, nullptr);
static struct FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice
{
	FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaCaptureDevice")),new UScriptStruct::TCppStructOps<FMediaCaptureDevice>);
	}
} ScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice;
	UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Information about a capture device." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaCaptureDevice>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
				{ "Category", "Media Capture Device" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Media URL string for use with media players." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FMediaCaptureDevice, Url), METADATA_PARAMS(NewProp_Url_MetaData, ARRAY_COUNT(NewProp_Url_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "Media Capture Device" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Human readable display name." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FMediaCaptureDevice, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Url,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MediaCaptureDevice",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMediaCaptureDevice),
				alignof(FMediaCaptureDevice),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC() { return 3019895438U; }
	void UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary()
	{
		UClass* Class = UMediaBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateAudioCaptureDevices", (Native)&UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices },
			{ "EnumerateVideoCaptureDevices", (Native)&UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices },
			{ "EnumerateWebcamCaptureDevices", (Native)&UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices()
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|Capture" },
				{ "CPP_Default_Filter", "-1" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateAudioCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices()
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|Capture" },
				{ "CPP_Default_Filter", "-1" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateVideoCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices()
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|Capture" },
				{ "CPP_Default_Filter", "-1" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateWebcamCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister()
	{
		return UMediaBlueprintFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices, "EnumerateAudioCaptureDevices" }, // 3250398815
				{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices, "EnumerateVideoCaptureDevices" }, // 4039541634
				{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices, "EnumerateWebcamCaptureDevices" }, // 2964422394
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ModuleRelativePath", "Private/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "ToolTip", "Blueprint library for Media related functions." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMediaBlueprintFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMediaBlueprintFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMediaBlueprintFunctionLibrary, 641844291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaBlueprintFunctionLibrary(Z_Construct_UClass_UMediaBlueprintFunctionLibrary, &UMediaBlueprintFunctionLibrary::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
