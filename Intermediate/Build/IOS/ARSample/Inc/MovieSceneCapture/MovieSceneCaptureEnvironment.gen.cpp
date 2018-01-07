// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneCaptureEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber();
// End Cross Module References
	void UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment()
	{
		UClass* Class = UMovieSceneCaptureEnvironment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCaptureElapsedTime", (Native)&UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime },
			{ "GetCaptureFrameNumber", (Native)&UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime()
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematics|Capture" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
				{ "ToolTip", "Get the total elapsed time of the current capture in seconds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "GetCaptureElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber()
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematics|Capture" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
				{ "ToolTip", "Get the frame number of the current capture" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "GetCaptureFrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime, "GetCaptureElapsedTime" }, // 94121196
				{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber, "GetCaptureFrameNumber" }, // 3783201322
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneCaptureEnvironment.h" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCaptureEnvironment>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCaptureEnvironment::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneCaptureEnvironment, 1897432700);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment(Z_Construct_UClass_UMovieSceneCaptureEnvironment, &UMovieSceneCaptureEnvironment::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCaptureEnvironment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureEnvironment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
