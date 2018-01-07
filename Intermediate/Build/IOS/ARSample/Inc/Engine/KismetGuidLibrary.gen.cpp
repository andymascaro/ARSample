// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetGuidLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetGuidLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NewGuid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid();
// End Cross Module References
	void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary()
	{
		UClass* Class = UKismetGuidLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_GuidToString", (Native)&UKismetGuidLibrary::execConv_GuidToString },
			{ "EqualEqual_GuidGuid", (Native)&UKismetGuidLibrary::execEqualEqual_GuidGuid },
			{ "Invalidate_Guid", (Native)&UKismetGuidLibrary::execInvalidate_Guid },
			{ "IsValid_Guid", (Native)&UKismetGuidLibrary::execIsValid_Guid },
			{ "NewGuid", (Native)&UKismetGuidLibrary::execNewGuid },
			{ "NotEqual_GuidGuid", (Native)&UKismetGuidLibrary::execNotEqual_GuidGuid },
			{ "Parse_StringToGuid", (Native)&UKismetGuidLibrary::execParse_StringToGuid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString()
	{
		struct KismetGuidLibrary_eventConv_GuidToString_Parms
		{
			FGuid InGuid;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "InGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InGuid_MetaData, ARRAY_COUNT(NewProp_InGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InGuid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToString (Guid)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Converts a GUID value to a string, in the form 'A-B-C-D'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "Conv_GuidToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetGuidLibrary_eventConv_GuidToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid()
	{
		struct KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms
		{
			FGuid A;
			FGuid B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (Guid)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Returns true if the values are equal (A == B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "EqualEqual_GuidGuid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid()
	{
		struct KismetGuidLibrary_eventInvalidate_Guid_Parms
		{
			FGuid InGuid;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "InGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventInvalidate_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InGuid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "DisplayName", "Invalidate_Guid (Guid)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Invalidates the given GUID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "Invalidate_Guid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(KismetGuidLibrary_eventInvalidate_Guid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid()
	{
		struct KismetGuidLibrary_eventIsValid_Guid_Parms
		{
			FGuid InGuid;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetGuidLibrary_eventIsValid_Guid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetGuidLibrary_eventIsValid_Guid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "InGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventIsValid_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InGuid_MetaData, ARRAY_COUNT(NewProp_InGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InGuid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "CompactNodeTitle", "isValid?" },
				{ "DisplayName", "IsValid (Guid)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Checks whether the given GUID is valid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "IsValid_Guid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetGuidLibrary_eventIsValid_Guid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NewGuid()
	{
		struct KismetGuidLibrary_eventNewGuid_Parms
		{
			FGuid ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventNewGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Returns a new unique GUID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "NewGuid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetGuidLibrary_eventNewGuid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid()
	{
		struct KismetGuidLibrary_eventNotEqual_GuidGuid_Parms
		{
			FGuid A;
			FGuid B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetGuidLibrary_eventNotEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual (Guid)" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Returns true if the values are not equal (A != B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "NotEqual_GuidGuid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid()
	{
		struct KismetGuidLibrary_eventParse_StringToGuid_Parms
		{
			FString GuidString;
			FGuid OutGuid;
			bool Success;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Success_SetBit = [](void* Obj){ ((KismetGuidLibrary_eventParse_StringToGuid_Parms*)Obj)->Success = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success = { UE4CodeGen_Private::EPropertyClass::Bool, "Success", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetGuidLibrary_eventParse_StringToGuid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Success_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "OutGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, OutGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidString_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GuidString = { UE4CodeGen_Private::EPropertyClass::Str, "GuidString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, GuidString), METADATA_PARAMS(NewProp_GuidString_MetaData, ARRAY_COUNT(NewProp_GuidString_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Success,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GuidString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Guid" },
				{ "DisplayName", "Parse String to Guid" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
				{ "ToolTip", "Converts a String of format EGuidFormats to a Guid. Returns Guid OutGuid, Returns bool Success" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, "Parse_StringToGuid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetGuidLibrary_eventParse_StringToGuid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister()
	{
		return UKismetGuidLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetGuidLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString, "Conv_GuidToString" }, // 94227172
				{ &Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid, "EqualEqual_GuidGuid" }, // 3374413509
				{ &Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid, "Invalidate_Guid" }, // 2160415540
				{ &Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid, "IsValid_Guid" }, // 2585041966
				{ &Z_Construct_UFunction_UKismetGuidLibrary_NewGuid, "NewGuid" }, // 609296269
				{ &Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid, "NotEqual_GuidGuid" }, // 835810388
				{ &Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid, "Parse_StringToGuid" }, // 649013635
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/KismetGuidLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetGuidLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetGuidLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UKismetGuidLibrary, 1553354768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetGuidLibrary(Z_Construct_UClass_UKismetGuidLibrary, &UKismetGuidLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetGuidLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetGuidLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
