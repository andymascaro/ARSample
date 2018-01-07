// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterDynamic() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
// End Cross Module References
	static UEnum* EEmitterDynamicParameterValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterDynamicParameterValue"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterDynamicParameterValue(EEmitterDynamicParameterValue_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterDynamicParameterValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_CRC() { return 1698351947U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterDynamicParameterValue"), 0, Get_Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDPV_UserSet", (int64)EDPV_UserSet },
				{ "EDPV_AutoSet", (int64)EDPV_AutoSet },
				{ "EDPV_VelocityX", (int64)EDPV_VelocityX },
				{ "EDPV_VelocityY", (int64)EDPV_VelocityY },
				{ "EDPV_VelocityZ", (int64)EDPV_VelocityZ },
				{ "EDPV_VelocityMag", (int64)EDPV_VelocityMag },
				{ "EDPV_MAX", (int64)EDPV_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDPV_AutoSet.ToolTip", "AutoSet - ignore values set in the distribution, another module will handle this data" },
				{ "EDPV_UserSet.ToolTip", "UserSet - use the user set values in the distribution (the default)" },
				{ "EDPV_VelocityMag.ToolTip", "VelocityMag - pass the particle velocity magnitude thru" },
				{ "EDPV_VelocityX.ToolTip", "VelocityX - pass the particle velocity along the X-axis thru" },
				{ "EDPV_VelocityY.ToolTip", "VelocityY - pass the particle velocity along the Y-axis thru" },
				{ "EDPV_VelocityZ.ToolTip", "VelocityZ - pass the particle velocity along the Z-axis thru" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "EmitterDynamicParameterValue\nEnumeration indicating the way a dynamic parameter should be set." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEmitterDynamicParameterValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EEmitterDynamicParameterValue",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEmitterDynamicParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterDynamicParameter, Z_Construct_UPackage__Script_Engine(), TEXT("EmitterDynamicParameter"), sizeof(FEmitterDynamicParameter), Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmitterDynamicParameter(FEmitterDynamicParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("EmitterDynamicParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmitterDynamicParameter")),new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmitterDynamicParameter"), sizeof(FEmitterDynamicParameter), Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "Helper structure for displaying the parameter." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "The distriubtion for the parameter value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ParamValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ParamValue), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_ParamValue_MetaData, ARRAY_COUNT(NewProp_ParamValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleVelocityByParamValue_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue." },
			};
#endif
			auto NewProp_bScaleVelocityByParamValue_SetBit = [](void* Obj){ ((FEmitterDynamicParameter*)Obj)->bScaleVelocityByParamValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleVelocityByParamValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleVelocityByParamValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEmitterDynamicParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleVelocityByParamValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleVelocityByParamValue_MetaData, ARRAY_COUNT(NewProp_bScaleVelocityByParamValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMethod_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "Where to get the parameter value from." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ValueMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ValueMethod), Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, METADATA_PARAMS(NewProp_ValueMethod_MetaData, ARRAY_COUNT(NewProp_ValueMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "If true, only set the value at spawn time of the particle, otherwise update each frame." },
			};
#endif
			auto NewProp_bSpawnTimeOnly_SetBit = [](void* Obj){ ((FEmitterDynamicParameter*)Obj)->bSpawnTimeOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnTimeOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEmitterDynamicParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSpawnTimeOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSpawnTimeOnly_MetaData, ARRAY_COUNT(NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime." },
			};
#endif
			auto NewProp_bUseEmitterTime_SetBit = [](void* Obj){ ((FEmitterDynamicParameter*)Obj)->bUseEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEmitterDynamicParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "EmitterDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "The parameter name - from the material DynamicParameter expression. READ-ONLY" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleVelocityByParamValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSpawnTimeOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EmitterDynamicParameter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FEmitterDynamicParameter),
				alignof(FEmitterDynamicParameter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_CRC() { return 1823305106U; }
	void UParticleModuleParameterDynamic::StaticRegisterNativesUParticleModuleParameterDynamic()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister()
	{
		return UParticleModuleParameterDynamic::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleParameterBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Dynamic" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
			};
#endif
			auto NewProp_bUsesVelocity_SetBit = [](void* Obj){ ((UParticleModuleParameterDynamic*)Obj)->bUsesVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleParameterDynamic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsesVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsesVelocity_MetaData, ARRAY_COUNT(NewProp_bUsesVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "Flags for optimizing update" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateFlags = { UE4CodeGen_Private::EPropertyClass::Int, "UpdateFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleParameterDynamic, UpdateFlags), METADATA_PARAMS(NewProp_UpdateFlags_MetaData, ARRAY_COUNT(NewProp_UpdateFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicParams_MetaData[] = {
				{ "Category", "ParticleModuleParameterDynamic" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "The dynamic parameters this module uses." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicParams = { UE4CodeGen_Private::EPropertyClass::Array, "DynamicParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000041, 1, nullptr, STRUCT_OFFSET(UParticleModuleParameterDynamic, DynamicParams), METADATA_PARAMS(NewProp_DynamicParams_MetaData, ARRAY_COUNT(NewProp_DynamicParams_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicParams_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEmitterDynamicParameter, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsesVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicParams_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleParameterDynamic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleParameterDynamic::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleParameterDynamic, 1857492269);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleParameterDynamic(Z_Construct_UClass_UParticleModuleParameterDynamic, &UParticleModuleParameterDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleParameterDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
