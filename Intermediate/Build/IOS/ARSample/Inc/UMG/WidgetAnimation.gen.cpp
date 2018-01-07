// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/WidgetAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimation() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnWidgetAnimationPlaybackStatusChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UWidgetAnimation::StaticRegisterNativesUWidgetAnimation()
	{
		UClass* Class = UWidgetAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndTime", (Native)&UWidgetAnimation::execGetEndTime },
			{ "GetStartTime", (Native)&UWidgetAnimation::execGetStartTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime()
	{
		struct WidgetAnimation_eventGetEndTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
				{ "ToolTip", "Get the end time of this animation.\n\n@return End time in seconds.\n@see GetStartTime" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, "GetEndTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(WidgetAnimation_eventGetEndTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime()
	{
		struct WidgetAnimation_eventGetStartTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
				{ "ToolTip", "Get the start time of this animation.\n\n@return Start time in seconds.\n@see GetEndTime" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, "GetStartTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(WidgetAnimation_eventGetStartTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister()
	{
		return UWidgetAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWidgetAnimation_GetEndTime, "GetEndTime" }, // 233984963
				{ &Z_Construct_UFunction_UWidgetAnimation_GetStartTime, "GetStartTime" }, // 3129323343
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Animation/WidgetAnimation.h" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, AnimationBindings), METADATA_PARAMS(NewProp_AnimationBindings_MetaData, ARRAY_COUNT(NewProp_AnimationBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
				{ "ToolTip", "Pointer to the movie scene that controls this animation." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene = { UE4CodeGen_Private::EPropertyClass::Object, "MovieScene", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(NewProp_MovieScene_MetaData, ARRAY_COUNT(NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnimationFinished_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
				{ "ToolTip", "Fires when the widget animation is finished." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAnimationFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, OnAnimationFinished), Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnAnimationFinished_MetaData, ARRAY_COUNT(NewProp_OnAnimationFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnimationStarted_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
				{ "ToolTip", "Fires when the widget animation starts playing." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationStarted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAnimationStarted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, OnAnimationStarted), Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnAnimationStarted_MetaData, ARRAY_COUNT(NewProp_OnAnimationStarted_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationBindings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovieScene,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAnimationFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAnimationStarted,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetAnimation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetAnimation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UWidgetAnimation, 2921963191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetAnimation(Z_Construct_UClass_UWidgetAnimation, &UWidgetAnimation::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
