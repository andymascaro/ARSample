// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AsyncActionLoadPrimaryAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionLoadPrimaryAsset() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetBundlesChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature()
	{
		struct _Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms
		{
			TArray<TSubclassOf<UObject> > Loaded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Array, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms, Loaded), METADATA_PARAMS(NewProp_Loaded_MetaData, ARRAY_COUNT(NewProp_Loaded_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Loaded_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetClassListLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature()
	{
		struct _Script_Engine_eventOnPrimaryAssetListLoaded_Parms
		{
			TArray<UObject*> Loaded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Array, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetListLoaded_Parms, Loaded), METADATA_PARAMS(NewProp_Loaded_MetaData, ARRAY_COUNT(NewProp_Loaded_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loaded_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetListLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetListLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature()
	{
		struct _Script_Engine_eventOnPrimaryAssetClassLoaded_Parms
		{
			TSubclassOf<UObject>  Loaded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Class, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetClassLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature()
	{
		struct _Script_Engine_eventOnPrimaryAssetLoaded_Parms
		{
			UObject* Loaded;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Object, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loaded,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAsyncActionLoadPrimaryAssetBase::StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Base class of all asset manager load calls" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionLoadPrimaryAssetBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000081u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetBase, 3186760728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetBase(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase, &UAsyncActionLoadPrimaryAssetBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetBase);
	void UAsyncActionLoadPrimaryAsset::StaticRegisterNativesUAsyncActionLoadPrimaryAsset()
	{
		UClass* Class = UAsyncActionLoadPrimaryAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAsset", (Native)&UAsyncActionLoadPrimaryAsset::execAsyncLoadPrimaryAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset()
	{
		struct AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms
		{
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAsset* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, LoadBundles), METADATA_PARAMS(NewProp_LoadBundles_MetaData, ARRAY_COUNT(NewProp_LoadBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "LoadBundles" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Load a primary asset into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object to verify it is the correct type.\nIf LoadBundles is specified, those bundles are loaded along with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, "AsyncLoadPrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister()
	{
		return UAsyncActionLoadPrimaryAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset, "AsyncLoadPrimaryAsset" }, // 4128269876
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAsset, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature, METADATA_PARAMS(NewProp_Completed_MetaData, ARRAY_COUNT(NewProp_Completed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Completed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionLoadPrimaryAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionLoadPrimaryAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAsset, 1544232330);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAsset(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, &UAsyncActionLoadPrimaryAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAsset);
	void UAsyncActionLoadPrimaryAssetClass::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClass", (Native)&UAsyncActionLoadPrimaryAssetClass::execAsyncLoadPrimaryAssetClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass()
	{
		struct AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms
		{
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClass* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, LoadBundles), METADATA_PARAMS(NewProp_LoadBundles_MetaData, ARRAY_COUNT(NewProp_LoadBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "LoadBundles" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Load a primary asset class into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded class to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, "AsyncLoadPrimaryAssetClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass, "AsyncLoadPrimaryAssetClass" }, // 1251933492
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClass, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature, METADATA_PARAMS(NewProp_Completed_MetaData, ARRAY_COUNT(NewProp_Completed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Completed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionLoadPrimaryAssetClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetClass, 2273409887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetClass(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, &UAsyncActionLoadPrimaryAssetClass::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClass);
	void UAsyncActionLoadPrimaryAssetList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetList", (Native)&UAsyncActionLoadPrimaryAssetList::execAsyncLoadPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList()
	{
		struct AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms
		{
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetList* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, LoadBundles), METADATA_PARAMS(NewProp_LoadBundles_MetaData, ARRAY_COUNT(NewProp_LoadBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, PrimaryAssetList), METADATA_PARAMS(NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(NewProp_PrimaryAssetList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "LoadBundles" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Load a list primary assets into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object list to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset list" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, "AsyncLoadPrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetList::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList, "AsyncLoadPrimaryAssetList" }, // 1008522122
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature, METADATA_PARAMS(NewProp_Completed_MetaData, ARRAY_COUNT(NewProp_Completed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Completed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetList>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionLoadPrimaryAssetList::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetList, 3717451859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetList(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, &UAsyncActionLoadPrimaryAssetList::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetList);
	void UAsyncActionLoadPrimaryAssetClassList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClassList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClassList", (Native)&UAsyncActionLoadPrimaryAssetClassList::execAsyncLoadPrimaryAssetClassList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList()
	{
		struct AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms
		{
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClassList* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, LoadBundles), METADATA_PARAMS(NewProp_LoadBundles_MetaData, ARRAY_COUNT(NewProp_LoadBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, PrimaryAssetList), METADATA_PARAMS(NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(NewProp_PrimaryAssetList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "LoadBundles" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Load a list primary asset classes into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object list to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset list" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, "AsyncLoadPrimaryAssetClassList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClassList::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList, "AsyncLoadPrimaryAssetClassList" }, // 3178747061
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClassList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature, METADATA_PARAMS(NewProp_Completed_MetaData, ARRAY_COUNT(NewProp_Completed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Completed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClassList>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionLoadPrimaryAssetClassList::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetClassList, 3200308810);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetClassList(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, &UAsyncActionLoadPrimaryAssetClassList::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetClassList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClassList);
	void UAsyncActionChangePrimaryAssetBundles::StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles()
	{
		UClass* Class = UAsyncActionChangePrimaryAssetBundles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncChangeBundleStateForMatchingPrimaryAssets", (Native)&UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForMatchingPrimaryAssets },
			{ "AsyncChangeBundleStateForPrimaryAssetList", (Native)&UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets()
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms
		{
			TArray<FName> NewBundles;
			TArray<FName> OldBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldBundles = { UE4CodeGen_Private::EPropertyClass::Array, "OldBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, OldBundles), METADATA_PARAMS(NewProp_OldBundles_MetaData, ARRAY_COUNT(NewProp_OldBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "OldBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBundles = { UE4CodeGen_Private::EPropertyClass::Array, "NewBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, NewBundles), METADATA_PARAMS(NewProp_NewBundles_MetaData, ARRAY_COUNT(NewProp_NewBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "NewBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBundles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Change the bundle state of all assets that match OldBundles to instead contain NewBundles." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, "AsyncChangeBundleStateForMatchingPrimaryAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList()
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms
		{
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> AddBundles;
			TArray<FName> RemoveBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveBundles = { UE4CodeGen_Private::EPropertyClass::Array, "RemoveBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, RemoveBundles), METADATA_PARAMS(NewProp_RemoveBundles_MetaData, ARRAY_COUNT(NewProp_RemoveBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RemoveBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "RemoveBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddBundles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddBundles = { UE4CodeGen_Private::EPropertyClass::Array, "AddBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, AddBundles), METADATA_PARAMS(NewProp_AddBundles_MetaData, ARRAY_COUNT(NewProp_AddBundles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AddBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AddBundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, PrimaryAssetList), METADATA_PARAMS(NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(NewProp_PrimaryAssetList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemoveBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemoveBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddBundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddBundles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "AssetManager" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
				{ "ToolTip", "Change the bundle state of assets in PrimaryAssetList. AddBundles are added and RemoveBundles are removed, both must be filled in but an empty array is allowed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, "AsyncChangeBundleStateForPrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister()
	{
		return UAsyncActionChangePrimaryAssetBundles::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets, "AsyncChangeBundleStateForMatchingPrimaryAssets" }, // 3650528043
				{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList, "AsyncChangeBundleStateForPrimaryAssetList" }, // 3888634277
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionChangePrimaryAssetBundles, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature, METADATA_PARAMS(NewProp_Completed_MetaData, ARRAY_COUNT(NewProp_Completed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Completed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsyncActionChangePrimaryAssetBundles>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsyncActionChangePrimaryAssetBundles::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UAsyncActionChangePrimaryAssetBundles, 2629779724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionChangePrimaryAssetBundles(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, &UAsyncActionChangePrimaryAssetBundles::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionChangePrimaryAssetBundles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionChangePrimaryAssetBundles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
