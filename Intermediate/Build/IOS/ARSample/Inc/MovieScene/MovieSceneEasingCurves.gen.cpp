// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Generators/MovieSceneEasingCurves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingCurves() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EMovieSceneBuiltInEasing_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBuiltInEasing"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneBuiltInEasing(EMovieSceneBuiltInEasing_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneBuiltInEasing"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_CRC() { return 2583017162U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneBuiltInEasing"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneBuiltInEasing::Linear", (int64)EMovieSceneBuiltInEasing::Linear },
				{ "EMovieSceneBuiltInEasing::SinIn", (int64)EMovieSceneBuiltInEasing::SinIn },
				{ "EMovieSceneBuiltInEasing::SinOut", (int64)EMovieSceneBuiltInEasing::SinOut },
				{ "EMovieSceneBuiltInEasing::SinInOut", (int64)EMovieSceneBuiltInEasing::SinInOut },
				{ "EMovieSceneBuiltInEasing::QuadIn", (int64)EMovieSceneBuiltInEasing::QuadIn },
				{ "EMovieSceneBuiltInEasing::QuadOut", (int64)EMovieSceneBuiltInEasing::QuadOut },
				{ "EMovieSceneBuiltInEasing::QuadInOut", (int64)EMovieSceneBuiltInEasing::QuadInOut },
				{ "EMovieSceneBuiltInEasing::CubicIn", (int64)EMovieSceneBuiltInEasing::CubicIn },
				{ "EMovieSceneBuiltInEasing::CubicOut", (int64)EMovieSceneBuiltInEasing::CubicOut },
				{ "EMovieSceneBuiltInEasing::CubicInOut", (int64)EMovieSceneBuiltInEasing::CubicInOut },
				{ "EMovieSceneBuiltInEasing::QuartIn", (int64)EMovieSceneBuiltInEasing::QuartIn },
				{ "EMovieSceneBuiltInEasing::QuartOut", (int64)EMovieSceneBuiltInEasing::QuartOut },
				{ "EMovieSceneBuiltInEasing::QuartInOut", (int64)EMovieSceneBuiltInEasing::QuartInOut },
				{ "EMovieSceneBuiltInEasing::QuintIn", (int64)EMovieSceneBuiltInEasing::QuintIn },
				{ "EMovieSceneBuiltInEasing::QuintOut", (int64)EMovieSceneBuiltInEasing::QuintOut },
				{ "EMovieSceneBuiltInEasing::QuintInOut", (int64)EMovieSceneBuiltInEasing::QuintInOut },
				{ "EMovieSceneBuiltInEasing::ExpoIn", (int64)EMovieSceneBuiltInEasing::ExpoIn },
				{ "EMovieSceneBuiltInEasing::ExpoOut", (int64)EMovieSceneBuiltInEasing::ExpoOut },
				{ "EMovieSceneBuiltInEasing::ExpoInOut", (int64)EMovieSceneBuiltInEasing::ExpoInOut },
				{ "EMovieSceneBuiltInEasing::CircIn", (int64)EMovieSceneBuiltInEasing::CircIn },
				{ "EMovieSceneBuiltInEasing::CircOut", (int64)EMovieSceneBuiltInEasing::CircOut },
				{ "EMovieSceneBuiltInEasing::CircInOut", (int64)EMovieSceneBuiltInEasing::CircInOut },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircIn.Grouping", "Circular" },
				{ "CircIn.ToolTip", "Circular easing" },
				{ "CircInOut.Grouping", "Circular" },
				{ "CircOut.Grouping", "Circular" },
				{ "CubicIn.Grouping", "Cubic" },
				{ "CubicIn.ToolTip", "Cubic easing" },
				{ "CubicInOut.Grouping", "Cubic" },
				{ "CubicOut.Grouping", "Cubic" },
				{ "ExpoIn.Grouping", "Exponential" },
				{ "ExpoIn.ToolTip", "Exponential easing" },
				{ "ExpoInOut.Grouping", "Exponential" },
				{ "ExpoOut.Grouping", "Exponential" },
				{ "Linear.Grouping", "Linear" },
				{ "Linear.ToolTip", "Linear easing" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
				{ "QuadIn.Grouping", "Quadratic" },
				{ "QuadIn.ToolTip", "Quadratic easing" },
				{ "QuadInOut.Grouping", "Quadratic" },
				{ "QuadOut.Grouping", "Quadratic" },
				{ "QuartIn.Grouping", "Quartic" },
				{ "QuartIn.ToolTip", "Quartic easing" },
				{ "QuartInOut.Grouping", "Quartic" },
				{ "QuartOut.Grouping", "Quartic" },
				{ "QuintIn.Grouping", "Quintic" },
				{ "QuintIn.ToolTip", "Quintic easing" },
				{ "QuintInOut.Grouping", "Quintic" },
				{ "QuintOut.Grouping", "Quintic" },
				{ "SinIn.Grouping", "Sinusoidal" },
				{ "SinIn.ToolTip", "Sinusoidal easing" },
				{ "SinInOut.Grouping", "Sinusoidal" },
				{ "SinOut.Grouping", "Sinusoidal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneBuiltInEasing",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneBuiltInEasing",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneBuiltInEasingFunction::StaticRegisterNativesUMovieSceneBuiltInEasingFunction()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister()
	{
		return UMovieSceneBuiltInEasingFunction::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Built-In Function" },
				{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "Easing" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneBuiltInEasingFunction, Type), Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBuiltInEasingFunction, IMovieSceneEasingFunction), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneBuiltInEasingFunction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneBuiltInEasingFunction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBuiltInEasingFunction, 2372828974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBuiltInEasingFunction(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction, &UMovieSceneBuiltInEasingFunction::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBuiltInEasingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBuiltInEasingFunction);
	void UMovieSceneEasingExternalCurve::StaticRegisterNativesUMovieSceneEasingExternalCurve()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister()
	{
		return UMovieSceneEasingExternalCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Curve Asset" },
				{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
				{ "Category", "Easing" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
				{ "ToolTip", "Curve data" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve = { UE4CodeGen_Private::EPropertyClass::Object, "Curve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneEasingExternalCurve, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_Curve_MetaData, ARRAY_COUNT(NewProp_Curve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curve,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEasingExternalCurve, IMovieSceneEasingFunction), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneEasingExternalCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneEasingExternalCurve::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEasingExternalCurve, 849573004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEasingExternalCurve(Z_Construct_UClass_UMovieSceneEasingExternalCurve, &UMovieSceneEasingExternalCurve::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEasingExternalCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingExternalCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
