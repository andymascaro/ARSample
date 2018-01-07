// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SubsurfaceProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsurfaceProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubsurfaceProfileStruct();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSubsurfaceProfileStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct, Z_Construct_UPackage__Script_Engine(), TEXT("SubsurfaceProfileStruct"), sizeof(FSubsurfaceProfileStruct), Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubsurfaceProfileStruct(FSubsurfaceProfileStruct::StaticStruct, TEXT("/Script/Engine"), TEXT("SubsurfaceProfileStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct
{
	FScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubsurfaceProfileStruct")),new UScriptStruct::TCppStructOps<FSubsurfaceProfileStruct>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FSubsurfaceProfileStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubsurfaceProfileStruct"), sizeof(FSubsurfaceProfileStruct), Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ToolTip", "struct with all the settings we want in USubsurfaceProfile, separate to make it easer to pass this data around in the engine." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubsurfaceProfileStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffColor_MetaData[] = {
				{ "Category", "SubsurfaceProfileStruct" },
				{ "HideAlphaChannel", "" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ToolTip", "defines the per-channel falloff of the gradients\nproduced by the subsurface scattering events, can be used to fine tune the color of the gradients\n(called \"falloff\" in SeparableSSS, default there: 1, 0.37, 0.3)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FalloffColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSubsurfaceProfileStruct, FalloffColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FalloffColor_MetaData, ARRAY_COUNT(NewProp_FalloffColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[] = {
				{ "Category", "SubsurfaceProfileStruct" },
				{ "HideAlphaChannel", "" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ToolTip", "Specifies the how much of the diffuse light gets into the material,\ncan be seen as a per-channel mix factor between the original image,\nand the SSS-filtered image (called \"strength\" in SeparableSSS, default there: 0.48, 0.41, 0.28)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SubsurfaceColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSubsurfaceProfileStruct, SubsurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SubsurfaceColor_MetaData, ARRAY_COUNT(NewProp_SubsurfaceColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatterRadius_MetaData[] = {
				{ "Category", "SubsurfaceProfileStruct" },
				{ "ClampMax", "1000.0" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ToolTip", "in world/unreal units (cm)" },
				{ "UIMax", "50.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ScatterRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSubsurfaceProfileStruct, ScatterRadius), METADATA_PARAMS(NewProp_ScatterRadius_MetaData, ARRAY_COUNT(NewProp_ScatterRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FalloffColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsurfaceColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScatterRadius,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubsurfaceProfileStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubsurfaceProfileStruct),
				alignof(FSubsurfaceProfileStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC() { return 257518897U; }
	void USubsurfaceProfile::StaticRegisterNativesUSubsurfaceProfile()
	{
	}
	UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister()
	{
		return USubsurfaceProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_USubsurfaceProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "SubsurfaceProfile" },
				{ "IncludePath", "Engine/SubsurfaceProfile.h" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ToolTip", "Subsurface Scattering profile asset, can be specified at the material. Only for \"Subsurface Profile\" materials, is use during Screenspace Subsurface Scattering\nDon't change at runtime. All properties in here are per material - texture like variations need to come from properties that are in the GBuffer." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "USubsurfaceProfile" },
				{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubsurfaceProfile, Settings), Z_Construct_UScriptStruct_FSubsurfaceProfileStruct, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubsurfaceProfile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubsurfaceProfile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(USubsurfaceProfile, 3458229382);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubsurfaceProfile(Z_Construct_UClass_USubsurfaceProfile, &USubsurfaceProfile::StaticClass, TEXT("/Script/Engine"), TEXT("USubsurfaceProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsurfaceProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
