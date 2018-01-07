// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MediaPlaylist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlaylist() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Add();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_AddFile();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_AddUrl();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Get();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetNext();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetPrevious();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetRandom();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Insert();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Num();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Remove();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_RemoveAt();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Replace();
// End Cross Module References
	void UMediaPlaylist::StaticRegisterNativesUMediaPlaylist()
	{
		UClass* Class = UMediaPlaylist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", (Native)&UMediaPlaylist::execAdd },
			{ "AddFile", (Native)&UMediaPlaylist::execAddFile },
			{ "AddUrl", (Native)&UMediaPlaylist::execAddUrl },
			{ "Get", (Native)&UMediaPlaylist::execGet },
			{ "GetNext", (Native)&UMediaPlaylist::execGetNext },
			{ "GetPrevious", (Native)&UMediaPlaylist::execGetPrevious },
			{ "GetRandom", (Native)&UMediaPlaylist::execGetRandom },
			{ "Insert", (Native)&UMediaPlaylist::execInsert },
			{ "Num", (Native)&UMediaPlaylist::execNum },
			{ "Remove", (Native)&UMediaPlaylist::execRemove },
			{ "RemoveAt", (Native)&UMediaPlaylist::execRemoveAt },
			{ "Replace", (Native)&UMediaPlaylist::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Add()
	{
		struct MediaPlaylist_eventAdd_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventAdd_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventAdd_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource = { UE4CodeGen_Private::EPropertyClass::Object, "MediaSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAdd_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Add a media source to the play list.\n\n@param MediaSource The media source to append.\n@return true if the media source was added, false otherwise.\n@see AddFile, AddUrl, Insert, RemoveAll, Remove, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventAdd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddFile()
	{
		struct MediaPlaylist_eventAddFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventAddFile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventAddFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAddFile_Parms, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Add a media file path to the play list.\n\n@param FilePath The file path to add.\n@return true if the file was added, false otherwise.\n@see Add, AddUrl, Insert, RemoveAll, Remove, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "AddFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventAddFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddUrl()
	{
		struct MediaPlaylist_eventAddUrl_Parms
		{
			FString Url;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventAddUrl_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventAddUrl_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAddUrl_Parms, Url), METADATA_PARAMS(NewProp_Url_MetaData, ARRAY_COUNT(NewProp_Url_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Add a media URL to the play list.\n\n@param Url The URL to add.\n@return true if the URL was added, false otherwise.\n@see Add, AddFile, Insert, RemoveAll, Remove, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "AddUrl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventAddUrl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Get()
	{
		struct MediaPlaylist_eventGet_Parms
		{
			int32 Index;
			UMediaSource* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Get the media source at the specified index.\n\n@param Index The index of the media source to get.\n@return The media source, or nullptr if the index doesn't exist.\n@see GetNext, GetRandom" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventGet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetNext()
	{
		struct MediaPlaylist_eventGetNext_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InOutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Get the next media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source after the current one, or nullptr if the list is empty.\n@see , GetPrevious, GetRandom" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "GetNext", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MediaPlaylist_eventGetNext_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetPrevious()
	{
		struct MediaPlaylist_eventGetPrevious_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InOutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Get the previous media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source before the current one, or nullptr if the list is empty.\n@see , GetNext, GetRandom" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "GetPrevious", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MediaPlaylist_eventGetPrevious_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetRandom()
	{
		struct MediaPlaylist_eventGetRandom_Parms
		{
			int32 OutIndex;
			UMediaSource* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Get a random media source in the play list.\n\n@param OutIndex Will contain the index of the returned media source.\n@return The random media source, or nullptr if the list is empty.\n@see Get, GetNext, GetPrevious" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "GetRandom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MediaPlaylist_eventGetRandom_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Insert()
	{
		struct MediaPlaylist_eventInsert_Parms
		{
			UMediaSource* MediaSource;
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource = { UE4CodeGen_Private::EPropertyClass::Object, "MediaSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Insert a media source into the play list at the given position.\n\n@param MediaSource The media source to insert.\n@param Index The index to insert into.\n@see Add, Remove, RemoveAll, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Insert", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventInsert_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Num()
	{
		struct MediaPlaylist_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Get the number of media sources in the play list.\n\n@return Number of media sources." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Num", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventNum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Remove()
	{
		struct MediaPlaylist_eventRemove_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventRemove_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventRemove_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource = { UE4CodeGen_Private::EPropertyClass::Object, "MediaSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventRemove_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Remove all occurrences of the given media source in the play list.\n\n@param MediaSource The media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, Remove, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventRemove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_RemoveAt()
	{
		struct MediaPlaylist_eventRemoveAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventRemoveAt_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventRemoveAt_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Remove the media source at the specified position.\n\n@param Index The index of the media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, RemoveAll, Replace" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "RemoveAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventRemoveAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Replace()
	{
		struct MediaPlaylist_eventReplace_Parms
		{
			int32 Index;
			UMediaSource* Replacement;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MediaPlaylist_eventReplace_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaPlaylist_eventReplace_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replacement = { UE4CodeGen_Private::EPropertyClass::Object, "Replacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Replacement), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Replacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|MediaPlaylist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Replace the media source at the specified position.\n\n@param Index The index of the media source to replace.\n@param Replacement The replacement media source.\n@return true if the media source was replaced, false otherwise.\n@see Add, Insert, RemoveAll, RemoveAt" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, "Replace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaPlaylist_eventReplace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister()
	{
		return UMediaPlaylist::StaticClass();
	}
	UClass* Z_Construct_UClass_UMediaPlaylist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMediaPlaylist_Add, "Add" }, // 779283606
				{ &Z_Construct_UFunction_UMediaPlaylist_AddFile, "AddFile" }, // 4131402598
				{ &Z_Construct_UFunction_UMediaPlaylist_AddUrl, "AddUrl" }, // 3740048682
				{ &Z_Construct_UFunction_UMediaPlaylist_Get, "Get" }, // 2857356355
				{ &Z_Construct_UFunction_UMediaPlaylist_GetNext, "GetNext" }, // 161977125
				{ &Z_Construct_UFunction_UMediaPlaylist_GetPrevious, "GetPrevious" }, // 1142401736
				{ &Z_Construct_UFunction_UMediaPlaylist_GetRandom, "GetRandom" }, // 4235832402
				{ &Z_Construct_UFunction_UMediaPlaylist_Insert, "Insert" }, // 3900687362
				{ &Z_Construct_UFunction_UMediaPlaylist_Num, "Num" }, // 2788588695
				{ &Z_Construct_UFunction_UMediaPlaylist_Remove, "Remove" }, // 1537765523
				{ &Z_Construct_UFunction_UMediaPlaylist_RemoveAt, "RemoveAt" }, // 3385341989
				{ &Z_Construct_UFunction_UMediaPlaylist_Replace, "Replace" }, // 1798562833
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MediaPlaylist.h" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Implements a media play list." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "Category", "Playlist" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "List of media sources to play." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMediaPlaylist, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
				{ "ToolTip", "Whether the play list should loop (default = true)." },
			};
#endif
			auto NewProp_Loop_SetBit = [](void* Obj){ ((UMediaPlaylist*)Obj)->Loop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loop = { UE4CodeGen_Private::EPropertyClass::Bool, "Loop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMediaPlaylist), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Loop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Loop_MetaData, ARRAY_COUNT(NewProp_Loop_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loop,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMediaPlaylist>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMediaPlaylist::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UMediaPlaylist, 2881824666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPlaylist(Z_Construct_UClass_UMediaPlaylist, &UMediaPlaylist::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaPlaylist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlaylist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
