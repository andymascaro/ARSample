// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Beam/ParticleModuleBeamModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamModifier() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_BeamModifierType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	static UEnum* BeamModifierType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_BeamModifierType, Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BeamModifierType(BeamModifierType_StaticEnum, TEXT("/Script/Engine"), TEXT("BeamModifierType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_BeamModifierType_CRC() { return 1957561583U; }
	UEnum* Z_Construct_UEnum_Engine_BeamModifierType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BeamModifierType"), 0, Get_Z_Construct_UEnum_Engine_BeamModifierType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2MT_Source", (int64)PEB2MT_Source },
				{ "PEB2MT_Target", (int64)PEB2MT_Target },
				{ "PEB2MT_MAX", (int64)PEB2MT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "PEB2MT_Source.DisplayName", "Source" },
				{ "PEB2MT_Source.ToolTip", "Modify the source of the beam." },
				{ "PEB2MT_Target.DisplayName", "Target" },
				{ "PEB2MT_Target.ToolTip", "Modify the target of the beam." },
				{ "ToolTip", "What to modify." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"BeamModifierType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"BeamModifierType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBeamModifierOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamModifierOptions, Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierOptions"), sizeof(FBeamModifierOptions), Get_Z_Construct_UScriptStruct_FBeamModifierOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeamModifierOptions(FBeamModifierOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("BeamModifierOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeamModifierOptions")),new UScriptStruct::TCppStructOps<FBeamModifierOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeamModifierOptions"), sizeof(FBeamModifierOptions), Get_Z_Construct_UScriptStruct_FBeamModifierOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamModifierOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[] = {
				{ "Category", "BeamModifierOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "If true, lock the modifier to the life of the particle." },
			};
#endif
			auto NewProp_bLock_SetBit = [](void* Obj){ ((FBeamModifierOptions*)Obj)->bLock = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLock = { UE4CodeGen_Private::EPropertyClass::Bool, "bLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBeamModifierOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLock_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLock_MetaData, ARRAY_COUNT(NewProp_bLock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[] = {
				{ "Category", "BeamModifierOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "If true, scale the associated value by the given value." },
			};
#endif
			auto NewProp_bScale_SetBit = [](void* Obj){ ((FBeamModifierOptions*)Obj)->bScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBeamModifierOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScale_MetaData, ARRAY_COUNT(NewProp_bScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModify_MetaData[] = {
				{ "Category", "BeamModifierOptions" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "If true, modify the value associated with this grouping." },
			};
#endif
			auto NewProp_bModify_SetBit = [](void* Obj){ ((FBeamModifierOptions*)Obj)->bModify = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModify = { UE4CodeGen_Private::EPropertyClass::Bool, "bModify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBeamModifierOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bModify_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bModify_MetaData, ARRAY_COUNT(NewProp_bModify_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bModify,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BeamModifierOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBeamModifierOptions),
				alignof(FBeamModifierOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_CRC() { return 3409099325U; }
	void UParticleModuleBeamModifier::StaticRegisterNativesUParticleModuleBeamModifier()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister()
	{
		return UParticleModuleBeamModifier::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Beam Modifier" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "Strength" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The value to use when modifying the Strength." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Struct, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOptions_MetaData[] = {
				{ "Category", "Strength" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The options associated with the Strength." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrengthOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "StrengthOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, StrengthOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(NewProp_StrengthOptions_MetaData, ARRAY_COUNT(NewProp_StrengthOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteTangent_MetaData[] = {
				{ "Category", "Tangent" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "If true, don't transform the tangent modifier into the tangent basis." },
			};
#endif
			auto NewProp_bAbsoluteTangent_SetBit = [](void* Obj){ ((UParticleModuleBeamModifier*)Obj)->bAbsoluteTangent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsoluteTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamModifier), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsoluteTangent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbsoluteTangent_MetaData, ARRAY_COUNT(NewProp_bAbsoluteTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
				{ "Category", "Tangent" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The value to use when modifying the Tangent." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Tangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Tangent_MetaData, ARRAY_COUNT(NewProp_Tangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentOptions_MetaData[] = {
				{ "Category", "Tangent" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The options associated with the Tangent." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "TangentOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, TangentOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(NewProp_TangentOptions_MetaData, ARRAY_COUNT(NewProp_TangentOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Position" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The value to use when modifying the position." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOptions_MetaData[] = {
				{ "Category", "Position" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "The options associated with the position." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "PositionOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, PositionOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(NewProp_PositionOptions_MetaData, ARRAY_COUNT(NewProp_PositionOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[] = {
				{ "Category", "Modifier" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "ToolTip", "Whether this module modifies the Source or the Target." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType = { UE4CodeGen_Private::EPropertyClass::Byte, "ModifierType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, ModifierType), Z_Construct_UEnum_Engine_BeamModifierType, METADATA_PARAMS(NewProp_ModifierType_MetaData, ARRAY_COUNT(NewProp_ModifierType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsoluteTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModifierType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleBeamModifier>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleBeamModifier::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UParticleModuleBeamModifier, 71721464);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamModifier(Z_Construct_UClass_UParticleModuleBeamModifier, &UParticleModuleBeamModifier::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
