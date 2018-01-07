// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicalMaterials/PhysicalMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterial() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTireFrictionScalePair();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode();
// End Cross Module References
class UScriptStruct* FTireFrictionScalePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTireFrictionScalePair, Z_Construct_UPackage__Script_Engine(), TEXT("TireFrictionScalePair"), sizeof(FTireFrictionScalePair), Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTireFrictionScalePair(FTireFrictionScalePair::StaticStruct, TEXT("/Script/Engine"), TEXT("TireFrictionScalePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair
{
	FScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TireFrictionScalePair")),new UScriptStruct::TCppStructOps<FTireFrictionScalePair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair;
	UScriptStruct* Z_Construct_UScriptStruct_FTireFrictionScalePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TireFrictionScalePair"), sizeof(FTireFrictionScalePair), Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "DEPRECATED Pairs desired tire friction scale with tire type" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTireFrictionScalePair>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Friction scale for this type of tire" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale = { UE4CodeGen_Private::EPropertyClass::Float, "FrictionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTireFrictionScalePair, FrictionScale), METADATA_PARAMS(NewProp_FrictionScale_MetaData, ARRAY_COUNT(NewProp_FrictionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Tire type" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireType = { UE4CodeGen_Private::EPropertyClass::Object, "TireType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTireFrictionScalePair, TireType), Z_Construct_UClass_UTireType_NoRegister, METADATA_PARAMS(NewProp_TireType_MetaData, ARRAY_COUNT(NewProp_TireType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TireType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TireFrictionScalePair",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTireFrictionScalePair),
				alignof(FTireFrictionScalePair),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_CRC() { return 793597283U; }
	void UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister()
	{
		return UPhysicalMaterial::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicalMaterial()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "PhysicalMaterials/PhysicalMaterial.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Physical materials are used to define the response of a physical object when interacting dynamically with the world." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionScales_MetaData[] = {
				{ "Category", "Deprecated" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "DEPRECATED - Tire friction scales for specific types of tires. These values are multiplied against our parents' values." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TireFrictionScales = { UE4CodeGen_Private::EPropertyClass::Array, "TireFrictionScales", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, TireFrictionScales), METADATA_PARAMS(NewProp_TireFrictionScales_MetaData, ARRAY_COUNT(NewProp_TireFrictionScales_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireFrictionScales_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TireFrictionScales", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTireFrictionScalePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionScale_MetaData[] = {
				{ "Category", "Deprecated" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "DEPRECATED - Overall tire friction scalar for every type of tire. This value is multiplied against our parents' values." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TireFrictionScale = { UE4CodeGen_Private::EPropertyClass::Float, "TireFrictionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, TireFrictionScale), METADATA_PARAMS(NewProp_TireFrictionScale_MetaData, ARRAY_COUNT(NewProp_TireFrictionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
				{ "Category", "PhysicalProperties" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_SurfaceType_MetaData, ARRAY_COUNT(NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialProperty = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicalMaterialProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, PhysicalMaterialProperty), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister, METADATA_PARAMS(NewProp_PhysicalMaterialProperty_MetaData, ARRAY_COUNT(NewProp_PhysicalMaterialProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageThresholdScale_MetaData[] = {
				{ "Category", "Destruction" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageThresholdScale = { UE4CodeGen_Private::EPropertyClass::Float, "DestructibleDamageThresholdScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, DestructibleDamageThresholdScale), METADATA_PARAMS(NewProp_DestructibleDamageThresholdScale_MetaData, ARRAY_COUNT(NewProp_DestructibleDamageThresholdScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaiseMassToPower_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object.\nIn actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\nValues are clamped to 1 or less." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaiseMassToPower = { UE4CodeGen_Private::EPropertyClass::Float, "RaiseMassToPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, RaiseMassToPower), METADATA_PARAMS(NewProp_RaiseMassToPower_MetaData, ARRAY_COUNT(NewProp_RaiseMassToPower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Float, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Density), METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideRestitutionCombineMode_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings." },
			};
#endif
			auto NewProp_bOverrideRestitutionCombineMode_SetBit = [](void* Obj){ ((UPhysicalMaterial*)Obj)->bOverrideRestitutionCombineMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideRestitutionCombineMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideRestitutionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicalMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideRestitutionCombineMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideRestitutionCombineMode_MetaData, ARRAY_COUNT(NewProp_bOverrideRestitutionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "editcondition", "bOverrideRestitutionCombineMode" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RestitutionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, RestitutionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(NewProp_RestitutionCombineMode_MetaData, ARRAY_COUNT(NewProp_RestitutionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Restitution = { UE4CodeGen_Private::EPropertyClass::Float, "Restitution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Restitution), METADATA_PARAMS(NewProp_Restitution_MetaData, ARRAY_COUNT(NewProp_Restitution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrictionCombineMode_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings." },
			};
#endif
			auto NewProp_bOverrideFrictionCombineMode_SetBit = [](void* Obj){ ((UPhysicalMaterial*)Obj)->bOverrideFrictionCombineMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrictionCombineMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideFrictionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicalMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideFrictionCombineMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideFrictionCombineMode_MetaData, ARRAY_COUNT(NewProp_bOverrideFrictionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "editcondition", "bOverrideFrictionCombineMode" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "FrictionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, FrictionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(NewProp_FrictionCombineMode_MetaData, ARRAY_COUNT(NewProp_FrictionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
				{ "Category", "PhysicalMaterial" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
				{ "ToolTip", "Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction = { UE4CodeGen_Private::EPropertyClass::Float, "Friction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Friction), METADATA_PARAMS(NewProp_Friction_MetaData, ARRAY_COUNT(NewProp_Friction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TireFrictionScales,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TireFrictionScales_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TireFrictionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalMaterialProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestructibleDamageThresholdScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RaiseMassToPower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Density,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideRestitutionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RestitutionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Restitution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideFrictionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Friction,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicalMaterial>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicalMaterial::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UPhysicalMaterial, 3741625997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterial(Z_Construct_UClass_UPhysicalMaterial, &UPhysicalMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicalMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
