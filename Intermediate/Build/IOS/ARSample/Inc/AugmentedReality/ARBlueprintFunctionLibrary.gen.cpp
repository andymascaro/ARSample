// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintFunctionLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintFunctionLibrary_GetTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UARBlueprintFunctionLibrary::StaticRegisterNativesUARBlueprintFunctionLibrary()
	{
		UClass* Class = UARBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackingQuality", (Native)&UARBlueprintFunctionLibrary::execGetTrackingQuality },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARBlueprintFunctionLibrary_GetTrackingQuality()
	{
		struct ARBlueprintFunctionLibrary_eventGetTrackingQuality_Parms
		{
			UObject* WorldContextObject;
			EARTrackingQuality ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintFunctionLibrary_eventGetTrackingQuality_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintFunctionLibrary_eventGetTrackingQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AugmentedReality|Tracking" },
				{ "Keywords", "ar augmentedreality augmented reality tracking quality" },
				{ "ModuleRelativePath", "Public/ARBlueprintFunctionLibrary.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"AugmentedReality|LineTrace\", meta = (WorldContext = \"WorldContextObject\", Keywords = \"ar augmentedreality augmented reality line trace hit test\"))\nstatic bool ARLineTraceFromScreenPoint(UObject* WorldContextObject, const FVector2D ScreenPosition, TArray<FARHitTestResult>& OutHitResults);" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintFunctionLibrary, "GetTrackingQuality", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04042401, sizeof(ARBlueprintFunctionLibrary_eventGetTrackingQuality_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary_NoRegister()
	{
		return UARBlueprintFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UARBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARBlueprintFunctionLibrary_GetTrackingQuality, "GetTrackingQuality" }, // 1095221644
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ARBlueprintFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/ARBlueprintFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARBlueprintFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARBlueprintFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UARBlueprintFunctionLibrary, 3667996634);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBlueprintFunctionLibrary(Z_Construct_UClass_UARBlueprintFunctionLibrary, &UARBlueprintFunctionLibrary::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
