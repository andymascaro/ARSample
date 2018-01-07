// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Orbit/ParticleModuleOrbit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbit() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	static UEnum* EOrbitChainMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOrbitChainMode, Z_Construct_UPackage__Script_Engine(), TEXT("EOrbitChainMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrbitChainMode(EOrbitChainMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EOrbitChainMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOrbitChainMode_CRC() { return 1913597250U; }
	UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrbitChainMode"), 0, Get_Z_Construct_UEnum_Engine_EOrbitChainMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOChainMode_Add", (int64)EOChainMode_Add },
				{ "EOChainMode_Scale", (int64)EOChainMode_Scale },
				{ "EOChainMode_Link", (int64)EOChainMode_Link },
				{ "EOChainMode_MAX", (int64)EOChainMode_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EOChainMode_Add.DisplayName", "Add" },
				{ "EOChainMode_Add.ToolTip", "Add the module values to the previous results" },
				{ "EOChainMode_Link.DisplayName", "Link" },
				{ "EOChainMode_Link.ToolTip", "'Break' the chain and apply the values from the previous results" },
				{ "EOChainMode_Scale.DisplayName", "Scale" },
				{ "EOChainMode_Scale.ToolTip", "Multiply the module values by the previous results" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOrbitChainMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EOrbitChainMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOrbitOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FOrbitOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrbitOptions, Z_Construct_UPackage__Script_Engine(), TEXT("OrbitOptions"), sizeof(FOrbitOptions), Get_Z_Construct_UScriptStruct_FOrbitOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOrbitOptions(FOrbitOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("OrbitOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFOrbitOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFOrbitOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OrbitOptions")),new UScriptStruct::TCppStructOps<FOrbitOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFOrbitOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOrbitOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OrbitOptions"), sizeof(FOrbitOptions), Get_Z_Construct_UScriptStruct_FOrbitOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "Container struct for holding options on the data updating for the module." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrbitOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
				{ "Category", "OrbitOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "Whether to use emitter time during data retrieval." },
			};
#endif
			auto NewProp_bUseEmitterTime_SetBit = [](void* Obj){ ((FOrbitOptions*)Obj)->bUseEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FOrbitOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringUpdate_MetaData[] = {
				{ "Category", "OrbitOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "Whether to process the data during updating." },
			};
#endif
			auto NewProp_bProcessDuringUpdate_SetBit = [](void* Obj){ ((FOrbitOptions*)Obj)->bProcessDuringUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessDuringUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FOrbitOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProcessDuringUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProcessDuringUpdate_MetaData, ARRAY_COUNT(NewProp_bProcessDuringUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringSpawn_MetaData[] = {
				{ "Category", "OrbitOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "Whether to process the data during spawning." },
			};
#endif
			auto NewProp_bProcessDuringSpawn_SetBit = [](void* Obj){ ((FOrbitOptions*)Obj)->bProcessDuringSpawn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringSpawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessDuringSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FOrbitOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProcessDuringSpawn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProcessDuringSpawn_MetaData, ARRAY_COUNT(NewProp_bProcessDuringSpawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProcessDuringUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProcessDuringSpawn,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OrbitOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FOrbitOptions),
				alignof(FOrbitOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOrbitOptions_CRC() { return 857221109U; }
	void UParticleModuleOrbit::StaticRegisterNativesUParticleModuleOrbit()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister()
	{
		return UParticleModuleOrbit::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleOrbit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleOrbitBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Orbit" },
				{ "HideCategories", "Object Orbit Object Object" },
				{ "IncludePath", "Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateOptions_MetaData[] = {
				{ "Category", "RotationRate" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The options associated with the RotationRateAmount look-up." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRateOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRateOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(NewProp_RotationRateOptions_MetaData, ARRAY_COUNT(NewProp_RotationRateOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateAmount_MetaData[] = {
				{ "Category", "RotationRate" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The rate (in 'turns') at which to rotate the offset about the particle positon.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRateAmount = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRateAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_RotationRateAmount_MetaData, ARRAY_COUNT(NewProp_RotationRateAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOptions_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The options associated with the RotationAmount look-up." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(NewProp_RotationOptions_MetaData, ARRAY_COUNT(NewProp_RotationOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The amount (in 'turns') to rotate the offset about the particle position.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAmount = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_RotationAmount_MetaData, ARRAY_COUNT(NewProp_RotationAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetOptions_MetaData[] = {
				{ "Category", "Offset" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The options associated with the OffsetAmount look-up." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, OffsetOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(NewProp_OffsetOptions_MetaData, ARRAY_COUNT(NewProp_OffsetOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAmount_MetaData[] = {
				{ "Category", "Offset" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "The amount to offset the sprite from the particle position." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetAmount = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, OffsetAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_OffsetAmount_MetaData, ARRAY_COUNT(NewProp_OffsetAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainMode_MetaData[] = {
				{ "Category", "Chaining" },
				{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
				{ "ToolTip", "Orbit modules will chain together in the order they appear in the module stack.\nThe combination of a module with the one prior to it is defined by using one\nof the following enumerations:\n        EOChainMode_Add         Add the values to the previous results\n        EOChainMode_Scale       Multiply the values by the previous results\n        EOChainMode_Link        'Break' the chain and apply the values from the previous results" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ChainMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, ChainMode), Z_Construct_UEnum_Engine_EOrbitChainMode, METADATA_PARAMS(NewProp_ChainMode_MetaData, ARRAY_COUNT(NewProp_ChainMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRateOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRateAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChainMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleOrbit>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleOrbit::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleOrbit, 3471006091);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrbit(Z_Construct_UClass_UParticleModuleOrbit, &UParticleModuleOrbit::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrbit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
