// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPath() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnNavigationPathUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavigationPath_IsValid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnNavigationPathUpdated__DelegateSignature()
	{
		struct _Script_Engine_eventOnNavigationPathUpdated_Parms
		{
			UNavigationPath* AffectedPath;
			TEnumAsByte<ENavPathEvent::Type> PathEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "PathEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnNavigationPathUpdated_Parms, PathEvent), Z_Construct_UEnum_Engine_ENavPathEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedPath = { UE4CodeGen_Private::EPropertyClass::Object, "AffectedPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnNavigationPathUpdated_Parms, AffectedPath), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AffectedPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnNavigationPathUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnNavigationPathUpdated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UNavigationPath::StaticRegisterNativesUNavigationPath()
	{
		UClass* Class = UNavigationPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableDebugDrawing", (Native)&UNavigationPath::execEnableDebugDrawing },
			{ "EnableRecalculationOnInvalidation", (Native)&UNavigationPath::execEnableRecalculationOnInvalidation },
			{ "GetDebugString", (Native)&UNavigationPath::execGetDebugString },
			{ "GetPathCost", (Native)&UNavigationPath::execGetPathCost },
			{ "GetPathLength", (Native)&UNavigationPath::execGetPathLength },
			{ "IsPartial", (Native)&UNavigationPath::execIsPartial },
			{ "IsStringPulled", (Native)&UNavigationPath::execIsStringPulled },
			{ "IsValid", (Native)&UNavigationPath::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing()
	{
		struct NavigationPath_eventEnableDebugDrawing_Parms
		{
			bool bShouldDrawDebugData;
			FLinearColor PathColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PathColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableDebugDrawing_Parms, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShouldDrawDebugData_SetBit = [](void* Obj){ ((NavigationPath_eventEnableDebugDrawing_Parms*)Obj)->bShouldDrawDebugData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawDebugData = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDrawDebugData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventEnableDebugDrawing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldDrawDebugData_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldDrawDebugData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Debug" },
				{ "CPP_Default_PathColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "EnableDebugDrawing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(NavigationPath_eventEnableDebugDrawing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation()
	{
		struct NavigationPath_eventEnableRecalculationOnInvalidation_Parms
		{
			TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoRecalculation = { UE4CodeGen_Private::EPropertyClass::Byte, "DoRecalculation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableRecalculationOnInvalidation_Parms, DoRecalculation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoRecalculation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
				{ "ToolTip", "if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "EnableRecalculationOnInvalidation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationPath_eventEnableRecalculationOnInvalidation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString()
	{
		struct NavigationPath_eventGetDebugString_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Debug" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
				{ "ToolTip", "UObject end" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetDebugString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetDebugString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost()
	{
		struct NavigationPath_eventGetPathCost_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetPathCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetPathCost_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength()
	{
		struct NavigationPath_eventGetPathLength_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetPathLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetPathLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial()
	{
		struct NavigationPath_eventIsPartial_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationPath_eventIsPartial_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsPartial_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsPartial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsPartial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled()
	{
		struct NavigationPath_eventIsStringPulled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationPath_eventIsStringPulled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsStringPulled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsStringPulled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsStringPulled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UNavigationPath_IsValid()
	{
		struct NavigationPath_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NavigationPath_eventIsValid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsValid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsValid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationPath_NoRegister()
	{
		return UNavigationPath::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing, "EnableDebugDrawing" }, // 4080278358
				{ &Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation, "EnableRecalculationOnInvalidation" }, // 4174423731
				{ &Z_Construct_UFunction_UNavigationPath_GetDebugString, "GetDebugString" }, // 1879762858
				{ &Z_Construct_UFunction_UNavigationPath_GetPathCost, "GetPathCost" }, // 2992918785
				{ &Z_Construct_UFunction_UNavigationPath_GetPathLength, "GetPathLength" }, // 1375940984
				{ &Z_Construct_UFunction_UNavigationPath_IsPartial, "IsPartial" }, // 1508749358
				{ &Z_Construct_UFunction_UNavigationPath_IsStringPulled, "IsStringPulled" }, // 3853758746
				{ &Z_Construct_UFunction_UNavigationPath_IsValid, "IsValid" }, // 1347938086
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AI/Navigation/NavigationPath.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
				{ "ToolTip", "UObject wrapper for FNavigationPath" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecalculateOnInvalidation_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecalculateOnInvalidation = { UE4CodeGen_Private::EPropertyClass::Byte, "RecalculateOnInvalidation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UNavigationPath, RecalculateOnInvalidation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(NewProp_RecalculateOnInvalidation_MetaData, ARRAY_COUNT(NewProp_RecalculateOnInvalidation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UNavigationPath, PathPoints), METADATA_PARAMS(NewProp_PathPoints_MetaData, ARRAY_COUNT(NewProp_PathPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathUpdatedNotifier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PathUpdatedNotifier = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PathUpdatedNotifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UNavigationPath, PathUpdatedNotifier), Z_Construct_UDelegateFunction_Engine_OnNavigationPathUpdated__DelegateSignature, METADATA_PARAMS(NewProp_PathUpdatedNotifier_MetaData, ARRAY_COUNT(NewProp_PathUpdatedNotifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecalculateOnInvalidation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathUpdatedNotifier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationPath>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationPath::StaticClass,
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
	IMPLEMENT_CLASS(UNavigationPath, 2448220386);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationPath(Z_Construct_UClass_UNavigationPath, &UNavigationPath::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
