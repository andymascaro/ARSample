// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/InvalidationBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvalidationBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_GetCanCache();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_InvalidateCache();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_SetCanCache();
// End Cross Module References
	void UInvalidationBox::StaticRegisterNativesUInvalidationBox()
	{
		UClass* Class = UInvalidationBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanCache", (Native)&UInvalidationBox::execGetCanCache },
			{ "InvalidateCache", (Native)&UInvalidationBox::execInvalidateCache },
			{ "SetCanCache", (Native)&UInvalidationBox::execSetCanCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInvalidationBox_GetCanCache()
	{
		struct InvalidationBox_eventGetCanCache_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InvalidationBox_eventGetCanCache_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InvalidationBox_eventGetCanCache_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Invalidation Box" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "GetCanCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(InvalidationBox_eventGetCanCache_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInvalidationBox_InvalidateCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Invalidation Box" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "InvalidateCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInvalidationBox_SetCanCache()
	{
		struct InvalidationBox_eventSetCanCache_Parms
		{
			bool CanCache;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_CanCache_SetBit = [](void* Obj){ ((InvalidationBox_eventSetCanCache_Parms*)Obj)->CanCache = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCache = { UE4CodeGen_Private::EPropertyClass::Bool, "CanCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InvalidationBox_eventSetCanCache_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanCache_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanCache,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Invalidation Box" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "SetCanCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InvalidationBox_eventSetCanCache_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInvalidationBox_NoRegister()
	{
		return UInvalidationBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UInvalidationBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInvalidationBox_GetCanCache, "GetCanCache" }, // 717799521
				{ &Z_Construct_UFunction_UInvalidationBox_InvalidateCache, "InvalidateCache" }, // 2169710286
				{ &Z_Construct_UFunction_UInvalidationBox_SetCanCache, "SetCanCache" }, // 3247425255
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/InvalidationBox.h" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
				{ "ToolTip", "Invalidate\n* Single Child\n* Caching / Performance" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheRelativeTransforms_MetaData[] = {
				{ "Category", "Caching" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
				{ "ToolTip", "Caches the locations for child draw elements relative to the invalidation box,\nthis adds extra overhead to drawing them every frame.  However, in cases where\nthe position of the invalidation boxes changes every frame this can be a big savings." },
			};
#endif
			auto NewProp_CacheRelativeTransforms_SetBit = [](void* Obj){ ((UInvalidationBox*)Obj)->CacheRelativeTransforms = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CacheRelativeTransforms = { UE4CodeGen_Private::EPropertyClass::Bool, "CacheRelativeTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInvalidationBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CacheRelativeTransforms_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CacheRelativeTransforms_MetaData, ARRAY_COUNT(NewProp_CacheRelativeTransforms_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCache_MetaData[] = {
				{ "Category", "Caching" },
				{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
				{ "ToolTip", "Should the invalidation panel cache the widgets?  Making this false makes it so the invalidation\npanel stops acting like an invalidation panel, just becomes a simple container widget." },
			};
#endif
			auto NewProp_bCanCache_SetBit = [](void* Obj){ ((UInvalidationBox*)Obj)->bCanCache = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCache = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInvalidationBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanCache_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanCache_MetaData, ARRAY_COUNT(NewProp_bCanCache_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CacheRelativeTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanCache,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInvalidationBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInvalidationBox::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UInvalidationBox, 1165269364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvalidationBox(Z_Construct_UClass_UInvalidationBox, &UInvalidationBox::StaticClass, TEXT("/Script/UMG"), TEXT("UInvalidationBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvalidationBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
