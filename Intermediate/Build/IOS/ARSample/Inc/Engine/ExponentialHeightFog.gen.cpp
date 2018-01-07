// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ExponentialHeightFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
// End Cross Module References
	void AExponentialHeightFog::StaticRegisterNativesAExponentialHeightFog()
	{
		UClass* Class = AExponentialHeightFog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", (Native)&AExponentialHeightFog::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExponentialHeightFog, "OnRep_bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister()
	{
		return AExponentialHeightFog::StaticClass();
	}
	UClass* Z_Construct_UClass_AExponentialHeightFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled, "OnRep_bEnabled" }, // 4198255037
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Fog" },
				{ "HideCategories", "Input Collision" },
				{ "IncludePath", "Engine/ExponentialHeightFog.h" },
				{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Implements an Actor for exponential height fog." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
				{ "ToolTip", "replicated copy of ExponentialHeightFogComponent's bEnabled property" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((AExponentialHeightFog*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_bEnabled", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AExponentialHeightFog), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "ExponentialHeightFog" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AExponentialHeightFog, Component), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExponentialHeightFog>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExponentialHeightFog::StaticClass,
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
	IMPLEMENT_CLASS(AExponentialHeightFog, 3760441276);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExponentialHeightFog(Z_Construct_UClass_AExponentialHeightFog, &AExponentialHeightFog::StaticClass, TEXT("/Script/Engine"), TEXT("AExponentialHeightFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExponentialHeightFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
