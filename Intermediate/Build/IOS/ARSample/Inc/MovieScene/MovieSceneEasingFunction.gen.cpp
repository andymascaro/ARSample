// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Generators/MovieSceneEasingFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingFunction() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate();
// End Cross Module References
	float IMovieSceneEasingFunction::OnEvaluate(float Interp) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEvaluate instead.");
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneEasingFunction::StaticRegisterNativesUMovieSceneEasingFunction()
	{
	}
	UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interp = { UE4CodeGen_Private::EPropertyClass::Float, "Interp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, Interp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "Category", "Sequencer" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
				{ "ToolTip", "Evaluate the easing with an interpolation value between 0 and 1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEasingFunction, "OnEvaluate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C080800, sizeof(MovieSceneEasingFunction_eventOnEvaluate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister()
	{
		return UMovieSceneEasingFunction::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate, "OnEvaluate" }, // 1259936288
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Sequencer" },
				{ "DisplayName", "Easing Function" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IMovieSceneEasingFunction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneEasingFunction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(UMovieSceneEasingFunction, 3843229144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEasingFunction(Z_Construct_UClass_UMovieSceneEasingFunction, &UMovieSceneEasingFunction::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEasingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingFunction);
	static FName NAME_UMovieSceneEasingFunction_OnEvaluate = FName(TEXT("OnEvaluate"));
	float IMovieSceneEasingFunction::Execute_OnEvaluate(const UObject* O, float Interp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneEasingFunction::StaticClass()));
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneEasingFunction_OnEvaluate);
		if (Func)
		{
			Parms.Interp=Interp;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
