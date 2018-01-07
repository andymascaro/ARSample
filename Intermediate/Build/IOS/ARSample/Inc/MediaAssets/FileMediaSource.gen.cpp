// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FileMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UFileMediaSource_SetFilePath();
// End Cross Module References
	void UFileMediaSource::StaticRegisterNativesUFileMediaSource()
	{
		UClass* Class = UFileMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilePath", (Native)&UFileMediaSource::execSetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFileMediaSource_SetFilePath()
	{
		struct FileMediaSource_eventSetFilePath_Parms
		{
			FString Path;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FileMediaSource_eventSetFilePath_Parms, Path), METADATA_PARAMS(NewProp_Path_MetaData, ARRAY_COUNT(NewProp_Path_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Media|FileMediaSource" },
				{ "ModuleRelativePath", "Public/FileMediaSource.h" },
				{ "ToolTip", "Set the path to the media file that this source represents.\n\nAutomatically converts full paths to media sources that reside in the\nEngine's or project's /Content/Movies directory into relative paths.\n\n@param Path The path to set.\n@see FilePath, GetFilePath" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileMediaSource, "SetFilePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FileMediaSource_eventSetFilePath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileMediaSource_NoRegister()
	{
		return UFileMediaSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UFileMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFileMediaSource_SetFilePath, "SetFilePath" }, // 1773594861
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "FileMediaSource.h" },
				{ "ModuleRelativePath", "Public/FileMediaSource.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecacheFile_MetaData[] = {
				{ "Category", "File" },
				{ "ModuleRelativePath", "Public/FileMediaSource.h" },
				{ "ToolTip", "Load entire media file into memory and play from there (if possible)." },
			};
#endif
			auto NewProp_PrecacheFile_SetBit = [](void* Obj){ ((UFileMediaSource*)Obj)->PrecacheFile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrecacheFile = { UE4CodeGen_Private::EPropertyClass::Bool, "PrecacheFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFileMediaSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PrecacheFile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PrecacheFile_MetaData, ARRAY_COUNT(NewProp_PrecacheFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "Category", "File" },
				{ "ModuleRelativePath", "Public/FileMediaSource.h" },
				{ "ToolTip", "The path to the media file to be played.\n\n@see SetFilePath" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UFileMediaSource, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrecacheFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFileMediaSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFileMediaSource::StaticClass,
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
	IMPLEMENT_CLASS(UFileMediaSource, 4107160922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileMediaSource(Z_Construct_UClass_UFileMediaSource, &UFileMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UFileMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
