// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SkyLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASkyLight_OnRep_bEnabled();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
// End Cross Module References
	void ASkyLight::StaticRegisterNativesASkyLight()
	{
		UClass* Class = ASkyLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", (Native)&ASkyLight::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASkyLight_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyLight, "OnRep_bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkyLight_NoRegister()
	{
		return ASkyLight::StaticClass();
	}
	UClass* Z_Construct_UClass_ASkyLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASkyLight_OnRep_bEnabled, "OnRep_bEnabled" }, // 2776931211
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Lights" },
				{ "HideCategories", "Input Collision Replication Info Input Movement Collision Utilities|Transformation" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/SkyLight.h" },
				{ "IsBlueprintBase", "true" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
				{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((ASkyLight*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_bEnabled", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ASkyLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Light" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LightComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASkyLight, LightComponent), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(NewProp_LightComponent_MetaData, ARRAY_COUNT(NewProp_LightComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASkyLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASkyLight::StaticClass,
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
	IMPLEMENT_CLASS(ASkyLight, 2196136432);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkyLight(Z_Construct_UClass_ASkyLight, &ASkyLight::StaticClass, TEXT("/Script/Engine"), TEXT("ASkyLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
