// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetMaterialLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetMaterialLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue();
// End Cross Module References
	void UKismetMaterialLibrary::StaticRegisterNativesUKismetMaterialLibrary()
	{
		UClass* Class = UKismetMaterialLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", (Native)&UKismetMaterialLibrary::execCreateDynamicMaterialInstance },
			{ "GetScalarParameterValue", (Native)&UKismetMaterialLibrary::execGetScalarParameterValue },
			{ "GetVectorParameterValue", (Native)&UKismetMaterialLibrary::execGetVectorParameterValue },
			{ "SetScalarParameterValue", (Native)&UKismetMaterialLibrary::execSetScalarParameterValue },
			{ "SetVectorParameterValue", (Native)&UKismetMaterialLibrary::execSetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance()
	{
		struct KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* Parent;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "MaterialParameterCollectionFunction", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
				{ "ToolTip", "Creates a Dynamic Material Instance which you can modify during gameplay." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, "CreateDynamicMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue()
	{
		struct KismetMaterialLibrary_eventGetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "GetFloatParameterValue" },
				{ "MaterialParameterCollectionFunction", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
				{ "ToolTip", "Gets a scalar parameter value from the material collection instance. Logs if ParameterName is invalid." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, "GetScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetMaterialLibrary_eventGetScalarParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue()
	{
		struct KismetMaterialLibrary_eventGetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "GetColorParameterValue" },
				{ "MaterialParameterCollectionFunction", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
				{ "ToolTip", "Gets a vector parameter value from the material collection instance. Logs if ParameterName is invalid." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, "GetVectorParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetMaterialLibrary_eventGetVectorParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue()
	{
		struct KismetMaterialLibrary_eventSetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ParameterValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Float, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "SetFloatParameterValue" },
				{ "MaterialParameterCollectionFunction", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
				{ "ToolTip", "Sets a scalar parameter value on the material collection instance. Logs if ParameterName is invalid." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, "SetScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetMaterialLibrary_eventSetScalarParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue()
	{
		struct KismetMaterialLibrary_eventSetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ParameterValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "SetColorParameterValue" },
				{ "MaterialParameterCollectionFunction", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
				{ "ToolTip", "Sets a vector parameter value on the material collection instance. Logs if ParameterName is invalid." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, "SetVectorParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22403, sizeof(KismetMaterialLibrary_eventSetVectorParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister()
	{
		return UKismetMaterialLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetMaterialLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 3760359714
				{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue, "GetScalarParameterValue" }, // 4266389749
				{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue, "GetVectorParameterValue" }, // 3866623734
				{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue, "SetScalarParameterValue" }, // 1029686985
				{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue, "SetVectorParameterValue" }, // 3054632239
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/KismetMaterialLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetMaterialLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetMaterialLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UKismetMaterialLibrary, 3973948473);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetMaterialLibrary(Z_Construct_UClass_UKismetMaterialLibrary, &UKismetMaterialLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetMaterialLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetMaterialLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
