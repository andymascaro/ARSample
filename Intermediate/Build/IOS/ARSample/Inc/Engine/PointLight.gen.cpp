// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PointLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APointLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APointLight_SetLightFalloffExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_APointLight_SetRadius();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	void APointLight::StaticRegisterNativesAPointLight()
	{
		UClass* Class = APointLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightFalloffExponent", (Native)&APointLight::execSetLightFalloffExponent },
			{ "SetRadius", (Native)&APointLight::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APointLight_SetLightFalloffExponent()
	{
		struct PointLight_eventSetLightFalloffExponent_Parms
		{
			float NewLightFalloffExponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent = { UE4CodeGen_Private::EPropertyClass::Float, "NewLightFalloffExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLight_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFalloffExponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, "SetLightFalloffExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PointLight_eventSetLightFalloffExponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APointLight_SetRadius()
	{
		struct PointLight_eventSetRadius_Parms
		{
			float NewRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLight_eventSetRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, "SetRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PointLight_eventSetRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APointLight_NoRegister()
	{
		return APointLight::StaticClass();
	}
	UClass* Z_Construct_UClass_APointLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALight,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APointLight_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 3216587723
				{ &Z_Construct_UFunction_APointLight_SetRadius, "SetRadius" }, // 2905652149
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ChildCanTick", "" },
				{ "ClassGroupNames", "Lights PointLights" },
				{ "HideCategories", "Input Collision Replication" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/PointLight.h" },
				{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[] = {
				{ "Category", "Light" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "PointLight,Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PointLightComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(APointLight, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(NewProp_PointLightComponent_MetaData, ARRAY_COUNT(NewProp_PointLightComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointLightComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APointLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APointLight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(APointLight, 3236362664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointLight(Z_Construct_UClass_APointLight, &APointLight::StaticClass, TEXT("/Script/Engine"), TEXT("APointLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
