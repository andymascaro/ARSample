// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SourceControlHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlHelpers() {}
// Cross Module References
	SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister();
	SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SourceControl();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_AbsoluteFilenames();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CopyFileUnderSourceControl();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_PackageFilename();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_PackageFilenames();
// End Cross Module References
	void USourceControlHelpers::StaticRegisterNativesUSourceControlHelpers()
	{
		UClass* Class = USourceControlHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbsoluteFilenames", (Native)&USourceControlHelpers::execAbsoluteFilenames },
			{ "CheckOutFile", (Native)&USourceControlHelpers::execCheckOutFile },
			{ "CopyFileUnderSourceControl", (Native)&USourceControlHelpers::execCopyFileUnderSourceControl },
			{ "MarkFileForAdd", (Native)&USourceControlHelpers::execMarkFileForAdd },
			{ "PackageFilename", (Native)&USourceControlHelpers::execPackageFilename },
			{ "PackageFilenames", (Native)&USourceControlHelpers::execPackageFilenames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_AbsoluteFilenames()
	{
		struct SourceControlHelpers_eventAbsoluteFilenames_Parms
		{
			TArray<FString> InFileNames;
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventAbsoluteFilenames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileNames_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFileNames = { UE4CodeGen_Private::EPropertyClass::Array, "InFileNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventAbsoluteFilenames_Parms, InFileNames), METADATA_PARAMS(NewProp_InFileNames_MetaData, ARRAY_COUNT(NewProp_InFileNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFileNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFileNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFileNames_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to convert a filename array to absolute paths.\n@param       InFileNames     The filename array\n@return an array of filenames, transformed into absolute paths" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "AbsoluteFilenames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(SourceControlHelpers_eventAbsoluteFilenames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFile()
	{
		struct SourceControlHelpers_eventCheckOutFile_Parms
		{
			FString InFile;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SourceControlHelpers_eventCheckOutFile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutFile_Parms, InFile), METADATA_PARAMS(NewProp_InFile_MetaData, ARRAY_COUNT(NewProp_InFile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to check out a file\n@param       InFile          The file path to check in\n@return      Success or failure of the checkout operation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckOutFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SourceControlHelpers_eventCheckOutFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CopyFileUnderSourceControl()
	{
		struct SourceControlHelpers_eventCopyFileUnderSourceControl_Parms
		{
			FString InDestFile;
			FString InSourceFile;
			FText InFileDescription;
			FText OutFailReason;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SourceControlHelpers_eventCopyFileUnderSourceControl_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutFailReason = { UE4CodeGen_Private::EPropertyClass::Text, "OutFailReason", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms, OutFailReason), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileDescription_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InFileDescription = { UE4CodeGen_Private::EPropertyClass::Text, "InFileDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms, InFileDescription), METADATA_PARAMS(NewProp_InFileDescription_MetaData, ARRAY_COUNT(NewProp_InFileDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSourceFile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSourceFile = { UE4CodeGen_Private::EPropertyClass::Str, "InSourceFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms, InSourceFile), METADATA_PARAMS(NewProp_InSourceFile_MetaData, ARRAY_COUNT(NewProp_InSourceFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDestFile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDestFile = { UE4CodeGen_Private::EPropertyClass::Str, "InDestFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms, InDestFile), METADATA_PARAMS(NewProp_InDestFile_MetaData, ARRAY_COUNT(NewProp_InDestFile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFailReason,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFileDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSourceFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDestFile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to copy a file into our 'source controlled' directories, handling checkout/add etc.\n@param       InDestFile                      The path to the destination file\n@param       InSourceFile            The path to the source file\n@param       InFileDescription       Description of the file to display to the user, e.g. \"Text\" or \"Image\"\n@param       OutFailReason           Text describing why the operation failed\n@return      Success or failure of the operation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CopyFileUnderSourceControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(SourceControlHelpers_eventCopyFileUnderSourceControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd()
	{
		struct SourceControlHelpers_eventMarkFileForAdd_Parms
		{
			FString InFile;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SourceControlHelpers_eventMarkFileForAdd_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventMarkFileForAdd_Parms, InFile), METADATA_PARAMS(NewProp_InFile_MetaData, ARRAY_COUNT(NewProp_InFile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to mark a file for add. Does nothing (and returns true) if the file is already under SC\n@param       InFile          The file path to check in\n@return      Success or failure of the mark for add operation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "MarkFileForAdd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_PackageFilename()
	{
		struct SourceControlHelpers_eventPackageFilename_Parms
		{
			FString InPackageName;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventPackageFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackageName = { UE4CodeGen_Private::EPropertyClass::Str, "InPackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventPackageFilename_Parms, InPackageName), METADATA_PARAMS(NewProp_InPackageName_MetaData, ARRAY_COUNT(NewProp_InPackageName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to get a filename for a package name.\n@param       InPackageName   The package name to get the filename for\n@return the filename" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "PackageFilename", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SourceControlHelpers_eventPackageFilename_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USourceControlHelpers_PackageFilenames()
	{
		struct SourceControlHelpers_eventPackageFilenames_Parms
		{
			TArray<FString> InPackageNames;
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventPackageFilenames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackageNames_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPackageNames = { UE4CodeGen_Private::EPropertyClass::Array, "InPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventPackageFilenames_Parms, InPackageNames), METADATA_PARAMS(NewProp_InPackageNames_MetaData, ARRAY_COUNT(NewProp_InPackageNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackageNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPackageNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPackageNames_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Editor Scripting | Editor Source Control Helpers" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
				{ "ToolTip", "Helper function to convert package name array into a filename array.\n@param       InPackageNames  The package name array\n@return an array of filenames" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "PackageFilenames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(SourceControlHelpers_eventPackageFilenames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister()
	{
		return USourceControlHelpers::StaticClass();
	}
	UClass* Z_Construct_UClass_USourceControlHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USourceControlHelpers_AbsoluteFilenames, "AbsoluteFilenames" }, // 4074291162
				{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile, "CheckOutFile" }, // 2300702818
				{ &Z_Construct_UFunction_USourceControlHelpers_CopyFileUnderSourceControl, "CopyFileUnderSourceControl" }, // 1731220982
				{ &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd, "MarkFileForAdd" }, // 1127474894
				{ &Z_Construct_UFunction_USourceControlHelpers_PackageFilename, "PackageFilename" }, // 2464130166
				{ &Z_Construct_UFunction_USourceControlHelpers_PackageFilenames, "PackageFilenames" }, // 36049934
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SourceControlHelpers.h" },
				{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USourceControlHelpers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USourceControlHelpers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(USourceControlHelpers, 1927621146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceControlHelpers(Z_Construct_UClass_USourceControlHelpers, &USourceControlHelpers::StaticClass, TEXT("/Script/SourceControl"), TEXT("USourceControlHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
