// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASpotLight_SetInnerConeAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_ASpotLight_SetOuterConeAngle();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	void ASpotLight::StaticRegisterNativesASpotLight()
	{
		UClass* Class = ASpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", (Native)&ASpotLight::execSetInnerConeAngle },
			{ "SetOuterConeAngle", (Native)&ASpotLight::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASpotLight_SetInnerConeAngle()
	{
		struct SpotLight_eventSetInnerConeAngle_Parms
		{
			float NewInnerConeAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NewInnerConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpotLight_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewInnerConeAngle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, "SetInnerConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpotLight_eventSetInnerConeAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpotLight_SetOuterConeAngle()
	{
		struct SpotLight_eventSetOuterConeAngle_Parms
		{
			float NewOuterConeAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NewOuterConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpotLight_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewOuterConeAngle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, "SetOuterConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpotLight_eventSetOuterConeAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpotLight_NoRegister()
	{
		return ASpotLight::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALight,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpotLight_SetInnerConeAngle, "SetInnerConeAngle" }, // 3925547898
				{ &Z_Construct_UFunction_ASpotLight_SetOuterConeAngle, "SetOuterConeAngle" }, // 101784232
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ChildCanTick", "" },
				{ "ClassGroupNames", "Lights SpotLights" },
				{ "HideCategories", "Input Collision Replication" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/SpotLight.h" },
				{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ASpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLightComponent_MetaData[] = {
				{ "Category", "Light" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "SpotLight,Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLightComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpotLightComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(ASpotLight, SpotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(NewProp_SpotLightComponent_MetaData, ARRAY_COUNT(NewProp_SpotLightComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpotLightComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpotLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpotLight::StaticClass,
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
	IMPLEMENT_CLASS(ASpotLight, 704635469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpotLight(Z_Construct_UClass_ASpotLight, &ASpotLight::StaticClass, TEXT("/Script/Engine"), TEXT("ASpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
